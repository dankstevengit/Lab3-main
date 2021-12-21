/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _CANIO_
#define _CANIO_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Datatypes and datatypes of function blocks */
typedef struct CANIOcmd
{
	/* VAR_INPUT (analog) */
	unsigned char busnr;
	unsigned char nodenr;
	unsigned long cmd;
	unsigned long res;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long fcb_ptr;
	unsigned long fcb_cnt;
	unsigned long tiotick;
	unsigned long node_ptr;
	unsigned char local_flag;
	unsigned char first_flag;
	unsigned char state;
	unsigned char pp_ix;
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANIOcmd_typ;

typedef struct CANIOexc
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char exctyp;
	unsigned char busnr;
	unsigned char nodenr;
	unsigned short errcode;
	unsigned short addcode;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned char first_flag;
	unsigned char state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANIOexc_typ;



/* Prototyping of functions and function blocks */
void CANIOcmd(struct CANIOcmd* inst);
void CANIOexc(struct CANIOexc* inst);


#ifdef __cplusplus
};
#endif
#endif /* _CANIO_ */

