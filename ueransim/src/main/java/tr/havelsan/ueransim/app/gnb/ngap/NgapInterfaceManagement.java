/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.app.gnb.ngap;

import tr.havelsan.ueransim.app.common.contexts.NgapGnbContext;
import tr.havelsan.ueransim.app.common.enums.EAmfState;
import tr.havelsan.ueransim.app.gnb.utils.NgapUtils;
import tr.havelsan.ueransim.app.gnb.utils.SupportedTA;
import tr.havelsan.ueransim.ngap0.core.NGAP_Enumerated;
import tr.havelsan.ueransim.ngap0.ies.choices.NGAP_Cause;
import tr.havelsan.ueransim.ngap0.ies.integers.NGAP_RelativeAMFCapacity;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.NGAP_AMFName;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.NGAP_RANNodeName;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.NGAP_PLMNSupportList;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.NGAP_ServedGUAMIList;
import tr.havelsan.ueransim.ngap0.msg.NGAP_ErrorIndication;
import tr.havelsan.ueransim.ngap0.msg.NGAP_NGSetupFailure;
import tr.havelsan.ueransim.ngap0.msg.NGAP_NGSetupRequest;
import tr.havelsan.ueransim.ngap0.msg.NGAP_NGSetupResponse;
import tr.havelsan.ueransim.utils.Tag;
import tr.havelsan.ueransim.utils.console.Log;
import tr.havelsan.ueransim.utils.octets.Octet3;

import java.util.UUID;

public class NgapInterfaceManagement {

    public static void sendNgSetupRequest(NgapGnbContext ctx, UUID associatedAmf) {
        // TODO: this procedure also re-initialises the NGAP UE-related contexts (if any)
        //  and erases all related signalling connections in the two nodes like an NG Reset procedure would do.
        //  More on 38.413 8.7.1.1

        var amf = ctx.amfContexts.get(associatedAmf);
        if (amf == null) {
            Log.error(Tag.PROC, "Cannot send NG Setup Request: AMF context not found.");
            return;
        }

        amf.state = EAmfState.WAITING_NG_SETUP;

        var msg = new NGAP_NGSetupRequest();
        msg.addProtocolIe(NgapUtils.createGlobalGnbId(ctx.gnbCtx.config.gnbId, ctx.gnbCtx.config.plmn));
        msg.addProtocolIe(NgapUtils.createSupportedTAList(createSupportedTaList(ctx)));
        msg.addProtocolIe(new NGAP_RANNodeName("UERANSIM/gnb" + ctx.gnbCtx.config.gnbId));
        msg.addProtocolIe(ctx.gnbCtx.config.pagingDrx);

        NgapTransfer.sendNgapNonUe(ctx, associatedAmf, msg);
    }

    private static SupportedTA[] createSupportedTaList(NgapGnbContext ctx) {
        var tac = new Octet3(ctx.gnbCtx.config.tac);
        var supportedTA = new SupportedTA(tac, new SupportedTA.BroadcastPlmn[]{
                new SupportedTA.BroadcastPlmn(ctx.gnbCtx.config.plmn, ctx.gnbCtx.config.nssais)
        });
        return new SupportedTA[]{supportedTA};
    }

    public static void receiveNgSetupResponse(NgapGnbContext ctx, UUID associatedAmf, NGAP_NGSetupResponse message) {
        var amf = ctx.amfContexts.get(associatedAmf);
        if (amf == null) {
            Log.error(Tag.PROC, "NGSetup procedure is failed: AMF context not found.");
            return;
        }

        amf.amfName = message.getProtocolIe(NGAP_AMFName.class).value;
        amf.relativeCapacity = (int) message.getProtocolIe(NGAP_RelativeAMFCapacity.class).value;
        amf.servedGuamiList = message.getProtocolIe(NGAP_ServedGUAMIList.class).list;
        amf.plmnSupportList = message.getProtocolIe(NGAP_PLMNSupportList.class).list;
        amf.state = EAmfState.CONNECTED;

        Log.success(Tag.PROC, "NGSetup procedure is successful");
    }

    public static void receiveNgSetupFailure(NgapGnbContext ctx, UUID associatedAmf, NGAP_NGSetupFailure message) {
        var amf = ctx.amfContexts.get(associatedAmf);
        if (amf != null) {
            amf.state = EAmfState.WAITING_NG_SETUP;
        }

        var cause = message.getProtocolIe(NGAP_Cause.class);
        if (cause == null) {
            Log.error(Tag.PROC, "NGSetup procedure is failed.");
        } else {
            Log.error(Tag.PROC, "NGSetup procedure is failed: " + ((NGAP_Enumerated) cause.getPresentValue()).sValue);
        }
    }

    public static void receiveErrorIndication(NgapGnbContext ctx, NGAP_ErrorIndication message) {
        var cause = message.getProtocolIe(NGAP_Cause.class);
        if (cause == null) {
            Log.error(Tag.PROC, "Error indication received.");
        } else {
            Log.error(Tag.PROC, "Error indication received: " + ((NGAP_Enumerated) cause.getPresentValue()).sValue);
        }
    }
}
