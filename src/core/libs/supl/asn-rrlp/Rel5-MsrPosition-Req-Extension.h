/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _Rel5_MsrPosition_Req_Extension_H_
#define _Rel5_MsrPosition_Req_Extension_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Extended-reference.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Rel5-MsrPosition-Req-Extension */
    typedef struct Rel5_MsrPosition_Req_Extension
    {
        Extended_reference_t extended_reference;
        /*
         * This type is extensible,
         * possible extensions are below.
         */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } Rel5_MsrPosition_Req_Extension_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_Rel5_MsrPosition_Req_Extension;

#ifdef __cplusplus
}
#endif

#endif /* _Rel5_MsrPosition_Req_Extension_H_ */
#include <asn_internal.h>
