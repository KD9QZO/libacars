/*
 *  This file is a part of libacars
 *
 *  Copyright (c) 2018 Tomasz Lemiech <szpajder@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "asn1/asn_application.h"	// asn_TYPE_descriptor_t, asn_fprint
#include "asn1/INTEGER.h"		// asn_INTEGER_enum_map_t
#include "asn1/constr_CHOICE.h"		// _fetch_present_idx()
#include "asn1/asn_SET_OF.h"		// _A_CSET_FROM_VOID()
#include "asn1-util.h"			// CAST_PTR, ASN1_FORMATTER_PROTOTYPE, IFPRINTF
#include "util.h"			// dict_search

char const *value2enum(asn_TYPE_descriptor_t *td, long const value) {
	if(td == NULL) return NULL;
	asn_INTEGER_enum_map_t const *enum_map = INTEGER_map_value2enum(td->specifics, value);
	if(enum_map == NULL) return NULL;
	return enum_map->enum_name;
}

void _format_INTEGER_with_unit(FILE *stream, char const * const label, asn_TYPE_descriptor_t *td,
	void const *sptr, int indent, char const * const unit, double multiplier, int decimal_places) {
	CAST_PTR(val, long *, sptr);
	IFPRINTF(stream, indent, "%s: %.*f%s\n", label, decimal_places, (double)(*val) * multiplier, unit);
}

void _format_CHOICE(FILE *stream, char const * const label, dict const * const choice_labels,
	asn1_output_fun_t cb, asn_TYPE_descriptor_t *td, void const *sptr, int indent) {

	asn_CHOICE_specifics_t *specs = (asn_CHOICE_specifics_t *)td->specifics;
	int present = _fetch_present_idx(sptr, specs->pres_offset, specs->pres_size);
	if(label != NULL) {
		IFPRINTF(stream, indent, "%s:\n", label);
		indent++;
	}
	if(choice_labels != NULL) {
		char *descr = dict_search(choice_labels, present);
		if(descr != NULL) {
			IFPRINTF(stream, indent, "%s\n", descr);
		} else {
			IFPRINTF(stream, indent, "<no description for CHOICE value %d>\n", present);
		}
		indent++;
	}
	if(present > 0 && present <= td->elements_count) {
		asn_TYPE_member_t *elm = &td->elements[present-1];
		void const *memb_ptr;

		if(elm->flags & ATF_POINTER) {
			memb_ptr = *(const void * const *)((const char *)sptr + elm->memb_offset);
			if(!memb_ptr) {
				IFPRINTF(stream, indent, "%s: <not present>\n", elm->name);
				return;
			}
		} else {
			memb_ptr = (const void *)((const char *)sptr + elm->memb_offset);
		}

		cb(stream, elm->type, memb_ptr, indent);
	} else {
		IFPRINTF(stream, indent, "-- %s: value %d out of range\n", td->name, present);
	}
}

void _format_SEQUENCE(FILE *stream, char const * const label, asn1_output_fun_t cb,
	asn_TYPE_descriptor_t *td, void const *sptr, int indent) {
	if(label != NULL) {
		IFPRINTF(stream, indent, "%s:\n", label);
		indent++;
	}
	for(int edx = 0; edx < td->elements_count; edx++) {
		asn_TYPE_member_t *elm = &td->elements[edx];
		const void *memb_ptr;

		if(elm->flags & ATF_POINTER) {
			memb_ptr = *(const void * const *)((const char *)sptr + elm->memb_offset);
			if(!memb_ptr) {
				continue;
			}
		} else {
			memb_ptr = (const void *)((const char *)sptr + elm->memb_offset);
		}
		cb(stream, elm->type, memb_ptr, indent);
	}
}

void _format_SEQUENCE_OF(FILE *stream, char const * const label, asn1_output_fun_t cb,
	asn_TYPE_descriptor_t *td, void const *sptr, int indent) {
	if(label != NULL) {
		IFPRINTF(stream, indent, "%s:\n", label);
		indent++;
	}
	asn_TYPE_member_t *elm = td->elements;
	const asn_anonymous_set_ *list = _A_CSET_FROM_VOID(sptr);
	for(int i = 0; i < list->count; i++) {
		const void *memb_ptr = list->array[i];
		if(memb_ptr == NULL) {
			continue;
		}
		cb(stream, elm->type, memb_ptr, indent);
	}
}

ASN1_FORMATTER_PROTOTYPE(asn1_format_any) {
	if(label != NULL) {
		IFPRINTF(stream, indent, "%s: ", label);
	} else {
		IFPRINTF(stream, indent, "%s", "");
	}
	asn_fprint(stream, td, sptr, 1);
}

ASN1_FORMATTER_PROTOTYPE(asn1_format_NULL) {
	// NOOP
}

ASN1_FORMATTER_PROTOTYPE(asn1_format_ENUM) {
	long const value = *(long const *)sptr;
	char const *s = value2enum(td, value);
	if(s != NULL) {
		IFPRINTF(stream, indent, "%s: %s\n", label, s);
	} else {
		IFPRINTF(stream, indent, "%s: %ld\n", label, value);
	}
}

ASN1_FORMATTER_PROTOTYPE(asn1_format_Deg) {
	_format_INTEGER_with_unit(stream, label, td, sptr, indent, " deg", 1, 0);
}
