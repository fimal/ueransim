/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnEnumerated;
import tr.havelsan.ueransim.asn.core.AsnInteger;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_PDSCH_TimeDomainResourceAllocation extends AsnSequence {
    public AsnInteger k0; // optional, VALUE(0..32)
    public RRC_mappingType_2 mappingType; // mandatory
    public AsnInteger startSymbolAndLength; // mandatory, VALUE(0..127)

    public static class RRC_mappingType_2 extends AsnEnumerated {
        public static final RRC_mappingType_2 TYPEA = new RRC_mappingType_2(0);
        public static final RRC_mappingType_2 TYPEB = new RRC_mappingType_2(1);
    
        private RRC_mappingType_2(long value) {
            super(value);
        }
    }
}

