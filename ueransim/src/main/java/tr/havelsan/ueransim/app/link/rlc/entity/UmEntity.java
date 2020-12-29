/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.link.rlc.entity;

import tr.havelsan.ueransim.app.link.rlc.encoding.UmdEncoder;
import tr.havelsan.ueransim.app.link.rlc.interfaces.IRlcConsumer;
import tr.havelsan.ueransim.app.link.rlc.pdu.UmdPdu;
import tr.havelsan.ueransim.app.link.rlc.utils.*;
import tr.havelsan.ueransim.utils.OctetInputStream;
import tr.havelsan.ueransim.utils.OctetOutputStream;
import tr.havelsan.ueransim.utils.exceptions.IncorrectImplementationException;
import tr.havelsan.ueransim.utils.octets.OctetString;

import java.util.LinkedList;

public class UmEntity extends RlcEntity {

    // Configurations
    private int snLength;
    private int snModulus;
    private int windowSize;
    private int txMaxSize;

    // TX buffer
    private int txCurrentSize;
    private LinkedList<RlcSduSegment> txBuffer;

    // TX state variables
    private int txNext;            // SN to be assigned for the next newly generated UMD PDU with segment

    // RX buffer
    private RlcRxBuffer<UmdPdu> rxBuffer;

    // RX state variables
    private int rxNextReassembly;  // Earliest SN that is still considered for reassembly
    private int rxNextHighest;     // SN of the UMD PDU with the highest SN among received UMD PDUs
    private int rxTimerTrigger;    // The SN which triggered t-Reassembly

    // Timers
    private long tCurrent;         // Not a timer, but holds the current time in ms.
    private RlcTimer reassemblyTimer;

    //======================================================================================================
    //                                           INITIALIZATION
    //======================================================================================================

    private UmEntity(IRlcConsumer consumer) {
        super(consumer);
    }

    public static UmEntity newInstance(IRlcConsumer consumer, int snLength, int tReassemblyPeriod, int txMaxSize, int rxMaxSize) {
        if (snLength != 6 && snLength != 12) {
            throw new IncorrectImplementationException();
        }

        var um = new UmEntity(consumer);

        um.snLength = snLength;
        um.snModulus = 1 << snLength;
        um.windowSize = um.snModulus / 2;

        um.reassemblyTimer = new RlcTimer(tReassemblyPeriod);

        um.txMaxSize = txMaxSize;
        um.txBuffer = new LinkedList<>();
        um.rxBuffer = new RlcRxBuffer<>(um::snCompareRx, rxMaxSize);

        um.clearEntity();
        return um;
    }

    private void clearEntity() {
        // discard all RLC SDUs, RLC SDU segments, and RLC PDUs, if any
        txCurrentSize = 0;
        txBuffer.clear();
        rxBuffer.clear();

        // reset all state variables to their initial values.
        txNext = 0;
        rxNextReassembly = 0;
        rxNextHighest = 0;
        rxTimerTrigger = 0;

        // stop and reset all timers;
        tCurrent = 0;
        reassemblyTimer.stop();
    }

    //======================================================================================================
    //                                               UTILS
    //======================================================================================================

    private int modulusRx(int num) {
        int r = num - (rxNextHighest - windowSize);
        if (r < 0) r += snModulus;
        return r % snModulus;
    }

    private int snCompareRx(int a, int b) {
        return modulusRx(a) - modulusRx(b);
    }

    //======================================================================================================
    //                                          INTERNAL METHODS
    //======================================================================================================

    private int umdPduHeaderSize(ESegmentInfo si) {
        switch (si) {
            case FULL:
                return 1;
            case FIRST:
                return snLength == 6 ? 1 : 2;
            default:
                return snLength == 6 ? 3 : 4;
        }
    }

    private RlcSduSegment performSegmentation(RlcSduSegment sdu, int maxSize) {
        var newSi = sdu.si.asNotLast();
        var nextSi = sdu.si.asNotFirst();

        int headerSizeAfterSeg = umdPduHeaderSize(newSi);
        if (headerSizeAfterSeg + 1 > maxSize)
            return null;

        int overflowed = headerSizeAfterSeg + sdu.size - maxSize;

        sdu.si = newSi;
        sdu.size -= overflowed;

        var next = new RlcSduSegment(sdu.sdu);
        next.si = nextSi;
        next.size = overflowed;
        next.so = sdu.so + sdu.size;

        return next;
    }

    //======================================================================================================
    //                                             ACTIONS
    //======================================================================================================

