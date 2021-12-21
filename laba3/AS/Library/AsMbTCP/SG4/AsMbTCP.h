/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASMBTCP_
#define _ASMBTCP_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define mbMFC_READ_WRITE_MULTIPLE_REG 23U
 #define mbMFC_WRITE_MULTIPLE_REGISTERS 16U
 #define mbMFC_WRITE_MULTIPLE_COILS 15U
 #define mbMFC_WRITE_SINGLE_REGISTER 6U
 #define mbMFC_WRITE_SINGLE_COIL 5U
 #define mbMFC_READ_INPUT_REGISTERS 4U
 #define mbMFC_READ_HOLDING_REGISTERS 3U
 #define mbMFC_READ_DISCRETE_INPUTS 2U
 #define mbMFC_READ_COILS 1U
 #define mbERR_QUEUE_OVL 34207U
 #define mbERR_REFRESH_TIME_VIOLATION 34206U
 #define mbERR_EXCEPTION 34205U
 #define mbERR_DATASIZE 34204U
 #define mbERR_NULLPOINTER 34203U
 #define mbERR_INVALID_NUMBER 34202U
 #define mbERR_STATION_NOT_CONNECTED 34201U
 #define mbERR_STATION_NOT_EXIST 34200U
#else
 _IEC_CONST unsigned long mbMFC_READ_WRITE_MULTIPLE_REG = 23U;
 _IEC_CONST unsigned long mbMFC_WRITE_MULTIPLE_REGISTERS = 16U;
 _IEC_CONST unsigned long mbMFC_WRITE_MULTIPLE_COILS = 15U;
 _IEC_CONST unsigned long mbMFC_WRITE_SINGLE_REGISTER = 6U;
 _IEC_CONST unsigned long mbMFC_WRITE_SINGLE_COIL = 5U;
 _IEC_CONST unsigned long mbMFC_READ_INPUT_REGISTERS = 4U;
 _IEC_CONST unsigned long mbMFC_READ_HOLDING_REGISTERS = 3U;
 _IEC_CONST unsigned long mbMFC_READ_DISCRETE_INPUTS = 2U;
 _IEC_CONST unsigned long mbMFC_READ_COILS = 1U;
 _IEC_CONST unsigned long mbERR_QUEUE_OVL = 34207U;
 _IEC_CONST unsigned long mbERR_REFRESH_TIME_VIOLATION = 34206U;
 _IEC_CONST unsigned long mbERR_EXCEPTION = 34205U;
 _IEC_CONST unsigned long mbERR_DATASIZE = 34204U;
 _IEC_CONST unsigned long mbERR_NULLPOINTER = 34203U;
 _IEC_CONST unsigned long mbERR_INVALID_NUMBER = 34202U;
 _IEC_CONST unsigned long mbERR_STATION_NOT_CONNECTED = 34201U;
 _IEC_CONST unsigned long mbERR_STATION_NOT_EXIST = 34200U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct mbReadCoils
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddress;
	unsigned short nrCoils;
	unsigned long pData;
	unsigned short dataSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char i_buffer[250];
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbReadCoils_typ;

typedef struct mbReadDiscreteInputs
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddress;
	unsigned short nrInputs;
	unsigned long pData;
	unsigned short dataSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char i_buffer[250];
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbReadDiscreteInputs_typ;

typedef struct mbReadHoldingRegisters
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddress;
	unsigned short nrRegisters;
	unsigned long pData;
	unsigned short dataSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbReadHoldingRegisters_typ;

typedef struct mbReadInputRegisters
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddress;
	unsigned short nrRegisters;
	unsigned long pData;
	unsigned short dataSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbReadInputRegisters_typ;

typedef struct mbWriteSingleCoil
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddress;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit value;
} mbWriteSingleCoil_typ;

typedef struct mbWriteSingleRegister
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddress;
	unsigned short value;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbWriteSingleRegister_typ;

typedef struct mbWriteMultipleCoils
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddress;
	unsigned short nrCoils;
	unsigned long pData;
	unsigned short dataSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char i_buffer[250];
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbWriteMultipleCoils_typ;

typedef struct mbWriteMultipleRegisters
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddress;
	unsigned short nrRegisters;
	unsigned long pData;
	unsigned short dataSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbWriteMultipleRegisters_typ;

typedef struct mbReadWriteMultipleRegisters
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	unsigned short startAddressRead;
	unsigned short nrRegistersRead;
	unsigned long pDataRead;
	unsigned short dataSizeRead;
	unsigned short startAddressWrite;
	unsigned short nrRegistersWrite;
	unsigned long pDataWrite;
	unsigned short dataSizeWrite;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long i_queryID;
	unsigned long i_hInstance;
	unsigned long i_hMbCons;
	unsigned short i_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbReadWriteMultipleRegisters_typ;

typedef struct mbGetLastException
{
	/* VAR_INPUT (analog) */
	unsigned long pStation;
	/* VAR_OUTPUT (analog) */
	unsigned char mbExcp;
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} mbGetLastException_typ;



/* Prototyping of functions and function blocks */
void mbReadCoils(struct mbReadCoils* inst);
void mbReadDiscreteInputs(struct mbReadDiscreteInputs* inst);
void mbReadHoldingRegisters(struct mbReadHoldingRegisters* inst);
void mbReadInputRegisters(struct mbReadInputRegisters* inst);
void mbWriteSingleCoil(struct mbWriteSingleCoil* inst);
void mbWriteSingleRegister(struct mbWriteSingleRegister* inst);
void mbWriteMultipleCoils(struct mbWriteMultipleCoils* inst);
void mbWriteMultipleRegisters(struct mbWriteMultipleRegisters* inst);
void mbReadWriteMultipleRegisters(struct mbReadWriteMultipleRegisters* inst);
void mbGetLastException(struct mbGetLastException* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASMBTCP_ */

                                                           
