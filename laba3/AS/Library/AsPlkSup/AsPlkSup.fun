(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsPlkSup
 * File: AsPlkSup.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library AsPlkSup
 ********************************************************************)
                                                                      
FUNCTION_BLOCK plsGetNetQuality                       (*determines the network quality by means of the number of faulty frames; asynchronous execution*)
	VAR_INPUT
		enable	:BOOL;                                (*enables execution*)
		pPlkDevice	:UDINT;                           (*string for the POWERLINK interface given as a pointer, e.g., "SL0.SS1.IF2"*)
		reset	:BOOL;                                (*total error counter is set to 0 if reset = 1*)
		pCyclicCnt	:REFERENCE TO UDINT;              (*pointer to the overall number of bus cycles*)
		pCurrentFailCnt	:REFERENCE TO UDINT;          (*pointer to the number of failed bus cycles*)
		pSumFailCnt	:REFERENCE TO UDINT;              (*pointer to the number of failed bus cycles (equally to pCurrentFailCnt)*)
	END_VAR
	VAR_OUTPUT
		ready	:BOOL;                                (*as soon as ready = 1, initialization of the FBKs is finished and the outputs are valid*)
		status	:UINT;                                (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
	END_VAR
	VAR
		step	:USINT;                               (*internal variable*)
		ident	:UDINT;                               (*internal variable*)
		init	:BOOL;                                (*internal variable*)
		SumFailCntTemp	:UDINT;                       (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK plsSetMode2003                         (*sets the bus mode to either sync. or async. operation with POWERLINK cycles; asynchronous execution*)
	VAR_INPUT
		enable	:BOOL;                                (*enables execution*)
		pPlkDevice	:UDINT;                           (*definition string for the POWERLINK interface given as a pointer, e.g., "SL0.SS1.IF2"*)
		stationNo	:USINT;                           (*station number: 1..253*)
		mode	:BOOL;                                (*asynchronous mode = PLSUP_BUS_MODE_ASYNC, synchronous mode = PLSUP_BUS_MODE_SYNC*)
	END_VAR
	VAR_OUTPUT
		ready	:BOOL;                                (*function block instructions are only executed if enable = TRUE*)
		status	:UINT;                                (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
	END_VAR
	VAR
		retries	:SINT;                                (*internal variable*)
		timeout	:SINT;                                (*internal variable*)
		init	:BOOL;                                (*internal variable*)
		step	:USINT;                               (*internal variable*)
		ident	:UDINT;                               (*internal variable*)
		status_temp	:UINT;                            (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK plsRegR2003                            (*reads a value from a register on a screw-in module; asynchronous execution*)
	VAR_INPUT
		enable	:BOOL;                                (*enables execution*)
		pPlkDevice	:UDINT;                           (*definition string for the POWERLINK interface given as a pointer, e.g., "SL0.SS1.IF2"*)
		stationNo	:USINT;                           (*station number: 1..253*)
		modNo	:USINT;                               (*module number: 1..16*)
		anpNo	:USINT;                               (*screw-in module number: 1..4*)
		regNo	:USINT;                               (*register number: 0..15*)
	END_VAR
	VAR_OUTPUT
		ready	:BOOL;                                (*FBK can only be re-executed when ready = 1*)
		status	:UINT;                                (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
		value	:UDINT;                               (*read value*)
	END_VAR
	VAR
		init	:BOOL;                                (*internal variable*)
		step	:USINT;                               (*internal variable*)
		retries	:SINT;                                (*internal variable*)
		timeout	:SINT;                                (*internal variable*)
		ident	:UDINT;                               (*internal variable*)
		anpNo_temp	:USINT;                           (*internal variable*)
		status_temp	:UINT;                            (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK plsRegW2003                            (*writes a value to a register on a screw-in module; asynchronous execution*)
	VAR_INPUT
		enable	:BOOL;                                (*enables execution*)
		pPlkDevice	:UDINT;                           (*definition string for the POWERLINK interface given as a pointer, e.g., "SL0.SS1.IF2"*)
		stationNo	:USINT;                           (*station number: 1..253*)
		modNo	:USINT;                               (*module number: 1..16*)
		anpNo	:USINT;                               (*screw-in module number: 1..4*)
		regNo	:USINT;                               (*register number: 0..15*)
		value	:UDINT;                               (*value to be written*)
	END_VAR
	VAR_OUTPUT
		ready	:BOOL;                                (*FBK can only be re-executed when ready = 1*)
		status	:UINT;                                (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
	END_VAR
	VAR
		init	:BOOL;                                (*internal variable*)
		step	:USINT;                               (*internal variable*)
		retries	:SINT;                                (*internal variable*)
		timeout	:SINT;                                (*internal variable*)
		ident	:UDINT;                               (*internal variable*)
		anpNo_temp	:USINT;                           (*internal variable*)
		status_temp	:UINT;                            (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
