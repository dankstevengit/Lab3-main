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

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define sndLOOP 32U
 #define sndEXCLUSIVE 16U
 #define sndPAUSE 4U
 #define sndPLAY 3U
 #define sndSTOP 2U
 #define sndDELETE 1U
 #define sndERR_OUT_OF_RANGE 35058U
 #define sndERR_MODE_EXCLUSIVE 35057U
 #define sndERR_LIMIT_STREAMS 35056U
 #define sndERR_NOMEM 35055U
 #define sndERR_BAD_FORMAT 35054U
 #define sndERR_ALLOCATED 35053U
 #define sndERR_FILE_NOT_FOUND 35052U
 #define sndERR_INVALID_PARAM 35051U
 #define sndERR_NODRIVER 35050U
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST unsigned short sndLOOP;
 _GLOBAL_CONST unsigned short sndEXCLUSIVE;
 _GLOBAL_CONST unsigned short sndPAUSE;
 _GLOBAL_CONST unsigned short sndPLAY;
 _GLOBAL_CONST unsigned short sndSTOP;
 _GLOBAL_CONST unsigned short sndDELETE;
 _GLOBAL_CONST unsigned short sndERR_OUT_OF_RANGE;
 _GLOBAL_CONST unsigned short sndERR_MODE_EXCLUSIVE;
 _GLOBAL_CONST unsigned short sndERR_LIMIT_STREAMS;
 _GLOBAL_CONST unsigned short sndERR_NOMEM;
 _GLOBAL_CONST unsigned short sndERR_BAD_FORMAT;
 _GLOBAL_CONST unsigned short sndERR_ALLOCATED;
 _GLOBAL_CONST unsigned short sndERR_FILE_NOT_FOUND;
 _GLOBAL_CONST unsigned short sndERR_INVALID_PARAM;
 _GLOBAL_CONST unsigned short sndERR_NODRIVER;
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
_BUR_PUBLIC void sndCreateSound(struct sndCreateSound* inst);
_BUR_PUBLIC void sndCtrlSound(struct sndCtrlSound* inst);
_BUR_PUBLIC unsigned short sndSetVolume(unsigned char volumeLevel);
_BUR_PUBLIC unsigned short sndSetMute(unsigned char muteSwitch);


#ifdef __cplusplus
};
#endif
#endif /* _ASSOUND_ */

