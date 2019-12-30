/*
 *  This file is a part of libacars
 *
 *  Copyright (c) 2018-2019 Tomasz Lemiech <szpajder@gmail.com>
 */

/* Default libacars configuration settings */

{
// Output raw dump of ASN.1 structure for all ASN.1-encoded messages?
	LA_CONFIG_SETTING_BOOLEAN("dump_asn1", false),

// Try to decode ACARS applications in fragmented messages, when
// reassembly is in progress?
// If reassembly is disabled, this setting has no effect (ie. applications
// are always decoded).
	LA_CONFIG_SETTING_BOOLEAN("decode_fragments", false)
};
