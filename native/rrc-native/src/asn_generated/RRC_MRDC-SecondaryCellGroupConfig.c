/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_MRDC-SecondaryCellGroupConfig.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_RRC_nr_SCG_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static asn_per_constraints_t asn_PER_type_RRC_mrdc_ReleaseAndAdd_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_nr_SCG_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_RRC_mrdc_SecondaryCellGroup_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_mrdc_ReleaseAndAdd_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_RRC_mrdc_ReleaseAndAdd_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_mrdc_ReleaseAndAdd_specs_2 = {
	asn_MAP_RRC_mrdc_ReleaseAndAdd_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_mrdc_ReleaseAndAdd_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_mrdc_ReleaseAndAdd_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_mrdc_ReleaseAndAdd_2 = {
	"mrdc-ReleaseAndAdd",
	"mrdc-ReleaseAndAdd",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_mrdc_ReleaseAndAdd_tags_2,
	sizeof(asn_DEF_RRC_mrdc_ReleaseAndAdd_tags_2)
		/sizeof(asn_DEF_RRC_mrdc_ReleaseAndAdd_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_mrdc_ReleaseAndAdd_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_mrdc_ReleaseAndAdd_tags_2)
		/sizeof(asn_DEF_RRC_mrdc_ReleaseAndAdd_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_mrdc_ReleaseAndAdd_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_mrdc_ReleaseAndAdd_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRC_mrdc_SecondaryCellGroup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup, choice.nr_SCG),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_nr_SCG_constr_5,  memb_RRC_nr_SCG_constraint_4 },
		0, 0, /* No default value */
		"nr-SCG"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup, choice.eutra_SCG),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra-SCG"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_mrdc_SecondaryCellGroup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nr-SCG */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eutra-SCG */
};
static asn_CHOICE_specifics_t asn_SPC_RRC_mrdc_SecondaryCellGroup_specs_4 = {
	sizeof(struct RRC_MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup),
	offsetof(struct RRC_MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup, _asn_ctx),
	offsetof(struct RRC_MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup, present),
	sizeof(((struct RRC_MRDC_SecondaryCellGroupConfig__mrdc_SecondaryCellGroup *)0)->present),
	asn_MAP_RRC_mrdc_SecondaryCellGroup_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_mrdc_SecondaryCellGroup_4 = {
	"mrdc-SecondaryCellGroup",
	"mrdc-SecondaryCellGroup",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RRC_mrdc_SecondaryCellGroup_constr_4, CHOICE_constraint },
	asn_MBR_RRC_mrdc_SecondaryCellGroup_4,
	2,	/* Elements count */
	&asn_SPC_RRC_mrdc_SecondaryCellGroup_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_MRDC_SecondaryCellGroupConfig_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRC_MRDC_SecondaryCellGroupConfig, mrdc_ReleaseAndAdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_mrdc_ReleaseAndAdd_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrdc-ReleaseAndAdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_MRDC_SecondaryCellGroupConfig, mrdc_SecondaryCellGroup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RRC_mrdc_SecondaryCellGroup_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mrdc-SecondaryCellGroup"
		},
};
static const int asn_MAP_RRC_MRDC_SecondaryCellGroupConfig_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RRC_MRDC_SecondaryCellGroupConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_MRDC_SecondaryCellGroupConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mrdc-ReleaseAndAdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mrdc-SecondaryCellGroup */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_MRDC_SecondaryCellGroupConfig_specs_1 = {
	sizeof(struct RRC_MRDC_SecondaryCellGroupConfig),
	offsetof(struct RRC_MRDC_SecondaryCellGroupConfig, _asn_ctx),
	asn_MAP_RRC_MRDC_SecondaryCellGroupConfig_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRC_MRDC_SecondaryCellGroupConfig_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_MRDC_SecondaryCellGroupConfig = {
	"MRDC-SecondaryCellGroupConfig",
	"MRDC-SecondaryCellGroupConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_MRDC_SecondaryCellGroupConfig_tags_1,
	sizeof(asn_DEF_RRC_MRDC_SecondaryCellGroupConfig_tags_1)
		/sizeof(asn_DEF_RRC_MRDC_SecondaryCellGroupConfig_tags_1[0]), /* 1 */
	asn_DEF_RRC_MRDC_SecondaryCellGroupConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_MRDC_SecondaryCellGroupConfig_tags_1)
		/sizeof(asn_DEF_RRC_MRDC_SecondaryCellGroupConfig_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_MRDC_SecondaryCellGroupConfig_1,
	2,	/* Elements count */
	&asn_SPC_RRC_MRDC_SecondaryCellGroupConfig_specs_1	/* Additional specs */
};

