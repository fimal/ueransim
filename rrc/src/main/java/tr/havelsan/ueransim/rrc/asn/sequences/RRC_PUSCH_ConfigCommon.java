/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnEnumerated;
import tr.havelsan.ueransim.asn.core.AsnInteger;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.sequence_ofs.RRC_PUSCH_TimeDomainResourceAllocationList;

public class RRC_PUSCH_ConfigCommon extends AsnSequence {
    public RRC_groupHoppingEnabledTransformPrecoding groupHoppingEnabledTransformPrecoding; // optional
    public RRC_PUSCH_TimeDomainResourceAllocationList pusch_TimeDomainAllocationList; // optional
    public AsnInteger msg3_DeltaPreamble; // optional, VALUE(-1..6)
    public AsnInteger p0_NominalWithGrant; // optional, VALUE(-202..24)

    public static class RRC_groupHoppingEnabledTransformPrecoding extends AsnEnumerated {
        public static final RRC_groupHoppingEnabledTransformPrecoding ENABLED = new RRC_groupHoppingEnabledTransformPrecoding(0);
    
        private RRC_groupHoppingEnabledTransformPrecoding(long value) {
            super(value);
        }
    }
}

