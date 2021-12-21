/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASPLKSUP_
#define _ASPLKSUP_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <powerlnk.h>
#include <runtime.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define ERR_PLSUP_IO_NOT_EXIST 20949U
 #define PLSUP_BUS_MODE_ASYNC 0
 #define ERR_PLSUP_IO_REMOVED 20948U
 #define PLSUP_BUS_MODE_SYNC 1
 #define ERR_PLSUP_TIMEOUT 20947U
#else
 _IEC_CONST unsigned short ERR_PLSUP_IO_NOT_EXIST = 20949U;
 _IEC_CONST plcbit PLSUP_BUS_MODE_ASYNC = 0;
 _IEC_CONST unsigned short ERR_PLSUP_IO_REMOVED = 20948U;
 _IEC_CONST plcbit PLSUP_BUS_MODE_SYNC = 1;
 _IEC_CONST unsigned short ERR_PLSUP_TIMEOUT = 20947U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct plsGetNetQuality
{
	/* VAR_INPUT (analog) */
	unsigned long pPlkDevice;
	unsigned long* pCyclicCnt;
	unsigned long* pCurrentFailCnt;
	unsigned long* pSumFailCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char step;
	unsigned long ident;
	unsigned long SumFailCntTemp;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit reset;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit init;
} plsGetNetQuality_typ;

typedef struct plsSetMode2003
{
	/* VAR_INPUT (analog) */
	unsigned long pPlkDevice;
	unsigned char stationNo;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	signed char retries;
	signed char timeout;
	unsigned char step;
	unsigned long ident;
	unsigned short status_temp;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit mode;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit init;
} plsSetMode2003_typ;

typedef struct plsRegR2003
{
	/* VAR_INPUT (analog) */
	unsigned long pPlkDevice;
	unsigned char stationNo;
	unsigned char modNo;
	unsigned char anpNo;
	unsigned char regNo;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long value;
	/* VAR (analog) */
	unsigned char step;
	signed char retries;
	signed char timeout;
	unsigned long ident;
	unsigned char anpNo_temp;
	unsigned short status_temp;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit init;
} plsRegR2003_typ;

typedef struct plsRegW2003
{
	/* VAR_INPUT (analog) */
	unsigned long pPlkDevice;
	unsigned char stationNo;
	unsigned char modNo;
	unsigned char anpNo;
	unsigned char regNo;
	unsigned long value;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char step;
	signed char retries;
	signed char timeout;
	unsigned long ident;
	unsigned char anpNo_temp;
	unsigned short status_temp;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit init;
} plsRegW2003_typ;



/* Prototyping of functions and function blocks */
void plsGetNetQuality(struct plsGetNetQuality* inst);
void plsSetMode2003(struct plsSetMode2003* inst);
void plsRegR2003(struct plsRegR2003* inst);
void plsRegW2003(struct plsRegW2003* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASPLKSUP_ */

                                                           
