/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASSOUND_
#define _ASSOUND_
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
 #define sndERR_NODRIVER 35050U
 #define sndERR_INVALID_PARAM 35051U
 #define sndERR_FILE_NOT_FOUND 35052U
 #define sndERR_ALLOCATED 35053U
 #define sndERR_BAD_FORMAT 35054U
 #define sndERR_NOMEM 35055U
 #define sndERR_LIMIT_STREAMS 35056U
 #define sndERR_MODE_EXCLUSIVE 35057U
 #define sndERR_OUT_OF_RANGE 35058U
 #define sndDELETE 1U
 #define sndSTOP 2U
 #define sndPLAY 3U
 #define sndPAUSE 4U
 #define sndEXCLUSIVE 16U
 #define sndLOOP 32U
#else
 _IEC_CONST unsigned short sndERR_NODRIVER = 35050U;
 _IEC_CONST unsigned short sndERR_INVALID_PARAM = 35051U;
 _IEC_CONST unsigned short sndERR_FILE_NOT_FOUND = 35052U;
 _IEC_CONST unsigned short sndERR_ALLOCATED = 35053U;
 _IEC_CONST unsigned short sndERR_BAD_FORMAT = 35054U;
 _IEC_CONST unsigned short sndERR_NOMEM = 35055U;
 _IEC_CONST unsigned short sndERR_LIMIT_STREAMS = 35056U;
 _IEC_CONST unsigned short sndERR_MODE_EXCLUSIVE = 35057U;
 _IEC_CONST unsigned short sndERR_OUT_OF_RANGE = 35058U;
 _IEC_CONST unsigned short sndDELETE = 1U;
 _IEC_CONST unsigned short sndSTOP = 2U;
 _IEC_CONST unsigned short sndPLAY = 3U;
 _IEC_CONST unsigned short sndPAUSE = 4U;
 _IEC_CONST unsigned short sndEXCLUSIVE = 16U;
 _IEC_CONST unsigned short sndLOOP = 32U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct sndCreateSound
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pFile;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long hSound;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} sndCreateSound_typ;

typedef struct sndCtrlSound
{
	/* VAR_INPUT (analog) */
	unsigned long hSound;
	unsigned long fSound;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short i_state;
	unsigned short i_result;
	unsigned long i_tmp;
	/* VAR_INPUT (digital) */
	plcbit enable;
} sndCtrlSound_typ;



/* Prototyping of functions and function blocks */
void sndCreateSound(struct sndCreateSound* inst);
void sndCtrlSound(struct sndCtrlSound* inst);
unsigned short sndSetVolume(unsigned char volumeLevel);
unsigned short sndSetMute(unsigned char muteSwitch);


#ifdef __cplusplus
};
#endif
#endif /* _ASSOUND_ */

