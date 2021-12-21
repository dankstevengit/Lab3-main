/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASNETX_
#define _ASNETX_
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
 #define netxERR_DEVICE 35001U
 #define netxERR_IDENT 35002U
 #define netxERR_DRV_OPEN 35003U
 #define netxERR_SYSDEV_OPEN 35004U
 #define netxERR_CFG_MODULE 35005U
 #define netxERR_CFG_DOWNLOAD 35006U
 #define netxERR_CHANNEL_OPEN 35007U
 #define netxERR_RESET 35008U
 #define netxERR_SET_STATE 35009U
 #define netxERR_BUS_STATE 35010U
 #define netxERR_IO_READ 35011U
 #define netxERR_IO_WRITE 35012U
 #define netxERR_PACKET 35013U
 #define netxERR_STACK 35014U
 #define netxSTART_BY_USER 1U
#else
 _IEC_CONST unsigned short netxERR_DEVICE = 35001U;
 _IEC_CONST unsigned short netxERR_IDENT = 35002U;
 _IEC_CONST unsigned short netxERR_DRV_OPEN = 35003U;
 _IEC_CONST unsigned short netxERR_SYSDEV_OPEN = 35004U;
 _IEC_CONST unsigned short netxERR_CFG_MODULE = 35005U;
 _IEC_CONST unsigned short netxERR_CFG_DOWNLOAD = 35006U;
 _IEC_CONST unsigned short netxERR_CHANNEL_OPEN = 35007U;
 _IEC_CONST unsigned short netxERR_RESET = 35008U;
 _IEC_CONST unsigned short netxERR_SET_STATE = 35009U;
 _IEC_CONST unsigned short netxERR_BUS_STATE = 35010U;
 _IEC_CONST unsigned short netxERR_IO_READ = 35011U;
 _IEC_CONST unsigned short netxERR_IO_WRITE = 35012U;
 _IEC_CONST unsigned short netxERR_PACKET = 35013U;
 _IEC_CONST unsigned short netxERR_STACK = 35014U;
 _IEC_CONST unsigned long netxSTART_BY_USER = 1U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct netxConfig
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pConfig;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ident;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} netxConfig_typ;

typedef struct netxXConfig
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pConfig;
	unsigned long flags;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ident;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} netxXConfig_typ;

typedef struct netxStart
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} netxStart_typ;

typedef struct netxStop
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} netxStop_typ;

typedef struct netxIORdWr
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long pIn;
	unsigned long inArea;
	unsigned long inOffset;
	unsigned long inSize;
	unsigned long pOut;
	unsigned long outArea;
	unsigned long outOffset;
	unsigned long outSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} netxIORdWr_typ;

typedef struct netxDpSAdrSet
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long address;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} netxDpSAdrSet_typ;



/* Prototyping of functions and function blocks */
void netxConfig(struct netxConfig* inst);
void netxXConfig(struct netxXConfig* inst);
void netxStart(struct netxStart* inst);
void netxStop(struct netxStop* inst);
void netxIORdWr(struct netxIORdWr* inst);
void netxDpSAdrSet(struct netxDpSAdrSet* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASNETX_ */

