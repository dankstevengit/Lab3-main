(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: LoopConR
 * File: LoopConR.fun
 * Created: 11.11.2003
 ********************************************************************
 * Functions and function blocks of library LoopConR
 ********************************************************************)
FUNCTION_BLOCK LCRTimeBasedOnOff
	VAR_INPUT
		enable	:BOOL;
		x	:REAL;
		max_value	:REAL;
		min_value	:REAL;
		timpulse	:REAL;
		tchange_up	:REAL;
		tchange_down	:REAL;
		ref	:BOOL;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		up	:BOOL;
		down	:BOOL;
		hysteresis_up	:REAL;
		hysteresis_down	:REAL;
		refOk	:BOOL;
	END_VAR
	VAR
		counter_state	:UINT;
		bootkey_old	:UDINT;
		systicks_old	:UDINT;
		musecs_old	:UINT;
		ref_old	:BOOL;
		t_cnt_1	:DINT;
		t_cnt_2	:DINT;
		y_dbl_1	:DINT;
		y_dbl_2	:DINT;
		sysInfo_inst	:SysInfo;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRPWM
	VAR_INPUT
		enable	:BOOL;
		x	:REAL;
		max_value	:REAL;
		min_value	:REAL;
		t_min_pulse	:REAL;
		t_period	:REAL;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		pulse	:BOOL;
		t_on	:REAL;
		t_off	:REAL;
	END_VAR
	VAR
		counter_state	:UINT;
		bootkey_old	:UDINT;
		systicks_old	:UDINT;
		musecs_old	:UINT;
		cnt_terron_1	:DINT;
		cnt_terron_2	:DINT;
		cnt_terroff_1	:DINT;
		cnt_terroff_2	:DINT;
		cnt_t_pulse_1	:DINT;
		cnt_t_pulse_2	:DINT;
		sysinfo_inst	:SysInfo;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRMovAvgFlt
	VAR_INPUT
		enable	:BOOL;
		x	:REAL;
		base	:UINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		y	:REAL;
	END_VAR
	VAR
		sum_old_dbl_1	:DINT;
		sum_old_dbl_2	:DINT;
		x_old	:ARRAY[0..31] OF REAL;
		p_xold	:UDINT;
		i_xold	:UINT;
		base_old	:UINT;
		enable_old	:BOOL;
		bootkey_old	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRLimScal
	VAR_INPUT
		x	:REAL;
		x1	:REAL;
		y1	:REAL;
		x2	:REAL;
		y2	:REAL;
	END_VAR
	VAR_OUTPUT
		y	:REAL;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRLimit
	VAR_INPUT
		in	:REAL;
		max_value	:DINT;
		min_value	:DINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		out	:DINT;
		max_limit	:BOOL;
		min_limit	:BOOL;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRIntegrate
	VAR_INPUT
		enable	:BOOL;
		x	:REAL;
		tn	:REAL;
		y_max	:REAL;
		y_min	:REAL;
		y_set	:REAL;
		set	:BOOL;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		y	:REAL;
		max_limit	:BOOL;
		min_limit	:BOOL;
	END_VAR
	VAR
		counter_state	:UINT;
		bootkey_old	:UDINT;
		systicks_old	:UDINT;
		musecs_old	:UINT;
		y_dbl_1	:DINT;
		y_dbl_2	:DINT;
		sysinfo_inst	:SysInfo;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRRamp
	VAR_INPUT
		enable	:BOOL;
		x	:REAL;
		dy_up	:REAL;
		dy_down	:REAL;
		y_max	:REAL;
		y_min	:REAL;
		y_set	:REAL;
		set	:BOOL;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		y	:REAL;
		x_reached	:BOOL;
		max_limit	:BOOL;
		min_limit	:BOOL;
	END_VAR
	VAR
		counter_state	:UINT;
		bootkey_old	:UDINT;
		systicks_old	:UDINT;
		musecs_old	:UINT;
		y_dbl_1	:DINT;
		y_dbl_2	:DINT;
		sysinfo_inst	:SysInfo;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRPT1
	VAR_INPUT
		enable	:BOOL;
		x	:REAL;
		t	:REAL;
		y_set	:REAL;
		set	:BOOL;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		y	:REAL;
	END_VAR
	VAR
		counter_state	:UINT;
		bootkey_old	:UDINT;
		systicks_old	:UDINT;
		musecs_old	:UINT;
		y_dbl_1	:DINT;
		y_dbl_2	:DINT;
		sysinfo_inst	:SysInfo;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRContinServo
	VAR_INPUT
		enable	:BOOL;
		x	:REAL;
		max_value	:REAL;
		min_value	:REAL;
		t_impulse	:REAL;
		t_change_up	:REAL;
		t_change_down	:REAL;
		ref	:BOOL;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		up	:BOOL;
		down	:BOOL;
		hysteresis_up	:REAL;
		hysteresis_down	:REAL;
		refOk	:BOOL;
	END_VAR
	VAR
		counter_state	:UINT;
		bootkey_old	:UDINT;
		systicks_old	:UDINT;
		musecs_old	:UINT;
		ref_old	:BOOL;
		t_cnt_1	:DINT;
		t_cnt_2	:DINT;
		y_dbl_1	:DINT;
		y_dbl_2	:DINT;
		sysInfo_inst	:SysInfo;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRPIDpara
	VAR_INPUT
		enable	:BOOL;
		enter	:BOOL;
		WX_max	:REAL;
		WX_min	:REAL;
		invert	:BOOL;
		deadband	:REAL;
		dY_max	:REAL;
		Kp	:REAL;
		Tn	:REAL;
		Tv	:REAL;
		Tf	:REAL;
		Kw	:REAL;
		Kfbk	:REAL;
		fbk_mode	:USINT;
		d_mode	:USINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		ident	:UDINT;
	END_VAR
	VAR
		internal_data	:lcrpid_internal_typ;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRCurveByPoints
	VAR_INPUT
		x	:REAL;
		NoOfPoints	:UINT;
		ptr_table	:REFERENCE TO lcrCurveByPoints_TabEntry_type;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		y	:REAL;
	END_VAR
	VAR
		i_tab	:INT;
		iterations	:UINT;
		scal1	:LCRScal;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRScal
	VAR_INPUT
		x	:REAL;
		x1	:REAL;
		y1	:REAL;
		x2	:REAL;
		y2	:REAL;
	END_VAR
	VAR_OUTPUT
		y	:REAL;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LCRPID
	VAR_INPUT
		enable	:BOOL;
		ident	:UDINT;
		W	:REAL;
		X	:REAL;
		Y_max	:REAL;
		Y_min	:REAL;
		A	:REAL;
		Y_man	:REAL;
		Y_fbk	:REAL;
		hold_I	:BOOL;
		mode	:USINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		e	:REAL;
		Y	:REAL;
		Yp	:REAL;
		Yi	:REAL;
		Yd	:REAL;
	END_VAR
	VAR
		counter_state	:UINT;
		bootkey_old	:UDINT;
		systicks_old	:UDINT;
		musecs_old	:UINT;
		Tv_Tf_old	:REAL;
		enable_old	:BOOL;
		e_old	:REAL;
		deadband_state	:UINT;
		sysinfo_inst	:SysInfo;
		scal_inst	:LCRScal;
	END_VAR
END_FUNCTION_BLOCK
