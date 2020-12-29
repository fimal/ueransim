/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.choices.RRC_SetupRelease_GapConfig;

public class RRC_MeasGapConfig extends AsnSequence {
    public RRC_SetupRelease_GapConfig gapFR2; // optional
    public RRC_ext1_47 ext1; // optional

    public static class RRC_ext1_47 extends AsnSequence {
        public RRC_SetupRelease_GapConfig gapFR1; // optional
        public RRC_SetupRelease_GapConfig gapUE; // optional
    }
}

