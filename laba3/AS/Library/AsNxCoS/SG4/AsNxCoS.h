/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASNXCOS_
#define _ASNXCOS_
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
 #define nxcosERR_INVALID_DEVICE 34600U
 #define nxcosERR_SEND_MESSAGE 34601U
 #define nxcosERR_TIMEOUT 34602U
 #define nxcosERR_CANOPEN_STACK 34603U
 #define nxcosERR_PARAMETER 34604U
 #define nxcosNMT_CMD_START 1U
 #define nxcosNMT_CMD_STOP 2U
 #define nxcosNMT_CMD_ENTER_PREOP 128U
 #define nxcosNMT_CMD_RESET_NODE 129U
 #define nxcosNMT_CMD_RESET_COMM 130U
 #define nxcosMODE_STOP 0U
 #define nxcosMODE_START 1U
 #define nxcosEREG_ERROR_RESET 0U
 #define nxcosEREG_GENERIC_BIT 1U
 #define nxcosEREG_CURRENT_BIT 2U
 #define nxcosEREG_VOLTAGE_BIT 4U
 #define nxcosEREG_TEMPERATURE_BIT 8U
 #define nxcosEREG_COMM_ERROR_BIT 16U
 #define nxcosEREG_DEV_PROFILE_BIT 32U
 #define nxcosEREG_MANU_SPEC_BIT 128U
#else
 _IEC_CONST unsigned short nxcosERR_INVALID_DEVICE = 34600U;
 _IEC_CONST unsigned short nxcosERR_SEND_MESSAGE = 34601U;
 _IEC_CONST unsigned short nxcosERR_TIMEOUT = 34602U;
 _IEC_CONST unsigned short nxcosERR_CANOPEN_STACK = 34603U;
 _IEC_CONST unsigned short nxcosERR_PARAMETER = 34604U;
 _IEC_CONST unsigned long nxcosNMT_CMD_START = 1U;
 _IEC_CONST unsigned long nxcosNMT_CMD_STOP = 2U;
 _IEC_CONST unsigned long nxcosNMT_CMD_ENTER_PREOP = 128U;
 _IEC_CONST unsigned long nxcosNMT_CMD_RESET_NODE = 129U;
 _IEC_CONST unsigned long nxcosNMT_CMD_RESET_COMM = 130U;
 _IEC_CONST unsigned long nxcosMODE_STOP = 0U;
 _IEC_CONST unsigned long nxcosMODE_START = 1U;
 _IEC_CONST unsigned char nxcosEREG_ERROR_RESET = 0U;
 _IEC_CONST unsigned char nxcosEREG_GENERIC_BIT = 1U;
 _IEC_CONST unsigned char nxcosEREG_CURRENT_BIT = 2U;
 _IEC_CONST unsigned char nxcosEREG_VOLTAGE_BIT = 4U;
 _IEC_CONST unsigned char nxcosEREG_TEMPERATURE_BIT = 8U;
 _IEC_CONST unsigned char nxcosEREG_COMM_ERROR_BIT = 16U;
 _IEC_CONST unsigned char nxcosEREG_DEV_PROFILE_BIT = 32U;
 _IEC_CONST unsigned char nxcosEREG_MANU_SPEC_BIT = 128U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct nxcosNmt
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long command;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long coStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxcosNmt_typ;

typedef struct nxcosStartStop
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long coStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxcosStartStop_typ;

typedef struct nxcosWriteEmcy
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned short errorCode;
	unsigned char errorRegister;
	unsigned long pManErrorCode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long coStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxcosWriteEmcy_typ;

typedef struct nxcosSetAdr
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long address;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long coStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxcosSetAdr_typ;

typedef struct nxcosStartBusComm
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long coStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxcosStartBusComm_typ;



/* Prototyping of functions and function blocks */
void nxcosNmt(struct nxcosNmt* inst);
void nxcosStartStop(struct nxcosStartStop* inst);
void nxcosWriteEmcy(struct nxcosWriteEmcy* inst);
void nxcosSetAdr(struct nxcosSetAdr* inst);
void nxcosStartBusComm(struct nxcosStartBusComm* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASNXCOS_ */

