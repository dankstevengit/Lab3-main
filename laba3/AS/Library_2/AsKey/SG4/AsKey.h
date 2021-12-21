/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASKEY_
#define _ASKEY_
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
 #define KEYERR_BUFFER_SIZE 33201U
 #define KEYERR_INVALID_PARAMETER 33200U
 #define KEY_PVI 10002U
 #define KEY_AC14x 140U
 #define KEY_AR000 0U
 #define KEY_AR010 10U
 #define KEY_AR102 102U
 #define KEY_AR105 105U
 #define KEY_AR106 106U
 #define KEY_ARNC0 10001U
 #define KEY_BR_IPC 10000U
 #define KEY_WEBSERVER 10003U
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST unsigned long KEYERR_BUFFER_SIZE;
 _GLOBAL_CONST unsigned long KEYERR_INVALID_PARAMETER;
 _GLOBAL_CONST unsigned long KEY_PVI;
 _GLOBAL_CONST unsigned long KEY_AC14x;
 _GLOBAL_CONST unsigned long KEY_AR000;
 _GLOBAL_CONST unsigned long KEY_AR010;
 _GLOBAL_CONST unsigned long KEY_AR102;
 _GLOBAL_CONST unsigned long KEY_AR105;
 _GLOBAL_CONST unsigned long KEY_AR106;
 _GLOBAL_CONST unsigned long KEY_ARNC0;
 _GLOBAL_CONST unsigned long KEY_BR_IPC;
 _GLOBAL_CONST unsigned long KEY_WEBSERVER;
#endif







/* Prototyping of functions and function blocks */
_BUR_PUBLIC plcbit KeyGetSecurityInfo(unsigned long type);
_BUR_PUBLIC unsigned short KeyGetUserInfo(unsigned long pBuffer, unsigned long bufferSize);


#ifdef __cplusplus
};
#endif
#endif /* _ASKEY_ */

