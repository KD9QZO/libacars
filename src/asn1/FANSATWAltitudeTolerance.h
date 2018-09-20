/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSATWAltitudeTolerance_H_
#define	_FANSATWAltitudeTolerance_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSATWAltitudeTolerance {
	FANSATWAltitudeTolerance_at	= 0,
	FANSATWAltitudeTolerance_atorabove	= 1,
	FANSATWAltitudeTolerance_atorbelow	= 2
} e_FANSATWAltitudeTolerance;

/* FANSATWAltitudeTolerance */
typedef long	 FANSATWAltitudeTolerance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSATWAltitudeTolerance;
asn_struct_free_f FANSATWAltitudeTolerance_free;
asn_struct_print_f FANSATWAltitudeTolerance_print;
asn_constr_check_f FANSATWAltitudeTolerance_constraint;
ber_type_decoder_f FANSATWAltitudeTolerance_decode_ber;
der_type_encoder_f FANSATWAltitudeTolerance_encode_der;
xer_type_decoder_f FANSATWAltitudeTolerance_decode_xer;
xer_type_encoder_f FANSATWAltitudeTolerance_encode_xer;
per_type_decoder_f FANSATWAltitudeTolerance_decode_uper;
per_type_encoder_f FANSATWAltitudeTolerance_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSATWAltitudeTolerance_H_ */
#include <asn_internal.h>
