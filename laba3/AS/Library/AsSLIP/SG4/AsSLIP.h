/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASSLIP_
#define _ASSLIP_
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
 #define slipERR_INVALID_DEVICE 31950U
#else
 _IEC_CONST unsigned short slipERR_INVALID_DEVICE = 31950U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct slipPARAMETER_typ
{	unsigned long pHostAddr;
	unsigned long pPeerAddr;
	unsigned long mtu;
	plcbit compAllow;
	plcbit compEnable;
} slipPARAMETER_typ;

typedef struct SLIPStart
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pDeviceParam;
	unsigned long pSlipParam;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SLIPStart_typ;

typedef struct SLIPStop
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SLIPStop_typ;



/* Prototyping of functions and function blocks */
void SLIPStart(struct SLIPStart* inst);
void SLIPStop(struct SLIPStop* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASSLIP_ */

                                                           
