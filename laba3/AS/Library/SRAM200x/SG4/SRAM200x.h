/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _SRAM200X_
#define _SRAM200X_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <BrSystem.h>
#include <runtime.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Datatypes and datatypes of function blocks */
typedef struct SRAMPut
{
	/* VAR_INPUT (analog) */
	unsigned long offset;
	unsigned long len;
	unsigned long address;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char name[8];
	struct HWInfo HW_Info;
	unsigned short error_sem;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SRAMPut_typ;

typedef struct SRAMGet
{
	/* VAR_INPUT (analog) */
	unsigned long offset;
	unsigned long len;
	unsigned long address;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char name[8];
	struct HWInfo HW_Info;
	unsigned short error_sem;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SRAMGet_typ;

typedef struct SRAMClear
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char name[8];
	struct HWInfo HW_Info;
	unsigned char page;
	struct SysInfo SYS_Info;
	unsigned char init_count_old;
	unsigned short error_sem;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit sema;
} SRAMClear_typ;



/* Prototyping of functions and function blocks */
void SRAMPut(struct SRAMPut* inst);
void SRAMGet(struct SRAMGet* inst);
void SRAMClear(struct SRAMClear* inst);


#ifdef __cplusplus
};
#endif
#endif /* _SRAM200X_ */

                                                           
