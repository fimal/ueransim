/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.ngap0.ies.octet_strings;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_RoutingID extends NGAP_OctetString {

    public NGAP_RoutingID(OctetString value) {
        super(value);
    }

    public NGAP_RoutingID(BitString value) {
        super(value);
    }

    public NGAP_RoutingID(Octet[] octets) {
        super(octets);
    }

    public NGAP_RoutingID(int[] octetInts) {
        super(octetInts);
    }

    public NGAP_RoutingID(byte[] octetBytes) {
        super(octetBytes);
    }

    public NGAP_RoutingID(String hex) {
        super(hex);
    }

    @Override
    public String getAsnName() {
        return "RoutingID";
    }

    @Override
    public String getXmlTagName() {
        return "RoutingID";
    }
}
