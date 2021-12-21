/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _NET2000_
#define _NET2000_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct NET2PV
{	unsigned short PvLength;
	signed char PvName[32];
} NET2PV;

typedef struct NET2EVT
{	unsigned short nvars;
} NET2EVT;

typedef struct NET2CAN
{	unsigned char nnodes;
	unsigned short basis;
} NET2CAN;

typedef struct NET2CONFIGURATION
{	unsigned char station;
	signed char task_class;
	unsigned char retry;
	unsigned char master;
	unsigned long device;
	unsigned long mode;
	unsigned short ixtabsize;
	unsigned short t_response;
	unsigned short t_cross;
	unsigned long l7length;
	unsigned short status;
	unsigned char reset;
	unsigned char freeze;
	unsigned char close;
	struct NET2CAN CAN;
	struct NET2EVT EVT;
} NET2CONFIGURATION;

typedef struct NET2write
{
	/* VAR_INPUT (analog) */
	signed long destadr;
	unsigned long pvlist;
	unsigned short pvnum;
	unsigned long dataarea;
	unsigned short datlng;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long record;
	unsigned long reqcnt;
	unsigned short rqdatlng;
	/* VAR (analog) */
	plcstring InternalData[176];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ok;
} NET2write_typ;

typedef struct NET2read
{
	/* VAR_INPUT (analog) */
	signed long destadr;
	unsigned long pvlist;
	unsigned short pvnum;
	unsigned long dataarea;
	unsigned short datlng;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long record;
	unsigned long reqcnt;
	unsigned short rqdatlng;
	/* VAR (analog) */
	plcstring InternalData[176];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ok;
} NET2read_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void NET2write(struct NET2write* inst);
_BUR_PUBLIC void NET2read(struct NET2read* inst);


#ifdef __cplusplus
};
#endif
#endif /* _NET2000_ */

