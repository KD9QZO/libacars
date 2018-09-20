/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "FANSLatitude.h"

static asn_TYPE_member_t asn_MBR_FANSLatitude_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSLatitude, latitudeDegrees),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_FANSLatitudeDegrees,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latitudeDegrees"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSLatitude, minutesLatLon),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_FANSMinutesLatLon,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"minutesLatLon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSLatitude, latitudeDirection),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_FANSLatitudeDirection,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"latitudeDirection"
		},
};
static const int asn_MAP_FANSLatitude_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_FANSLatitude_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSLatitude_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 1 }, /* latitudeDegrees */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 0 }, /* minutesLatLon */
    { (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 2, 0, 0 } /* latitudeDirection */
};
static asn_SEQUENCE_specifics_t asn_SPC_FANSLatitude_specs_1 = {
	sizeof(struct FANSLatitude),
	offsetof(struct FANSLatitude, _asn_ctx),
	asn_MAP_FANSLatitude_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_FANSLatitude_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FANSLatitude = {
	"FANSLatitude",
	"FANSLatitude",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_FANSLatitude_tags_1,
	sizeof(asn_DEF_FANSLatitude_tags_1)
		/sizeof(asn_DEF_FANSLatitude_tags_1[0]), /* 1 */
	asn_DEF_FANSLatitude_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSLatitude_tags_1)
		/sizeof(asn_DEF_FANSLatitude_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FANSLatitude_1,
	3,	/* Elements count */
	&asn_SPC_FANSLatitude_specs_1	/* Additional specs */
};

