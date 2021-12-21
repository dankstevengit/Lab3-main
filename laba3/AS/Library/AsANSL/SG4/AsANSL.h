/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASANSL_
#define _ASANSL_
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
 #define asANSL_ERR_END_OF_LIST 31877U
 #define asANSL_ERR_PV_CONN_NOT_EXIST 31876U
 #define asANSL_ERR_CONN_NOT_EXIST 31875U
 #define asANSL_ERR_CLIENT_NOT_EXIST 31874U
 #define asANSL_ERR_DATAMODUL_NOT_EXIST 31873U
 #define asANSL_ERR_XML_INVALID 31872U
 #define asANSL_ERR_XML_PARSER_INIT_ERROR 31871U
 #define asANSL_ERR_PARAM_INVALID 31870U
 #define asANSL_ERR_FILE_RESOURCE 31655U
 #define asANSL_ERR_SYNC_RESOURCE 31654U
 #define asANSL_ERR_THREAD_RESOURCE 31653U
 #define asANSL_ERR_EVENT_RESOURCE 31652U
 #define asANSL_ERR_MEMORY_RESOURCE 31651U
 #define asANSL_PV_DIRECTION_WRITE 2U
 #define asANSL_PV_DIRECTION_READ 1U
 #define asANSL_OPTION_FILTER_ERROR 2U
 #define asANSL_OPTION_FILTER_NOERROR 1U
 #define asANSL_OPTION_FILTER_ALL 0U
#else
 _IEC_CONST unsigned short asANSL_ERR_END_OF_LIST = 31877U;
 _IEC_CONST unsigned short asANSL_ERR_PV_CONN_NOT_EXIST = 31876U;
 _IEC_CONST unsigned short asANSL_ERR_CONN_NOT_EXIST = 31875U;
 _IEC_CONST unsigned short asANSL_ERR_CLIENT_NOT_EXIST = 31874U;
 _IEC_CONST unsigned short asANSL_ERR_DATAMODUL_NOT_EXIST = 31873U;
 _IEC_CONST unsigned short asANSL_ERR_XML_INVALID = 31872U;
 _IEC_CONST unsigned short asANSL_ERR_XML_PARSER_INIT_ERROR = 31871U;
 _IEC_CONST unsigned short asANSL_ERR_PARAM_INVALID = 31870U;
 _IEC_CONST unsigned short asANSL_ERR_FILE_RESOURCE = 31655U;
 _IEC_CONST unsigned short asANSL_ERR_SYNC_RESOURCE = 31654U;
 _IEC_CONST unsigned short asANSL_ERR_THREAD_RESOURCE = 31653U;
 _IEC_CONST unsigned short asANSL_ERR_EVENT_RESOURCE = 31652U;
 _IEC_CONST unsigned short asANSL_ERR_MEMORY_RESOURCE = 31651U;
 _IEC_CONST unsigned char asANSL_PV_DIRECTION_WRITE = 2U;
 _IEC_CONST unsigned char asANSL_PV_DIRECTION_READ = 1U;
 _IEC_CONST unsigned char asANSL_OPTION_FILTER_ERROR = 2U;
 _IEC_CONST unsigned char asANSL_OPTION_FILTER_NOERROR = 1U;
 _IEC_CONST unsigned char asANSL_OPTION_FILTER_ALL = 0U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct AsANSLTimeStampType
{	unsigned long timeStampSec;
	unsigned long timeStampNsec;
} AsANSLTimeStampType;

typedef struct AsANSLClientDiagInfoType
{	plcstring clientDataObjName[257];
	struct AsANSLTimeStampType clientTimeStamp;
	unsigned long clientConn;
	unsigned long clientConnErr;
} AsANSLClientDiagInfoType;

typedef struct AsANSLClientDiagConnInfoType
{	plcstring connName[65];
	plcstring connTargetAddr[65];
	struct AsANSLTimeStampType connTimeStamp;
	unsigned long connStatus;
	unsigned long connError;
	unsigned long connPvRead;
	unsigned long connPvReadErr;
	unsigned long connPvWrite;
	unsigned long connPvWriteErr;
	unsigned long connNumReadJobs;
	unsigned long connNumSendJobs;
	unsigned long connNumErr;
} AsANSLClientDiagConnInfoType;

typedef struct AsANSLClientDiagPvInfoType
{	plcstring pvNameLocal[513];
	plcstring pvNameRemote[513];
	struct AsANSLTimeStampType pvTimeStamp;
	unsigned long pvStatus;
	unsigned long pvError;
	unsigned long pvDirection;
} AsANSLClientDiagPvInfoType;

typedef struct AsANSLClientStart
{
	/* VAR_INPUT (analog) */
	plcstring dataObjName[257];
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsANSLClientStart_typ;

typedef struct AsANSLClientStop
{
	/* VAR_INPUT (analog) */
	plcstring dataObjName[257];
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsANSLClientStop_typ;

typedef struct AsANSLClientDiag
{
	/* VAR_INPUT (analog) */
	plcstring dataObjName[257];
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	struct AsANSLClientDiagInfoType ClientDiagInfo;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsANSLClientDiag_typ;

typedef struct AsANSLClientDiagAll
{
	/* VAR_INPUT (analog) */
	unsigned long index;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	struct AsANSLClientDiagInfoType ClientDiagInfo;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsANSLClientDiagAll_typ;

typedef struct AsANSLClientDiagConn
{
	/* VAR_INPUT (analog) */
	plcstring dataObjName[257];
	plcstring connName[65];
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	struct AsANSLClientDiagConnInfoType ClientDiagConnInfo;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsANSLClientDiagConn_typ;

typedef struct AsANSLClientDiagConnAll
{
	/* VAR_INPUT (analog) */
	plcstring dataObjName[257];
	unsigned long index;
	unsigned long filterOption;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	struct AsANSLClientDiagConnInfoType ClientDiagConnInfo;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsANSLClientDiagConnAll_typ;

typedef struct AsANSLClientDiagPv
{
	/* VAR_INPUT (analog) */
	plcstring dataObjName[257];
	plcstring connName[65];
	plcstring localPvName[513];
	plcstring remotePvName[513];
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	struct AsANSLClientDiagPvInfoType ClientDiagPvInfo;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsANSLClientDiagPv_typ;

typedef struct AsANSLClientDiagPvAll
{
	/* VAR_INPUT (analog) */
	plcstring dataObjName[257];
	plcstring connName[65];
	unsigned long index;
	unsigned long filterOption;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	struct AsANSLClientDiagPvInfoType ClientDiagPvInfo;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} AsANSLClientDiagPvAll_typ;



/* Prototyping of functions and function blocks */
void AsANSLClientStart(struct AsANSLClientStart* inst);
void AsANSLClientStop(struct AsANSLClientStop* inst);
void AsANSLClientDiag(struct AsANSLClientDiag* inst);
void AsANSLClientDiagAll(struct AsANSLClientDiagAll* inst);
void AsANSLClientDiagConn(struct AsANSLClientDiagConn* inst);
void AsANSLClientDiagConnAll(struct AsANSLClientDiagConnAll* inst);
void AsANSLClientDiagPv(struct AsANSLClientDiagPv* inst);
void AsANSLClientDiagPvAll(struct AsANSLClientDiagPvAll* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASANSL_ */

