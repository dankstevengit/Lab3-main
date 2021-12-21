(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsSound
 * File: AsSound.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library AsSound
 ********************************************************************)
                                                                      
FUNCTION_BLOCK sndCreateSound			(*SND - create a sndObj*)
	VAR_INPUT
		enable			: BOOL;			(*enables execution*)
		pDevice			: UDINT;		(*Devicename given as a pointer*)
		pFile			: UDINT;		(*Filename given as a pointer*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
		hSound			: UDINT;		(*handle of sndObj*)
	END_VAR

	VAR
        i_state			: UINT;			(*internal variable*)
		i_result		: UINT;			(*internal variable*)
        i_tmp			: UDINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK sndCtrlSound				(*SND - control a sndObj*)
	VAR_INPUT
		enable			: BOOL;			(*enables execution*)
		hSound			: UDINT;		(*Handle of sndObj*)
		fSound			: UDINT;		(*controlling flag*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
	END_VAR

	VAR
        i_state			: UINT;			(*internal variable*)
		i_result		: UINT;			(*internal variable*)
        i_tmp			: UDINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION sndSetVolume : UINT 			(*SND - change volume level*)
	VAR_INPUT
		volumeLevel	: USINT;			(*volume level [0,100]*)
	END_VAR
END_FUNCTION

FUNCTION sndSetMute : UINT 				(*SND - mute on/off*)
	VAR_INPUT
		muteSwitch	: USINT;			(*mute switch [0,1]*)
	END_VAR
END_FUNCTION
