/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "asn/NGAP-PDU-Descriptions.asn"
 * 	`asn1c -fcompound-names -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D ngap -pdu=all`
 */

#ifndef	_NGAP_InitiatingMessage_H_
#define	_NGAP_InitiatingMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_ProcedureCode.h"
#include "NGAP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include "NGAP_AMFConfigurationUpdate.h"
#include "NGAP_AMFConfigurationUpdateAcknowledge.h"
#include "NGAP_AMFConfigurationUpdateFailure.h"
#include "NGAP_HandoverCancel.h"
#include "NGAP_HandoverCancelAcknowledge.h"
#include "NGAP_HandoverRequired.h"
#include "NGAP_HandoverCommand.h"
#include "NGAP_HandoverPreparationFailure.h"
#include "NGAP_HandoverRequest.h"
#include "NGAP_HandoverRequestAcknowledge.h"
#include "NGAP_HandoverFailure.h"
#include "NGAP_InitialContextSetupRequest.h"
#include "NGAP_InitialContextSetupResponse.h"
#include "NGAP_InitialContextSetupFailure.h"
#include "NGAP_NGReset.h"
#include "NGAP_NGResetAcknowledge.h"
#include "NGAP_NGSetupRequest.h"
#include "NGAP_NGSetupResponse.h"
#include "NGAP_NGSetupFailure.h"
#include "NGAP_PathSwitchRequest.h"
#include "NGAP_PathSwitchRequestAcknowledge.h"
#include "NGAP_PathSwitchRequestFailure.h"
#include "NGAP_PDUSessionResourceModifyRequest.h"
#include "NGAP_PDUSessionResourceModifyResponse.h"
#include "NGAP_PDUSessionResourceModifyIndication.h"
#include "NGAP_PDUSessionResourceModifyConfirm.h"
#include "NGAP_PDUSessionResourceReleaseCommand.h"
#include "NGAP_PDUSessionResourceReleaseResponse.h"
#include "NGAP_PDUSessionResourceSetupRequest.h"
#include "NGAP_PDUSessionResourceSetupResponse.h"
#include "NGAP_PWSCancelRequest.h"
#include "NGAP_PWSCancelResponse.h"
#include "NGAP_RANConfigurationUpdate.h"
#include "NGAP_RANConfigurationUpdateAcknowledge.h"
#include "NGAP_RANConfigurationUpdateFailure.h"
#include "NGAP_UEContextModificationRequest.h"
#include "NGAP_UEContextModificationResponse.h"
#include "NGAP_UEContextModificationFailure.h"
#include "NGAP_UEContextReleaseCommand.h"
#include "NGAP_UEContextReleaseComplete.h"
#include "NGAP_UERadioCapabilityCheckRequest.h"
#include "NGAP_UERadioCapabilityCheckResponse.h"
#include "NGAP_WriteReplaceWarningRequest.h"
#include "NGAP_WriteReplaceWarningResponse.h"
#include "NGAP_AMFStatusIndication.h"
#include "NGAP_CellTrafficTrace.h"
#include "NGAP_DeactivateTrace.h"
#include "NGAP_DownlinkNASTransport.h"
#include "NGAP_DownlinkNonUEAssociatedNRPPaTransport.h"
#include "NGAP_DownlinkRANConfigurationTransfer.h"
#include "NGAP_DownlinkRANStatusTransfer.h"
#include "NGAP_DownlinkUEAssociatedNRPPaTransport.h"
#include "NGAP_ErrorIndication.h"
#include "NGAP_HandoverNotify.h"
#include "NGAP_InitialUEMessage.h"
#include "NGAP_LocationReport.h"
#include "NGAP_LocationReportingControl.h"
#include "NGAP_LocationReportingFailureIndication.h"
#include "NGAP_NASNonDeliveryIndication.h"
#include "NGAP_OverloadStart.h"
#include "NGAP_OverloadStop.h"
#include "NGAP_Paging.h"
#include "NGAP_PDUSessionResourceNotify.h"
#include "NGAP_PrivateMessage.h"
#include "NGAP_PWSFailureIndication.h"
#include "NGAP_PWSRestartIndication.h"
#include "NGAP_RerouteNASRequest.h"
#include "NGAP_RRCInactiveTransitionReport.h"
#include "NGAP_SecondaryRATDataUsageReport.h"
#include "NGAP_TraceFailureIndication.h"
#include "NGAP_TraceStart.h"
#include "NGAP_UEContextReleaseRequest.h"
#include "NGAP_UERadioCapabilityInfoIndication.h"
#include "NGAP_UETNLABindingReleaseRequest.h"
#include "NGAP_UplinkNASTransport.h"
#include "NGAP_UplinkNonUEAssociatedNRPPaTransport.h"
#include "NGAP_UplinkRANConfigurationTransfer.h"
#include "NGAP_UplinkRANStatusTransfer.h"
#include "NGAP_UplinkUEAssociatedNRPPaTransport.h"
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_InitiatingMessage__value_PR {
	NGAP_InitiatingMessage__value_PR_NOTHING,	/* No components present */
	NGAP_InitiatingMessage__value_PR_AMFConfigurationUpdate,
	NGAP_InitiatingMessage__value_PR_HandoverCancel,
	NGAP_InitiatingMessage__value_PR_HandoverRequired,
	NGAP_InitiatingMessage__value_PR_HandoverRequest,
	NGAP_InitiatingMessage__value_PR_InitialContextSetupRequest,
	NGAP_InitiatingMessage__value_PR_NGReset,
	NGAP_InitiatingMessage__value_PR_NGSetupRequest,
	NGAP_InitiatingMessage__value_PR_PathSwitchRequest,
	NGAP_InitiatingMessage__value_PR_PDUSessionResourceModifyRequest,
	NGAP_InitiatingMessage__value_PR_PDUSessionResourceModifyIndication,
	NGAP_InitiatingMessage__value_PR_PDUSessionResourceReleaseCommand,
	NGAP_InitiatingMessage__value_PR_PDUSessionResourceSetupRequest,
	NGAP_InitiatingMessage__value_PR_PWSCancelRequest,
	NGAP_InitiatingMessage__value_PR_RANConfigurationUpdate,
	NGAP_InitiatingMessage__value_PR_UEContextModificationRequest,
	NGAP_InitiatingMessage__value_PR_UEContextReleaseCommand,
	NGAP_InitiatingMessage__value_PR_UERadioCapabilityCheckRequest,
	NGAP_InitiatingMessage__value_PR_WriteReplaceWarningRequest,
	NGAP_InitiatingMessage__value_PR_AMFStatusIndication,
	NGAP_InitiatingMessage__value_PR_CellTrafficTrace,
	NGAP_InitiatingMessage__value_PR_DeactivateTrace,
	NGAP_InitiatingMessage__value_PR_DownlinkNASTransport,
	NGAP_InitiatingMessage__value_PR_DownlinkNonUEAssociatedNRPPaTransport,
	NGAP_InitiatingMessage__value_PR_DownlinkRANConfigurationTransfer,
	NGAP_InitiatingMessage__value_PR_DownlinkRANStatusTransfer,
	NGAP_InitiatingMessage__value_PR_DownlinkUEAssociatedNRPPaTransport,
	NGAP_InitiatingMessage__value_PR_ErrorIndication,
	NGAP_InitiatingMessage__value_PR_HandoverNotify,
	NGAP_InitiatingMessage__value_PR_InitialUEMessage,
	NGAP_InitiatingMessage__value_PR_LocationReport,
	NGAP_InitiatingMessage__value_PR_LocationReportingControl,
	NGAP_InitiatingMessage__value_PR_LocationReportingFailureIndication,
	NGAP_InitiatingMessage__value_PR_NASNonDeliveryIndication,
	NGAP_InitiatingMessage__value_PR_OverloadStart,
	NGAP_InitiatingMessage__value_PR_OverloadStop,
	NGAP_InitiatingMessage__value_PR_Paging,
	NGAP_InitiatingMessage__value_PR_PDUSessionResourceNotify,
	NGAP_InitiatingMessage__value_PR_PrivateMessage,
	NGAP_InitiatingMessage__value_PR_PWSFailureIndication,
	NGAP_InitiatingMessage__value_PR_PWSRestartIndication,
	NGAP_InitiatingMessage__value_PR_RerouteNASRequest,
	NGAP_InitiatingMessage__value_PR_RRCInactiveTransitionReport,
	NGAP_InitiatingMessage__value_PR_SecondaryRATDataUsageReport,
	NGAP_InitiatingMessage__value_PR_TraceFailureIndication,
	NGAP_InitiatingMessage__value_PR_TraceStart,
	NGAP_InitiatingMessage__value_PR_UEContextReleaseRequest,
	NGAP_InitiatingMessage__value_PR_UERadioCapabilityInfoIndication,
	NGAP_InitiatingMessage__value_PR_UETNLABindingReleaseRequest,
	NGAP_InitiatingMessage__value_PR_UplinkNASTransport,
	NGAP_InitiatingMessage__value_PR_UplinkNonUEAssociatedNRPPaTransport,
	NGAP_InitiatingMessage__value_PR_UplinkRANConfigurationTransfer,
	NGAP_InitiatingMessage__value_PR_UplinkRANStatusTransfer,
	NGAP_InitiatingMessage__value_PR_UplinkUEAssociatedNRPPaTransport
} NGAP_InitiatingMessage__value_PR;

