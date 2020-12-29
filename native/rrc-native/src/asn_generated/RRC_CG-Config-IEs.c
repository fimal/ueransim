/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_CG-Config-IEs.h"

#include "RRC_ConfigRestrictModReqSCG.h"
#include "RRC_DRX-Info.h"
#include "RRC_MeasConfigSN.h"
#include "RRC_BandCombinationInfoSN.h"
#include "RRC_FR-InfoList.h"
#include "RRC_CandidateServingFreqListNR.h"
#include "RRC_CG-Config-v1540-IEs.h"
static int
memb_RRC_scg_CellGroupConfig_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_RRC_scg_RB_Config_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_RRC_candidateCellInfoListSN_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_memb_RRC_scg_CellGroupConfig_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_scg_RB_Config_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_candidateCellInfoListSN_constr_6 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RRC_CG_Config_IEs_1[] = {
	{ ATF_POINTER, 10, offsetof(struct RRC_CG_Config_IEs, scg_CellGroupConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_scg_CellGroupConfig_constr_2,  memb_RRC_scg_CellGroupConfig_constraint_1 },
		0, 0, /* No default value */
		"scg-CellGroupConfig"
		},
	{ ATF_POINTER, 9, offsetof(struct RRC_CG_Config_IEs, scg_RB_Config),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_scg_RB_Config_constr_3,  memb_RRC_scg_RB_Config_constraint_1 },
		0, 0, /* No default value */
		"scg-RB-Config"
		},
	{ ATF_POINTER, 8, offsetof(struct RRC_CG_Config_IEs, configRestrictModReq),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_ConfigRestrictModReqSCG,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"configRestrictModReq"
		},
	{ ATF_POINTER, 7, offsetof(struct RRC_CG_Config_IEs, drx_InfoSCG),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_DRX_Info,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drx-InfoSCG"
		},
	{ ATF_POINTER, 6, offsetof(struct RRC_CG_Config_IEs, candidateCellInfoListSN),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_candidateCellInfoListSN_constr_6,  memb_RRC_candidateCellInfoListSN_constraint_1 },
		0, 0, /* No default value */
		"candidateCellInfoListSN"
		},
	{ ATF_POINTER, 5, offsetof(struct RRC_CG_Config_IEs, measConfigSN),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_MeasConfigSN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measConfigSN"
		},
	{ ATF_POINTER, 4, offsetof(struct RRC_CG_Config_IEs, selectedBandCombination),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_BandCombinationInfoSN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"selectedBandCombination"
		},
	{ ATF_POINTER, 3, offsetof(struct RRC_CG_Config_IEs, fr_InfoListSCG),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_FR_InfoList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fr-InfoListSCG"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_CG_Config_IEs, candidateServingFreqListNR),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_CandidateServingFreqListNR,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"candidateServingFreqListNR"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_CG_Config_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_CG_Config_v1540_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRC_CG_Config_IEs_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
static const ber_tlv_tag_t asn_DEF_RRC_CG_Config_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_CG_Config_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scg-CellGroupConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scg-RB-Config */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* configRestrictModReq */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* drx-InfoSCG */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* candidateCellInfoListSN */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measConfigSN */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* selectedBandCombination */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* fr-InfoListSCG */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* candidateServingFreqListNR */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_CG_Config_IEs_specs_1 = {
	sizeof(struct RRC_CG_Config_IEs),
	offsetof(struct RRC_CG_Config_IEs, _asn_ctx),
	asn_MAP_RRC_CG_Config_IEs_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_RRC_CG_Config_IEs_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_CG_Config_IEs = {
	"CG-Config-IEs",
	"CG-Config-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_CG_Config_IEs_tags_1,
	sizeof(asn_DEF_RRC_CG_Config_IEs_tags_1)
		/sizeof(asn_DEF_RRC_CG_Config_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRC_CG_Config_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_CG_Config_IEs_tags_1)
		/sizeof(asn_DEF_RRC_CG_Config_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_CG_Config_IEs_1,
	10,	/* Elements count */
	&asn_SPC_RRC_CG_Config_IEs_specs_1	/* Additional specs */
};

