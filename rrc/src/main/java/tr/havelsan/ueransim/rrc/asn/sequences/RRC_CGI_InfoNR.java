/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnInteger;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_MultiFrequencyBandListNR;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_PLMN_IdentityInfoList;

public class RRC_CGI_InfoNR extends AsnSequence {
    public RRC_PLMN_IdentityInfoList plmn_IdentityInfoList; // optional
    public RRC_MultiFrequencyBandListNR frequencyBandList; // optional
    public RRC_noSIB1 noSIB1; // optional

    public static class RRC_noSIB1 extends AsnSequence {
        public AsnInteger ssb_SubcarrierOffset; // mandatory, VALUE(0..15)
        public RRC_PDCCH_ConfigSIB1 pdcch_ConfigSIB1; // mandatory
    }
}

