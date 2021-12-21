/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _PPDPR_
#define _PPDPR_
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
typedef struct PP_trigger
{
	/* VAR_INPUT (analog) */
	unsigned long pp_ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} PP_trigger_typ;

typedef struct PPGetSharedAddress
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pDpr;
	/* VAR_INPUT (digital) */
	plcbit enable;
} PPGetSharedAddress_typ;

typedef struct PPConnect
{
	/* VAR_INPUT (analog) */
	unsigned char ppmodadr;
	unsigned long dprlen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ident;
	/* VAR_INPUT (digital) */
	plcbit enable;
} PPConnect_typ;

typedef struct PP_ident
{
	/* VAR_INPUT (analog) */
	unsigned short module_no;
	/* VAR_OUTPUT (analog) */
	unsigned long pp_ident;
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} PP_ident_typ;

typedef struct PP_ready
{
	/* VAR_INPUT (analog) */
	unsigned long pp_ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} PP_ready_typ;



/* Prototyping of functions and function blocks */
void PP_trigger(struct PP_trigger* inst);
void PPGetSharedAddress(struct PPGetSharedAddress* inst);
void PPConnect(struct PPConnect* inst);
void PP_ident(struct PP_ident* inst);
void PP_ready(struct PP_ready* inst);


#ifdef __cplusplus
};
#endif
#endif /* _PPDPR_ */

                                                           
