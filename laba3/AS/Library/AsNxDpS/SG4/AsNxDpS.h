/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASNXDPS_
#define _ASNXDPS_
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
 #define nxdpsMAX_DIAG_DATA_SIZE 238U
 #define nxdpsPOSITIVE_ACK 1
 #define nxdpsNEGATIVE_ACK 0
 #define nxdpsALARM_SPEC_ERR_DIS_SLOT_DIS 3U
 #define nxdpsALARM_SPEC_ERR_DIS_SLOT_OK 2U
 #define nxdpsALARM_SPEC_ERR_APP_SLOT_DIS 1U
 #define nxdpsALARM_SPEC_NO_DIFF 0U
 #define nxdpsALARM_UPDATE 6U
 #define nxdpsALARM_STATUS 5U
 #define nxdpsALARM_PLUG 4U
 #define nxdpsALARM_PULL 3U
 #define nxdpsALARM_PROCESS 2U
 #define nxdpsALARM_DIAGNOSTIC 1U
 #define nxdpsERR_NO_MORE_ENTRIES 34807U
 #define nxdpsERR_SUBSCRIBE_LISTENER 34806U
 #define nxdpsERR_MEMORY 34805U
 #define nxdpsERR_PARAMETER 34804U
 #define nxdpsERR_PROFIBUSDP_STACK 34803U
 #define nxdpsERR_TIMEOUT 34802U
 #define nxdpsERR_SEND_MESSAGE 34801U
 #define nxdpsERR_INVALID_DEVICE 34800U
#else
 _IEC_CONST unsigned long nxdpsMAX_DIAG_DATA_SIZE = 238U;
 _IEC_CONST plcbit nxdpsPOSITIVE_ACK = 1;
 _IEC_CONST plcbit nxdpsNEGATIVE_ACK = 0;
 _IEC_CONST unsigned char nxdpsALARM_SPEC_ERR_DIS_SLOT_DIS = 3U;
 _IEC_CONST unsigned char nxdpsALARM_SPEC_ERR_DIS_SLOT_OK = 2U;
 _IEC_CONST unsigned char nxdpsALARM_SPEC_ERR_APP_SLOT_DIS = 1U;
 _IEC_CONST unsigned char nxdpsALARM_SPEC_NO_DIFF = 0U;
 _IEC_CONST unsigned char nxdpsALARM_UPDATE = 6U;
 _IEC_CONST unsigned char nxdpsALARM_STATUS = 5U;
 _IEC_CONST unsigned char nxdpsALARM_PLUG = 4U;
 _IEC_CONST unsigned char nxdpsALARM_PULL = 3U;
 _IEC_CONST unsigned char nxdpsALARM_PROCESS = 2U;
 _IEC_CONST unsigned char nxdpsALARM_DIAGNOSTIC = 1U;
 _IEC_CONST unsigned short nxdpsERR_NO_MORE_ENTRIES = 34807U;
 _IEC_CONST unsigned short nxdpsERR_SUBSCRIBE_LISTENER = 34806U;
 _IEC_CONST unsigned short nxdpsERR_MEMORY = 34805U;
 _IEC_CONST unsigned short nxdpsERR_PARAMETER = 34804U;
 _IEC_CONST unsigned short nxdpsERR_PROFIBUSDP_STACK = 34803U;
 _IEC_CONST unsigned short nxdpsERR_TIMEOUT = 34802U;
 _IEC_CONST unsigned short nxdpsERR_SEND_MESSAGE = 34801U;
 _IEC_CONST unsigned short nxdpsERR_INVALID_DEVICE = 34800U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct nxdpsAddAdrParam_t
{	unsigned char srcType;
	unsigned char srcSize;
	unsigned char destType;
	unsigned char destSize;
	unsigned char addParam[228];
} nxdpsAddAdrParam_t;

typedef struct nxdpsIm0_t
{	unsigned char manufactor[10];
	unsigned short manufactorId;
	unsigned char orderId[20];
	unsigned char serialNumber[16];
	unsigned short hwRevision;
	unsigned char swRevision[4];
	unsigned short revisionCounter;
	unsigned short profileId;
	unsigned short profileSpecType;
	unsigned short imVersion;
	unsigned short imSupported;
} nxdpsIm0_t;

typedef struct nxdpsSubscribe
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsSubscribe_typ;

typedef struct nxdpsUnsubscribe
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsUnsubscribe_typ;

typedef struct nxdpsAlarmNotification
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char slotNumber;
	unsigned char seqNumber;
	unsigned char alarmType;
	unsigned char alarmSpecifier;
	unsigned char alarmDataLen;
	unsigned long pAlarmData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit addAck;
} nxdpsAlarmNotification_typ;

typedef struct nxdpsAlarmAckReceive
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	unsigned char slotNumber;
	unsigned char seqNumber;
	unsigned char alarmType;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsAlarmAckReceive_typ;

typedef struct nxdpsV1C1WriteInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long maxDataLen;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned long source;
	unsigned long sourceId;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsV1C1WriteInd_typ;

typedef struct nxdpsV1C1WriteAck
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned char errorDecode;
	unsigned char errorCode1;
	unsigned char errorCode2;
	unsigned long source;
	unsigned long sourceId;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ackType;
} nxdpsV1C1WriteAck_typ;

typedef struct nxdpsV1C1ReadInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned long source;
	unsigned long sourceId;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsV1C1ReadInd_typ;

