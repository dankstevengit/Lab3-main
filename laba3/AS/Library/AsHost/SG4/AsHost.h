/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASHOST_
#define _ASHOST_
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
 #define ERR_ASHOST_RESOLV_NAME 29755U
 #define ERR_ASHOST_RESOLV_ADDR 29754U
 #define ERR_ASHOST_PARAM_NAME 29753U
 #define ERR_ASHOST_PARAM_BUFLNG 29752U
 #define ERR_ASHOST_PARAM_ADDR 29751U
 #define ERR_ASHOST_MANAGER 29750U
#else
 _IEC_CONST unsigned short ERR_ASHOST_RESOLV_NAME = 29755U;
 _IEC_CONST unsigned short ERR_ASHOST_RESOLV_ADDR = 29754U;
 _IEC_CONST unsigned short ERR_ASHOST_PARAM_NAME = 29753U;
 _IEC_CONST unsigned short ERR_ASHOST_PARAM_BUFLNG = 29752U;
 _IEC_CONST unsigned short ERR_ASHOST_PARAM_ADDR = 29751U;
 _IEC_CONST unsigned short ERR_ASHOST_MANAGER = 29750U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct ASHOST_LOCAL_OBJ
{	unsigned short StateMan;
	unsigned short ErrMan;
	unsigned long Init;
} ASHOST_LOCAL_OBJ;

typedef struct HostByName
{
	/* VAR_INPUT (analog) */
	unsigned long pName;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long address;
	/* VAR (analog) */
	struct ASHOST_LOCAL_OBJ Obj;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HostByName_typ;

typedef struct HostByAddress
{
	/* VAR_INPUT (analog) */
	unsigned long address;
	unsigned long pName;
	unsigned long buflng;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	struct ASHOST_LOCAL_OBJ Obj;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HostByAddress_typ;



/* Prototyping of functions and function blocks */
void HostByName(struct HostByName* inst);
void HostByAddress(struct HostByAddress* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASHOST_ */

                                                           
