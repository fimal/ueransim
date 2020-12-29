/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_MeasObjectNR_H_
#define	_RRC_MeasObjectNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ARFCN-ValueNR.h"
#include "RRC_SubcarrierSpacing.h"
#include "RRC_ReferenceSignalConfig.h"
#include <NativeInteger.h>
#include "RRC_Q-OffsetRangeList.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "RRC_FreqBandIndicatorNR.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_MeasObjectNR__ext1__measCycleSCell_v1530 {
	RRC_MeasObjectNR__ext1__measCycleSCell_v1530_sf160	= 0,
	RRC_MeasObjectNR__ext1__measCycleSCell_v1530_sf256	= 1,
	RRC_MeasObjectNR__ext1__measCycleSCell_v1530_sf320	= 2,
	RRC_MeasObjectNR__ext1__measCycleSCell_v1530_sf512	= 3,
	RRC_MeasObjectNR__ext1__measCycleSCell_v1530_sf640	= 4,
	RRC_MeasObjectNR__ext1__measCycleSCell_v1530_sf1024	= 5,
	RRC_MeasObjectNR__ext1__measCycleSCell_v1530_sf1280	= 6
} e_RRC_MeasObjectNR__ext1__measCycleSCell_v1530;

/* Forward declarations */
struct RRC_SSB_MTC;
struct RRC_SSB_MTC2;
struct RRC_ThresholdNR;
struct RRC_PCI_List;
struct RRC_CellsToAddModList;
struct RRC_PCI_RangeIndexList;
struct RRC_PCI_RangeElement;

/* RRC_MeasObjectNR */
typedef struct RRC_MeasObjectNR {
	RRC_ARFCN_ValueNR_t	*ssbFrequency;	/* OPTIONAL */
	RRC_SubcarrierSpacing_t	*ssbSubcarrierSpacing;	/* OPTIONAL */
	struct RRC_SSB_MTC	*smtc1;	/* OPTIONAL */
	struct RRC_SSB_MTC2	*smtc2;	/* OPTIONAL */
	RRC_ARFCN_ValueNR_t	*refFreqCSI_RS;	/* OPTIONAL */
	RRC_ReferenceSignalConfig_t	 referenceSignalConfig;
	struct RRC_ThresholdNR	*absThreshSS_BlocksConsolidation;	/* OPTIONAL */
	struct RRC_ThresholdNR	*absThreshCSI_RS_Consolidation;	/* OPTIONAL */
	long	*nrofSS_BlocksToAverage;	/* OPTIONAL */
	long	*nrofCSI_RS_ResourcesToAverage;	/* OPTIONAL */
	long	 quantityConfigIndex;
	RRC_Q_OffsetRangeList_t	 offsetMO;
	struct RRC_PCI_List	*cellsToRemoveList;	/* OPTIONAL */
	struct RRC_CellsToAddModList	*cellsToAddModList;	/* OPTIONAL */
	struct RRC_PCI_RangeIndexList	*blackCellsToRemoveList;	/* OPTIONAL */
	struct RRC_MeasObjectNR__blackCellsToAddModList {
		A_SEQUENCE_OF(struct RRC_PCI_RangeElement) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *blackCellsToAddModList;
	struct RRC_PCI_RangeIndexList	*whiteCellsToRemoveList;	/* OPTIONAL */
	struct RRC_MeasObjectNR__whiteCellsToAddModList {
		A_SEQUENCE_OF(struct RRC_PCI_RangeElement) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *whiteCellsToAddModList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_MeasObjectNR__ext1 {
		RRC_FreqBandIndicatorNR_t	*freqBandIndicatorNR_v1530;	/* OPTIONAL */
		long	*measCycleSCell_v1530;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_MeasObjectNR_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_measCycleSCell_v1530_25;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_MeasObjectNR;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_MeasObjectNR_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_MeasObjectNR_1[19];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_MeasObjectNR_H_ */
#include <asn_internal.h>
