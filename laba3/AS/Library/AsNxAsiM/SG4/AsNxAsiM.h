/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASNXASIM_
#define _ASNXASIM_
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
 #define asimDIAG_REQ_FLAG_PEEK 1U
 #define asimERR_LENGTH 35035U
 #define asimERR_PARAMETER 35034U
 #define asimERR_ASI_STACK 35033U
 #define asimERR_TIMEOUT 35032U
 #define asimERR_SEND_MESSAGE 35031U
 #define asimERR_INVALID_DEVICE 35030U
#else
 _IEC_CONST unsigned long asimDIAG_REQ_FLAG_PEEK = 1U;
 _IEC_CONST unsigned short asimERR_LENGTH = 35035U;
 _IEC_CONST unsigned short asimERR_PARAMETER = 35034U;
 _IEC_CONST unsigned short asimERR_ASI_STACK = 35033U;
 _IEC_CONST unsigned short asimERR_TIMEOUT = 35032U;
 _IEC_CONST unsigned short asimERR_SEND_MESSAGE = 35031U;
 _IEC_CONST unsigned short asimERR_INVALID_DEVICE = 35030U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct asimSlaveList_t
{	unsigned char slaveBits[8];
} asimSlaveList_t;

typedef struct asimSlaveDiagnosis_t
{	unsigned long diagnosisFlags;
	unsigned long numOfDiagInfos;
	unsigned long slaveError[8];
} asimSlaveDiagnosis_t;

typedef struct asimWriteParameter
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long slaveAddress;
	unsigned long parameterData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long asiStatus;
	unsigned long parameterDataEcho;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} asimWriteParameter_typ;

typedef struct asimChangeSlaveAddress
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long oldSlaveAddress;
	unsigned long newSlaveAddress;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long asiStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} asimChangeSlaveAddress_typ;

typedef struct asimGetProjectedSlaves
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pSlaveList;
	unsigned long maxSlaveListLen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long asiStatus;
	unsigned long slaveListLen;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} asimGetProjectedSlaves_typ;

typedef struct asimGetActivatedSlaves
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pSlaveList;
	unsigned long maxSlaveListLen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long asiStatus;
	unsigned long slaveListLen;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} asimGetActivatedSlaves_typ;

typedef struct asimGetDetectedSlaves
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pSlaveList;
	unsigned long maxSlaveListLen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long asiStatus;
	unsigned long slaveListLen;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} asimGetDetectedSlaves_typ;

typedef struct asimGetPeripheralFaults
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pSlaveList;
	unsigned long maxSlaveListLen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long asiStatus;
	unsigned long slaveListLen;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} asimGetPeripheralFaults_typ;

typedef struct asimGetSlaveDiagnosis
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long slaveAddress;
	unsigned long requestFlags;
	unsigned long pSlaveDiagnosis;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long asiStatus;
	/* VAR (analog) */
	unsigned short _state;
	unsigned short _result;
	unsigned long _srcId;
	/* VAR_INPUT (digital) */
	plcbit enable;
} asimGetSlaveDiagnosis_typ;



/* Prototyping of functions and function blocks */
void asimWriteParameter(struct asimWriteParameter* inst);
void asimChangeSlaveAddress(struct asimChangeSlaveAddress* inst);
void asimGetProjectedSlaves(struct asimGetProjectedSlaves* inst);
void asimGetActivatedSlaves(struct asimGetActivatedSlaves* inst);
void asimGetDetectedSlaves(struct asimGetDetectedSlaves* inst);
void asimGetPeripheralFaults(struct asimGetPeripheralFaults* inst);
void asimGetSlaveDiagnosis(struct asimGetSlaveDiagnosis* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASNXASIM_ */

