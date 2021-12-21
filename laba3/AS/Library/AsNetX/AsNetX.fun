(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsNetX
 * File: AsNetX.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library AsNetX
 ********************************************************************)

FUNCTION_BLOCK netxConfig				(*download configuration*)
	VAR_INPUT
		enable			: BOOL;			(*enables execution*)
		pDevice			: UDINT;		(*pointer to the device name*)
		pConfig			: UDINT;		(*pointer to the configuration name*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
		ident			: UDINT;		(*handle for further use*)
	END_VAR

	VAR
        i_state			: UINT;			(*internal variable*)
		i_result		: UINT;			(*internal variable*)
        i_tmp			: UDINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK netxXConfig				(*download configuration*)
	VAR_INPUT
		enable			: BOOL;			(*enables execution*)
		pDevice			: UDINT;		(*pointer to the device name*)
		pConfig			: UDINT;		(*pointer to the configuration name*)
		flags			: UDINT;		(*flags*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
		ident			: UDINT;		(*handle for further use*)
	END_VAR

	VAR
        i_state			: UINT;			(*internal variable*)
		i_result		: UINT;			(*internal variable*)
        i_tmp			: UDINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK netxStart				(*start communication*)
	VAR_INPUT
		enable			: BOOL;			(*enables execution*)
		ident			: UDINT;		(*handle*)
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

FUNCTION_BLOCK netxStop				(*stop communication*)
	VAR_INPUT
		enable			: BOOL;			(*enables execution*)
		ident			: UDINT;		(*handle*)
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

FUNCTION_BLOCK netxIORdWr				(*exchange IO data*)
	VAR_INPUT
		enable			: BOOL;			(*enables execution*)
		ident			: UDINT;		(*handle*)
		pIn				: UDINT;		(*pointer to the input data*)
		inArea			: UDINT;		(*area of input  data*)
		inOffset		: UDINT;		(*offset of input  data*)
		inSize			: UDINT;		(*size of input  data*)
		pOut			: UDINT;		(*pointer to the output data*)
		outArea			: UDINT;		(*area of output  data*)
		outOffset		: UDINT;		(*offset of output  data*)
		outSize			: UDINT;		(*size of output datd*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;			(*execution status: ERR_OK, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK netxDpSAdrSet			(*set profibus slave address*)
	VAR_INPUT
		enable			: BOOL;			(*enables execution*)
		ident			: UDINT;		(*handle*)
		address			: UDINT;		(*address*)
	END_VAR

	VAR_OUTPUT
		status			: UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
		dpStatus		: UDINT;		(*profibus DP stack status*)
	END_VAR

	VAR
        i_state			: UINT;			(*internal variable*)
		i_result		: UINT;			(*internal variable*)
        i_tmp			: UDINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
