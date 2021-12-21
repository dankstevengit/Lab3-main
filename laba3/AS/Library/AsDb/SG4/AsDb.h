/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASDB_
#define _ASDB_
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
 #define DB_ENCODING_UTF_8 "UTF-8"
 #define DB_ENCODING_ISO_8859_1 "ISO-8859-1"
 #define dbERR_UNSUPPORTED_ENCODING 34945U
 #define dbERR_NOT_AVAILABLE 34944U
 #define dbERR_NULLPOINTER 34943U
 #define dbERR_INVALID_DATATYPE 34942U
 #define dbERR_SQL_EXECUTE_REQUIRED 34941U
 #define dbERR_INVALID_SQL_STATEMENT 34940U
 #define dbERR_INVALID_DATABASE_NAME 34939U
 #define dbERR_INVALID_PASSWORD 34938U
 #define dbERR_INVALID_USERNAME 34937U
 #define dbERR_INVALID_SERVERNAME 34936U
 #define dbERR_BUFFER_SIZE 34935U
 #define dbERR_UNSUPPORTED_DATABASE 34934U
 #define dbERR_INVALID_COLUMN 34933U
 #define dbERR_INVALID_HANDLE 34932U
 #define dbERR_DATABASE 34931U
 #define dbERR_MEMORY 34930U
 #define DB_SQL_GUID (-11)
 #define DB_SQL_VARCHAR 12
 #define DB_SQL_TIMESTAMP 11
 #define DB_SQL_TIME 10
 #define DB_SQL_DATE 9
 #define DB_SQL_DOUBLE 8
 #define DB_SQL_REAL 7
 #define DB_SQL_TINYINT (-6)
 #define DB_SQL_SMALLINT 5
 #define DB_SQL_INTEGER 4
 #define DB_SQL_BIGINT (-25)
 #define DB_SQL_DECIMAL 3
 #define DB_SQL_NUMERIC 2
 #define DB_SQL_CHAR 1
 #define DB_SQL_NO_DATA 100
 #define DB_SQL_INVALID_HANDLE (-2)
 #define DB_SQL_ERROR (-1)
 #define DB_DEFAULT_PORT 5000U
 #define DB_SYSTEM_MS_SQL 2U
 #define DB_SYSTEM_SYBASE 1U
