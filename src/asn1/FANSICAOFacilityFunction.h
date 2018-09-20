/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FANSICAOFacilityFunction_H_
#define	_FANSICAOFacilityFunction_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSICAOFacilityFunction {
	FANSICAOFacilityFunction_center	= 0,
	FANSICAOFacilityFunction_approach	= 1,
	FANSICAOFacilityFunction_tower	= 2,
	FANSICAOFacilityFunction_final	= 3,
	FANSICAOFacilityFunction_groundControl	= 4,
	FANSICAOFacilityFunction_clearanceDelivery	= 5,
	FANSICAOFacilityFunction_departure	= 6,
	FANSICAOFacilityFunction_control	= 7
} e_FANSICAOFacilityFunction;

/* FANSICAOFacilityFunction */
typedef long	 FANSICAOFacilityFunction_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSICAOFacilityFunction;
asn_struct_free_f FANSICAOFacilityFunction_free;
asn_struct_print_f FANSICAOFacilityFunction_print;
asn_constr_check_f FANSICAOFacilityFunction_constraint;
ber_type_decoder_f FANSICAOFacilityFunction_decode_ber;
der_type_encoder_f FANSICAOFacilityFunction_encode_der;
xer_type_decoder_f FANSICAOFacilityFunction_decode_xer;
xer_type_encoder_f FANSICAOFacilityFunction_encode_xer;
per_type_decoder_f FANSICAOFacilityFunction_decode_uper;
per_type_encoder_f FANSICAOFacilityFunction_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSICAOFacilityFunction_H_ */
#include <asn_internal.h>
