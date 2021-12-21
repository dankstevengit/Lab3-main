(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: canio
 * File: canio.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library canio
 ********************************************************************)
                                                                      
FUNCTION_BLOCK CANIOcmd 		(*sends a command to a CAN bus slave module and receives the response to this command*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		busnr	:USINT;			(*bus number of the desired CAN bus (1 to 8)*)
		nodenr	:USINT;			(*CAN node number of the slave station (1 to 32)*)
		cmd	:UDINT;				(*pointer to the buffer with the command request*)
		res	:UDINT;				(*pointer to the buffer for the command response*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;			(*internal variable*)
		fcb_ptr	:UDINT;			(*internal variable*)
		fcb_cnt	:UDINT;			(*internal variable*)
		tiotick	:UDINT;			(*internal variable*)
		node_ptr	:UDINT;		(*internal variable*)
		local_flag	:USINT;		(*internal variable*)
		first_flag	:USINT;		(*internal variable*)
		state	:USINT;			(*internal variable*)
		pp_ix	:USINT;			(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK
FUNCTION_BLOCK CANIOexc 		(*handles exceptions with occurring errors on B&R CAN nodes*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
	END_VAR		
	VAR_OUTPUT
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		exctyp	:USINT;			(*type of exception triggered, e.g. 1.. node inactive, 2.. node active again*)
		busnr	:USINT;			(*bus number of the desired CAN bus (1 to 8)*)
		nodenr	:USINT;			(*CAN node number of the slave station (1 to 32)*)
		errcode	:UINT;			(*error code for alarms*)
		addcode	:UINT;			(*additional code for alarms*)
	END_VAR		
	VAR
		initcnt	:UDINT;			(*internal variable*)
		first_flag	:USINT;		(*internal variable*)
		state	:USINT;			(*internal variable*)
	END_VAR		
END_FUNCTION_BLOCK
