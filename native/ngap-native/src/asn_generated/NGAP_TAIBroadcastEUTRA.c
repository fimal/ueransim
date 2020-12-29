/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/NGAP-IEs.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap -pdu=all`
 */

#include "NGAP_TAIBroadcastEUTRA.h"

#include "NGAP_TAIBroadcastEUTRA-Item.h"
asn_per_constraints_t asn_PER_type_NGAP_TAIBroadcastEUTRA_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 16,  16,  1,  65535 }	/* (SIZE(1..65535)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NGAP_TAIBroadcastEUTRA_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NGAP_TAIBroadcastEUTRA_Item,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NGAP_TAIBroadcastEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_NGAP_TAIBroadcastEUTRA_specs_1 = {
	sizeof(struct NGAP_TAIBroadcastEUTRA),
	offsetof(struct NGAP_TAIBroadcastEUTRA, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_TAIBroadcastEUTRA = {
	"TAIBroadcastEUTRA",
	"TAIBroadcastEUTRA",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NGAP_TAIBroadcastEUTRA_tags_1,
	sizeof(asn_DEF_NGAP_TAIBroadcastEUTRA_tags_1)
		/sizeof(asn_DEF_NGAP_TAIBroadcastEUTRA_tags_1[0]), /* 1 */
	asn_DEF_NGAP_TAIBroadcastEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_TAIBroadcastEUTRA_tags_1)
		/sizeof(asn_DEF_NGAP_TAIBroadcastEUTRA_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NGAP_TAIBroadcastEUTRA_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_NGAP_TAIBroadcastEUTRA_1,
	1,	/* Single element */
	&asn_SPC_NGAP_TAIBroadcastEUTRA_specs_1	/* Additional specs */
};

