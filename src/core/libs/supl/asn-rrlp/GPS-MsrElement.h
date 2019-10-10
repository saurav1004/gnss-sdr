/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _GPS_MsrElement_H_
#define _GPS_MsrElement_H_

#include <asn_application.h>

/* Including external dependencies */
#include "SatelliteID.h"
#include <NativeInteger.h>
#include "MpathIndic.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* GPS-MsrElement */
    typedef struct GPS_MsrElement
    {
        SatelliteID_t satelliteID;
        long cNo;
        long doppler;
        long wholeChips;
        long fracChips;
        MpathIndic_t mpathIndic;
        long pseuRangeRMSErr;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } GPS_MsrElement_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_GPS_MsrElement;

#ifdef __cplusplus
}
#endif

#endif /* _GPS_MsrElement_H_ */
#include <asn_internal.h>
