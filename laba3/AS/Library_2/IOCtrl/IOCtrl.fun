(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: IOCtrl
 * File: IOCtrl.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library IOCtrl
 ********************************************************************)
                                                                      
FUNCTION IOCTSwHSTC : UINT			(*switches shovelling to the HS task class*)
END_FUNCTION

FUNCTION IOCTSw10ms : UINT			(*switches shovelling to the 10 ms cycle*)
END_FUNCTION

FUNCTION_BLOCK IOCTSingleCycle		(*executes an IO cycle*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)				
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		laststatus	:UINT;			(*internal variable*)
		warmcnt	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION IOCTEnableCyclic : UINT	(*enables cyclic IO shovelling in the 2003 system*)
END_FUNCTION

FUNCTION IOCTDisableCyclic : UINT	(*disables cyclic IO shovelling in the 2003 system*)
END_FUNCTION
