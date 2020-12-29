/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_PH_UplinkCarrierSCG_H_
#define	_RRC_PH_UplinkCarrierSCG_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_PH_UplinkCarrierSCG__ph_Type1or3 {
	RRC_PH_UplinkCarrierSCG__ph_Type1or3_type1	= 0,
	RRC_PH_UplinkCarrierSCG__ph_Type1or3_type3	= 1
} e_RRC_PH_UplinkCarrierSCG__ph_Type1or3;

/* RRC_PH-UplinkCarrierSCG */
typedef struct RRC_PH_UplinkCarrierSCG {
	long	 ph_Type1or3;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_PH_UplinkCarrierSCG_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_ph_Type1or3_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_PH_UplinkCarrierSCG;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_PH_UplinkCarrierSCG_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_PH_UplinkCarrierSCG_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_PH_UplinkCarrierSCG_H_ */
#include <asn_internal.h>
