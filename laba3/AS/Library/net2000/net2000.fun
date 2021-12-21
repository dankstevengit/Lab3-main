(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: net2000
 * File: net2000.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library net2000
 ********************************************************************)
                                                                      
FUNCTION_BLOCK NET2write (* NET2000 - Write-FUB *)
	VAR_INPUT
		enable	:BOOL;
		destadr	:DINT;
		pvlist	:UDINT;
		pvnum	:UINT;
		dataarea	:UDINT;
		datlng	:UINT;
	END_VAR
	VAR_OUTPUT
		ok	:BOOL;
		status	:UINT;
		record	:UDINT;
		reqcnt	:UDINT;
		rqdatlng	:UINT;
	END_VAR
	VAR
		InternalData	:STRING[175];
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK NET2read (* NET2000 - Read-FUB *)
	VAR_INPUT
		enable	:BOOL;
		destadr	:DINT;
		pvlist	:UDINT;
		pvnum	:UINT;
		dataarea	:UDINT;
		datlng	:UINT;
	END_VAR
	VAR_OUTPUT
		ok	:BOOL;
		status	:UINT;
		record	:UDINT;
		reqcnt	:UDINT;
		rqdatlng	:UINT;
	END_VAR
	VAR
		InternalData	:STRING[175];
	END_VAR
END_FUNCTION_BLOCK
