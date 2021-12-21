(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: io_lib
 * File: io_lib.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library io_lib
 ********************************************************************)
                                                                      
FUNCTION_BLOCK IO_alloc 			(*reserves an I/O data area*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		bytesize	:UINT;			(*size of the I/O data area in bytes*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		data_ptr	:UDINT;			(*pointer to the reserved I/O data area*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_check 			(*checks an I/O module*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		io_type	:USINT;				(*I/O type, eg. 0.. 2010-IO, 1.. 2005-IO*)
		master_no	:USINT;			(*logical number of the IO master (currently always 1) or the RIO master*)
		slave_no	:USINT;			(*slave number according to I/O type*)
		module_adr	:USINT;			(*module address of the I/O module (in decimal form)*)
		search_typ	:USINT;			(*required type for the I/O module with the specified module address*)
	END_VAR		
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		found_flag	:BOOL;			(*0.. I/O module of specified type not available, 1.. I/O module of specified type available*)
		module_typ	:USINT;			(*type code of the I/O module checked*)
	END_VAR	
	VAR
		chk_ident	:UDINT;			(*internal variable*)
		sc_mod_adr	:USINT;			(*internal variable*)
		sc_kurzken	:USINT;			(*internal variable*)
		sc_int_off	:USINT;			(*internal variable*)
		sc_laenge	:USINT;			(*internal variable*)
		sc_ioc_ptr	:UINT;			(*internal variable*)
		sc_ende	:UINT;				(*internal variable*)
		sc_data	:UDINT;				(*internal variable*)
		sc_data2	:UDINT;			(*internal variable*)
		sc_data3	:UDINT;			(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_data 				(*executes an I/O shovel instruction*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		ioident	:UDINT;				(*identifier for the I/O shovel instruction defined with the IO_mphydef() function*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_disable 			(*disables an I/O module with screw-in modules*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		io_type	:USINT;				(*I/O type, eg. 0.. 2010-IO, 1.. 2005-IO*)
		master_no	:USINT;			(*logical number of the IO master or the RIO master*)
		slave_no	:USINT;			(*slave number according to I/O type*)
		module_adr	:USINT;			(*module address of the I/O module (in decimal form)*)
		force_flag	:USINT;			(*0.. do not force inputs (digital/analog), 1.. force inputs (digital/analog)*)
		dig_value	:BOOL;			(*force value for digital inputs on the I/O module*)
		ana_value	:UINT;			(*force value for analog inputs on the I/O module*)
	END_VAR		
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR			
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_enable 			(*enables an I/O module*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		io_type	:USINT;				(*I/O type, eg. 0.. 2010-IO, 1.. 2005-IO*)
		master_no	:USINT;			(*logical number of the IO master (currently always 1) or the RIO master*)
		slave_no	:USINT;			(*slave number according to I/O type*)
		module_adr	:USINT;			(*module address of the I/O module (in decimal form)*)
	END_VAR	
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_free 				(*releases a reserved I/O data area*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		bytesize	:UINT;			(*size of the I/O data area in bytes*)
		data_ptr	:UDINT;			(*pointer to the reserved I/O data area*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_info 				(*determines which I/O module caused an error*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		io_type	:USINT;				(*I/O type, eg. 0.. 2010-IO, 1.. 2005-IO*)
		master_no	:USINT;			(*logical number of the IO master or the RIO master*)
		slave_no	:USINT;			(*slave number according to I/O type*)
		module_adr	:USINT;			(*module address of the I/O module (in decimal form)*)
		intern_off	:USINT;			(*internal offset on the module*)
		mode	:USINT;				(*access mode: bit5 - 0.. error writing output image, 1.. error reading input image; bit6 - see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_list 				(*creates a list of all inserted I/O modules*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		io_type	:USINT;				(*I/O type, eg. 0.. 2010-IO, 1.. 2005-IO*)
		master_no	:USINT;			(*logical number of the IO master or the RIO master*)
		slave_no	:USINT;			(*slave number according to I/O type*)
		prev_mod	:USINT;			(*module address (in decimal form) of the I/O module where the search is to begin*)
		name_adr	:UDINT;			(*address on a zero-terminated string containing the name of the I/O module*)
	END_VAR		
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		module_adr	:USINT;			(*module address of the first I/O module found (in decimal form)*)
		module_typ	:USINT;			(*type code of the I/O module found*)
		io_bus	:UINT;				(*returns the number of the I/O bus for the IO_physdef() function, which is no longer used*)
	END_VAR	
	VAR
		chk_found	:BOOL;			(*internal variable*)
		initcnt	:UDINT;				(*internal variable*)
		first_flag	:USINT;			(*internal variable*)
		chk_io_typ	:USINT;			(*internal variable*)
		chk_master_no	:USINT;		(*internal variable*)
		chk_slave_no	:USINT;		(*internal variable*)
		chk_module_adr	:USINT;		(*internal variable*)
		entry	:USINT;				(*internal variable*)
		entry_ptr	:UDINT;			(*internal variable*)
		tab_ptr	:UDINT;				(*internal variable*)
		reserve_b	:STRING[15];	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_mphydef 			(*defines a multiple physical shovel instruction*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		iop_adr	:UDINT;				(*address of the iop structure in which the I/O parameters are entered*)
		sc_adr	:UDINT;				(*address of the data area for shovel information*)
		io_index	:UINT;			(*index of the shovel instruction to be defined*)
	END_VAR	
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		ioident	:UDINT;				(*identifier for the I/O shovel instruction (needed for the IO_data() function)*)
	END_VAR		
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_ptest 			(*tests the defined physical shovel instructions*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		iop_adr	:UDINT;				(*address of the iop structure in which the I/O parameters are entered*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		ok	:BOOL;					(*1.. shovel instruction OK, 0.. shovel instruction not OK*)
	END_VAR
	VAR
		chk_io_typ	:USINT;			(*internal variable*)
		chk_master	:USINT;			(*internal variable*)
		chk_slave	:USINT;			(*internal variable*)
		chk_module	:USINT;			(*internal variable*)
		chk_search	:USINT;			(*internal variable*)
		chk_status	:UINT;			(*internal variable*)
		chk_modtyp	:USINT;			(*internal variable*)
		chk_ident	:UDINT;			(*internal variable*)
		sc_mod_adr	:USINT;			(*internal variable*)
		sc_kurzken	:USINT;			(*internal variable*)
		sc_int_off	:USINT;			(*internal variable*)
		sc_laenge	:USINT;			(*internal variable*)
		sc_ioc_ptr	:UINT;			(*internal variable*)
		sc_ende	:UINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IO_slist 			(*creates a list of all inserted screw-in modules*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		io_type	:USINT;				(*I/O type: 4.. RIO-2003, 5 ... 2003-IO*)
		master_no	:USINT;			(*logical number of the IO master or the RIO master*)
		slave_no	:USINT;			(*number of the RIO slave (with RIO 2003)*)
		module_adr	:USINT;			(*module address of the analog interface module (in decimal form)*)
		prev_slot	:USINT;			(*slot (in decimal form) of the screw-in module where the search is begun*)
		name_adr	:UDINT;			(*address of the zero-terminated string containing the name of the screw-in module*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		slot_no	:USINT;				(*slot of the first screw-in module found (in decimal form)*)
		slot_typ	:USINT;			(*type code of the screw-in module found*)
	END_VAR
	VAR
		chk_found	:BOOL;			(*internal variable*)
		initcnt	:UDINT;				(*internal variable*)
		first_flag	:USINT;			(*internal variable*)
		chk_io_typ	:USINT;			(*internal variable*)
		chk_master_no	:USINT;		(*internal variable*)
		chk_slave_no	:USINT;		(*internal variable*)
		chk_module_adr	:USINT;		(*internal variable*)
		entry	:USINT;				(*internal variable*)
		entry_ptr	:UDINT;			(*internal variable*)
		tab_ptr	:UDINT;				(*internal variable*)
		slot_cnt	:USINT;			(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK

FUNCTION_BLOCK IX_check 			(*checks an I/O module with screw-in modules*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		io_type	:USINT;				(*I/O type: 4.. RIO-2003, 5.. 2003-IO*)
		master_no	:USINT;			(*logical number of the IO master or the RIO master*)
		slave_no	:USINT;			(*number of the RIO slave (with RIO 2003)*)
		module_adr	:USINT;			(*module address of the analog interface module (in decimal form)*)
		slot	:USINT;				(*slot for screw-in module*)
		search_typ	:USINT;			(*required type for the screw-in module with the specified module address and subslot*)
	END_VAR		
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		found_flag	:BOOL;			(*0.. screw-in module of specified type not available, 1.. screw-in module of specified type available*)
		module_typ	:USINT;			(*type code of the checked screw-in module*)
	END_VAR		
	VAR
		chk_align	:USINT;			(*internal variable*)
		chk_io_typ	:USINT;			(*internal variable*)
		chk_master	:USINT;			(*internal variable*)
		chk_slave	:USINT;			(*internal variable*)
		chk_module	:USINT;			(*internal variable*)
		chk_search	:USINT;			(*internal variable*)
		chk_status	:UINT;			(*internal variable*)
		chk_modtyp	:USINT;			(*internal variable*)
		chk_ident	:UDINT;			(*internal variable*)
		sc_mod_adr	:USINT;			(*internal variable*)
		sc_kurzken	:USINT;			(*internal variable*)
		sc_int_off	:USINT;			(*internal variable*)
		sc_laenge	:USINT;			(*internal variable*)
		sc_ioc_ptr	:UINT;			(*internal variable*)
		sc_ende	:UINT;				(*internal variable*)
		sc_data	:UDINT;				(*internal variable*)
		sc_data2	:UDINT;			(*internal variable*)
		sc_data3	:UDINT;			(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK

FUNCTION_BLOCK IX_disable 			(*disables an I/O module with screw-in modules*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		io_type	:USINT;				(*I/O type: e.g. 0.. 2010-IO, 1.. 2005-IO*)
		master_no	:USINT;			(*logical number of the IO master or the RIO master*)
		slave_no	:USINT;			(*slave number according to I/O type*)
		module_adr	:USINT;			(*module address of the I/O module (in decimal form)*)
		slot	:USINT;				(*slot (subslot) for screw-in module*)
		force_flag	:USINT;			(*0.. do not force inputs (digital/analog), 1.. force inputs (digital/analog)*)
		dig_value	:BOOL;			(*force value for digital inputs on the I/O module*)
		ana_value	:UINT;			(*force value for analog inputs on the I/O module*)
	END_VAR		
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR	
END_FUNCTION_BLOCK

FUNCTION_BLOCK IX_enable 			(*enables an I/O module with screw-in modules*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		io_type	:USINT;				(*I/O type: e.g. 0.. 2010-IO, 1.. 2005-IO*)
		master_no	:USINT;			(*logical number of the IO master or the RIO master*)
		slave_no	:USINT;			(*slave number according to I/O type*)
		module_adr	:USINT;			(*module address of the I/O module (in decimal form)*)
		slot	:USINT;				(*slot (subslot) for screw-in module*)
	END_VAR		
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK IX_info 				(*determines which screw-in module caused an error*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		io_type	:USINT;				(*I/O type: e.g. 0.. 2010-IO, 1.. 2005-IO*)
		master_no	:USINT;			(*logical number of the IO master (currently always 1) or the RIO master*)
		slave_no	:USINT;			(*slave number according to I/O type*)
		module_adr	:USINT;			(*module address of the I/O module (in decimal form)*)
		slot	:USINT;				(*slot (subslot) for screw-in module*)
		intern_off	:USINT;			(*internal offset on the module*)
		mode	:USINT;				(*access mode: bit5 - 0.. error writing output image, 1.. error reading input image; bit6 - see help*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK SYS_list 			(*creates a list of all inserted system modules*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		prev_mod	:USINT;			(*module address of the system module (in decimal form) where the search is to begin*)
		name_adr	:UDINT;			(*address of the zero-terminated string containing the name of the system module*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		module_adr	:USINT;			(*module address of the first system module found (in decimal form)*)
		module_typ	:USINT;			(*type code of the system module found*)
	END_VAR		
END_FUNCTION_BLOCK

FUNCTION_BLOCK HW_list 				(*creates a list of all hardware modules*)
	VAR_INPUT
		enable	:BOOL;				(*enables execution*)
		first	:BOOL;				(*0.. determines the next hardware module, 1.. determines the first hardware module*)
		name_adr	:UDINT;			(*address of the zero-terminated string containing the name of the module*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;				(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		hw_type	:USINT;				(*hardware type: e.g. 0.. 2010-IO, 1 ... 2005-IO*)
		module_typ	:USINT;			(*type code of the module*)
		master_no	:USINT;			(*logical number of the IO master, RIO master or CAN bus with CANIO (1, 2, etc.)*)
		slave_no	:USINT;			(*slave number*)
		module_adr	:USINT;			(*module address of the hardware module in decimal form*)
		slot_no	:USINT;				(*slot of the first submodule found (in decimal form)*)
	END_VAR
	VAR
		next_vw_p	:UDINT;			(*internal variable*)
		last_modul_p	:UDINT;		(*internal variable*)
		next_entry_p	:UDINT;		(*internal variable*)
		next_entry_ix	:USINT;		(*internal variable*)
		next_slot_ix	:USINT;		(*internal variable*)
		last_rio_master	:USINT;		(*internal variable*)
	END_VAR		
END_FUNCTION_BLOCK
