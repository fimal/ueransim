/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_PHR-Config.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_RRC_phr_PeriodicTimer_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_phr_ProhibitTimer_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_phr_Tx_PowerFactorChange_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_phr_ModeOtherCG_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_phr_PeriodicTimer_value2enum_2[] = {
	{ 0,	4,	"sf10" },
	{ 1,	4,	"sf20" },
	{ 2,	4,	"sf50" },
	{ 3,	5,	"sf100" },
	{ 4,	5,	"sf200" },
	{ 5,	5,	"sf500" },
	{ 6,	6,	"sf1000" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_RRC_phr_PeriodicTimer_enum2value_2[] = {
	7,	/* infinity(7) */
	0,	/* sf10(0) */
	3,	/* sf100(3) */
	6,	/* sf1000(6) */
	1,	/* sf20(1) */
	4,	/* sf200(4) */
	2,	/* sf50(2) */
	5	/* sf500(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_phr_PeriodicTimer_specs_2 = {
	asn_MAP_RRC_phr_PeriodicTimer_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_phr_PeriodicTimer_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_phr_PeriodicTimer_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_phr_PeriodicTimer_2 = {
	"phr-PeriodicTimer",
	"phr-PeriodicTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_phr_PeriodicTimer_tags_2,
	sizeof(asn_DEF_RRC_phr_PeriodicTimer_tags_2)
		/sizeof(asn_DEF_RRC_phr_PeriodicTimer_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_phr_PeriodicTimer_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_phr_PeriodicTimer_tags_2)
		/sizeof(asn_DEF_RRC_phr_PeriodicTimer_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_phr_PeriodicTimer_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_phr_PeriodicTimer_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_phr_ProhibitTimer_value2enum_11[] = {
	{ 0,	3,	"sf0" },
	{ 1,	4,	"sf10" },
	{ 2,	4,	"sf20" },
	{ 3,	4,	"sf50" },
	{ 4,	5,	"sf100" },
	{ 5,	5,	"sf200" },
	{ 6,	5,	"sf500" },
	{ 7,	6,	"sf1000" }
};
static const unsigned int asn_MAP_RRC_phr_ProhibitTimer_enum2value_11[] = {
	0,	/* sf0(0) */
	1,	/* sf10(1) */
	4,	/* sf100(4) */
	7,	/* sf1000(7) */
	2,	/* sf20(2) */
	5,	/* sf200(5) */
	3,	/* sf50(3) */
	6	/* sf500(6) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_phr_ProhibitTimer_specs_11 = {
	asn_MAP_RRC_phr_ProhibitTimer_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_phr_ProhibitTimer_enum2value_11,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_phr_ProhibitTimer_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_phr_ProhibitTimer_11 = {
	"phr-ProhibitTimer",
	"phr-ProhibitTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_phr_ProhibitTimer_tags_11,
	sizeof(asn_DEF_RRC_phr_ProhibitTimer_tags_11)
		/sizeof(asn_DEF_RRC_phr_ProhibitTimer_tags_11[0]) - 1, /* 1 */
	asn_DEF_RRC_phr_ProhibitTimer_tags_11,	/* Same as above */
	sizeof(asn_DEF_RRC_phr_ProhibitTimer_tags_11)
		/sizeof(asn_DEF_RRC_phr_ProhibitTimer_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_phr_ProhibitTimer_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_phr_ProhibitTimer_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_phr_Tx_PowerFactorChange_value2enum_20[] = {
	{ 0,	3,	"dB1" },
	{ 1,	3,	"dB3" },
	{ 2,	3,	"dB6" },
	{ 3,	8,	"infinity" }
};
static const unsigned int asn_MAP_RRC_phr_Tx_PowerFactorChange_enum2value_20[] = {
	0,	/* dB1(0) */
	1,	/* dB3(1) */
	2,	/* dB6(2) */
	3	/* infinity(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_phr_Tx_PowerFactorChange_specs_20 = {
	asn_MAP_RRC_phr_Tx_PowerFactorChange_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_phr_Tx_PowerFactorChange_enum2value_20,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_phr_Tx_PowerFactorChange_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_phr_Tx_PowerFactorChange_20 = {
	"phr-Tx-PowerFactorChange",
	"phr-Tx-PowerFactorChange",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_phr_Tx_PowerFactorChange_tags_20,
	sizeof(asn_DEF_RRC_phr_Tx_PowerFactorChange_tags_20)
		/sizeof(asn_DEF_RRC_phr_Tx_PowerFactorChange_tags_20[0]) - 1, /* 1 */
	asn_DEF_RRC_phr_Tx_PowerFactorChange_tags_20,	/* Same as above */
	sizeof(asn_DEF_RRC_phr_Tx_PowerFactorChange_tags_20)
		/sizeof(asn_DEF_RRC_phr_Tx_PowerFactorChange_tags_20[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_phr_Tx_PowerFactorChange_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_phr_Tx_PowerFactorChange_specs_20	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_phr_ModeOtherCG_value2enum_28[] = {
	{ 0,	4,	"real" },
	{ 1,	7,	"virtual" }
};
static const unsigned int asn_MAP_RRC_phr_ModeOtherCG_enum2value_28[] = {
	0,	/* real(0) */
	1	/* virtual(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_phr_ModeOtherCG_specs_28 = {
	asn_MAP_RRC_phr_ModeOtherCG_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_phr_ModeOtherCG_enum2value_28,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_phr_ModeOtherCG_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_phr_ModeOtherCG_28 = {
	"phr-ModeOtherCG",
	"phr-ModeOtherCG",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_phr_ModeOtherCG_tags_28,
	sizeof(asn_DEF_RRC_phr_ModeOtherCG_tags_28)
		/sizeof(asn_DEF_RRC_phr_ModeOtherCG_tags_28[0]) - 1, /* 1 */
	asn_DEF_RRC_phr_ModeOtherCG_tags_28,	/* Same as above */
	sizeof(asn_DEF_RRC_phr_ModeOtherCG_tags_28)
		/sizeof(asn_DEF_RRC_phr_ModeOtherCG_tags_28[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_phr_ModeOtherCG_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_phr_ModeOtherCG_specs_28	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_PHR_Config_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PHR_Config, phr_PeriodicTimer),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_phr_PeriodicTimer_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phr-PeriodicTimer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PHR_Config, phr_ProhibitTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_phr_ProhibitTimer_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phr-ProhibitTimer"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PHR_Config, phr_Tx_PowerFactorChange),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_phr_Tx_PowerFactorChange_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phr-Tx-PowerFactorChange"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PHR_Config, multiplePHR),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multiplePHR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PHR_Config, dummy),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PHR_Config, phr_Type2OtherCell),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phr-Type2OtherCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PHR_Config, phr_ModeOtherCG),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_phr_ModeOtherCG_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"phr-ModeOtherCG"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_PHR_Config_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_PHR_Config_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* phr-PeriodicTimer */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* phr-ProhibitTimer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* phr-Tx-PowerFactorChange */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* multiplePHR */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* phr-Type2OtherCell */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* phr-ModeOtherCG */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_PHR_Config_specs_1 = {
	sizeof(struct RRC_PHR_Config),
	offsetof(struct RRC_PHR_Config, _asn_ctx),
	asn_MAP_RRC_PHR_Config_tag2el_1,
	7,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_PHR_Config = {
	"PHR-Config",
	"PHR-Config",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_PHR_Config_tags_1,
	sizeof(asn_DEF_RRC_PHR_Config_tags_1)
		/sizeof(asn_DEF_RRC_PHR_Config_tags_1[0]), /* 1 */
	asn_DEF_RRC_PHR_Config_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_PHR_Config_tags_1)
		/sizeof(asn_DEF_RRC_PHR_Config_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_PHR_Config_1,
	7,	/* Elements count */
	&asn_SPC_RRC_PHR_Config_specs_1	/* Additional specs */
};