    private void actionReception(UmdPdu pdu) {
        int x = pdu.sn;

        // If all byte segments with SN = x are received
        if (rxBuffer.isAllSegmentsReceived(x)) {
            // Reassemble the RLC SDU from all byte segments with SN = x, remove RLC headers and deliver
            //  the reassembled RLC SDU to upper layer.
            var reassembled = rxBuffer.reassemble(pdu.sn);
            if (reassembled != null) {
                consumer.deliverSdu(this, reassembled);
            }

            // if x = RX_Next_Reassembly, update RX_Next_Reassembly to the SN of the first
            //  SN > current RX_Next_Reassembly that has not been reassembled and delivered to upper layer.
            if (x == rxNextReassembly) {
                int n = rxNextReassembly;
                while (rxBuffer.isDelivered(n)) {
                    n = (n + 1) % snModulus;
                }
                rxNextReassembly = n;
            }
        } else if (snCompareRx(x, rxNextHighest) >= 0) {
            // Update RX_Next_Highest to x + 1;
            rxNextHighest = (x + 1) % snModulus;

            // Discard any UMD PDUs with SN that falls outside of the reassembly window
            rxBuffer.discardSegmentIf(sn -> snCompareRx(sn, rxNextHighest) >= 0);

            // If RX_Next_Reassembly falls outside of the reassembly window
            if (snCompareRx(rxNextReassembly, rxNextHighest) >= 0) {
                // Set RX_Next_Reassembly to the SN of the first SN >= (RX_Next_Highest – UM_Window_Size)
                //  that has not been reassembled and delivered to upper layer.
                int n = (rxNextHighest - windowSize + snModulus) % snModulus;
                while (rxBuffer.isDelivered(n)) {
                    n = (n + 1) % snModulus;
                }
                rxNextReassembly = n;
            }
        }

        // If t-Reassembly is running
        if (reassemblyTimer.isRunning()) {
            boolean condition = false;

            // if RX_Timer_Trigger <= RX_Next_Reassembly; or
            if (snCompareRx(rxTimerTrigger, rxNextReassembly) <= 0) {
                condition = true;
            }
            // if RX_Timer_Trigger falls outside of the reassembly window and
            //  RX_Timer_Trigger is not equal to RX_Next_Highest; or
            else if (snCompareRx(rxTimerTrigger, rxNextHighest) > 0) {
                condition = true;
            }
            // if RX_Next_Highest = RX_Next_Reassembly + 1 and there is no missing byte segment
            //  of the RLC SDU associated with SN = RX_Next_Reassembly before the last byte of
            //  all received segments of this RLC SDU:
            else if (rxNextHighest == (rxNextReassembly + 1) % snModulus && !rxBuffer.hasMissingBytes(rxNextReassembly)) {
                condition = true;
            }

            // ... stop and reset t-Reassembly.
            if (condition) {
                reassemblyTimer.stop();
            }
        }

        // If t-Reassembly is not running (includes the case when t-Reassembly is stopped due to actions above)
        if (!reassemblyTimer.isRunning()) {
            boolean condition = false;

            // if RX_Next_Highest > RX_Next_Reassembly + 1; or
            if (snCompareRx(rxNextHighest, (rxNextReassembly + 1) % snModulus) > 0) {
                condition = true;
            }
            // if RX_Next_Highest = RX_Next_Reassembly + 1 and there is at least one missing byte segment
            //  of the RLC SDU associated with SN = RX_Next_Reassembly before the last byte of all received
            //  segments of this RLC SDU:
            else if (rxNextHighest == (rxNextReassembly + 1) % snModulus && rxBuffer.hasMissingBytes(rxNextReassembly)) {
                condition = true;
            }

            if (condition) {
                // start t-Reassembly;
                reassemblyTimer.start(tCurrent);
                // set RX_Timer_Trigger to RX_Next_Highest.
                rxTimerTrigger = rxNextHighest;
            }
        }
    }

