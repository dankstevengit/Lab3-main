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
 #define TYPE_ETHERNET 2U
 #define TYPE_CAN 1U
 #define TYPE_SERIAL 0U
#else
 _IEC_CONST unsigned char TYPE_ETHERNET = 2U;
 _IEC_CONST unsigned char TYPE_CAN = 1U;
 _IEC_CONST unsigned char TYPE_SERIAL = 0U;
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



/* Prototyping of functions and function blocks */
void INAcreate(struct INAcreate* inst);
void INAdelete(struct INAdelete* inst);


#ifdef __cplusplus
};
#endif
#endif /* _COMMSERV_ */

                                                           
