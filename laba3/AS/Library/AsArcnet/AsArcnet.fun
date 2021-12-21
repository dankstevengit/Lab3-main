(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsArcnet
 * File: AsArcnet.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library AsArcnet
 ********************************************************************)
                                                                      
FUNCTION_BLOCK ARCopen             (*opens an Arcnet device*)
	VAR_INPUT
		enable			: BOOL;    (*enables execution*)
		device			: UDINT;   (*device name given as a pointer, e.g., "SL3.SS1.IF2"*)
		mode			: UDINT;   (*initialization string given as a pointer, e.g., "/BD=1250000 /RECON=105000 /ET=2"*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;    (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		ident			: UDINT;   (*identifier of the opened Arcnet device*)
	END_VAR
END_FUNCTION_BLOCK


FUNCTION_BLOCK ARCclose            (*closes an Arcnet device*)
	VAR_INPUT
		enable			: BOOL;    (*enables execution*)
		ident			: UDINT;   (*identifier returned from ARCopen()*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;    (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK ARCread             (*reads received frames*)
	VAR_INPUT
		enable			: BOOL;    (*enables execution*)
		ident			: UDINT;   (*identifier returned from ARCopen()*)
		buffer			: UDINT;   (*address of the receive buffer*)
		buflng			: UDINT;   (*address of the length variable of the receive buffer*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;    (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		node_id			: USINT;   (*identifier of the sender*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK ARCwrite            (*sends a frame to a receiving station*)
	VAR_INPUT
		enable			: BOOL;    (*enables execution*)
		ident			: UDINT;   (*identifier returned from ARCopen()*)
		buffer			: UDINT;   (*address of the buffer containing send data*)
		buflng			: UDINT;   (*address of the length variable of the send data*)
		node_id			: USINT;   (*identifier of the receiver*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;    (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK ARCexcep            (*inserts an exception task which is called when a frame with a specified ID has been received*)
	VAR_INPUT
		enable			: BOOL;    (*enables execution*)
		ident			: UDINT;   (*identifier returned from ARCopen()*)
		node_id			: USINT;   (*identifier which triggers the exception task*)
		exc_nr			: USINT;   (*number of the exception task*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;    (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK ARCinfo             (*reads various information about FbArcnet*)
	VAR_INPUT
		enable			: BOOL;    (*enables execution*)
		ident			: UDINT;   (*identifier returned from ARCopen()*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;    (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		node_id			: USINT;   (*particular node number set on the hardware switch*)
		statadr			: UDINT;   (*address of the statistic variables of type ARCstat_typ_structure*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK ARCxread            (*reads received frames from an exception task*)
	VAR_INPUT
		enable			: BOOL;    (*enables execution*)
		ident			: UDINT;   (*identifier returned from ARCopen()*)
		buffer			: UDINT;   (*address of the receive buffer*)
		buflng			: UDINT;   (*address of the length variable of the receive buffer*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;    (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		node_id			: USINT;   (*identifier of the sender*)
	END_VAR
END_FUNCTION_BLOCK