typedef struct nxdpsV1C1ReadAck
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned char errorDecode;
	unsigned char errorCode1;
	unsigned char errorCode2;
	unsigned long source;
	unsigned long sourceId;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ackType;
} nxdpsV1C1ReadAck_typ;

typedef struct nxdpsSetDiag
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pDiagData;
	unsigned long diagDataLen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit extDiag;
	plcbit extDiagOverflow;
} nxdpsSetDiag_typ;

typedef struct nxdpsSetIm0
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	struct nxdpsIm0_t im0Param;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit profSpecSupp;
	plcbit manuSpecSupp;
	plcbit slotsNotZeroSupp;
} nxdpsSetIm0_typ;

typedef struct nxdpsSetAdr
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long address;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsSetAdr_typ;

typedef struct nxdpsStartBusComm
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsStartBusComm_typ;

typedef struct nxdpsV1C2InitiateInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pAddAdrParam;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	unsigned long connectionRef;
	unsigned short featuresSup;
	unsigned short profileFeatSup;
	unsigned short profileIdent;
	unsigned long source;
	unsigned long sourceId;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsV1C2InitiateInd_typ;

typedef struct nxdpsV1C2InitiateRes
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long connectionRef;
	unsigned char dataUnitSizeMax;
	unsigned short featuresSup;
	unsigned short profileFeatSup;
	unsigned short profileIdent;
	unsigned long pAddAdrParam;
	unsigned char errorDecode;
	unsigned char errorCode1;
	unsigned char errorCode2;
	unsigned long source;
	unsigned long sourceId;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ackType;
} nxdpsV1C2InitiateRes_typ;

typedef struct nxdpsV1C2ReadInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	unsigned long connectionRef;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned long source;
	unsigned long sourceId;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsV1C2ReadInd_typ;

typedef struct nxdpsV1C2ReadRes
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long connectionRef;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned char errorDecode;
	unsigned char errorCode1;
	unsigned char errorCode2;
	unsigned long source;
	unsigned long sourceId;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ackType;
} nxdpsV1C2ReadRes_typ;

typedef struct nxdpsV1C2WriteInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long maxDataLen;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	unsigned long connectionRef;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned long source;
	unsigned long sourceId;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsV1C2WriteInd_typ;

typedef struct nxdpsV1C2WriteRes
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long connectionRef;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned char errorDecode;
	unsigned char errorCode1;
	unsigned char errorCode2;
	unsigned long source;
	unsigned long sourceId;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ackType;
} nxdpsV1C2WriteRes_typ;

typedef struct nxdpsV1C2DataInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long maxDataLen;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	unsigned long connectionRef;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned long source;
	unsigned long sourceId;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsV1C2DataInd_typ;

typedef struct nxdpsV1C2DataRes
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long connectionRef;
	unsigned char slotNumber;
	unsigned char index;
	unsigned char dataLen;
	unsigned char errorDecode;
	unsigned char errorCode1;
	unsigned char errorCode2;
	unsigned long source;
	unsigned long sourceId;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ackType;
} nxdpsV1C2DataRes_typ;

typedef struct nxdpsV1C2AbortInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	unsigned long connectionRef;
	unsigned long local;
	unsigned long subnet;
	unsigned long instance;
	unsigned long reasonCode;
	unsigned long source;
	unsigned long sourceId;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsV1C2AbortInd_typ;

typedef struct nxdpsV1C2AbortRes
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long connectionRef;
	unsigned long source;
	unsigned long sourceId;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dpStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdpsV1C2AbortRes_typ;



/* Prototyping of functions and function blocks */
void nxdpsSubscribe(struct nxdpsSubscribe* inst);
void nxdpsUnsubscribe(struct nxdpsUnsubscribe* inst);
void nxdpsAlarmNotification(struct nxdpsAlarmNotification* inst);
void nxdpsAlarmAckReceive(struct nxdpsAlarmAckReceive* inst);
void nxdpsV1C1WriteInd(struct nxdpsV1C1WriteInd* inst);
void nxdpsV1C1WriteAck(struct nxdpsV1C1WriteAck* inst);
void nxdpsV1C1ReadInd(struct nxdpsV1C1ReadInd* inst);
void nxdpsV1C1ReadAck(struct nxdpsV1C1ReadAck* inst);
void nxdpsSetDiag(struct nxdpsSetDiag* inst);
void nxdpsSetIm0(struct nxdpsSetIm0* inst);
void nxdpsSetAdr(struct nxdpsSetAdr* inst);
void nxdpsStartBusComm(struct nxdpsStartBusComm* inst);
void nxdpsV1C2InitiateInd(struct nxdpsV1C2InitiateInd* inst);
void nxdpsV1C2InitiateRes(struct nxdpsV1C2InitiateRes* inst);
void nxdpsV1C2ReadInd(struct nxdpsV1C2ReadInd* inst);
void nxdpsV1C2ReadRes(struct nxdpsV1C2ReadRes* inst);
void nxdpsV1C2WriteInd(struct nxdpsV1C2WriteInd* inst);
void nxdpsV1C2WriteRes(struct nxdpsV1C2WriteRes* inst);
void nxdpsV1C2DataInd(struct nxdpsV1C2DataInd* inst);
void nxdpsV1C2DataRes(struct nxdpsV1C2DataRes* inst);
void nxdpsV1C2AbortInd(struct nxdpsV1C2AbortInd* inst);
void nxdpsV1C2AbortRes(struct nxdpsV1C2AbortRes* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASNXDPS_ */

