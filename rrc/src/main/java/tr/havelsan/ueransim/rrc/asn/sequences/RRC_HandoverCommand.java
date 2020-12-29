/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnNull;
import tr.havelsan.ueransim.asn.core.AsnSequence;

public class RRC_HandoverCommand extends AsnSequence {
    public RRC_criticalExtensions_7 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_7 extends AsnChoice {
        public RRC_c1_15 c1;
        public RRC_criticalExtensionsFuture_17 criticalExtensionsFuture;
    
        public static class RRC_criticalExtensionsFuture_17 extends AsnSequence {
        }
    
        public static class RRC_c1_15 extends AsnChoice {
            public RRC_HandoverCommand_IEs handoverCommand;
            public AsnNull spare3;
            public AsnNull spare2;
            public AsnNull spare1;
        }
    }
}

