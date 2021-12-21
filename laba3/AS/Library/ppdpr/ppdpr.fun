(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: ppdpr
 * File: ppdpr.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library ppdpr
 ********************************************************************)
                                                                      
FUNCTION_BLOCK PP_trigger			(*starts the PP HSTC on the PP using an interrupt*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		pp_ident	:UDINT;			(*ID for the PP*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK PPGetSharedAddress 	(*gets the address of the memory on PP*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		ident	:UDINT;				(*ID of allocated memory on the PP*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		pDpr	:UDINT;				(*address of shared memory area on the PP*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK PPConnect			(*allocates memory on the parallel processor (PP)*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		ppmodadr	:USINT;			(*module address of PP (slot on rack)*)
		dprlen	:UDINT;				(*length of memory to be allocated*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		ident	:UDINT;				(*ID of the allocated memory*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK PP_ident				(*determines the identifier for the specified PP module number*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		module_no	:UINT;			(*module address of PP on the rack (slot)*)
	END_VAR
	VAR_OUTPUT
		pp_ident	:UDINT;			(*ID for the PP*)
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK PP_ready				(*checks whether the PP HSTC on the PP is ready*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		pp_ident	:UDINT;			(*ID of the PP*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
