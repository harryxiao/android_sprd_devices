/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "rrlp-components.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#ifndef	_GPSTOWAssist_H_
#define	_GPSTOWAssist_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GPSTOWAssistElement;

/* GPSTOWAssist */
typedef struct GPSTOWAssist {
	A_SEQUENCE_OF(struct GPSTOWAssistElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GPSTOWAssist_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GPSTOWAssist;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GPSTOWAssistElement.h"

#endif	/* _GPSTOWAssist_H_ */
#include <asn_internal.h>