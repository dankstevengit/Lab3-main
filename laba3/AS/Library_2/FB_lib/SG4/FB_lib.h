/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _FB_LIB_
#define _FB_LIB_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define FB_WORKING 65535U
 #define FB_INIT_FLAG 64U
 #define FB_PDCOM_FLAG 4U
 #define FB_RESET_FLAG 128U
 #define MAX_FB_BOARDS 8U
 #define FB_DEVCOM_FLAG 2U
 #define FB_HOSTACK_FLAG 1U
 #define FB_NOTREADY_FLAG 32U
 #define FB_STATEACK_FLAG 8U
 #define FB_ERR_USR_NOIDENT 12182U
 #define FB_ERR_USR_BADIDENT 12184U
 #define FB_ERR_USR_DATA_LNG 12188U
 #define FB_ERR_USR_INTERNAL 12181U
 #define FB_ERR_USR_SLAVE_CONF 12189U
 #define FB_host_reserved_flag 16U
 #define FB_ERR_USR_NOFREEIDENT 12185U
 #define FB_ERR_USR_WRONG_MODENR 12187U
 #define FB_ERR_USR_DEV_MBOX_FULL 12180U
 #define FB_ERR_USR_WRONG_MEMSIZE 12186U
 #define FB_ERR_USR_INLEN_TOO_LONG 12192U
 #define FB_ERR_USR_WRONG_DEVIDENT 12183U
 #define FB_ERR_USR_OUTLEN_TOO_LONG 12193U
 #define FB_ERR_USR_WRONG_HANDSHAKE 12191U
 #define FB_ERR_USR_MASTER_IS_STOPPED 12190U
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST unsigned short FB_WORKING;
 _GLOBAL_CONST unsigned char FB_INIT_FLAG;
 _GLOBAL_CONST unsigned char FB_PDCOM_FLAG;
 _GLOBAL_CONST unsigned char FB_RESET_FLAG;
 _GLOBAL_CONST unsigned char MAX_FB_BOARDS;
 _GLOBAL_CONST unsigned char FB_DEVCOM_FLAG;
 _GLOBAL_CONST unsigned char FB_HOSTACK_FLAG;
 _GLOBAL_CONST unsigned char FB_NOTREADY_FLAG;
 _GLOBAL_CONST unsigned char FB_STATEACK_FLAG;
 _GLOBAL_CONST unsigned short FB_ERR_USR_NOIDENT;
 _GLOBAL_CONST unsigned short FB_ERR_USR_BADIDENT;
 _GLOBAL_CONST unsigned short FB_ERR_USR_DATA_LNG;
 _GLOBAL_CONST unsigned short FB_ERR_USR_INTERNAL;
 _GLOBAL_CONST unsigned short FB_ERR_USR_SLAVE_CONF;
 _GLOBAL_CONST unsigned char FB_host_reserved_flag;
 _GLOBAL_CONST unsigned short FB_ERR_USR_NOFREEIDENT;
 _GLOBAL_CONST unsigned short FB_ERR_USR_WRONG_MODENR;
 _GLOBAL_CONST unsigned short FB_ERR_USR_DEV_MBOX_FULL;
 _GLOBAL_CONST unsigned short FB_ERR_USR_WRONG_MEMSIZE;
 _GLOBAL_CONST unsigned short FB_ERR_USR_INLEN_TOO_LONG;
 _GLOBAL_CONST unsigned short FB_ERR_USR_WRONG_DEVIDENT;
 _GLOBAL_CONST unsigned short FB_ERR_USR_OUTLEN_TOO_LONG;
 _GLOBAL_CONST unsigned short FB_ERR_USR_WRONG_HANDSHAKE;
 _GLOBAL_CONST unsigned short FB_ERR_USR_MASTER_IS_STOPPED;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct FBDevice_typ
{	unsigned char MemorySize;
	unsigned long DevAdress;
	unsigned long DevInfo;
	unsigned short Error;
	unsigned long FBIdent;
	unsigned short DevNumber;
	unsigned char DevType;
	unsigned char ConfMsgNr;
	unsigned char CommandMsgNr;
	unsigned char StatusMsgNr;
	unsigned char OtherMsgNr;
} FBDevice_typ;

typedef struct FBio
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	unsigned long OutBuffer;
	unsigned long OutLen;
	unsigned long InBuffer;
	unsigned long InLen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char hmode;
	/* VAR_INPUT (digital) */
	plcbit enable;
} FBio_typ;

typedef struct FBStart
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} FBStart_typ;

typedef struct FBStop
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} FBStop_typ;

typedef struct FBSlaveStat
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	unsigned long SlaveReady;
	unsigned long SlaveDiag;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit SlaveStatus;
} FBSlaveStat_typ;

typedef struct FBInit
{
	/* VAR_INPUT (analog) */
	unsigned long Device;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char MemSize;
	unsigned long DevIdent;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit Run;
	plcbit Configuration;
} FBInit_typ;

typedef struct FBSlaveExtStat
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	unsigned char SlaveNumber;
	unsigned long SlaveDiagnostic;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long istate;
	unsigned short waitCnt;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit SlaveReady;
	plcbit SlaveDiag;
} FBSlaveExtStat_typ;

typedef struct FBConfig
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	unsigned long ConfModulName;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Remaining;
	/* VAR (analog) */
	unsigned long istate;
	unsigned short FileLength;
	unsigned short waitCnt;
	unsigned long OffsetCopy;
	unsigned long pData;
	unsigned char Ready;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Mode;
	/* VAR (digital) */
	plcbit FirstMessage;
	plcbit MsgPutReady;
} FBConfig_typ;

typedef struct FBDialog
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	unsigned long Message;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long istate;
	unsigned char tx;
	unsigned short waitCount;
	/* VAR_INPUT (digital) */
	plcbit enable;
} FBDialog_typ;

typedef struct FBGetMessage
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	unsigned long Message;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short waitCount;
	/* VAR_INPUT (digital) */
	plcbit enable;
} FBGetMessage_typ;

typedef struct FBPutMessage
{
	/* VAR_INPUT (analog) */
	unsigned long DevIdent;
	unsigned long Message;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short waitCount;
	/* VAR_INPUT (digital) */
	plcbit enable;
} FBPutMessage_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void FBio(struct FBio* inst);
_BUR_PUBLIC void FBStart(struct FBStart* inst);
_BUR_PUBLIC void FBStop(struct FBStop* inst);
_BUR_PUBLIC void FBSlaveStat(struct FBSlaveStat* inst);
_BUR_PUBLIC void FBInit(struct FBInit* inst);
_BUR_PUBLIC void FBSlaveExtStat(struct FBSlaveExtStat* inst);
_BUR_PUBLIC void FBConfig(struct FBConfig* inst);
_BUR_PUBLIC void FBDialog(struct FBDialog* inst);
_BUR_PUBLIC void FBGetMessage(struct FBGetMessage* inst);
_BUR_PUBLIC void FBPutMessage(struct FBPutMessage* inst);
_BUR_PUBLIC unsigned short FBSearchDevices(unsigned long pInfos, unsigned char count);


#ifdef __cplusplus
};
#endif
#endif /* _FB_LIB_ */

