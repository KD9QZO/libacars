/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSATCDownlinkMessage_H_
#define	_FANSATCDownlinkMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSATCMessageHeader.h"
#include "FANSATCDownlinkMsgElementId.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FANSATCDownlinkMsgElementIdSequence;

/* FANSATCDownlinkMessage */
typedef struct FANSATCDownlinkMessage {
	FANSATCMessageHeader_t	 aTCMessageheader;
	FANSATCDownlinkMsgElementId_t	 aTCDownlinkmsgelementid;
	struct FANSATCDownlinkMsgElementIdSequence	*aTCdownlinkmsgelementid_seqOf	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSATCDownlinkMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATCDownlinkMessage;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FANSATCDownlinkMsgElementIdSequence.h"

#endif	/* _FANSATCDownlinkMessage_H_ */
#include <asn_internal.h>
