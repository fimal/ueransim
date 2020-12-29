/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.*;

public class RRC_SIB8 extends AsnSequence {
    public AsnBitString messageIdentifier; // mandatory, SIZE(16)
    public AsnBitString serialNumber; // mandatory, SIZE(16)
    public RRC_warningMessageSegmentType_1 warningMessageSegmentType; // mandatory
    public AsnInteger warningMessageSegmentNumber; // mandatory, VALUE(0..63)
    public AsnOctetString warningMessageSegment; // mandatory
    public AsnOctetString dataCodingScheme; // optional, SIZE(1)
    public AsnOctetString warningAreaCoordinatesSegment; // optional
    public AsnOctetString lateNonCriticalExtension; // optional

    public static class RRC_warningMessageSegmentType_1 extends AsnEnumerated {
        public static final RRC_warningMessageSegmentType_1 NOTLASTSEGMENT = new RRC_warningMessageSegmentType_1(0);
        public static final RRC_warningMessageSegmentType_1 LASTSEGMENT = new RRC_warningMessageSegmentType_1(1);
    
        private RRC_warningMessageSegmentType_1(long value) {
            super(value);
        }
    }
}

