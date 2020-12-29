/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnChoice;
import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_RRC_TransactionIdentifier;

public class RRC_RRCReestablishment extends AsnSequence {
    public RRC_RRC_TransactionIdentifier rrc_TransactionIdentifier; // mandatory
    public RRC_criticalExtensions_12 criticalExtensions; // mandatory

    public static class RRC_criticalExtensions_12 extends AsnChoice {
        public RRC_RRCReestablishment_IEs rrcReestablishment;
        public RRC_criticalExtensionsFuture_22 criticalExtensionsFuture;
    
        public static class RRC_criticalExtensionsFuture_22 extends AsnSequence {
        }
    }
}