    private void actionReassemblyTimerExpired() {
        // Update RX_Next_Reassembly to the SN of the first SN >= RX_Timer_Trigger that has not been reassembled
        rxNextReassembly = rxTimerTrigger;
        while (rxBuffer.isDelivered(rxNextReassembly))
            rxNextReassembly = (rxNextReassembly + 1) % snModulus;

        // Discard all segments with SN < updated RX_Next_Reassembly
        rxBuffer.discardSegmentIf(sn -> snCompareRx(sn, rxNextReassembly) < 0);

        // if RX_Next_Highest > RX_Next_Reassembly + 1;
        if ((snCompareRx(rxNextHighest, (rxNextReassembly + 1) % snModulus) > 0) ||
                // or if RX_Next_Highest = RX_Next_Reassembly + 1 and there is at
                //  least one missing byte segment of the RLC SDU associated with SN = RX_Next_Reassembly
                //  before the last byte of all received segments of this RLC SDU
                (rxNextHighest == rxNextReassembly + 1 && rxBuffer.hasMissingBytes(rxNextReassembly))) {
            // start t-Reassembly
            reassemblyTimer.start(tCurrent);
            // set RX_Timer_Trigger to RX_Next_Highest
            rxTimerTrigger = rxNextHighest;
        }
    }

    //======================================================================================================
    //                                             BASE METHODS
    //======================================================================================================

    @Override
    public void receivePdu(OctetString data) {
        var pdu = UmdEncoder.decode(new OctetInputStream(data), snLength == 6);
        pdu._isProcessed = false;

        // If data length == 0, then discard.
        if (pdu.data.length == 0) {
            return;
        }

        // If it is a full SDU, deliver directly.
        if (pdu.si == ESegmentInfo.FULL) {
            consumer.deliverSdu(this, pdu.data);
            return;
        }

        // If SO is invalid, then discard.
        if (pdu.si.requiresSo() && pdu.so == 0) {
            return;
        }

        // If (RX_Next_Highest – UM_Window_Size) <= SN < RX_Next_Reassembly, then discard.
        if (snCompareRx(pdu.sn, rxNextReassembly) < 0) {
            return;
        }

        // If no room, then discard.
        if (!rxBuffer.hasRoomFor(pdu))
            return;

        // Place the received UMD PDU in the reception buffer
        rxBuffer.add(pdu);

        // Actions when an UMD PDU is placed in the reception buffer (5.2.2.2.3)
        actionReception(pdu);
    }

    @Override
    public void receiveSdu(OctetString data, int sduId) {
        if (data.length == 0)
            return;

        if (txCurrentSize + data.length > txMaxSize)
            return;

        var sdu = new RlcSdu(sduId, data);
        sdu.sn = -1;
        sdu.retransmissionCount = -1;

        var segment = new RlcSduSegment(sdu);
        segment.size = data.length;
        segment.so = 0;
        segment.si = ESegmentInfo.FULL;

        txCurrentSize += segment.size;
        txBuffer.addLast(segment);
    }

    @Override
    public OctetString createPdu(int maxSize) {
        var segment = txBuffer.peekFirst();
        if (segment == null) {
            return null;
        }

        int headerSize = umdPduHeaderSize(segment.si);

        // Fragmentation is irrelevant since no byte fits the size.
        if (headerSize + 1 > maxSize) {
            return null;
        }

        segment.sdu.sn = txNext;
        txBuffer.removeFirst();

        // Perform segmentation if it is needed
        if (headerSize + segment.size > maxSize) {
            var next = performSegmentation(segment, maxSize);
            if (next == null)
                return null;
            txBuffer.addFirst(next);
        }

        if (segment.si == ESegmentInfo.LAST) {
            txNext = (txNext + 1) % snModulus;
        }

        var data = segment.sdu.data.substring(segment.so, segment.size);

        txCurrentSize -= data.length;

        var pdu = new UmdPdu();
        pdu.si = segment.si;
        pdu.so = segment.so;
        pdu.sn = segment.sdu.sn;
        pdu.data = data;

        var stream = new OctetOutputStream();
        UmdEncoder.encode(stream, pdu, snLength == 6);
        return stream.toOctetString();
    }

    @Override
    public void timerCycle(long currentTime) {
        tCurrent = currentTime;

        if (reassemblyTimer.cycle(currentTime)) {
            actionReassemblyTimerExpired();
        }
    }

    @Override
    public void discardSdu(int sduId) {
        RlcSduSegment p = null;

        for (var segment : txBuffer) {
            if (segment.sdu.sduId == sduId) {
                p = segment;
                break;
            }
        }

        // SDU not found, do nothing.
        if (p == null)
            return;

        // The SDU is already segmented, do nothing.
        if (p.si != ESegmentInfo.FULL)
            return;

        // Remove the segment
        if (!txBuffer.remove(p)) {
            throw new RuntimeException();
        }

        // TODO, WARNING: not really sure here because this is not included in the a.i
        txCurrentSize -= p.size;
    }

    @Override
    public void reestablishment() {
        clearEntity();
    }

    @Override
    public void deleteEntity() {
        clearEntity();
    }
}
