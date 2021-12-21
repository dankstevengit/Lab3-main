(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: IOConfig
 * File: IOConfig.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library IOConfig
 ********************************************************************)
                                                                      
FUNCTION_BLOCK IOCGeneral				(*defines and executes shovel instructions*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		IO_type	:USINT;					(*I/O type: 0.. 2010-IO, 1.. 2005-IO, 5.. 2003-IO*)
		Slave_nr	:USINT;				(*according to I/O type*)
		Slot	:USINT;					(*module address of the I/O module (in decimal form)*)
		Offset	:USINT;					(*internal offset on the module*)
		DataLen	:USINT;					(*length of the data area to be shovelled in bytes*)
		ReadWrite	:BOOL;				(*0.. read, 1.. write*)
		DataState	:BOOL;				(*0.. normal, 1.. status *)
		pData	:UDINT;					(*pointer to the "data" variable*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		mode	:USINT;					(*internal variable*)
		state	:DINT;					(*internal variable*)
		old_state	:DINT;				(*internal variable*)
		IOalloc	:IO_alloc;				(*internal variable*)
		IOmphydef	:IO_mphydef;		(*internal variable*)
		IOmphydefc	:IO_mphydef;		(*internal variable*)
		IOdata	:IO_data;				(*internal variable*)
		IOfree	:IO_free;				(*internal variable*)
		IOptest	:IO_ptest;				(*internal variable*)
		IOPstructure	:iocIOParam;	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IOC2003					(*uses 2003 configuration words*)
	VAR_INPUT		
		enable	:BOOL;					(*enables execution*)
		Slot	:USINT;					(*module slot (CPU = 0)*)
		SubSlot	:USINT;					(*submodule slot*)
		ConfigWord	:USINT;				(*number of the configuration word to be edited*)
		ReadWrite	:BOOL;				(*0.. read, 1.. write*)
		pData	:UDINT;					(*pointer to the "data" variable*)
	END_VAR		
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR		
	VAR
		intern_off	:USINT;				(*internal variable*)
		mode	:USINT;					(*internal variable*)
		state	:DINT;					(*internal variable*)
		old_state	:DINT;				(*internal variable*)
		IOalloc	:IO_alloc;				(*internal variable*)
		IOmphydef	:IO_mphydef;		(*internal variable*)
		IOmphydefc	:IO_mphydef;		(*internal variable*)
		IOdata	:IO_data;				(*internal variable*)
		IOfree	:IO_free;				(*internal variable*)
		IOptest	:IO_ptest;				(*internal variable*)
		IOPstructure	:iocIOParam;	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
