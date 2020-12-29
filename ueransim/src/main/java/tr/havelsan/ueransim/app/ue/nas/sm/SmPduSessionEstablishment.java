/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.ue.nas.sm;

import tr.havelsan.ueransim.app.common.contexts.NasContext;
import tr.havelsan.ueransim.app.common.nts.IwUeStatusUpdate;
import tr.havelsan.ueransim.nas.impl.enums.EConfigurationProtocol;
import tr.havelsan.ueransim.nas.impl.enums.EPduSessionType;
import tr.havelsan.ueransim.nas.impl.ies.IEExtendedProtocolConfigurationOptions;
import tr.havelsan.ueransim.nas.impl.ies.IEIntegrityProtectionMaximumDataRate;
import tr.havelsan.ueransim.nas.impl.ies.IEPduSessionType;
import tr.havelsan.ueransim.nas.impl.ies.IESscMode;
import tr.havelsan.ueransim.nas.impl.messages.PduSessionEstablishmentAccept;
import tr.havelsan.ueransim.nas.impl.messages.PduSessionEstablishmentReject;
import tr.havelsan.ueransim.nas.impl.messages.PduSessionEstablishmentRequest;
import tr.havelsan.ueransim.nas.impl.others.ProtocolConfigurationItem;
import tr.havelsan.ueransim.nas.impl.others.ProtocolConfigurationOptions;
import tr.havelsan.ueransim.utils.Tag;
import tr.havelsan.ueransim.utils.console.Log;
import tr.havelsan.ueransim.utils.octets.OctetString;

import java.util.ArrayList;

class SmPduSessionEstablishment {

    public static void sendEstablishmentRequest(NasContext ctx) {
        var pduSessionId = SmPduSessionManagement.allocatePduSessionId(ctx);
        if (pduSessionId == null) {
            Log.error(Tag.FLOW, "PDU Session Establishment Request could not send");
            return;
        }

        var procedureTransactionId = SmPduSessionManagement.allocateProcedureTransactionId(ctx);
        if (procedureTransactionId == null) {
            Log.error(Tag.FLOW, "PDU Session Establishment Request could not send");
            SmPduSessionManagement.releasePduSession(ctx, pduSessionId);
            return;
        }

        var request = new PduSessionEstablishmentRequest();
        request.pduSessionId = pduSessionId;
        request.pti = procedureTransactionId;
        request.integrityProtectionMaximumDataRate =
                new IEIntegrityProtectionMaximumDataRate(
                        IEIntegrityProtectionMaximumDataRate.EMaximumDataRatePerUeForUserPlaneIntegrityProtectionForUplink.FULL_DATA_RATE,
                        IEIntegrityProtectionMaximumDataRate.EMaximumDataRatePerUeForUserPlaneIntegrityProtectionForDownlink.FULL_DATA_RATE);
        request.pduSessionType = new IEPduSessionType(EPduSessionType.IPV4);
        request.sscMode = new IESscMode(IESscMode.ESscMode.SSC_MODE_1);

        var epco = new IEExtendedProtocolConfigurationOptions();
        epco.configurationProtocol = EConfigurationProtocol.PPP;
        epco.extension = true;
        epco.options = new ProtocolConfigurationOptions(new ArrayList<>(), new ArrayList<>() {{
            add(new ProtocolConfigurationItem(ProtocolConfigurationOptions.CONT_ID_UP__IP_ADDRESS_ALLOCATION_VIA_NAS_SIGNALLING, true, OctetString.EMPTY));
            add(new ProtocolConfigurationItem(ProtocolConfigurationOptions.CONT_ID_DOWN__DNS_SERVER_IPV4_ADDRESS, true, OctetString.EMPTY));
        }}).encode();
        request.extendedProtocolConfigurationOptions = epco;

        ctx.ueTimers.t3580.start();

        SessionManagement.sendSm(ctx, pduSessionId, request);
    }

    public static void receiveEstablishmentAccept(NasContext ctx, PduSessionEstablishmentAccept message) {
        if (message.smCause != null) {
            Log.warning(Tag.FLOW, "SM cause received in PduSessionEstablishmentAccept: %s", message.smCause.value);
        }

        ctx.ueTimers.t3580.stop();

        SmPduSessionManagement.releaseProcedureTransactionId(ctx, message.pti);

        var pduSession = ctx.smCtx.pduSessions[message.pduSessionId.intValue()];
        if (pduSession == null) {
            Log.error(Tag.FLOW, "PDU session not found: %s", message.pduSessionId);
            return;
        }

        pduSession.isEstablished = true;
        pduSession.authorizedQoSRules = message.authorizedQoSRules;
        pduSession.sessionAmbr = message.sessionAmbr;
        pduSession.authorizedQoSFlowDescriptions = message.authorizedQoSFlowDescriptions;
        pduSession.sessionType = message.selectedPduSessionType;
        pduSession.pduAddress = message.pduAddress;

        var statusUpdate = new IwUeStatusUpdate(IwUeStatusUpdate.SESSION_ESTABLISHMENT);
        statusUpdate.pduSession = pduSession;
        ctx.appTask.push(statusUpdate);

        Log.info(Tag.FLOW, "PDU session established: %s", message.pduSessionId);
        Log.success(Tag.PROC, "PDU Session Establishment is successful");
    }

    public static void receiveEstablishmentReject(NasContext ctx, PduSessionEstablishmentReject message) {
        // TODO
    }
}
