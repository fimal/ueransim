/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_PLMN-RAN-AreaCell.h"

#include "RRC_PLMN-Identity.h"
static int
memb_RRC_ran_AreaCells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_RRC_ran_AreaCells_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_ran_AreaCells_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RRC_ran_AreaCells_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (3 << 2)),
		0,
		&asn_DEF_RRC_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_ran_AreaCells_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_ran_AreaCells_specs_3 = {
	sizeof(struct RRC_PLMN_RAN_AreaCell__ran_AreaCells),
	offsetof(struct RRC_PLMN_RAN_AreaCell__ran_AreaCells, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_ran_AreaCells_3 = {
	"ran-AreaCells",
	"ran-AreaCells",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_ran_AreaCells_tags_3,
	sizeof(asn_DEF_RRC_ran_AreaCells_tags_3)
		/sizeof(asn_DEF_RRC_ran_AreaCells_tags_3[0]) - 1, /* 1 */
	asn_DEF_RRC_ran_AreaCells_tags_3,	/* Same as above */
	sizeof(asn_DEF_RRC_ran_AreaCells_tags_3)
		/sizeof(asn_DEF_RRC_ran_AreaCells_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_ran_AreaCells_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_RRC_ran_AreaCells_3,
	1,	/* Single element */
	&asn_SPC_RRC_ran_AreaCells_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_PLMN_RAN_AreaCell_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRC_PLMN_RAN_AreaCell, plmn_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_PLMN_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"plmn-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_PLMN_RAN_AreaCell, ran_AreaCells),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_RRC_ran_AreaCells_3,
		0,
		{ 0, &asn_PER_memb_RRC_ran_AreaCells_constr_3,  memb_RRC_ran_AreaCells_constraint_1 },
		0, 0, /* No default value */
		"ran-AreaCells"
		},
};
static const int asn_MAP_RRC_PLMN_RAN_AreaCell_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_RRC_PLMN_RAN_AreaCell_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_PLMN_RAN_AreaCell_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-Identity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ran-AreaCells */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_PLMN_RAN_AreaCell_specs_1 = {
	sizeof(struct RRC_PLMN_RAN_AreaCell),
	offsetof(struct RRC_PLMN_RAN_AreaCell, _asn_ctx),
	asn_MAP_RRC_PLMN_RAN_AreaCell_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_RRC_PLMN_RAN_AreaCell_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_PLMN_RAN_AreaCell = {
	"PLMN-RAN-AreaCell",
	"PLMN-RAN-AreaCell",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_PLMN_RAN_AreaCell_tags_1,
	sizeof(asn_DEF_RRC_PLMN_RAN_AreaCell_tags_1)
		/sizeof(asn_DEF_RRC_PLMN_RAN_AreaCell_tags_1[0]), /* 1 */
	asn_DEF_RRC_PLMN_RAN_AreaCell_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_PLMN_RAN_AreaCell_tags_1)
		/sizeof(asn_DEF_RRC_PLMN_RAN_AreaCell_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_PLMN_RAN_AreaCell_1,
	2,	/* Elements count */
	&asn_SPC_RRC_PLMN_RAN_AreaCell_specs_1	/* Additional specs */
};

