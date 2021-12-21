(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: io_lib
 * File: io_lib.typ
 * Author: B+R
 ********************************************************************
 * Data types of library io_lib
 ********************************************************************)
                                                                      
TYPE
	IOP_typ : STRUCT				(*internal use*)
		io_type	: USINT ;
		master_no	: USINT ;
		slave_no	: USINT ;
		module_adr	: USINT ;
		intern_off	: USINT ;
		mode	: USINT ;
		data_len	: USINT ;
		reserve	: USINT ;
		data_adr	: UDINT ;
	END_STRUCT;
END_TYPE
