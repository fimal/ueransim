/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_UECapabilityEnquiry_IEs_H_
#define	_RRC_UECapabilityEnquiry_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_UE-CapabilityRAT-RequestList.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_UECapabilityEnquiry-IEs */
typedef struct RRC_UECapabilityEnquiry_IEs {
	RRC_UE_CapabilityRAT_RequestList_t	 ue_CapabilityRAT_RequestList;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	OCTET_STRING_t	*ue_CapabilityEnquiryExt;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_UECapabilityEnquiry_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_UECapabilityEnquiry_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_UECapabilityEnquiry_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_UECapabilityEnquiry_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_UECapabilityEnquiry_IEs_H_ */
#include <asn_internal.h>
