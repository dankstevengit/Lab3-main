/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASNXPNS_
#define _ASNXPNS_
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
 #define nxpnsERR_INVALID_DEVICE 35320U
 #define nxpnsERR_SEND_MESSAGE 35321U
 #define nxpnsERR_TIMEOUT 35322U
 #define nxpnsERR_PROFINET_STACK 35323U
 #define nxpnsERR_PARAMETER 35324U
 #define nxpnsMOD_PLUG_CORRECT_MOD 0U
 #define nxpnsMOD_PLUG_SUBSTITUTE_MOD 1U
 #define nxpnsALARM_DATALEN_MAX 1024U
 #define nxpnsCERR_SHORT_CIRCUIT 1U
 #define nxpnsCERR_UNDERVOLTAGE 2U
 #define nxpnsCERR_OVERVOLTAGE 3U
 #define nxpnsCERR_OVERLOAD 4U
 #define nxpnsCERR_OVERTEMPERATURE 5U
 #define nxpnsCERR_LINE_BREAK 6U
 #define nxpnsCERR_UPPER_LIM_VAL_EXCEEDED 7U
 #define nxpnsCERR_LOWER_LIM_VAL_EXCEEDED 8U
 #define nxpnsCERR_ERROR 9U
 #define nxpnsCERR_SIMULATION_ACTIVE 10U
 #define nxpnsCERR_DATA_TRANS_IMPOSSIBLE 32768U
 #define nxpnsCERR_REMOTE_MISM 32769U
 #define nxpnsCERR_MEDIA_REDUNDANCY_MIS 32770U
 #define nxpnsCERR_SYNC_MISMATCH 32771U
 #define nxpnsCERR_ISOCHRONOUS_MODE_MIS 32772U
 #define nxpnsCERR_MULTICAST_CR_MIS 32773U
 #define nxpnsCERR_FIBER_OPTIC_MIS 32775U
 #define nxpnsCERR_NET_COMP_FUNC_MIS 32776U
 #define nxpnsCERR_TIME_MIS 32777U
 #define nxpnsCPROP_DIAGNOSIS 0U
 #define nxpnsCPROP_MAINTENANCE_REQUIRED 512U
 #define nxpnsCPROP_MAINTENANCE_DEMANDED 1024U
 #define nxpnsCPROP_QUALIFIED_DIAGNOSIS 1536U
#else
 _IEC_CONST unsigned short nxpnsERR_INVALID_DEVICE = 35320U;
 _IEC_CONST unsigned short nxpnsERR_SEND_MESSAGE = 35321U;
 _IEC_CONST unsigned short nxpnsERR_TIMEOUT = 35322U;
 _IEC_CONST unsigned short nxpnsERR_PROFINET_STACK = 35323U;
 _IEC_CONST unsigned short nxpnsERR_PARAMETER = 35324U;
 _IEC_CONST unsigned short nxpnsMOD_PLUG_CORRECT_MOD = 0U;
 _IEC_CONST unsigned short nxpnsMOD_PLUG_SUBSTITUTE_MOD = 1U;
 _IEC_CONST unsigned long nxpnsALARM_DATALEN_MAX = 1024U;
 _IEC_CONST unsigned short nxpnsCERR_SHORT_CIRCUIT = 1U;
 _IEC_CONST unsigned short nxpnsCERR_UNDERVOLTAGE = 2U;
 _IEC_CONST unsigned short nxpnsCERR_OVERVOLTAGE = 3U;
 _IEC_CONST unsigned short nxpnsCERR_OVERLOAD = 4U;
 _IEC_CONST unsigned short nxpnsCERR_OVERTEMPERATURE = 5U;
 _IEC_CONST unsigned short nxpnsCERR_LINE_BREAK = 6U;
 _IEC_CONST unsigned short nxpnsCERR_UPPER_LIM_VAL_EXCEEDED = 7U;
 _IEC_CONST unsigned short nxpnsCERR_LOWER_LIM_VAL_EXCEEDED = 8U;
 _IEC_CONST unsigned short nxpnsCERR_ERROR = 9U;
 _IEC_CONST unsigned short nxpnsCERR_SIMULATION_ACTIVE = 10U;
 _IEC_CONST unsigned short nxpnsCERR_DATA_TRANS_IMPOSSIBLE = 32768U;
 _IEC_CONST unsigned short nxpnsCERR_REMOTE_MISM = 32769U;
 _IEC_CONST unsigned short nxpnsCERR_MEDIA_REDUNDANCY_MIS = 32770U;
 _IEC_CONST unsigned short nxpnsCERR_SYNC_MISMATCH = 32771U;
 _IEC_CONST unsigned short nxpnsCERR_ISOCHRONOUS_MODE_MIS = 32772U;
 _IEC_CONST unsigned short nxpnsCERR_MULTICAST_CR_MIS = 32773U;
 _IEC_CONST unsigned short nxpnsCERR_FIBER_OPTIC_MIS = 32775U;
 _IEC_CONST unsigned short nxpnsCERR_NET_COMP_FUNC_MIS = 32776U;
 _IEC_CONST unsigned short nxpnsCERR_TIME_MIS = 32777U;
 _IEC_CONST unsigned short nxpnsCPROP_DIAGNOSIS = 0U;
 _IEC_CONST unsigned short nxpnsCPROP_MAINTENANCE_REQUIRED = 512U;
 _IEC_CONST unsigned short nxpnsCPROP_MAINTENANCE_DEMANDED = 1024U;
 _IEC_CONST unsigned short nxpnsCPROP_QUALIFIED_DIAGNOSIS = 1536U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct nxpnsProcessAlarm
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long deviceHandle;
	unsigned long alarmHandle;
	unsigned short userStructId;
	unsigned long api;
	unsigned long slot;
	unsigned long subslot;
	unsigned short alarmDataLen;
	unsigned long pAlarmData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	unsigned long pnIoStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsProcessAlarm_typ;

