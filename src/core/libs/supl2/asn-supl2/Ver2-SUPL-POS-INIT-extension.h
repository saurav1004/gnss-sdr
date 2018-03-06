/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Version-2-message-extensions"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_Ver2_SUPL_POS_INIT_extension_H_
#define	_Ver2_SUPL_POS_INIT_extension_H_


#include "asn_application.h"

/* Including external dependencies */
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultipleLocationIds;
struct UTRAN_GPSReferenceTimeResult;
struct UTRAN_GANSSReferenceTimeResult;

/* Ver2-SUPL-POS-INIT-extension */
typedef struct Ver2_SUPL_POS_INIT_extension {
	struct MultipleLocationIds	*multipleLocationIds	/* OPTIONAL */;
	struct UTRAN_GPSReferenceTimeResult	*utran_GPSReferenceTimeResult	/* OPTIONAL */;
	struct UTRAN_GANSSReferenceTimeResult	*utran_GANSSReferenceTimeResult	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ver2_SUPL_POS_INIT_extension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ver2_SUPL_POS_INIT_extension;
extern asn_SEQUENCE_specifics_t asn_SPC_Ver2_SUPL_POS_INIT_extension_specs_1;
extern asn_TYPE_member_t asn_MBR_Ver2_SUPL_POS_INIT_extension_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultipleLocationIds.h"
#include "UTRAN-GPSReferenceTimeResult.h"
#include "UTRAN-GANSSReferenceTimeResult.h"

#endif	/* _Ver2_SUPL_POS_INIT_extension_H_ */
#include "asn_internal.h"