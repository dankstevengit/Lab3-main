/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASNXDNS_
#define _ASNXDNS_
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
 #define nxdnsERR_INVALID_DEVICE 35360U
 #define nxdnsERR_SEND_MESSAGE 35361U
 #define nxdnsERR_TIMEOUT 35362U
 #define nxdnsERR_DEVICENET_STACK 35363U
 #define nxdnsERR_PARAMETER 35364U
 #define nxdnsERR_MEMORY 35365U
 #define nxdnsERR_SUBSCRIBE_LISTENER 35366U
 #define nxdnsERR_NO_MORE_ENTRIES 35367U
 #define nxdnsGENERR_NO_ERROR 0U
 #define nxdnsGENERR_RES_NOT_AVAIL 2U
 #define nxdnsGENERR_SERV_NOT_AVAIL 8U
 #define nxdnsGENERR_ATTRIB_BAD_VALUE 9U
 #define nxdnsGENERR_ATTRIB_NOT_SET 14U
 #define nxdnsGENERR_ACCESS_DENIED 15U
 #define nxdnsGENERR_STATE_CONFLICT 16U
 #define nxdnsGENERR_NOT_ENOUGH_DATA 19U
 #define nxdnsGENERR_ATTRIB_NOT_SUP 20U
 #define nxdnsGENERR_TOO_MUCH_DATA 21U
 #define nxdnsGENERR_VENDOR_SPEC_CODE 31U
#else
 _IEC_CONST unsigned short nxdnsERR_INVALID_DEVICE = 35360U;
 _IEC_CONST unsigned short nxdnsERR_SEND_MESSAGE = 35361U;
 _IEC_CONST unsigned short nxdnsERR_TIMEOUT = 35362U;
 _IEC_CONST unsigned short nxdnsERR_DEVICENET_STACK = 35363U;
 _IEC_CONST unsigned short nxdnsERR_PARAMETER = 35364U;
 _IEC_CONST unsigned short nxdnsERR_MEMORY = 35365U;
 _IEC_CONST unsigned short nxdnsERR_SUBSCRIBE_LISTENER = 35366U;
 _IEC_CONST unsigned short nxdnsERR_NO_MORE_ENTRIES = 35367U;
 _IEC_CONST unsigned char nxdnsGENERR_NO_ERROR = 0U;
 _IEC_CONST unsigned char nxdnsGENERR_RES_NOT_AVAIL = 2U;
 _IEC_CONST unsigned char nxdnsGENERR_SERV_NOT_AVAIL = 8U;
 _IEC_CONST unsigned char nxdnsGENERR_ATTRIB_BAD_VALUE = 9U;
 _IEC_CONST unsigned char nxdnsGENERR_ATTRIB_NOT_SET = 14U;
 _IEC_CONST unsigned char nxdnsGENERR_ACCESS_DENIED = 15U;
 _IEC_CONST unsigned char nxdnsGENERR_STATE_CONFLICT = 16U;
 _IEC_CONST unsigned char nxdnsGENERR_NOT_ENOUGH_DATA = 19U;
 _IEC_CONST unsigned char nxdnsGENERR_ATTRIB_NOT_SUP = 20U;
 _IEC_CONST unsigned char nxdnsGENERR_TOO_MUCH_DATA = 21U;
 _IEC_CONST unsigned char nxdnsGENERR_VENDOR_SPEC_CODE = 31U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct nxdnsSubscribe
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsSubscribe_typ;

typedef struct nxdnsUnsubscribe
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsUnsubscribe_typ;

typedef struct nxdnsRegisterClass
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long classId;
	unsigned long accessType;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsRegisterClass_typ;

typedef struct nxdnsUnregisterClass
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long classId;
	unsigned long accessType;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsUnregisterClass_typ;

typedef struct nxdnsGetAttributeInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	unsigned long source;
	unsigned long sourceId;
	unsigned short classId;
	unsigned short instanceId;
	unsigned short attributeId;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsGetAttributeInd_typ;

typedef struct nxdnsSetAttributeInd
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long maxDataCount;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	unsigned long source;
	unsigned long sourceId;
	unsigned short classId;
	unsigned short instanceId;
	unsigned short attributeId;
	unsigned short dataCount;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsSetAttributeInd_typ;

typedef struct nxdnsGetAttributeRes
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long source;
	unsigned long sourceId;
	unsigned short classId;
	unsigned short instanceId;
	unsigned short attributeId;
	unsigned short dataCount;
	unsigned char generalError;
	unsigned char additionalError;
	unsigned long pData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsGetAttributeRes_typ;

typedef struct nxdnsSetAttributeRes
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long source;
	unsigned long sourceId;
	unsigned short classId;
	unsigned short instanceId;
	unsigned short attributeId;
	unsigned short dataCount;
	unsigned char generalError;
	unsigned char additionalError;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsSetAttributeRes_typ;

typedef struct nxdnsSetAdr
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long address;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsSetAdr_typ;

typedef struct nxdnsStartBusComm
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long dnStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} nxdnsStartBusComm_typ;



/* Prototyping of functions and function blocks */
void nxdnsSubscribe(struct nxdnsSubscribe* inst);
void nxdnsUnsubscribe(struct nxdnsUnsubscribe* inst);
void nxdnsRegisterClass(struct nxdnsRegisterClass* inst);
void nxdnsUnregisterClass(struct nxdnsUnregisterClass* inst);
void nxdnsGetAttributeInd(struct nxdnsGetAttributeInd* inst);
void nxdnsSetAttributeInd(struct nxdnsSetAttributeInd* inst);
void nxdnsGetAttributeRes(struct nxdnsGetAttributeRes* inst);
void nxdnsSetAttributeRes(struct nxdnsSetAttributeRes* inst);
void nxdnsSetAdr(struct nxdnsSetAdr* inst);
void nxdnsStartBusComm(struct nxdnsStartBusComm* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASNXDNS_ */

