/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_VarPendingRNA_Update_H_
#define	_RRC_VarPendingRNA_Update_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_VarPendingRNA-Update */
typedef struct RRC_VarPendingRNA_Update {
	BOOLEAN_t	*pendingRNA_Update;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_VarPendingRNA_Update_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_VarPendingRNA_Update;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_VarPendingRNA_Update_H_ */
#include <asn_internal.h>
