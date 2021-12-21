(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: IF361
 * File: IF361.typ
 * Created: 11.11.2003
 ********************************************************************
 * Global data types of library IF361
 ********************************************************************)
TYPE
	if361_IfCfg : STRUCT
		idle	: UINT ;
		delime	: UINT ;
		delim	: ARRAY[0..1] OF USINT ;
		tx_cnt	: UINT ;
		rx_cnt	: UINT ;
		tx_len	: UINT ;
		rx_len	: UINT ;
		argc	: UINT ;
		argv	: UDINT ;
	END_STRUCT;
	if361_Iop : STRUCT
		io_type	: USINT ;
		master_no	: USINT ;
		slave_no	: USINT ;
		module_adr	: USINT ;
		intern_off	: USINT ;
		mode	: USINT ;
		datalen	: USINT ;
		reserve	: USINT ;
		data_adr	: UDINT ;
	END_STRUCT;
	if361_l2dp : STRUCT
		baudrate	: UINT ;
		station	: USINT ;
		freeze	: USINT ;
		sync	: USINT ;
		glob_cont	: USINT ;
		data_exchg	: USINT ;
	END_STRUCT;
END_TYPE
