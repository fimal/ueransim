/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.ngap0.ies.enumerations;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_OverloadAction extends NGAP_Enumerated {

    public static final NGAP_OverloadAction REJECT_NON_EMERGENCY_MO_DT = new NGAP_OverloadAction("reject-non-emergency-mo-dt");
    public static final NGAP_OverloadAction REJECT_RRC_CR_SIGNALLING = new NGAP_OverloadAction("reject-rrc-cr-signalling");
    public static final NGAP_OverloadAction PERMIT_EMERGENCY_SESSIONS_AND_MOBILE_TERMINATED_SERVICES_ONLY = new NGAP_OverloadAction("permit-emergency-sessions-and-mobile-terminated-services-only");
    public static final NGAP_OverloadAction PERMIT_HIGH_PRIORITY_SESSIONS_AND_MOBILE_TERMINATED_SERVICES_ONLY = new NGAP_OverloadAction("permit-high-priority-sessions-and-mobile-terminated-services-only");

    protected NGAP_OverloadAction(String sValue) {
        super(sValue);
    }

    @Override
    public String getAsnName() {
        return "OverloadAction";
    }

    @Override
    public String getXmlTagName() {
        return "OverloadAction";
    }
}
