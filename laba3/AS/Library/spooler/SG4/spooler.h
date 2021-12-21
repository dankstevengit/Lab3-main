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

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
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
 _IEC_CONST unsigned char spSLAVE_NO_EXP4 = 4U;
 _IEC_CONST unsigned char spSLAVE_NO_EXP3 = 3U;
 _IEC_CONST unsigned char spSLAVE_NO_EXP2 = 2U;
 _IEC_CONST unsigned char spSLAVE_NO_EXP1 = 1U;
 _IEC_CONST unsigned char spSLAVE_NO_BASIS = 0U;
 _IEC_CONST unsigned char spMASTER_NO_BASIS = 1U;
 _IEC_CONST unsigned char spIO_TYPE_2010_RIO = 2U;
 _IEC_CONST unsigned char spIO_TYPE_2010_IO = 0U;
 _IEC_CONST unsigned char spIO_TYPE_2005_RIO = 3U;
 _IEC_CONST unsigned char spIO_TYPE_2005_IO = 1U;
 _IEC_CONST unsigned short spERR_MSP_NOTIMPL = 6610U;
 _IEC_CONST unsigned short spERR_SPOOL_IOTYP = 6627U;
 _IEC_CONST unsigned short spERR_SPOOL_SYSBUS_ADR = 6628U;
 _IEC_CONST unsigned short spERR_SPOOL_REMOTE_ADR = 6629U;
 _IEC_CONST unsigned short spERR_SPOOL_RIOTIMEOUT = 6631U;
 _IEC_CONST unsigned short spERR_SPOOL_MAX_INIT = 6632U;
 _IEC_CONST unsigned short spERR_SPOOL_NOMORE_READ = 6635U;
 _IEC_CONST unsigned short spERR_SPOOL_MODULADR = 6637U;
 _IEC_CONST unsigned short spERR_SPOOL_QUEUE = 6638U;
 _IEC_CONST unsigned short spERR_SPOOL_MASTER_NO = 6640U;
 _IEC_CONST unsigned short spERR_SPOOL_SLAVE_NO = 6641U;
 _IEC_CONST unsigned short spERR_SSP_NORESPONSE = 6650U;
 _IEC_CONST unsigned short spERR_SSP_SLREADY = 6655U;
 _IEC_CONST unsigned short spERR_SSP_SLERROR = 6657U;
 _IEC_CONST unsigned short spERR_NOMORE_SPOOL = 6660U;
 _IEC_CONST unsigned short spERR_LONG_IRBOOT = 6662U;
 _IEC_CONST unsigned short spERR_SPOOLER_WORKING = 6666U;
 _IEC_CONST unsigned short spERR_SPOOL_IOIMAGE = 6670U;
 _IEC_CONST unsigned short spERR_SPF_RESET = 6699U;
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



/* Prototyping of functions and function blocks */
void SPExUpData(struct SPExUpData* inst);
void SPExDownData(struct SPExDownData* inst);
void SPExUpModule(struct SPExUpModule* inst);
void SPExDownModule(struct SPExDownModule* inst);


#ifdef __cplusplus
};
#endif
#endif /* _SPOOLER_ */

                                                           
