(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: IOConfig
 * File: IOConfig.typ
 * Author: B+R
 ********************************************************************
 * Data types of library IOConfig
 ********************************************************************)
                                                                      
TYPE
	iocIOParam : STRUCT			(*internal use*)
		io_type	: USINT ;
		master_nr	: USINT ;
		slave_nr	: USINT ;
		module_adr	: USINT ;
		intern_off	: USINT ;
		mode	: USINT ;
		data_len	: USINT ;
		reserve	: USINT ;
		data_adr	: UDINT ;
	END_STRUCT;
END_TYPE
