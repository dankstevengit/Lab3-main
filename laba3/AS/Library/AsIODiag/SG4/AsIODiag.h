/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASIODIAG_
#define _ASIODIAG_
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
 #define asdiagALL 3U
 #define asdiagCONFIGURED 2U
 #define asdiagPLUGGED 1U
 #define asdiagHARDWARE_MODULE_NAME 1006U
 #define asdiagCONFIG_BUS 1005U
 #define asdiagPLUGGED_BUS 1004U
 #define asdiagCONFIG_MODULE 1003U
 #define asdiagPLUGGED_MODULE 1002U
 #define asdiagPATH 1001U
 #define asdiagSERIAL_NUMBER 8U
 #define asdiagCONFIG_USETYPE 7U
 #define asdiagPLUGGED_USETYPE 6U
 #define asdiagCONFIG_FAMILY 5U
 #define asdiagPLUGGED_FAMILY 4U
 #define asdiagCONFIG_MODNO 3U
 #define asdiagPLUGGED_MODNO 2U
 #define asdiagMODUL_STATE 1U
 #define asdiagERR_INFOKIND 30805U
 #define asdiagERR_INFOCODE 30804U
 #define asdiagERR_INDEX 30803U
 #define asdiagERR_IDENT 30802U
 #define asdiagERR_NOMEM 30801U
#else
 _IEC_CONST unsigned long asdiagALL = 3U;
 _IEC_CONST unsigned long asdiagCONFIGURED = 2U;
 _IEC_CONST unsigned long asdiagPLUGGED = 1U;
 _IEC_CONST unsigned long asdiagHARDWARE_MODULE_NAME = 1006U;
 _IEC_CONST unsigned long asdiagCONFIG_BUS = 1005U;
 _IEC_CONST unsigned long asdiagPLUGGED_BUS = 1004U;
 _IEC_CONST unsigned long asdiagCONFIG_MODULE = 1003U;
 _IEC_CONST unsigned long asdiagPLUGGED_MODULE = 1002U;
 _IEC_CONST unsigned long asdiagPATH = 1001U;
 _IEC_CONST unsigned long asdiagSERIAL_NUMBER = 8U;
 _IEC_CONST unsigned long asdiagCONFIG_USETYPE = 7U;
 _IEC_CONST unsigned long asdiagPLUGGED_USETYPE = 6U;
 _IEC_CONST unsigned long asdiagCONFIG_FAMILY = 5U;
 _IEC_CONST unsigned long asdiagPLUGGED_FAMILY = 4U;
 _IEC_CONST unsigned long asdiagCONFIG_MODNO = 3U;
 _IEC_CONST unsigned long asdiagPLUGGED_MODNO = 2U;
 _IEC_CONST unsigned long asdiagMODUL_STATE = 1U;
 _IEC_CONST unsigned short asdiagERR_INFOKIND = 30805U;
 _IEC_CONST unsigned short asdiagERR_INFOCODE = 30804U;
 _IEC_CONST unsigned short asdiagERR_INDEX = 30803U;
 _IEC_CONST unsigned short asdiagERR_IDENT = 30802U;
 _IEC_CONST unsigned short asdiagERR_NOMEM = 30801U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct DiagCreateInfo
{
	/* VAR_INPUT (analog) */
	unsigned long infoKind;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ident;
	unsigned long nrEntries;
	/* VAR (analog) */
	unsigned short StateMan;
	unsigned short ErrMan;
	unsigned long Init;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DiagCreateInfo_typ;

typedef struct DiagDisposeInfo
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short StateMan;
	unsigned short ErrMan;
	unsigned long Init;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DiagDisposeInfo_typ;

typedef struct DiagGetNumInfo
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long index;
	unsigned long infoCode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long value;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DiagGetNumInfo_typ;

typedef struct DiagGetStrInfo
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long index;
	unsigned long infoCode;
	unsigned long pBuffer;
	unsigned long bufferLen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long stringLen;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DiagGetStrInfo_typ;



/* Prototyping of functions and function blocks */
void DiagCreateInfo(struct DiagCreateInfo* inst);
void DiagDisposeInfo(struct DiagDisposeInfo* inst);
void DiagGetNumInfo(struct DiagGetNumInfo* inst);
void DiagGetStrInfo(struct DiagGetStrInfo* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASIODIAG_ */

                                                           
