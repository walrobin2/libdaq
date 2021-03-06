/*
 * VLIB API definitions 2020-07-24 16:28:07
 * Input file: lisp_types.api
 * Automatically generated: please edit the input file NOT this file!
 */

#include <stdbool.h>
#if defined(vl_msg_id)||defined(vl_union_id) \
    || defined(vl_printfun) ||defined(vl_endianfun) \
    || defined(vl_api_version)||defined(vl_typedefs) \
    || defined(vl_msg_name)||defined(vl_msg_name_crc_list) \
    || defined(vl_api_version_tuple)
/* ok, something was selected */
#else
#warning no content included from lisp_types.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))
/* Imported API files */
#ifndef vl_api_version
#include <vnet/interface_types.api.h>
#include <vnet/ethernet/ethernet_types.api.h>
#include <vnet/ip/ip_types.api.h>
#endif

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
#endif
/****** Message names ******/

#ifdef vl_msg_name
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_lisp_types 
#endif
/****** Typedefs ******/

#ifdef vl_typedefs
#include "lisp_types.api_types.h"
#endif
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lisp_types_printfun_types
#define included_lisp_types_printfun_types

static inline u8 *format_vl_api_local_locator_t (u8 *s, va_list * args)
{
    vl_api_local_locator_t *a = va_arg (*args, vl_api_local_locator_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Usw_if_index: %U", format_white_space, indent, format_vl_api_interface_index_t, &a->sw_if_index, indent);
    s = format(s, "\n%Upriority: %u", format_white_space, indent, a->priority);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    return s;
}

static inline u8 *format_vl_api_remote_locator_t (u8 *s, va_list * args)
{
    vl_api_remote_locator_t *a = va_arg (*args, vl_api_remote_locator_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Upriority: %u", format_white_space, indent, a->priority);
    s = format(s, "\n%Uweight: %u", format_white_space, indent, a->weight);
    s = format(s, "\n%Uip_address: %U", format_white_space, indent, format_vl_api_address_t, &a->ip_address, indent);
    return s;
}

static inline u8 *format_vl_api_eid_type_t (u8 *s, va_list * args)
{
    vl_api_eid_type_t *a = va_arg (*args, vl_api_eid_type_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "EID_TYPE_API_PREFIX");
    case 1:
        return format(s, "EID_TYPE_API_MAC");
    case 2:
        return format(s, "EID_TYPE_API_NSH");
    }
    return s;
}

static inline u8 *format_vl_api_nsh_t (u8 *s, va_list * args)
{
    vl_api_nsh_t *a = va_arg (*args, vl_api_nsh_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uspi: %u", format_white_space, indent, a->spi);
    s = format(s, "\n%Usi: %u", format_white_space, indent, a->si);
    return s;
}

static inline u8 *format_vl_api_eid_address_t (u8 *s, va_list * args)
{
    vl_api_eid_address_t *a = va_arg (*args, vl_api_eid_address_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uprefix: %U", format_white_space, indent, format_vl_api_prefix_t, &a->prefix, indent);
    s = format(s, "\n%Umac: %U", format_white_space, indent, format_vl_api_mac_address_t, &a->mac, indent);
    s = format(s, "\n%Unsh: %U", format_white_space, indent, format_vl_api_nsh_t, &a->nsh, indent);
    return s;
}

static inline u8 *format_vl_api_eid_t (u8 *s, va_list * args)
{
    vl_api_eid_t *a = va_arg (*args, vl_api_eid_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Utype: %U", format_white_space, indent, format_vl_api_eid_type_t, &a->type, indent);
    s = format(s, "\n%Uaddress: %U", format_white_space, indent, format_vl_api_eid_address_t, &a->address, indent);
    return s;
}

static inline u8 *format_vl_api_hmac_key_id_t (u8 *s, va_list * args)
{
    vl_api_hmac_key_id_t *a = va_arg (*args, vl_api_hmac_key_id_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    switch(*a) {
    case 0:
        return format(s, "KEY_ID_API_HMAC_NO_KEY");
    case 1:
        return format(s, "KEY_ID_API_HMAC_SHA_1_96");
    case 2:
        return format(s, "KEY_ID_API_HMAC_SHA_256_128");
    }
    return s;
}

static inline u8 *format_vl_api_hmac_key_t (u8 *s, va_list * args)
{
    vl_api_hmac_key_t *a = va_arg (*args, vl_api_hmac_key_t *);
    u32 indent __attribute__((unused)) = va_arg (*args, u32);
    int i __attribute__((unused));
    indent += 2;
    s = format(s, "\n%Uid: %U", format_white_space, indent, format_vl_api_hmac_key_id_t, &a->id, indent);
    s = format(s, "\n%Ukey: %U", format_white_space, indent, format_hex_bytes, a, 64);
    return s;
}


#endif
#endif /* vl_printfun_types */
/****** Print functions *****/
#ifdef vl_printfun
#ifndef included_lisp_types_printfun
#define included_lisp_types_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif


#endif
#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun
#ifndef included_lisp_types_endianfun
#define included_lisp_types_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

static inline void vl_api_local_locator_t_endian (vl_api_local_locator_t *a)
{
    int i __attribute__((unused));
    vl_api_interface_index_t_endian(&a->sw_if_index);
    /* a->priority = a->priority (no-op) */
    /* a->weight = a->weight (no-op) */
}

static inline void vl_api_remote_locator_t_endian (vl_api_remote_locator_t *a)
{
    int i __attribute__((unused));
    /* a->priority = a->priority (no-op) */
    /* a->weight = a->weight (no-op) */
    vl_api_address_t_endian(&a->ip_address);
}

static inline void vl_api_eid_type_t_endian (vl_api_eid_type_t *a)
{
    int i __attribute__((unused));
    /* a->eid_type = a->eid_type (no-op) */
}

static inline void vl_api_nsh_t_endian (vl_api_nsh_t *a)
{
    int i __attribute__((unused));
    a->spi = clib_net_to_host_u32(a->spi);
    /* a->si = a->si (no-op) */
}

static inline void vl_api_eid_address_t_endian (vl_api_eid_address_t *a)
{
    int i __attribute__((unused));
    vl_api_prefix_t_endian(&a->prefix);
    vl_api_mac_address_t_endian(&a->mac);
    vl_api_nsh_t_endian(&a->nsh);
}

static inline void vl_api_eid_t_endian (vl_api_eid_t *a)
{
    int i __attribute__((unused));
    vl_api_eid_type_t_endian(&a->type);
    vl_api_eid_address_t_endian(&a->address);
}

static inline void vl_api_hmac_key_id_t_endian (vl_api_hmac_key_id_t *a)
{
    int i __attribute__((unused));
    /* a->hmac_key_id = a->hmac_key_id (no-op) */
}

static inline void vl_api_hmac_key_t_endian (vl_api_hmac_key_t *a)
{
    int i __attribute__((unused));
    vl_api_hmac_key_id_t_endian(&a->id);
    /* a->key = a->key (no-op) */
}


#endif
#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(lisp_types.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(lisp_types.api, 0xab74455)

#endif