typedef struct nxpnsDiagnosisAlarm
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long deviceHandle;
	unsigned long alarmHandle;
	unsigned long diagHandle;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	unsigned long pnIoStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsDiagnosisAlarm_typ;

typedef struct nxpnsPlugModule
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long deviceHandle;
	unsigned long api;
	unsigned long slot;
	unsigned long moduleId;
	unsigned short moduleState;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsPlugModule_typ;

typedef struct nxpnsPullModule
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long deviceHandle;
	unsigned long api;
	unsigned long slot;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsPullModule_typ;

typedef struct nxpnsGetHandle
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	unsigned long deviceHandle;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsGetHandle_typ;

typedef struct nxpnsAddChannelDiag
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long api;
	unsigned long slot;
	unsigned long subslot;
	unsigned short channelNum;
	unsigned short channelProp;
	unsigned short channelErrType;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	unsigned long diagHandle;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsAddChannelDiag_typ;

typedef struct nxpnsAddExtChannelDiag
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long api;
	unsigned long slot;
	unsigned long subslot;
	unsigned short channelNum;
	unsigned short channelProp;
	unsigned short channelErrType;
	unsigned long extChannelAddValue;
	unsigned short extChannelErrType;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	unsigned long diagHandle;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsAddExtChannelDiag_typ;

typedef struct nxpnsAddGenChannelDiag
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long api;
	unsigned long slot;
	unsigned long subslot;
	unsigned short channelNum;
	unsigned short channelProp;
	unsigned short channelErrType;
	unsigned short userStructId;
	unsigned short diagDataLen;
	unsigned long pDiagData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	unsigned long diagHandle;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsAddGenChannelDiag_typ;

typedef struct nxpnsRemChannelDiag
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long diagHandle;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsRemChannelDiag_typ;

typedef struct nxpnsSetName
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pName;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsSetName_typ;

typedef struct nxpnsStartBusComm
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long pnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxpnsStartBusComm_typ;



/* Prototyping of functions and function blocks */
void nxpnsProcessAlarm(struct nxpnsProcessAlarm* inst);
void nxpnsDiagnosisAlarm(struct nxpnsDiagnosisAlarm* inst);
void nxpnsPlugModule(struct nxpnsPlugModule* inst);
void nxpnsPullModule(struct nxpnsPullModule* inst);
void nxpnsGetHandle(struct nxpnsGetHandle* inst);
void nxpnsAddChannelDiag(struct nxpnsAddChannelDiag* inst);
void nxpnsAddExtChannelDiag(struct nxpnsAddExtChannelDiag* inst);
void nxpnsAddGenChannelDiag(struct nxpnsAddGenChannelDiag* inst);
void nxpnsRemChannelDiag(struct nxpnsRemChannelDiag* inst);
void nxpnsSetName(struct nxpnsSetName* inst);
void nxpnsStartBusComm(struct nxpnsStartBusComm* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASNXPNS_ */

