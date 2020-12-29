/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_CSI-AperiodicTriggerState.h"

#include "RRC_CSI-AssociatedReportConfigInfo.h"
static int
memb_RRC_associatedReportConfigInfoList_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_RRC_associatedReportConfigInfoList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_associatedReportConfigInfoList_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_RRC_associatedReportConfigInfoList_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_RRC_CSI_AssociatedReportConfigInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_associatedReportConfigInfoList_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_RRC_associatedReportConfigInfoList_specs_2 = {
	sizeof(struct RRC_CSI_AperiodicTriggerState__associatedReportConfigInfoList),
	offsetof(struct RRC_CSI_AperiodicTriggerState__associatedReportConfigInfoList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_associatedReportConfigInfoList_2 = {
	"associatedReportConfigInfoList",
	"associatedReportConfigInfoList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_RRC_associatedReportConfigInfoList_tags_2,
	sizeof(asn_DEF_RRC_associatedReportConfigInfoList_tags_2)
		/sizeof(asn_DEF_RRC_associatedReportConfigInfoList_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_associatedReportConfigInfoList_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_associatedReportConfigInfoList_tags_2)
		/sizeof(asn_DEF_RRC_associatedReportConfigInfoList_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_associatedReportConfigInfoList_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_RRC_associatedReportConfigInfoList_2,
	1,	/* Single element */
	&asn_SPC_RRC_associatedReportConfigInfoList_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_CSI_AperiodicTriggerState_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_CSI_AperiodicTriggerState, associatedReportConfigInfoList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_RRC_associatedReportConfigInfoList_2,
		0,
		{ 0, &asn_PER_memb_RRC_associatedReportConfigInfoList_constr_2,  memb_RRC_associatedReportConfigInfoList_constraint_1 },
		0, 0, /* No default value */
		"associatedReportConfigInfoList"
		},
};
static const ber_tlv_tag_t asn_DEF_RRC_CSI_AperiodicTriggerState_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_CSI_AperiodicTriggerState_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* associatedReportConfigInfoList */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_CSI_AperiodicTriggerState_specs_1 = {
	sizeof(struct RRC_CSI_AperiodicTriggerState),
	offsetof(struct RRC_CSI_AperiodicTriggerState, _asn_ctx),
	asn_MAP_RRC_CSI_AperiodicTriggerState_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_CSI_AperiodicTriggerState = {
	"CSI-AperiodicTriggerState",
	"CSI-AperiodicTriggerState",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_CSI_AperiodicTriggerState_tags_1,
	sizeof(asn_DEF_RRC_CSI_AperiodicTriggerState_tags_1)
		/sizeof(asn_DEF_RRC_CSI_AperiodicTriggerState_tags_1[0]), /* 1 */
	asn_DEF_RRC_CSI_AperiodicTriggerState_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_CSI_AperiodicTriggerState_tags_1)
		/sizeof(asn_DEF_RRC_CSI_AperiodicTriggerState_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_CSI_AperiodicTriggerState_1,
	1,	/* Elements count */
	&asn_SPC_RRC_CSI_AperiodicTriggerState_specs_1	/* Additional specs */
};

