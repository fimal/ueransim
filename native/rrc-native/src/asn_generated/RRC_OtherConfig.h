/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_OtherConfig_H_
#define	_RRC_OtherConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_OtherConfig__delayBudgetReportingConfig_PR {
	RRC_OtherConfig__delayBudgetReportingConfig_PR_NOTHING,	/* No components present */
	RRC_OtherConfig__delayBudgetReportingConfig_PR_release,
	RRC_OtherConfig__delayBudgetReportingConfig_PR_setup
} RRC_OtherConfig__delayBudgetReportingConfig_PR;
typedef enum RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer {
	RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s0	= 0,
	RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s0dot4	= 1,
	RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s0dot8	= 2,
	RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s1dot6	= 3,
	RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s3	= 4,
	RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s6	= 5,
	RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s12	= 6,
	RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer_s30	= 7
} e_RRC_OtherConfig__delayBudgetReportingConfig__setup__delayBudgetReportingProhibitTimer;

/* RRC_OtherConfig */
typedef struct RRC_OtherConfig {
	struct RRC_OtherConfig__delayBudgetReportingConfig {
		RRC_OtherConfig__delayBudgetReportingConfig_PR present;
		union RRC_OtherConfig__RRC_delayBudgetReportingConfig_u {
			NULL_t	 release;
			struct RRC_OtherConfig__delayBudgetReportingConfig__setup {
				long	 delayBudgetReportingProhibitTimer;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *delayBudgetReportingConfig;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_OtherConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_delayBudgetReportingProhibitTimer_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_OtherConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_OtherConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_OtherConfig_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_OtherConfig_H_ */
#include <asn_internal.h>
