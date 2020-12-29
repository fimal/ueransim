/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.ngap0.ies.bit_strings;

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

public class NGAP_DataCodingScheme extends NGAP_BitString {

    public NGAP_DataCodingScheme(BitString value) {
        super(value);
    }

    public NGAP_DataCodingScheme(OctetString octetString, int bitLength) {
        super(octetString, bitLength);
    }

    public NGAP_DataCodingScheme(OctetString octetString) {
        super(octetString);
    }

    public NGAP_DataCodingScheme(Octet[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_DataCodingScheme(Octet[] octets) {
        super(octets);
    }

    public NGAP_DataCodingScheme(byte[] octets, int bitLength) {
        super(octets, bitLength);
    }

    public NGAP_DataCodingScheme(byte[] octets) {
        super(octets);
    }

    public NGAP_DataCodingScheme(String hex, int bitLength) {
        super(hex, bitLength);
    }

    public NGAP_DataCodingScheme(String bits) {
        super(bits);
    }

    @Override
    public String getAsnName() {
        return "DataCodingScheme";
    }

    @Override
    public String getXmlTagName() {
        return "DataCodingScheme";
    }
}