/* NGAP_InitiatingMessage */
typedef struct NGAP_InitiatingMessage {
	NGAP_ProcedureCode_t	 procedureCode;
	NGAP_Criticality_t	 criticality;
	struct NGAP_InitiatingMessage__value {
		NGAP_InitiatingMessage__value_PR present;
		union NGAP_InitiatingMessage__NGAP_value_u {
			NGAP_AMFConfigurationUpdate_t	 AMFConfigurationUpdate;
			NGAP_HandoverCancel_t	 HandoverCancel;
			NGAP_HandoverRequired_t	 HandoverRequired;
			NGAP_HandoverRequest_t	 HandoverRequest;
			NGAP_InitialContextSetupRequest_t	 InitialContextSetupRequest;
			NGAP_NGReset_t	 NGReset;
			NGAP_NGSetupRequest_t	 NGSetupRequest;
			NGAP_PathSwitchRequest_t	 PathSwitchRequest;
			NGAP_PDUSessionResourceModifyRequest_t	 PDUSessionResourceModifyRequest;
			NGAP_PDUSessionResourceModifyIndication_t	 PDUSessionResourceModifyIndication;
			NGAP_PDUSessionResourceReleaseCommand_t	 PDUSessionResourceReleaseCommand;
			NGAP_PDUSessionResourceSetupRequest_t	 PDUSessionResourceSetupRequest;
			NGAP_PWSCancelRequest_t	 PWSCancelRequest;
			NGAP_RANConfigurationUpdate_t	 RANConfigurationUpdate;
			NGAP_UEContextModificationRequest_t	 UEContextModificationRequest;
			NGAP_UEContextReleaseCommand_t	 UEContextReleaseCommand;
			NGAP_UERadioCapabilityCheckRequest_t	 UERadioCapabilityCheckRequest;
			NGAP_WriteReplaceWarningRequest_t	 WriteReplaceWarningRequest;
			NGAP_AMFStatusIndication_t	 AMFStatusIndication;
			NGAP_CellTrafficTrace_t	 CellTrafficTrace;
			NGAP_DeactivateTrace_t	 DeactivateTrace;
			NGAP_DownlinkNASTransport_t	 DownlinkNASTransport;
			NGAP_DownlinkNonUEAssociatedNRPPaTransport_t	 DownlinkNonUEAssociatedNRPPaTransport;
			NGAP_DownlinkRANConfigurationTransfer_t	 DownlinkRANConfigurationTransfer;
			NGAP_DownlinkRANStatusTransfer_t	 DownlinkRANStatusTransfer;
			NGAP_DownlinkUEAssociatedNRPPaTransport_t	 DownlinkUEAssociatedNRPPaTransport;
			NGAP_ErrorIndication_t	 ErrorIndication;
			NGAP_HandoverNotify_t	 HandoverNotify;
			NGAP_InitialUEMessage_t	 InitialUEMessage;
			NGAP_LocationReport_t	 LocationReport;
			NGAP_LocationReportingControl_t	 LocationReportingControl;
			NGAP_LocationReportingFailureIndication_t	 LocationReportingFailureIndication;
			NGAP_NASNonDeliveryIndication_t	 NASNonDeliveryIndication;
			NGAP_OverloadStart_t	 OverloadStart;
			NGAP_OverloadStop_t	 OverloadStop;
			NGAP_Paging_t	 Paging;
			NGAP_PDUSessionResourceNotify_t	 PDUSessionResourceNotify;
			NGAP_PrivateMessage_t	 PrivateMessage;
			NGAP_PWSFailureIndication_t	 PWSFailureIndication;
			NGAP_PWSRestartIndication_t	 PWSRestartIndication;
			NGAP_RerouteNASRequest_t	 RerouteNASRequest;
			NGAP_RRCInactiveTransitionReport_t	 RRCInactiveTransitionReport;
			NGAP_SecondaryRATDataUsageReport_t	 SecondaryRATDataUsageReport;
			NGAP_TraceFailureIndication_t	 TraceFailureIndication;
			NGAP_TraceStart_t	 TraceStart;
			NGAP_UEContextReleaseRequest_t	 UEContextReleaseRequest;
			NGAP_UERadioCapabilityInfoIndication_t	 UERadioCapabilityInfoIndication;
			NGAP_UETNLABindingReleaseRequest_t	 UETNLABindingReleaseRequest;
			NGAP_UplinkNASTransport_t	 UplinkNASTransport;
			NGAP_UplinkNonUEAssociatedNRPPaTransport_t	 UplinkNonUEAssociatedNRPPaTransport;
			NGAP_UplinkRANConfigurationTransfer_t	 UplinkRANConfigurationTransfer;
			NGAP_UplinkRANStatusTransfer_t	 UplinkRANStatusTransfer;
			NGAP_UplinkUEAssociatedNRPPaTransport_t	 UplinkUEAssociatedNRPPaTransport;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_InitiatingMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_InitiatingMessage;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_InitiatingMessage_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_InitiatingMessage_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_InitiatingMessage_H_ */
#include <asn_internal.h>
