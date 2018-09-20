/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "FANSErrorInformation.h"

int
FANSErrorInformation_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
FANSErrorInformation_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
FANSErrorInformation_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	FANSErrorInformation_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
FANSErrorInformation_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	FANSErrorInformation_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
FANSErrorInformation_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	FANSErrorInformation_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
FANSErrorInformation_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FANSErrorInformation_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
FANSErrorInformation_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	FANSErrorInformation_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
FANSErrorInformation_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FANSErrorInformation_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
FANSErrorInformation_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	FANSErrorInformation_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
FANSErrorInformation_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	FANSErrorInformation_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_FANSErrorInformation_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  11 }	/* (0..11) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_FANSErrorInformation_value2enum_1[] = {
	{ 0,	16,	"applicationError" },
	{ 1,	32,	"duplicateMsgIdentificationNumber" },
	{ 2,	30,	"unrecognizedMsgReferenceNumber" },
	{ 3,	25,	"endServiceWithPendingMsgs" },
	{ 4,	29,	"endServiceWithNoValidResponse" },
	{ 5,	30,	"insufficientMsgStorageCapacity" },
	{ 6,	34,	"noAvailableMsgIdentificationNumber" },
	{ 7,	20,	"commandedTermination" },
	{ 8,	16,	"insufficientData" },
	{ 9,	14,	"unexpectedData" },
	{ 10,	11,	"invalidData" },
	{ 16,	16,	"reservedErrorMsg" }
};
static const unsigned int asn_MAP_FANSErrorInformation_enum2value_1[] = {
	0,	/* applicationError(0) */
	7,	/* commandedTermination(7) */
	1,	/* duplicateMsgIdentificationNumber(1) */
	4,	/* endServiceWithNoValidResponse(4) */
	3,	/* endServiceWithPendingMsgs(3) */
	8,	/* insufficientData(8) */
	5,	/* insufficientMsgStorageCapacity(5) */
	10,	/* invalidData(10) */
	6,	/* noAvailableMsgIdentificationNumber(6) */
	11,	/* reservedErrorMsg(16) */
	9,	/* unexpectedData(9) */
	2	/* unrecognizedMsgReferenceNumber(2) */
};
static const asn_INTEGER_specifics_t asn_SPC_FANSErrorInformation_specs_1 = {
	asn_MAP_FANSErrorInformation_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_FANSErrorInformation_enum2value_1,	/* N => "tag"; sorted by N */
	12,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_FANSErrorInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_FANSErrorInformation = {
	"FANSErrorInformation",
	"FANSErrorInformation",
	FANSErrorInformation_free,
	FANSErrorInformation_print,
	FANSErrorInformation_constraint,
	FANSErrorInformation_decode_ber,
	FANSErrorInformation_encode_der,
	FANSErrorInformation_decode_xer,
	FANSErrorInformation_encode_xer,
	FANSErrorInformation_decode_uper,
	FANSErrorInformation_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FANSErrorInformation_tags_1,
	sizeof(asn_DEF_FANSErrorInformation_tags_1)
		/sizeof(asn_DEF_FANSErrorInformation_tags_1[0]), /* 1 */
	asn_DEF_FANSErrorInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSErrorInformation_tags_1)
		/sizeof(asn_DEF_FANSErrorInformation_tags_1[0]), /* 1 */
	&asn_PER_type_FANSErrorInformation_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_FANSErrorInformation_specs_1	/* Additional specs */
};

