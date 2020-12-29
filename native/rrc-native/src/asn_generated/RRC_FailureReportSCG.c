/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#include "RRC_FailureReportSCG.h"

#include "RRC_MeasResultFreqList.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_RRC_measResultSCG_Failure_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_RRC_failureType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_RRC_measResultSCG_Failure_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RRC_failureType_value2enum_2[] = {
	{ 0,	11,	"t310-Expiry" },
	{ 1,	19,	"randomAccessProblem" },
	{ 2,	14,	"rlc-MaxNumRetx" },
	{ 3,	23,	"synchReconfigFailureSCG" },
	{ 4,	19,	"scg-ReconfigFailure" },
	{ 5,	21,	"srb3-IntegrityFailure" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_RRC_failureType_enum2value_2[] = {
	1,	/* randomAccessProblem(1) */
	2,	/* rlc-MaxNumRetx(2) */
	4,	/* scg-ReconfigFailure(4) */
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* srb3-IntegrityFailure(5) */
	3,	/* synchReconfigFailureSCG(3) */
	0	/* t310-Expiry(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_RRC_failureType_specs_2 = {
	asn_MAP_RRC_failureType_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_RRC_failureType_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RRC_failureType_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_RRC_failureType_2 = {
	"failureType",
	"failureType",
	&asn_OP_NativeEnumerated,
	asn_DEF_RRC_failureType_tags_2,
	sizeof(asn_DEF_RRC_failureType_tags_2)
		/sizeof(asn_DEF_RRC_failureType_tags_2[0]) - 1, /* 1 */
	asn_DEF_RRC_failureType_tags_2,	/* Same as above */
	sizeof(asn_DEF_RRC_failureType_tags_2)
		/sizeof(asn_DEF_RRC_failureType_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_RRC_failureType_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RRC_failureType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRC_FailureReportSCG_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRC_FailureReportSCG, failureType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_failureType_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"failureType"
		},
	{ ATF_POINTER, 2, offsetof(struct RRC_FailureReportSCG, measResultFreqList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_MeasResultFreqList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultFreqList"
		},
	{ ATF_POINTER, 1, offsetof(struct RRC_FailureReportSCG, measResultSCG_Failure),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, &asn_PER_memb_RRC_measResultSCG_Failure_constr_12,  memb_RRC_measResultSCG_Failure_constraint_1 },
		0, 0, /* No default value */
		"measResultSCG-Failure"
		},
};
static const int asn_MAP_RRC_FailureReportSCG_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_RRC_FailureReportSCG_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRC_FailureReportSCG_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* failureType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measResultFreqList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measResultSCG-Failure */
};
asn_SEQUENCE_specifics_t asn_SPC_RRC_FailureReportSCG_specs_1 = {
	sizeof(struct RRC_FailureReportSCG),
	offsetof(struct RRC_FailureReportSCG, _asn_ctx),
	asn_MAP_RRC_FailureReportSCG_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRC_FailureReportSCG_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRC_FailureReportSCG = {
	"FailureReportSCG",
	"FailureReportSCG",
	&asn_OP_SEQUENCE,
	asn_DEF_RRC_FailureReportSCG_tags_1,
	sizeof(asn_DEF_RRC_FailureReportSCG_tags_1)
		/sizeof(asn_DEF_RRC_FailureReportSCG_tags_1[0]), /* 1 */
	asn_DEF_RRC_FailureReportSCG_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRC_FailureReportSCG_tags_1)
		/sizeof(asn_DEF_RRC_FailureReportSCG_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRC_FailureReportSCG_1,
	3,	/* Elements count */
	&asn_SPC_RRC_FailureReportSCG_specs_1	/* Additional specs */
};

