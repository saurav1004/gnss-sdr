/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _GANSSCommonAssistData_H_
#define _GANSSCommonAssistData_H_

#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct GANSSReferenceTime;
    struct GANSSRefLocation;
    struct GANSSIonosphericModel;

    /* GANSSCommonAssistData */
    typedef struct GANSSCommonAssistData
    {
        struct GANSSReferenceTime *ganssReferenceTime /* OPTIONAL */;
        struct GANSSRefLocation *ganssRefLocation /* OPTIONAL */;
        struct GANSSIonosphericModel *ganssIonosphericModel /* OPTIONAL */;
        /*
         * This type is extensible,
         * possible extensions are below.
         */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSSCommonAssistData_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSSCommonAssistData;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSSReferenceTime.h"
#include "GANSSRefLocation.h"
#include "GANSSIonosphericModel.h"

#endif /* _GANSSCommonAssistData_H_ */
#include <asn_internal.h>
