/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "FANSPredepartureClearance.h"

static asn_TYPE_member_t asn_MBR_FANSPredepartureClearance_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPredepartureClearance, aircraftFlightIdentification),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAircraftFlightIdentification,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aircraftFlightIdentification"
		},
	{ ATF_POINTER, 2, offsetof(struct FANSPredepartureClearance, aircraftType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAircraftType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aircraftType"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSPredepartureClearance, aircraftEquipmentCode),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSAircraftEquipmentCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aircraftEquipmentCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPredepartureClearance, timeDepartureEdct),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSTimeDepartureEdct,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeDepartureEdct"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPredepartureClearance, routeClearance),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSRouteClearance,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"routeClearance"
		},
	{ ATF_POINTER, 1, offsetof(struct FANSPredepartureClearance, altitudeRestriction),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_FANSAltitudeRestriction,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"altitudeRestriction"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPredepartureClearance, frequencyDeparture),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSFrequencyDeparture,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyDeparture"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPredepartureClearance, beaconCode),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSBeaconCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"beaconCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct FANSPredepartureClearance, pDCrevision),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FANSPDCrevision,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pDCrevision"
		},
};
static const int asn_MAP_FANSPredepartureClearance_oms_1[] = { 1, 2, 5 };
static const ber_tlv_tag_t asn_DEF_FANSPredepartureClearance_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_FANSPredepartureClearance_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* aircraftFlightIdentification */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* aircraftType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* aircraftEquipmentCode */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeDepartureEdct */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* routeClearance */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* altitudeRestriction */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* frequencyDeparture */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* beaconCode */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* pDCrevision */
};
static asn_SEQUENCE_specifics_t asn_SPC_FANSPredepartureClearance_specs_1 = {
	sizeof(struct FANSPredepartureClearance),
	offsetof(struct FANSPredepartureClearance, _asn_ctx),
	asn_MAP_FANSPredepartureClearance_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_FANSPredepartureClearance_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_FANSPredepartureClearance = {
	"FANSPredepartureClearance",
	"FANSPredepartureClearance",
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
	asn_DEF_FANSPredepartureClearance_tags_1,
	sizeof(asn_DEF_FANSPredepartureClearance_tags_1)
		/sizeof(asn_DEF_FANSPredepartureClearance_tags_1[0]), /* 1 */
	asn_DEF_FANSPredepartureClearance_tags_1,	/* Same as above */
	sizeof(asn_DEF_FANSPredepartureClearance_tags_1)
		/sizeof(asn_DEF_FANSPredepartureClearance_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_FANSPredepartureClearance_1,
	9,	/* Elements count */
	&asn_SPC_FANSPredepartureClearance_specs_1	/* Additional specs */
};

