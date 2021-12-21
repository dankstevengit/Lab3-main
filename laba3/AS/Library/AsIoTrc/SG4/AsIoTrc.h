/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASIOTRC_
#define _ASIOTRC_
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
 #define asiotrcERR_SIO 32071U
#else
 _IEC_CONST unsigned short asiotrcERR_SIO = 32071U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct AsIoTrcGet
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pBuffer;
	unsigned long bufferLen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long traceCnt;
	signed long timeStamp;
	signed long bytes;
	/* VAR (analog) */
	unsigned long i_cache;
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsIoTrcGet_typ;



/* Prototyping of functions and function blocks */
void AsIoTrcGet(struct AsIoTrcGet* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASIOTRC_ */

                                                           