#else
 _IEC_CONST plcstring DB_ENCODING_UTF_8[13] = "UTF-8";
 _IEC_CONST plcstring DB_ENCODING_ISO_8859_1[13] = "ISO-8859-1";
 _IEC_CONST unsigned short dbERR_UNSUPPORTED_ENCODING = 34945U;
 _IEC_CONST unsigned short dbERR_NOT_AVAILABLE = 34944U;
 _IEC_CONST unsigned short dbERR_NULLPOINTER = 34943U;
 _IEC_CONST unsigned short dbERR_INVALID_DATATYPE = 34942U;
 _IEC_CONST unsigned short dbERR_SQL_EXECUTE_REQUIRED = 34941U;
 _IEC_CONST unsigned short dbERR_INVALID_SQL_STATEMENT = 34940U;
 _IEC_CONST unsigned short dbERR_INVALID_DATABASE_NAME = 34939U;
 _IEC_CONST unsigned short dbERR_INVALID_PASSWORD = 34938U;
 _IEC_CONST unsigned short dbERR_INVALID_USERNAME = 34937U;
 _IEC_CONST unsigned short dbERR_INVALID_SERVERNAME = 34936U;
 _IEC_CONST unsigned short dbERR_BUFFER_SIZE = 34935U;
 _IEC_CONST unsigned short dbERR_UNSUPPORTED_DATABASE = 34934U;
 _IEC_CONST unsigned short dbERR_INVALID_COLUMN = 34933U;
 _IEC_CONST unsigned short dbERR_INVALID_HANDLE = 34932U;
 _IEC_CONST unsigned short dbERR_DATABASE = 34931U;
 _IEC_CONST unsigned short dbERR_MEMORY = 34930U;
 _IEC_CONST signed short DB_SQL_GUID = -11;
 _IEC_CONST signed short DB_SQL_VARCHAR = 12;
 _IEC_CONST signed short DB_SQL_TIMESTAMP = 11;
 _IEC_CONST signed short DB_SQL_TIME = 10;
 _IEC_CONST signed short DB_SQL_DATE = 9;
 _IEC_CONST signed short DB_SQL_DOUBLE = 8;
 _IEC_CONST signed short DB_SQL_REAL = 7;
 _IEC_CONST signed short DB_SQL_TINYINT = -6;
 _IEC_CONST signed short DB_SQL_SMALLINT = 5;
 _IEC_CONST signed short DB_SQL_INTEGER = 4;
 _IEC_CONST signed short DB_SQL_BIGINT = -25;
 _IEC_CONST signed short DB_SQL_DECIMAL = 3;
 _IEC_CONST signed short DB_SQL_NUMERIC = 2;
 _IEC_CONST signed short DB_SQL_CHAR = 1;
 _IEC_CONST signed short DB_SQL_NO_DATA = 100;
 _IEC_CONST signed short DB_SQL_INVALID_HANDLE = -2;
 _IEC_CONST signed short DB_SQL_ERROR = -1;
 _IEC_CONST unsigned short DB_DEFAULT_PORT = 5000U;
 _IEC_CONST unsigned short DB_SYSTEM_MS_SQL = 2U;
 _IEC_CONST unsigned short DB_SYSTEM_SYBASE = 1U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct dbConnect
{
	/* VAR_INPUT (analog) */
	unsigned long pServerName;
	unsigned long pUserName;
	unsigned long pPassword;
	unsigned long pDatabaseName;
	unsigned long databaseSystem;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	unsigned long connectionIdent;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbConnect_typ;

typedef struct dbConnectEnc
{
	/* VAR_INPUT (analog) */
	unsigned long pServerName;
	unsigned long pUserName;
	unsigned long pPassword;
	unsigned long pDatabaseName;
	unsigned long databaseSystem;
	unsigned long pEncoding;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	unsigned long connectionIdent;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbConnectEnc_typ;

typedef struct dbExecuteSql
{
	/* VAR_INPUT (analog) */
	unsigned long connectionIdent;
	unsigned long pSqlStatement;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbExecuteSql_typ;

typedef struct dbGetAffectedRows
{
	/* VAR_INPUT (analog) */
	unsigned long connectionIdent;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	unsigned long affectedRows;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbGetAffectedRows_typ;

typedef struct dbGetColumnCount
{
	/* VAR_INPUT (analog) */
	unsigned long connectionIdent;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	signed short columnCount;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbGetColumnCount_typ;

typedef struct dbFetchNextRow
{
	/* VAR_INPUT (analog) */
	unsigned long connectionIdent;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbFetchNextRow_typ;

typedef struct dbGetData
{
	/* VAR_INPUT (analog) */
	unsigned long connectionIdent;
	unsigned long columnIdx;
	signed short dataType;
	unsigned long pData;
	unsigned long dataSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	unsigned long actDataSize;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbGetData_typ;

typedef struct dbDisconnect
{
	/* VAR_INPUT (analog) */
	unsigned long connectionIdent;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbDisconnect_typ;

typedef struct dbGetInfo
{
	/* VAR_INPUT (analog) */
	unsigned long connectionIdent;
	unsigned short infoType;
	unsigned long pServerInfo;
	unsigned long serverInfoSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	unsigned short actServerInfoSize;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbGetInfo_typ;

typedef struct dbGetErrorMessage
{
	/* VAR_INPUT (analog) */
	unsigned long connectionIdent;
	unsigned long pErrorMessage;
	unsigned long errorMessageSize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short dbError;
	unsigned char sqlState[6];
	signed long nativeError;
	signed short actErrorMessageSize;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} dbGetErrorMessage_typ;



/* Prototyping of functions and function blocks */
void dbConnect(struct dbConnect* inst);
void dbConnectEnc(struct dbConnectEnc* inst);
void dbExecuteSql(struct dbExecuteSql* inst);
void dbGetAffectedRows(struct dbGetAffectedRows* inst);
void dbGetColumnCount(struct dbGetColumnCount* inst);
void dbFetchNextRow(struct dbFetchNextRow* inst);
void dbGetData(struct dbGetData* inst);
void dbDisconnect(struct dbDisconnect* inst);
void dbGetInfo(struct dbGetInfo* inst);
void dbGetErrorMessage(struct dbGetErrorMessage* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASDB_ */

