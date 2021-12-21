/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASSNMP_
#define _ASSNMP_
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
 #define snmpENTERPRISE_SPECIFIC 6U
 #define snmpEGP_NEIGHBOR_LOSS 5U
 #define snmpAUTH_FAILURE 4U
 #define snmpLINK_UP 3U
 #define snmpLINK_DOWN 2U
 #define snmpWARM_START 1U
 #define snmpCOLD_START 0U
 #define snmpGEN_ERR 5U
 #define snmpREAD_ONLY 4U
 #define snmpBAD_VALUE 3U
 #define snmpNO_SUCH_NAME 2U
 #define snmpTOO_BIG 1U
 #define snmpNO_ERROR 0U
 #define snmpERR_CREATING_TRAP 34266U
 #define snmpERR_INVALID_TRAP_ID 34265U
 #define snmpERR_UNSUPP_RESP_VAR 34264U
 #define snmpERR_INVALID_LENGTH 34263U
 #define snmpERR_PACKET_TOO_LARGE 34262U
 #define snmpERR_NO_RESPONSE 34261U
 #define snmpERR_BUFFER_TOO_SMALL 34260U
 #define snmpERR_INVALID_TYPE 34259U
 #define snmpERR_NULLPOINTER_VALUE 34258U
 #define snmpERR_SNMP_RESPONSE 34257U
 #define snmpERR_INVALID_RESPONSE 34256U
 #define snmpERR_DECODING_RESPONSE 34255U
 #define snmpERR_CREATING_REQUEST 34254U
 #define snmpERR_INSUFFICIENT_MEMORY 34253U
 #define snmpERR_EMPTY_OID 34252U
 #define snmpERR_INVALID_IP_PORT 34251U
 #define snmpERR_NULLPOINTER 34250U
 #define snmpSTRING 4U
 #define snmpINTEGER 2U
#else
 _IEC_CONST unsigned short snmpENTERPRISE_SPECIFIC = 6U;
 _IEC_CONST unsigned short snmpEGP_NEIGHBOR_LOSS = 5U;
 _IEC_CONST unsigned short snmpAUTH_FAILURE = 4U;
 _IEC_CONST unsigned short snmpLINK_UP = 3U;
 _IEC_CONST unsigned short snmpLINK_DOWN = 2U;
 _IEC_CONST unsigned short snmpWARM_START = 1U;
 _IEC_CONST unsigned short snmpCOLD_START = 0U;
 _IEC_CONST unsigned short snmpGEN_ERR = 5U;
 _IEC_CONST unsigned short snmpREAD_ONLY = 4U;
 _IEC_CONST unsigned short snmpBAD_VALUE = 3U;
 _IEC_CONST unsigned short snmpNO_SUCH_NAME = 2U;
 _IEC_CONST unsigned short snmpTOO_BIG = 1U;
 _IEC_CONST unsigned short snmpNO_ERROR = 0U;
 _IEC_CONST unsigned short snmpERR_CREATING_TRAP = 34266U;
 _IEC_CONST unsigned short snmpERR_INVALID_TRAP_ID = 34265U;
 _IEC_CONST unsigned short snmpERR_UNSUPP_RESP_VAR = 34264U;
 _IEC_CONST unsigned short snmpERR_INVALID_LENGTH = 34263U;
 _IEC_CONST unsigned short snmpERR_PACKET_TOO_LARGE = 34262U;
 _IEC_CONST unsigned short snmpERR_NO_RESPONSE = 34261U;
 _IEC_CONST unsigned short snmpERR_BUFFER_TOO_SMALL = 34260U;
 _IEC_CONST unsigned short snmpERR_INVALID_TYPE = 34259U;
 _IEC_CONST unsigned short snmpERR_NULLPOINTER_VALUE = 34258U;
 _IEC_CONST unsigned short snmpERR_SNMP_RESPONSE = 34257U;
 _IEC_CONST unsigned short snmpERR_INVALID_RESPONSE = 34256U;
 _IEC_CONST unsigned short snmpERR_DECODING_RESPONSE = 34255U;
 _IEC_CONST unsigned short snmpERR_CREATING_REQUEST = 34254U;
 _IEC_CONST unsigned short snmpERR_INSUFFICIENT_MEMORY = 34253U;
 _IEC_CONST unsigned short snmpERR_EMPTY_OID = 34252U;
 _IEC_CONST unsigned short snmpERR_INVALID_IP_PORT = 34251U;
 _IEC_CONST unsigned short snmpERR_NULLPOINTER = 34250U;
 _IEC_CONST unsigned short snmpSTRING = 4U;
 _IEC_CONST unsigned short snmpINTEGER = 2U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct snmpV1Var_t
{	unsigned long pOid;
	unsigned long type;
	unsigned long pValue;
	unsigned long lenValue;
} snmpV1Var_t;

typedef struct snmpV1Get
{
	/* VAR_INPUT (analog) */
	unsigned long pHost;
	unsigned long pCommunity;
	unsigned long pVariables;
	unsigned long numVariables;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long snmpError;
	unsigned long snmpErrorIdx;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} snmpV1Get_typ;

typedef struct snmpV1Set
{
	/* VAR_INPUT (analog) */
	unsigned long pHost;
	unsigned long pCommunity;
	unsigned long pVariables;
	unsigned long numVariables;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long snmpError;
	unsigned long snmpErrorIdx;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} snmpV1Set_typ;

typedef struct snmpV1SendTrap
{
	/* VAR_INPUT (analog) */
	unsigned long pHost;
	unsigned long pCommunity;
	unsigned long pOid;
	unsigned long genTrapId;
	unsigned long specTrapId;
	unsigned long timeStamp;
	unsigned long pVariables;
	unsigned long numVariables;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} snmpV1SendTrap_typ;



/* Prototyping of functions and function blocks */
void snmpV1Get(struct snmpV1Get* inst);
void snmpV1Set(struct snmpV1Set* inst);
void snmpV1SendTrap(struct snmpV1SendTrap* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASSNMP_ */

                                                           
