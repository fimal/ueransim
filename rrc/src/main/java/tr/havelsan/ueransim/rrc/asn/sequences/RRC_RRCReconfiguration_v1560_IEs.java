/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnNull;
import tr.havelsan.ueransim.asn.core.AsnOctetString;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_SK_Counter;

public class RRC_RRCReconfiguration_v1560_IEs extends AsnSequence {
    public RRC_SetupRelease_MRDC_SecondaryCellGroupConfig mrdc_SecondaryCellGroupConfig; // optional
    public AsnOctetString radioBearerConfig2; // optional, SIZE(0..MAX)
    public RRC_SK_Counter sk_Counter; // optional
    public RRC_nonCriticalExtension_37 nonCriticalExtension; // optional

    public static class RRC_SetupRelease_MRDC_SecondaryCellGroupConfig extends AsnChoice {
        public AsnNull release;
        public RRC_MRDC_SecondaryCellGroupConfig setup;
    }

    public static class RRC_nonCriticalExtension_37 extends AsnSequence {
    }
}

