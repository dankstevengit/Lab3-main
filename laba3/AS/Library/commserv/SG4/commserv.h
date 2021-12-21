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

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define TYPE_SERIAL 0U
 #define TYPE_CAN 1U
 #define TYPE_ETHERNET 2U
#else
 _IEC_CONST unsigned char TYPE_SERIAL = 0U;
 _IEC_CONST unsigned char TYPE_CAN = 1U;
 _IEC_CONST unsigned char TYPE_ETHERNET = 2U;
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
void INAcreate(struct INAcreate* inst);
void INAdelete(struct INAdelete* inst);
void INADevOpen(struct INADevOpen* inst);
void INADevOpenEx(struct INADevOpenEx* inst);
void INADevClose(struct INADevClose* inst);


#ifdef __cplusplus
};
#endif
#endif /* _COMMSERV_ */

                                                           
