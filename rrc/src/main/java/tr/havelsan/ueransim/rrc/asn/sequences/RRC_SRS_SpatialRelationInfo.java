/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.*;

public class RRC_SRS_SpatialRelationInfo extends AsnSequence {
    public RRC_ServCellIndex servingCellId; // optional
    public RRC_referenceSignal_5 referenceSignal; // mandatory

    public static class RRC_referenceSignal_5 extends AsnChoice {
        public RRC_SSB_Index ssb_Index;
        public RRC_NZP_CSI_RS_ResourceId csi_RS_Index;
        public RRC_srs_2 srs;
    
        public static class RRC_srs_2 extends AsnSequence {
            public RRC_SRS_ResourceId resourceId; // mandatory
            public RRC_BWP_Id uplinkBWP; // mandatory
        }
    }
}

