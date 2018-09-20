/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSDirectionDegrees_H_
#define	_FANSDirectionDegrees_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FANSDirection.h"
#include "FANSDegrees.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FANSDirectionDegrees */
typedef struct FANSDirectionDegrees {
	FANSDirection_t	 direction;
	FANSDegrees_t	 degrees;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSDirectionDegrees_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSDirectionDegrees;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSDirectionDegrees_H_ */
#include <asn_internal.h>
