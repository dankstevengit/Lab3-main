/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _IOCTRL_
#define _IOCTRL_
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
 #define ioERR_CYCLIC_DISABLED 21013U
 #define ioERR_CYCLIC_ENABLED 21012U
 #define ioERR_WRONG_CPU 21010U
 #define ioERR_LOOPMODE 21011U
#else
 _IEC_CONST unsigned short ioERR_CYCLIC_DISABLED = 21013U;
 _IEC_CONST unsigned short ioERR_CYCLIC_ENABLED = 21012U;
 _IEC_CONST unsigned short ioERR_WRONG_CPU = 21010U;
 _IEC_CONST unsigned short ioERR_LOOPMODE = 21011U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct IOCTSingleCycle
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short laststatus;
	unsigned char warmcnt;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IOCTSingleCycle_typ;



/* Prototyping of functions and function blocks */
void IOCTSingleCycle(struct IOCTSingleCycle* inst);
unsigned short IOCTSwHSTC();
unsigned short IOCTSw10ms();
unsigned short IOCTEnableCyclic();
unsigned short IOCTDisableCyclic();


#ifdef __cplusplus
};
#endif
#endif /* _IOCTRL_ */

                                                           
