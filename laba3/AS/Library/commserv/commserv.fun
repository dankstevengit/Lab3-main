(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: commserv
 * File: commserv.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library commserv
 ********************************************************************)
                                                                      
FUNCTION_BLOCK INAcreate		(*creates a dynamic data FIFO*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		pName	:UDINT;			(*pointer to the name of the object to be created*)
		size	:UDINT;			(*size of the entry in bytes*)
		count	:UDINT;			(*number of entries*)
		mode	:USINT;			(*decides whether a FIFO should be created with queuing or ring buffer behavior*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		ident	:UDINT;			(*identifier with which the link can be referenced*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK INAdelete		(*deletes a data object specified by ident*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		ident	:UDINT;			(*identifier of the object to be erased*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK INADevOpen		(*opens an INA device*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		pDevice	:UDINT;			(*pointer to a device string*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		state	:USINT;			(*internal variable*)
		internal	:UINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK INADevOpenEx		(*expands open for an INA device*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		pDevice	:UDINT;			(*pointer to a device string*)
		pDeviceParam	:UDINT;	(*pointer to a parameter string*)
		type	:USINT;			(*FBASE type*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR	
	VAR
		i_state	:UINT;			(*internal variable*)
		i_result	:UINT;		(*internal variable*)
		i_tmp	:UDINT;			(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK INADevClose		(*closes an INA device*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		pDevice	:UDINT;			(*pointer to a device string*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		state	:USINT;			(*internal variable*)
		internal	:UINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
