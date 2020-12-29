/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_CGI_InfoEUTRA_H_
#define	_RRC_CGI_InfoEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_FreqBandIndicatorEUTRA.h"
#include <NativeEnumerated.h>
#include "RRC_CellAccessRelatedInfo-EUTRA-EPC.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_CGI_InfoEUTRA__freqBandIndicatorPriority {
	RRC_CGI_InfoEUTRA__freqBandIndicatorPriority_true	= 0
} e_RRC_CGI_InfoEUTRA__freqBandIndicatorPriority;

/* Forward declarations */
struct RRC_MultiBandInfoListEUTRA;
struct RRC_CellAccessRelatedInfo_EUTRA_EPC;
struct RRC_CellAccessRelatedInfo_EUTRA_5GC;

/* RRC_CGI-InfoEUTRA */
typedef struct RRC_CGI_InfoEUTRA {
	struct RRC_CGI_InfoEUTRA__cgi_info_EPC {
		RRC_CellAccessRelatedInfo_EUTRA_EPC_t	 cgi_info_EPC_legacy;
		struct RRC_CGI_InfoEUTRA__cgi_info_EPC__cgi_info_EPC_list {
			A_SEQUENCE_OF(struct RRC_CellAccessRelatedInfo_EUTRA_EPC) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *cgi_info_EPC_list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_info_EPC;
	struct RRC_CGI_InfoEUTRA__cgi_info_5GC {
		A_SEQUENCE_OF(struct RRC_CellAccessRelatedInfo_EUTRA_5GC) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cgi_info_5GC;
	RRC_FreqBandIndicatorEUTRA_t	 freqBandIndicator;
	struct RRC_MultiBandInfoListEUTRA	*multiBandInfoList;	/* OPTIONAL */
	long	*freqBandIndicatorPriority;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_CGI_InfoEUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_freqBandIndicatorPriority_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_CGI_InfoEUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_CGI_InfoEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_CGI_InfoEUTRA_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_CGI_InfoEUTRA_H_ */
#include <asn_internal.h>
