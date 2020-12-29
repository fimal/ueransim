/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_NZP-CSI-RS-ResourceSet.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_RRC_nzp_CSI_RS_Resources_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 64)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_RRC_aperiodicTriggeringOffset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_RRC_nzp_CSI_RS_Resources_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_repetition_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_trs_Info_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_nzp_CSI_RS_Resources_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (SIZE(1..64)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_aperiodicTriggeringOffset_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RRC_nzp_CSI_RS_Resources_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_RRC_NZP_CSI_RS_ResourceId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_nzp_CSI_RS_Resources_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_nzp_CSI_RS_Resources_specs_3 = {
	sizeof(struct RRC_NZP_CSI_RS_ResourceSet__nzp_CSI_RS_Resources),
	offsetof(struct RRC_NZP_CSI_RS_ResourceSet__nzp_CSI_RS_Resources, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_nzp_CSI_RS_Resources_3 = {
	"nzp-CSI-RS-Resources",
	"nzp-CSI-RS-Resources",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_nzp_CSI_RS_Resources_tags_3,
	sizeof(asn_DEF_RRC_nzp_CSI_RS_Resources_tags_3)
		/sizeof(asn_DEF_RRC_nzp_CSI_RS_Resources_tags_3[0]) - 1, /* 1 */
	asn_DEF_RRC_nzp_CSI_RS_Resources_tags_3,	/* Same as above */
	sizeof(asn_DEF_RRC_nzp_CSI_RS_Resources_tags_3)
		/sizeof(asn_DEF_RRC_nzp_CSI_RS_Resources_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_nzp_CSI_RS_Resources_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_RRC_nzp_CSI_RS_Resources_3,
	1,	/* Single element */
	&asn_SPC_RRC_nzp_CSI_RS_Resources_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_repetition_value2enum_5[] = {
	{ 0,	2,	"on" },
	{ 1,	3,	"off" }
};
static const unsigned int asn_MAP_RRC_repetition_enum2value_5[] = {
	1,	/* off(1) */
	0	/* on(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_repetition_specs_5 = {
	asn_MAP_RRC_repetition_value2enum_5,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_repetition_enum2value_5,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_repetition_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_repetition_5 = {
	"repetition",
	"repetition",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_repetition_tags_5,
	sizeof(asn_DEF_RRC_repetition_tags_5)
		/sizeof(asn_DEF_RRC_repetition_tags_5[0]) - 1, /* 1 */
	asn_DEF_RRC_repetition_tags_5,	/* Same as above */
	sizeof(asn_DEF_RRC_repetition_tags_5)
		/sizeof(asn_DEF_RRC_repetition_tags_5[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_repetition_constr_5, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_repetition_specs_5	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_RRC_trs_Info_value2enum_9[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_RRC_trs_Info_enum2value_9[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_trs_Info_specs_9 = {
	asn_MAP_RRC_trs_Info_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_trs_Info_enum2value_9,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_trs_Info_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_trs_Info_9 = {
	"trs-Info",
	"trs-Info",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_trs_Info_tags_9,
	sizeof(asn_DEF_RRC_trs_Info_tags_9)
		/sizeof(asn_DEF_RRC_trs_Info_tags_9[0]) - 1, /* 1 */
	asn_DEF_RRC_trs_Info_tags_9,	/* Same as above */
	sizeof(asn_DEF_RRC_trs_Info_tags_9)
		/sizeof(asn_DEF_RRC_trs_Info_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_trs_Info_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_trs_Info_specs_9	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_NZP_CSI_RS_ResourceSet_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_NZP_CSI_RS_ResourceSet, nzp_CSI_ResourceSetId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_NZP_CSI_RS_ResourceSetId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nzp-CSI-ResourceSetId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_NZP_CSI_RS_ResourceSet, nzp_CSI_RS_Resources),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_RRC_nzp_CSI_RS_Resources_3,
		0,
		{ 0, &asn_PER_memb_RRC_nzp_CSI_RS_Resources_constr_3,  memb_RRC_nzp_CSI_RS_Resources_constraint_1 },
		0, 0, /* No default value */
		"nzp-CSI-RS-Resources"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_NZP_CSI_RS_ResourceSet, repetition),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_repetition_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"repetition"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_NZP_CSI_RS_ResourceSet, aperiodicTriggeringOffset),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_RRC_aperiodicTriggeringOffset_constr_8,  memb_RRC_aperiodicTriggeringOffset_constraint_1 },
		0, 0, /* No default value */
		"aperiodicTriggeringOffset"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_NZP_CSI_RS_ResourceSet, trs_Info),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_trs_Info_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"trs-Info"
		},
};
static const int asn_MAP_RRC_NZP_CSI_RS_ResourceSet_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRC_NZP_CSI_RS_ResourceSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_NZP_CSI_RS_ResourceSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nzp-CSI-ResourceSetId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nzp-CSI-RS-Resources */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* repetition */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* aperiodicTriggeringOffset */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* trs-Info */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_NZP_CSI_RS_ResourceSet_specs_1 = {
	sizeof(struct RRC_NZP_CSI_RS_ResourceSet),
	offsetof(struct RRC_NZP_CSI_RS_ResourceSet, _asn_ctx),
	asn_MAP_RRC_NZP_CSI_RS_ResourceSet_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRC_NZP_CSI_RS_ResourceSet_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_NZP_CSI_RS_ResourceSet = {
	"NZP-CSI-RS-ResourceSet",
	"NZP-CSI-RS-ResourceSet",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_NZP_CSI_RS_ResourceSet_tags_1,
	sizeof(asn_DEF_RRC_NZP_CSI_RS_ResourceSet_tags_1)
		/sizeof(asn_DEF_RRC_NZP_CSI_RS_ResourceSet_tags_1[0]), /* 1 */
	asn_DEF_RRC_NZP_CSI_RS_ResourceSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_NZP_CSI_RS_ResourceSet_tags_1)
		/sizeof(asn_DEF_RRC_NZP_CSI_RS_ResourceSet_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_NZP_CSI_RS_ResourceSet_1,
	5,	/* Elements count */
	&asn_SPC_RRC_NZP_CSI_RS_ResourceSet_specs_1	/* Additional specs */
};

