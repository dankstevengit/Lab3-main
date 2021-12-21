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

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define KEY_WEBSERVER 10003U
 #define KEY_BR_IPC 10000U
 #define KEY_ARNC0 10001U
 #define KEY_AR106 106U
 #define KEY_AR105 105U
 #define KEY_AR102 102U
 #define KEY_AR010 10U
 #define KEY_AR000 0U
 #define KEY_AC14x 140U
 #define KEY_PVI 10002U
 #define KEYERR_INVALID_PARAMETER 33200U
 #define KEYERR_BUFFER_SIZE 33201U
#else
 _IEC_CONST unsigned long KEY_WEBSERVER = 10003U;
 _IEC_CONST unsigned long KEY_BR_IPC = 10000U;
 _IEC_CONST unsigned long KEY_ARNC0 = 10001U;
 _IEC_CONST unsigned long KEY_AR106 = 106U;
 _IEC_CONST unsigned long KEY_AR105 = 105U;
 _IEC_CONST unsigned long KEY_AR102 = 102U;
 _IEC_CONST unsigned long KEY_AR010 = 10U;
 _IEC_CONST unsigned long KEY_AR000 = 0U;
 _IEC_CONST unsigned long KEY_AC14x = 140U;
 _IEC_CONST unsigned long KEY_PVI = 10002U;
 _IEC_CONST unsigned long KEYERR_INVALID_PARAMETER = 33200U;
 _IEC_CONST unsigned long KEYERR_BUFFER_SIZE = 33201U;
#endif







/* Prototyping of functions and function blocks */
plcbit KeyGetSecurityInfo(unsigned long type);
unsigned short KeyGetUserInfo(unsigned long pBuffer, unsigned long bufferSize);


#ifdef __cplusplus
};
#endif
#endif /* _ASKEY_ */

                                                                     
