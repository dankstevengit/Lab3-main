(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: SRAM200x
 * File: SRAM200x.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library SRAM200x
 ********************************************************************)
                                                                      
FUNCTION_BLOCK SRAMPut					(*copies data into the SRAM of an IPC200x*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		offset	:UDINT;					(*offset within the SRAM WORD offset*)
		len	:UDINT;						(*size of the data area to be written - specified in WORD*)
		address	:UDINT;					(*pointer to the variable containing the data to be written to SRAM*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		name	:ARRAY[0..7] OF USINT;	(*internal variable*)
		HW_Info	:HWInfo;				(*internal variable*)
		error_sem	:UINT;				(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK
FUNCTION_BLOCK SRAMGet					(*reads a data area of len beginning with the offset (WORD offset) from the IPC200x SRAM*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		offset	:UDINT;					(*offset within the SRAM WORD offset*)
		len	:UDINT;						(*size of the data area to be read - specified in WORD*)
		address	:UDINT;					(*pointer to the variable to which the read data is written*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		name	:ARRAY[0..7] OF USINT;	(*internal variable*)
		HW_Info	:HWInfo;				(*internal variable*)
		error_sem	:UINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK SRAMClear				(*clears available SRAM*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		name	:ARRAY[0..7] OF USINT;	(*internal variable*)
		HW_Info	:HWInfo;				(*internal variable*)
		page	:USINT;					(*internal variable*)
		SYS_Info	:SysInfo;			(*internal variable*)
		init_count_old	:USINT;			(*internal variable*)
		error_sem	:UINT;				(*internal variable*)
		sema	:BOOL;					(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
