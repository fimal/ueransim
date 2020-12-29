/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn/NGAP-IEs.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap -pdu=all`
 */

#ifndef	_NGAP_DRBStatusDL12_H_
#define	_NGAP_DRBStatusDL12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_COUNTValueForPDCP-SN12.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_DRBStatusDL12 */
typedef struct NGAP_DRBStatusDL12 {
	NGAP_COUNTValueForPDCP_SN12_t	 dL_COUNTValue;
	struct NGAP_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_DRBStatusDL12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_DRBStatusDL12;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_DRBStatusDL12_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_DRBStatusDL12_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_DRBStatusDL12_H_ */
#include <asn_internal.h>
