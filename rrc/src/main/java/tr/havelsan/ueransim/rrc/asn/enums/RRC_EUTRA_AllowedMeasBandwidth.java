/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.enums;

import tr.havelsan.ueransim.asn.core.AsnEnumerated;

public class RRC_EUTRA_AllowedMeasBandwidth extends AsnEnumerated {
    public static final RRC_EUTRA_AllowedMeasBandwidth MBW6 = new RRC_EUTRA_AllowedMeasBandwidth(0);
    public static final RRC_EUTRA_AllowedMeasBandwidth MBW15 = new RRC_EUTRA_AllowedMeasBandwidth(1);
    public static final RRC_EUTRA_AllowedMeasBandwidth MBW25 = new RRC_EUTRA_AllowedMeasBandwidth(2);
    public static final RRC_EUTRA_AllowedMeasBandwidth MBW50 = new RRC_EUTRA_AllowedMeasBandwidth(3);
    public static final RRC_EUTRA_AllowedMeasBandwidth MBW75 = new RRC_EUTRA_AllowedMeasBandwidth(4);
    public static final RRC_EUTRA_AllowedMeasBandwidth MBW100 = new RRC_EUTRA_AllowedMeasBandwidth(5);

    private RRC_EUTRA_AllowedMeasBandwidth(long value) {
        super(value);
    }
}

