
{REDUND_CONTEXT} {REDUND_UNREPLICABLE} FUNCTION_BLOCK ioLinkWrite (*write data to an object of the IO-Link device*)
	VAR_INPUT
		enable : BOOL;       (*enables execution*)
		pDeviceName : UDINT; (*device name given as a pointer to string*)
		index : UINT;        (*index to be written*)
		subIndex : USINT;    (*subIndex to be written*)
		datatype : USINT;    (*datatype to be written*)
		pData : UDINT;       (*pointer to the write data*)
		dataLen : UDINT;     (*length of the write access*)
	END_VAR
	VAR_OUTPUT
		errorCode : UINT;   (*error code generated by the IO-Link device*)
		status : UINT;      (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		_internal : ioLinkInternalAccess_t; (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_CONTEXT} {REDUND_UNREPLICABLE} FUNCTION_BLOCK ioLinkRead (*read data from an object of the IO-Link device*)
	VAR_INPUT
		enable : BOOL;       (*enables execution*)
		pDeviceName : UDINT; (*device name given as a pointer to string*)
		index : UINT;        (*index to be read*)
		subIndex : USINT;    (*subIndex to be read*)
		datatype : USINT;    (*datatype to be read*)
		pData : UDINT;       (*pointer for the read data*)
		dataLen : UDINT;     (*length of the read data buffer*)
	END_VAR
	VAR_OUTPUT
		errorCode : UINT;    (*error code generated by the IO-Link device*)
		readLen : UDINT;     (*read data size in buffer*)
		status : UINT;       (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		_internal : ioLinkInternalAccess_t; (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_CONTEXT} {REDUND_UNREPLICABLE} FUNCTION_BLOCK ioLinkGetEvent (*read event data from event queue*)
	VAR_INPUT
		enable : BOOL;          (*enables execution*)
		pDeviceName : UDINT;    (*device name given as a pointer to string*)
	END_VAR
	VAR_OUTPUT
		eventQualifier : USINT; (*eventQualifier*)
		eventData : UINT;       (*eventData*)
		eventLost : BOOL;       (*is set if some events are overwritten*)
		eventPending : BOOL;    (*indicates if there are more events in the event buffer*)
		status : UINT;          (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		_internal : ioLinkInternalEvent_t; (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_CONTEXT} {REDUND_UNREPLICABLE} FUNCTION_BLOCK ioLinkSetMode (*change the mode of an IO-Link device*)
	VAR_INPUT
		enable : BOOL;       (*enables execution*)
		pDeviceName : UDINT; (*device name given as a pointer to string*)
		mode : USINT;        (*desired mode: ioLinkMODE_INACTIVE, ioLinkMODE_DIGINPUT, ioLinkMODE_DIGOUTPUT, ioLinkMODE_FASTOPERATE, ioLinkMODE_OPERATE*)
	END_VAR
	VAR_OUTPUT
		status : UINT;       (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		_internal : ioLinkInternalSetMode_t; (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
	
{REDUND_CONTEXT} {REDUND_UNREPLICABLE} FUNCTION_BLOCK ioLinkParameterDownload (*download the offline configuration to an IO-Link Device*)
	VAR_INPUT
		enable : BOOL;       (*enables execution*)
		pDeviceName : UDINT; (*device name given as a pointer to string*)
	END_VAR
	VAR_OUTPUT
		status : UINT;       (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		_internal : ioLinkInternalParDownload_t; (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK