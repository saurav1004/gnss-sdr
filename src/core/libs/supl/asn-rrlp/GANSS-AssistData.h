/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _GANSS_AssistData_H_
#define _GANSS_AssistData_H_

#include <asn_application.h>

/* Including external dependencies */
#include "GANSS-ControlHeader.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GANSS-AssistData */
    typedef struct GANSS_AssistData
    {
        GANSS_ControlHeader_t ganss_controlHeader;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GANSS_AssistData_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GANSS_AssistData;

#ifdef __cplusplus
}
#endif

#endif /* _GANSS_AssistData_H_ */
#include <asn_internal.h>
