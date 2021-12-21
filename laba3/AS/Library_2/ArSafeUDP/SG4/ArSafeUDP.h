/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ARSAFEUDP_
#define _ARSAFEUDP_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define arSAFEUDP_ERR_IP_IN_USE (-1070583903)
 #define arSAFEUDP_ERR_IP_INVALID (-1070583902)
 #define arSAFEUDP_ERR_TUNNEL_ENABLED (-1070583901)
 #define arSAFEUDP_ERR_DEV_NOT_FOUND (-1070583900)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long arSAFEUDP_ERR_IP_IN_USE;
 _GLOBAL_CONST signed long arSAFEUDP_ERR_IP_INVALID;
 _GLOBAL_CONST signed long arSAFEUDP_ERR_TUNNEL_ENABLED;
 _GLOBAL_CONST signed long arSAFEUDP_ERR_DEV_NOT_FOUND;
#endif







/* Prototyping of functions and function blocks */
_BUR_PUBLIC signed long ArSafeUDPEnable(plcstring* DeviceName);
_BUR_PUBLIC signed long ArSafeUDPDisable(plcstring* DeviceName);
_BUR_PUBLIC signed long ArSafeUDPSetIP(plcstring* DeviceName, plcstring* IPAddress);


#ifdef __cplusplus
};
#endif
#endif /* _ARSAFEUDP_ */

