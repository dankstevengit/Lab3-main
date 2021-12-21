/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _IOCONFIG_
#define _IOCONFIG_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <io_lib.h>
#include <runtime.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Datatypes and datatypes of function blocks */
typedef struct iocIOParam
{	unsigned char io_type;
	unsigned char master_nr;
	unsigned char slave_nr;
	unsigned char module_adr;
	unsigned char intern_off;
	unsigned char mode;
	unsigned char data_len;
	unsigned char reserve;
	unsigned long data_adr;
} iocIOParam;

typedef struct IOCGeneral
{
	/* VAR_INPUT (analog) */
	unsigned char IO_type;
	unsigned char Slave_nr;
	unsigned char Slot;
	unsigned char Offset;
	unsigned char DataLen;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char mode;
	signed long state;
	signed long old_state;
	struct IO_alloc IOalloc;
	struct IO_mphydef IOmphydef;
	struct IO_mphydef IOmphydefc;
	struct IO_data IOdata;
	struct IO_free IOfree;
	struct IO_ptest IOptest;
	struct iocIOParam IOPstructure;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ReadWrite;
	plcbit DataState;
} IOCGeneral_typ;

typedef struct IOC2003
{
	/* VAR_INPUT (analog) */
	unsigned char Slot;
	unsigned char SubSlot;
	unsigned char ConfigWord;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char intern_off;
	unsigned char mode;
	signed long state;
	signed long old_state;
	struct IO_alloc IOalloc;
	struct IO_mphydef IOmphydef;
	struct IO_mphydef IOmphydefc;
	struct IO_data IOdata;
	struct IO_free IOfree;
	struct IO_ptest IOptest;
	struct iocIOParam IOPstructure;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ReadWrite;
} IOC2003_typ;



/* Prototyping of functions and function blocks */
void IOCGeneral(struct IOCGeneral* inst);
void IOC2003(struct IOC2003* inst);


#ifdef __cplusplus
};
#endif
#endif /* _IOCONFIG_ */

                                                           
