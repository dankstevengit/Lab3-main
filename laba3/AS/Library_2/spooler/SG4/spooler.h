/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _SPOOLER_
#define _SPOOLER_
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
 #define spSLAVE_NO_EXP4 4U
 #define spSLAVE_NO_EXP3 3U
 #define spSLAVE_NO_EXP2 2U
 #define spSLAVE_NO_EXP1 1U
 #define spSLAVE_NO_BASIS 0U
 #define spMASTER_NO_BASIS 1U
 #define spIO_TYPE_2010_RIO 2U
 #define spIO_TYPE_2010_IO 0U
 #define spIO_TYPE_2005_RIO 3U
 #define spIO_TYPE_2005_IO 1U
 #define spERR_MSP_NOTIMPL 6610U
 #define spERR_SPOOL_IOTYP 6627U
 #define spERR_SPOOL_SYSBUS_ADR 6628U
 #define spERR_SPOOL_REMOTE_ADR 6629U
 #define spERR_SPOOL_RIOTIMEOUT 6631U
 #define spERR_SPOOL_MAX_INIT 6632U
 #define spERR_SPOOL_NOMORE_READ 6635U
 #define spERR_SPOOL_MODULADR 6637U
 #define spERR_SPOOL_QUEUE 6638U
 #define spERR_SPOOL_MASTER_NO 6640U
 #define spERR_SPOOL_SLAVE_NO 6641U
 #define spERR_SSP_NORESPONSE 6650U
 #define spERR_SSP_SLREADY 6655U
 #define spERR_SSP_SLERROR 6657U
 #define spERR_NOMORE_SPOOL 6660U
 #define spERR_LONG_IRBOOT 6662U
 #define spERR_SPOOLER_WORKING 6666U
 #define spERR_SPOOL_IOIMAGE 6670U
 #define spERR_SPF_RESET 6699U
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST unsigned char spSLAVE_NO_EXP4;
 _GLOBAL_CONST unsigned char spSLAVE_NO_EXP3;
 _GLOBAL_CONST unsigned char spSLAVE_NO_EXP2;
 _GLOBAL_CONST unsigned char spSLAVE_NO_EXP1;
 _GLOBAL_CONST unsigned char spSLAVE_NO_BASIS;
 _GLOBAL_CONST unsigned char spMASTER_NO_BASIS;
 _GLOBAL_CONST unsigned char spIO_TYPE_2010_RIO;
 _GLOBAL_CONST unsigned char spIO_TYPE_2010_IO;
 _GLOBAL_CONST unsigned char spIO_TYPE_2005_RIO;
 _GLOBAL_CONST unsigned char spIO_TYPE_2005_IO;
 _GLOBAL_CONST unsigned short spERR_MSP_NOTIMPL;
 _GLOBAL_CONST unsigned short spERR_SPOOL_IOTYP;
 _GLOBAL_CONST unsigned short spERR_SPOOL_SYSBUS_ADR;
 _GLOBAL_CONST unsigned short spERR_SPOOL_REMOTE_ADR;
 _GLOBAL_CONST unsigned short spERR_SPOOL_RIOTIMEOUT;
 _GLOBAL_CONST unsigned short spERR_SPOOL_MAX_INIT;
 _GLOBAL_CONST unsigned short spERR_SPOOL_NOMORE_READ;
 _GLOBAL_CONST unsigned short spERR_SPOOL_MODULADR;
 _GLOBAL_CONST unsigned short spERR_SPOOL_QUEUE;
 _GLOBAL_CONST unsigned short spERR_SPOOL_MASTER_NO;
 _GLOBAL_CONST unsigned short spERR_SPOOL_SLAVE_NO;
 _GLOBAL_CONST unsigned short spERR_SSP_NORESPONSE;
 _GLOBAL_CONST unsigned short spERR_SSP_SLREADY;
 _GLOBAL_CONST unsigned short spERR_SSP_SLERROR;
 _GLOBAL_CONST unsigned short spERR_NOMORE_SPOOL;
 _GLOBAL_CONST unsigned short spERR_LONG_IRBOOT;
 _GLOBAL_CONST unsigned short spERR_SPOOLER_WORKING;
 _GLOBAL_CONST unsigned short spERR_SPOOL_IOIMAGE;
 _GLOBAL_CONST unsigned short spERR_SPF_RESET;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct SPExUpData
{
	/* VAR_INPUT (analog) */
	unsigned long pMode;
	unsigned long pDevice;
	unsigned long pIP;
	unsigned long pCPU;
	unsigned long data_len;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char first;
	unsigned long komm;
	unsigned long maxcount;
	unsigned long count;
	unsigned long sp_dest;
	unsigned long sp_kommadr;
	unsigned long sp_mode;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPExUpData_typ;

typedef struct SPExDownData
{
	/* VAR_INPUT (analog) */
	unsigned long pMode;
	unsigned long pDevice;
	unsigned long pIP;
	unsigned long pCPU;
	unsigned long data_len;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char first;
	unsigned long komm;
	unsigned long maxcount;
	unsigned long count;
	unsigned long sp_dest;
	unsigned long sp_kommadr;
	unsigned long sp_mode;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPExDownData_typ;

typedef struct SPExUpModule
{
	/* VAR_INPUT (analog) */
	unsigned long pMode;
	unsigned long pDevice;
	unsigned long pName;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pCPU;
	unsigned long pData;
	unsigned long module_len;
	/* VAR (analog) */
	unsigned char first;
	unsigned long komm;
	unsigned long moadr;
	unsigned long s_laenge;
	unsigned long maxcount;
	unsigned long count;
	unsigned long sp_dest;
	unsigned long sp_kommadr;
	unsigned long sp_mode;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPExUpModule_typ;

typedef struct SPExDownModule
{
	/* VAR_INPUT (analog) */
	unsigned long pMode;
	unsigned long pDevice;
	unsigned long pName;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char first;
	unsigned long komm;
	unsigned long moadr;
	unsigned long maxcount;
	unsigned long count;
	unsigned long sp_dest;
	unsigned long sp_kommadr;
	unsigned long sp_mode;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPExDownModule_typ;

typedef struct SPTimeOut
{
	/* VAR_INPUT (analog) */
	unsigned char timeout;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPTimeOut_typ;

typedef struct SPUpData
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char mode;
	unsigned long ip_adr;
	unsigned long cpu_adr;
	unsigned long data_len;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char first;
	unsigned long komm;
	unsigned long maxcount;
	unsigned long count;
	unsigned long sp_dest;
	unsigned long sp_kommadr;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPUpData_typ;

typedef struct SPDownData
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char mode;
	unsigned long ip_adr;
	unsigned long cpu_adr;
	unsigned long data_len;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char first;
	unsigned long komm;
	unsigned long maxcount;
	unsigned long count;
	unsigned long sp_dest;
	unsigned long sp_kommadr;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPDownData_typ;

typedef struct SPUpModule
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char mode;
	unsigned long pName;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long cpu_adr;
	unsigned long data_adr;
	unsigned long modullen;
	/* VAR (analog) */
	unsigned char first;
	unsigned long komm;
	unsigned long moadr;
	unsigned long s_laenge;
	unsigned long maxcount;
	unsigned long count;
	unsigned long sp_dest;
	unsigned long sp_kommadr;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPUpModule_typ;

typedef struct SPDownModule
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char mode;
	unsigned long pName;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char first;
	unsigned long komm;
	unsigned long moadr;
	unsigned long maxcount;
	unsigned long count;
	unsigned long sp_dest;
	unsigned long sp_kommadr;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SPDownModule_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void SPExUpData(struct SPExUpData* inst);
_BUR_PUBLIC void SPExDownData(struct SPExDownData* inst);
_BUR_PUBLIC void SPExUpModule(struct SPExUpModule* inst);
_BUR_PUBLIC void SPExDownModule(struct SPExDownModule* inst);
_BUR_PUBLIC void SPTimeOut(struct SPTimeOut* inst);
_BUR_PUBLIC void SPUpData(struct SPUpData* inst);
_BUR_PUBLIC void SPDownData(struct SPDownData* inst);
_BUR_PUBLIC void SPUpModule(struct SPUpModule* inst);
_BUR_PUBLIC void SPDownModule(struct SPDownModule* inst);


#ifdef __cplusplus
};
#endif
#endif /* _SPOOLER_ */

