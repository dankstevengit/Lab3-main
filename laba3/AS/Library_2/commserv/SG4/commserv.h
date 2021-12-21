/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _COMMSERV_
#define _COMMSERV_
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
 #define TYPE_ETHERNET 2U
 #define TYPE_CAN 1U
 #define TYPE_SERIAL 0U
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST unsigned char TYPE_ETHERNET;
 _GLOBAL_CONST unsigned char TYPE_CAN;
 _GLOBAL_CONST unsigned char TYPE_SERIAL;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct INAcreate
{
	/* VAR_INPUT (analog) */
	unsigned long pName;
	unsigned long size;
	unsigned long count;
	unsigned char mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ident;
	/* VAR_INPUT (digital) */
	plcbit enable;
} INAcreate_typ;

typedef struct INAdelete
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} INAdelete_typ;

typedef struct INADevOpen
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char state;
	unsigned short internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} INADevOpen_typ;

typedef struct INADevOpenEx
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pDeviceParam;
	unsigned char type;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} INADevOpenEx_typ;

typedef struct INADevClose
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char state;
	unsigned short internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} INADevClose_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void INAcreate(struct INAcreate* inst);
_BUR_PUBLIC void INAdelete(struct INAdelete* inst);
_BUR_PUBLIC void INADevOpen(struct INADevOpen* inst);
_BUR_PUBLIC void INADevOpenEx(struct INADevOpenEx* inst);
_BUR_PUBLIC void INADevClose(struct INADevClose* inst);


#ifdef __cplusplus
};
#endif
#endif /* _COMMSERV_ */

