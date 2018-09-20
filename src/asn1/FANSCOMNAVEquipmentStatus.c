/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "FANSCOMNAVEquipmentStatus.h"

int
FANSCOMNAVEquipmentStatus_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
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
FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
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
FANSCOMNAVEquipmentStatus_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
FANSCOMNAVEquipmentStatus_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
FANSCOMNAVEquipmentStatus_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
FANSCOMNAVEquipmentStatus_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
FANSCOMNAVEquipmentStatus_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
FANSCOMNAVEquipmentStatus_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
FANSCOMNAVEquipmentStatus_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
FANSCOMNAVEquipmentStatus_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	FANSCOMNAVEquipmentStatus_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_FANSCOMNAVEquipmentStatus_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_FANSCOMNAVEquipmentStatus_value2enum_1[] = {
	{ 0,	7,	"aloranA" },
	{ 1,	7,	"cloranC" },
	{ 2,	4,	"ddme" },
	{ 3,	6,	"edecca" },
	{ 4,	4,	"fadf" },
	{ 5,	5,	"ggnss" },
	{ 6,	6,	"hhfRTF" },
	{ 7,	19,	"iinertialNavigation" },
	{ 8,	4,	"lils" },
	{ 9,	6,	"momega" },
	{ 10,	4,	"ovor" },
	{ 11,	8,	"pdoppler" },
	{ 12,	19,	"rrnavRouteEquipment" },
	{ 13,	6,	"ttacan" },
	{ 14,	7,	"uuhfRTF" },
	{ 15,	7,	"vvhfRTF" }
};
static const unsigned int asn_MAP_FANSCOMNAVEquipmentStatus_enum2value_1[] = {
	0,	/* aloranA(0) */
	1,	/* cloranC(1) */
	2,	/* ddme(2) */
	3,	/* edecca(3) */
	4,	/* fadf(4) */
	5,	/* ggnss(5) */
	6,	/* hhfRTF(6) */
	7,	/* iinertialNavigation(7) */
	8,	/* lils(8) */
	9,	/* momega(9) */
	10,	/* ovor(10) */
	11,	/* pdoppler(11) */
	12,	/* rrnavRouteEquipment(12) */
	13,	/* ttacan(13) */
	14,	/* uuhfRTF(14) */
	15	/* vvhfRTF(15) */
};
static const asn_INTEGER_specifics_t asn_SPC_FANSCOMNAVEquipmentStatus_specs_1 = {
	asn_MAP_FANSCOMNAVEquipmentStatus_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_FANSCOMNAVEquipmentStatus_enum2value_1,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_FANSCOMNAVEquipmentStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_FANSCOMNAVEquipmentStatus = {
	"FANSCOMNAVEquipmentStatus",
	"FANSCOMNAVEquipmentStatus",
	FANSCOMNAVEquipmentStatus_free,
	FANSCOMNAVEquipmentStatus_print,
	FANSCOMNAVEquipmentStatus_constraint,
	FANSCOMNAVEquipmentStatus_decode_ber,
	FANSCOMNAVEquipmentStatus_encode_der,
	FANSCOMNAVEquipmentStatus_decode_xer,
	FANSCOMNAVEquipmentStatus_encode_xer,
	FANSCOMNAVEquipmentStatus_decode_uper,
	FANSCOMNAVEquipmentStatus_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FANSCOMNAVEquipmentStatus_tags_1,
	sizeof(asn_DEF_FANSCOMNAVEquipmentStatus_tags_1)
		/sizeof(asn_DEF_FANSCOMNAVEquipmentStatus_tags_1[0]), /* 1 */
	asn_DEF_FANSCOMNAVEquipmentStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSCOMNAVEquipmentStatus_tags_1)
		/sizeof(asn_DEF_FANSCOMNAVEquipmentStatus_tags_1[0]), /* 1 */
	&asn_PER_type_FANSCOMNAVEquipmentStatus_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_FANSCOMNAVEquipmentStatus_specs_1	/* Additional specs */
};

