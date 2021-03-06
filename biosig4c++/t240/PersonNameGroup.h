/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_PersonNameGroup_H_
#define	_PersonNameGroup_H_


#include <asn_application.h>

/* Including external dependencies */
#include "FEFString.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PersonNameGroup */
typedef struct PersonNameGroup {
	FEFString_t	 familyname;
	FEFString_t	 givenname;
	FEFString_t	 middlename;
	FEFString_t	 prefix;
	FEFString_t	 suffix;
	FEFString_t	 degree;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PersonNameGroup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PersonNameGroup;

#ifdef __cplusplus
}
#endif

#endif	/* _PersonNameGroup_H_ */
