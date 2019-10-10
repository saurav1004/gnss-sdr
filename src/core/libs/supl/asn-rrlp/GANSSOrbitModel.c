/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "GANSSOrbitModel.h"

static asn_per_constraints_t ASN_PER_TYPE_GANSS_ORBIT_MODEL_CONSTR_1 = {
    {APC_CONSTRAINED | APC_EXTENSIBLE, 0, 0, 0, 0} /* (0..0,...) */,
    {APC_UNCONSTRAINED, -1, -1, 0, 0},
    0,
    0 /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_GANSSOrbitModel_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct GANSSOrbitModel, choice.keplerianSet),
     (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
     &asn_DEF_NavModel_KeplerianSet,
     0, /* Defer constraints checking to the member type */
     0, /* No PER visible constraints */
     0, "keplerianSet"},
};
static asn_TYPE_tag2member_t asn_MAP_GANSSOrbitModel_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0} /* keplerianSet at 1248 */
};
static asn_CHOICE_specifics_t asn_SPC_GANSSOrbitModel_specs_1 = {
    sizeof(struct GANSSOrbitModel),
    offsetof(struct GANSSOrbitModel, _asn_ctx),
    offsetof(struct GANSSOrbitModel, present),
    sizeof(((struct GANSSOrbitModel *)0)->present),
    asn_MAP_GANSSOrbitModel_tag2el_1,
    1, /* Count of tags in the map */
    0,
    1 /* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_GANSSOrbitModel = {
    "GANSSOrbitModel",
    "GANSSOrbitModel",
    CHOICE_free,
    CHOICE_print,
    CHOICE_constraint,
    CHOICE_decode_ber,
    CHOICE_encode_der,
    CHOICE_decode_xer,
    CHOICE_encode_xer,
    CHOICE_decode_uper,
    CHOICE_encode_uper,
    CHOICE_outmost_tag,
    0, /* No effective tags (pointer) */
    0, /* No effective tags (count) */
    0, /* No tags (pointer) */
    0, /* No tags (count) */
    &ASN_PER_TYPE_GANSS_ORBIT_MODEL_CONSTR_1,
    asn_MBR_GANSSOrbitModel_1,
    1,                               /* Elements count */
    &asn_SPC_GANSSOrbitModel_specs_1 /* Additional specs */
};
