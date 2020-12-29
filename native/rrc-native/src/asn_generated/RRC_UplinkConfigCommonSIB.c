/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_UplinkConfigCommonSIB.h"

asn_TYPE_member_t asn_MBR_RRC_UplinkConfigCommonSIB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_UplinkConfigCommonSIB, frequencyInfoUL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_FrequencyInfoUL_SIB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyInfoUL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_UplinkConfigCommonSIB, initialUplinkBWP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_BWP_UplinkCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initialUplinkBWP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_UplinkConfigCommonSIB, timeAlignmentTimerCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TimeAlignmentTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeAlignmentTimerCommon"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_UplinkConfigCommonSIB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_UplinkConfigCommonSIB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyInfoUL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* initialUplinkBWP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* timeAlignmentTimerCommon */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_UplinkConfigCommonSIB_specs_1 = {
	sizeof(struct RRC_UplinkConfigCommonSIB),
	offsetof(struct RRC_UplinkConfigCommonSIB, _asn_ctx),
	asn_MAP_RRC_UplinkConfigCommonSIB_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_UplinkConfigCommonSIB = {
	"UplinkConfigCommonSIB",
	"UplinkConfigCommonSIB",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_UplinkConfigCommonSIB_tags_1,
	sizeof(asn_DEF_RRC_UplinkConfigCommonSIB_tags_1)
		/sizeof(asn_DEF_RRC_UplinkConfigCommonSIB_tags_1[0]), /* 1 */
	asn_DEF_RRC_UplinkConfigCommonSIB_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_UplinkConfigCommonSIB_tags_1)
		/sizeof(asn_DEF_RRC_UplinkConfigCommonSIB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_UplinkConfigCommonSIB_1,
	3,	/* Elements count */
	&asn_SPC_RRC_UplinkConfigCommonSIB_specs_1	/* Additional specs */
};

