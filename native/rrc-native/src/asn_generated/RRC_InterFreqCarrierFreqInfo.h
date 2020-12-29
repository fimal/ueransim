/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_InterFreqCarrierFreqInfo_H_
#define	_RRC_InterFreqCarrierFreqInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_ARFCN-ValueNR.h"
#include <NativeInteger.h>
#include "RRC_SubcarrierSpacing.h"
#include <BOOLEAN.h>
#include "RRC_Q-RxLevMin.h"
#include "RRC_Q-QualMin.h"
#include "RRC_P-Max.h"
#include "RRC_T-Reselection.h"
#include "RRC_ReselectionThreshold.h"
#include "RRC_CellReselectionPriority.h"
#include "RRC_CellReselectionSubPriority.h"
#include "RRC_Q-OffsetRange.h"
#include "RRC_ReselectionThresholdQ.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_MultiFrequencyBandListNR_SIB;
struct RRC_ThresholdNR;
struct RRC_SSB_MTC;
struct RRC_SSB_ToMeasure;
struct RRC_SS_RSSI_Measurement;
struct RRC_SpeedStateScaleFactors;
struct RRC_InterFreqNeighCellList;
struct RRC_InterFreqBlackCellList;

/* RRC_InterFreqCarrierFreqInfo */
typedef struct RRC_InterFreqCarrierFreqInfo {
	RRC_ARFCN_ValueNR_t	 dl_CarrierFreq;
	struct RRC_MultiFrequencyBandListNR_SIB	*frequencyBandList;	/* OPTIONAL */
	struct RRC_MultiFrequencyBandListNR_SIB	*frequencyBandListSUL;	/* OPTIONAL */
	long	*nrofSS_BlocksToAverage;	/* OPTIONAL */
	struct RRC_ThresholdNR	*absThreshSS_BlocksConsolidation;	/* OPTIONAL */
	struct RRC_SSB_MTC	*smtc;	/* OPTIONAL */
	RRC_SubcarrierSpacing_t	 ssbSubcarrierSpacing;
	struct RRC_SSB_ToMeasure	*ssb_ToMeasure;	/* OPTIONAL */
	BOOLEAN_t	 deriveSSB_IndexFromCell;
	struct RRC_SS_RSSI_Measurement	*ss_RSSI_Measurement;	/* OPTIONAL */
	RRC_Q_RxLevMin_t	 q_RxLevMin;
	RRC_Q_RxLevMin_t	*q_RxLevMinSUL;	/* OPTIONAL */
	RRC_Q_QualMin_t	*q_QualMin;	/* OPTIONAL */
	RRC_P_Max_t	*p_Max;	/* OPTIONAL */
	RRC_T_Reselection_t	 t_ReselectionNR;
	struct RRC_SpeedStateScaleFactors	*t_ReselectionNR_SF;	/* OPTIONAL */
	RRC_ReselectionThreshold_t	 threshX_HighP;
	RRC_ReselectionThreshold_t	 threshX_LowP;
	struct RRC_InterFreqCarrierFreqInfo__threshX_Q {
		RRC_ReselectionThresholdQ_t	 threshX_HighQ;
		RRC_ReselectionThresholdQ_t	 threshX_LowQ;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *threshX_Q;
	RRC_CellReselectionPriority_t	*cellReselectionPriority;	/* OPTIONAL */
	RRC_CellReselectionSubPriority_t	*cellReselectionSubPriority;	/* OPTIONAL */
	RRC_Q_OffsetRange_t	*q_OffsetFreq;	/* DEFAULT 15 */
	struct RRC_InterFreqNeighCellList	*interFreqNeighCellList;	/* OPTIONAL */
	struct RRC_InterFreqBlackCellList	*interFreqBlackCellList;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_InterFreqCarrierFreqInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_InterFreqCarrierFreqInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_InterFreqCarrierFreqInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_InterFreqCarrierFreqInfo_1[24];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_InterFreqCarrierFreqInfo_H_ */
#include <asn_internal.h>
