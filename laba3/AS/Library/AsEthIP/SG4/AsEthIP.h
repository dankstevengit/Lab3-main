/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASETHIP_
#define _ASETHIP_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <AsARCfg.h>
#include <brsystem.h>
#include <Convert.h>
#include <DataObj.h>
#include <runtime.h>
#include <sys_lib.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Datatypes and datatypes of function blocks */
typedef struct EIPExit
{
	/* VAR_INPUT (analog) */
	unsigned long handle;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} EIPExit_typ;

typedef struct EIPCyclic
{
	/* VAR_INPUT (analog) */
	unsigned long handle;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} EIPCyclic_typ;

typedef struct EIPInit
{
	/* VAR_INPUT (analog) */
	unsigned long pconfig;
	/* VAR_OUTPUT (analog) */
	plcstring extstatus[81];
	unsigned long handle;
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} EIPInit_typ;



/* Prototyping of functions and function blocks */
void EIPExit(struct EIPExit* inst);
void EIPCyclic(struct EIPCyclic* inst);
void EIPInit(struct EIPInit* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASETHIP_ */

                                                           
