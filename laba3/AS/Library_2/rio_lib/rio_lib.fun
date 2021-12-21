(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: rio_lib
 * File: rio_lib.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library rio_lib
 ********************************************************************)
                                                                     
FUNCTION_BLOCK RIO_life           (*queries the master's life list containing all available slaves*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		data_ptr	:UDINT;       (*pointer to a USINT array containing information about the installed slaves*)
		data_len	:UINT;        (*length of the data_ptr array or number of slaves to be checked*)
	END_VAR
	VAR_OUTPUT
		sl_cnt	:USINT;           (*number of active slave stations in the remote I/O system*)
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_init           (*initializes the specified remote master module*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		mod_nr	:USINT;           (*module number/address of the remote master module*)
		par_ptr	:UDINT;           (*pointer to the parameter structure for operating the remote master module as an intelligent slave module or 0 if the remote master module is to be used as master*)
		par_len	:UINT;            (*length of the parameter structure par_ptr or 0 if the remote master module is used as master*)
	END_VAR
	VAR_OUTPUT
		maident	:UDINT;           (*identifier of the master or intelligent slave module*)
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_cfg            (*configures the remote I/O system, i.e., the slave configurations are entered in the master module*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		prio	:USINT;           (*priority of the configuration table*)
		inout	:USINT;           (*parameter to specify a sending or receiving configuration table: 0 = send, 1 = receive*)
		sl_adr	:USINT;           (*slave address: 0 = the address in the configuration table is used, 1..126 = the configuration table address is replaced by this value*)
		cfg_ptr	:UDINT;           (*pointer to the configuration table*)
		cfg_len	:UINT;            (*length of the configuration table in bytes*)
		data_ptr	:UDINT;       (*pointer to the data buffer*)
		data_len	:UINT;        (*length of data buffer in bytes*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_cmd            (*activates or resets the configuration for a remote I/O system; asynchronous execution*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		cmd	:USINT;               (*command, the following commands are supported: 0x01 = START and wait, 0x00 = RESET and wait, 0x81 = START without waiting, 0x80 = RESET without waiting*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
	END_VAR
	VAR
		cmd_state	:USINT;       (*internal variable*)
		mcmd	:USINT;           (*internal variable*)
		init	:USINT;           (*internal variable*)
		tout	:UDINT;           (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_in             (*reads the inputs defined in the receive configuration and copies the input data to the designated data buffer*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		prio	:USINT;           (*priority of the shovel table: 0 = priority 0 (high priority), 1 = priority 1 (low priority)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_out            (*writes the output data to the outputs definied in the send configuration*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		prio	:USINT;           (*priority of the shovel table: 0 = priority 0 (high priority), 1 = priority 1 (low priority)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_stat           (*determines the status of all slaves in the remote I/O system*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		sl_tab	:UDINT;           (*address of the USINT array displaying the status of all slaves in the remote I/O system*)
		len	:UINT;                (*length of the sl_tab USINT array, or number of slaves in the remote I/O system*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_mode           (*defines the behavior of a remote slave in the event of an error*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		sl_adr	:USINT;           (*slave address to which the setting defined with the mode parameter should apply*)
		mode	:USINT;           (*mode defining the behavior of the remote I/O system*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_quit           (*confirmes a slave's ERROR or READY status in order to enable the slave to switch its status to NOT_READY or CONFIG*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		sl_adr	:USINT;           (*slave address of the slave station to be applied*)
		qmode	:USINT;           (*confirms a failure or READY status of a slave: 0 = confirms a failure, 1 = confirms READY*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK RIO_list           (*searches an I/O bus on the RIO slave (RIO slave 2010, 2005 or 2003) for I/O modules; asynchronous execution*)
	VAR_INPUT
		enable	:BOOL;            (*enables execution*)
		maident	:UDINT;           (*master or intelligent slave module identifier returned from RIO_init()*)
		slave_no	:USINT;       (*slave address of the slave station to be searched for I/O modules*)
		prev_mod	:USINT;       (*module address of the first I/O module found*)
		name_adr	:UDINT;       (*name of the I/O module name given as pointer*)
	END_VAR
	VAR_OUTPUT
		module_adr	:USINT;       (*module address of the first I/O module found (in decimal form)*)
		module_typ	:USINT;       (*type of the found I/O module*)
		io_bus	:USINT;           (*I/O bus for the B&R 20xx family: 0 = B&R 2005, 1 = B&R 2010, 4 = B&R 2003*)
		status	:UINT;            (*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
	END_VAR
	VAR
		internal	:STRING[209]; (*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
