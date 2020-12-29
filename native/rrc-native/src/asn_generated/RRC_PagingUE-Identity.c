/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_PagingUE-Identity.h"

asn_per_constraints_t asn_PER_type_RRC_PagingUE_Identity_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RRC_PagingUE_Identity_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PagingUE_Identity, choice.ng_5G_S_TMSI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_NG_5G_S_TMSI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ng-5G-S-TMSI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PagingUE_Identity, choice.fullI_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_I_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fullI-RNTI"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_PagingUE_Identity_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ng-5G-S-TMSI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fullI-RNTI */
};
asn_CHOICE_specifics_t asn_SPC_RRC_PagingUE_Identity_specs_1 = {
	sizeof(struct RRC_PagingUE_Identity),
	offsetof(struct RRC_PagingUE_Identity, _asn_ctx),
	offsetof(struct RRC_PagingUE_Identity, present),
	sizeof(((struct RRC_PagingUE_Identity *)0)->present),
	asn_MAP_RRC_PagingUE_Identity_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RRC_PagingUE_Identity = {
	"PagingUE-Identity",
	"PagingUE-Identity",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_RRC_PagingUE_Identity_constr_1, CHOICE_constraint },
	asn_MBR_RRC_PagingUE_Identity_1,
	2,	/* Elements count */
	&asn_SPC_RRC_PagingUE_Identity_specs_1	/* Additional specs */
};

