/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_MeasTriggerQuantityEUTRA.h"

asn_per_constraints_t asn_PER_type_RRC_MeasTriggerQuantityEUTRA_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RRC_MeasTriggerQuantityEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_MeasTriggerQuantityEUTRA, choice.rsrp),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_RSRP_RangeEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrp"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_MeasTriggerQuantityEUTRA, choice.rsrq),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_RSRQ_RangeEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrq"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_MeasTriggerQuantityEUTRA, choice.sinr),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_SINR_RangeEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sinr"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_MeasTriggerQuantityEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rsrp */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsrq */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sinr */
};
asn_CHOICE_specifics_t asn_SPC_RRC_MeasTriggerQuantityEUTRA_specs_1 = {
	sizeof(struct RRC_MeasTriggerQuantityEUTRA),
	offsetof(struct RRC_MeasTriggerQuantityEUTRA, _asn_ctx),
	offsetof(struct RRC_MeasTriggerQuantityEUTRA, present),
	sizeof(((struct RRC_MeasTriggerQuantityEUTRA *)0)->present),
	asn_MAP_RRC_MeasTriggerQuantityEUTRA_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RRC_MeasTriggerQuantityEUTRA = {
	"MeasTriggerQuantityEUTRA",
	"MeasTriggerQuantityEUTRA",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RRC_MeasTriggerQuantityEUTRA_constr_1, CHOICE_constraint },
	asn_MBR_RRC_MeasTriggerQuantityEUTRA_1,
	3,	/* Elements count */
	&asn_SPC_RRC_MeasTriggerQuantityEUTRA_specs_1	/* Additional specs */
};

