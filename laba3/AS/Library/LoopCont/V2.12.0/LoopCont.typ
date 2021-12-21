(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: LoopCont
 * File: LoopCont.typ
 * Created: 11.11.2003
 ********************************************************************
 * Global data types of library LoopCont
 ********************************************************************)
TYPE
	lcCurveByPoints_TabEntry_type : STRUCT
		x	: INT ;
		y	: INT ;
	END_STRUCT;
	lcpid_addPar_typ : STRUCT
		y_autotune_on	: INT ;
		y_autotune_off	: INT ;
		t_autotune_max	: UDINT ;
		diff_dx_max	: INT ;
		diff_dt_max	: UDINT ;
		osc_nrPeriods	: UINT ;
		osc_minAmplitude	: INT ;
		optSwitches	: UINT ;
		dY_max	: REAL ;
		Tf_Tv	: REAL ;
		Kw	: REAL ;
		Kfbk	: REAL ;
		fbk_mode	: USINT ;
		d_mode	: USINT ;
		calc_mode	: USINT ;
	END_STRUCT;
	lcpid_internal_typ : STRUCT
		size	: UINT ;
		valid	: BOOL ;
		autotune_addpar	: lcpid_addPar_typ ;
		Y_max	: INT ;
		Y_min	: INT ;
		dY_max1	: DINT ;
		Kp1	: DINT ;
		Kp_Tn_1	: DINT ;
		Tv_Tf_1	: DINT ;
		Tf_reciproc_1	: DINT ;
		Kw1	: DINT ;
		Kfbk_Kp_1	: DINT ;
		fbk_mode	: USINT ;
		d_mode	: USINT ;
		calc_mode	: USINT ;
		prescalerPow2	: UINT ;
		force_outmode	: USINT ;
		Y_force	: INT ;
		W	: INT ;
		X	: INT ;
		pid_init	: USINT ;
		dt	: UDINT ;
		Yp1	: DINT ;
		Yp2	: DINT ;
		dYi1	: DINT ;
		dYi2	: DINT ;
		Yi1	: DINT ;
		Yi2	: DINT ;
		dt_Tf_1	: DINT ;
		a11	: DINT ;
		a12	: DINT ;
		a21	: DINT ;
		a22	: DINT ;
		Yd1	: DINT ;
		Yd2	: DINT ;
		Ytotal1	: DINT ;
		Ytotal2	: DINT ;
		Ylim1	: DINT ;
		Ylim2	: DINT ;
		Y1	: DINT ;
		Y2	: DINT ;
		e_fbk	: DINT ;
	END_STRUCT;
	lcpid_osc_val_typ : STRUCT
		X	: INT ;
		t	: UDINT ;
	END_STRUCT;
	lcpid_osc_per_typ : STRUCT
		max	: lcpid_osc_val_typ ;
		min	: lcpid_osc_val_typ ;
	END_STRUCT;
	lcpid_osc_typ : STRUCT
		i_maxPeriod	: UINT ;
		i_period	: UINT ;
		X_amplitude	: DINT ;
		amplitudeRatio	: REAL ;
		tPeriod	: UDINT ;
		period	: ARRAY[0..4] OF lcpid_osc_per_typ ;
	END_STRUCT;
	lcpid_procPar_typ : STRUCT
		size	: UINT ;
		stepResp_valid	: BOOL ;
		stepResp_v	: REAL ;
		stepResp_t_u	: UDINT ;
		osc_valid	: BOOL ;
		osc_amplitudeRatio	: REAL ;
		osc_tPeriod	: UDINT ;
		force_params	: BOOL ;
		Kp	: REAL ;
		Tn	: REAL ;
		Tv	: REAL ;
	END_STRUCT;
	lcpid_old_typ : STRUCT
		processPar	: lcpid_procPar_typ ;
		P_manualAdjust	: INT ;
		I_manualAdjust	: INT ;
		D_manualAdjust	: INT ;
		Y_min	: INT ;
		Y_max	: INT ;
		dY_max	: REAL ;
		Kw	: REAL ;
		Kfbk	: REAL ;
		enable	: BOOL ;
		request	: USINT ;
		time	: UDINT ;
	END_STRUCT;
	lcpid_stepResp_typ : STRUCT
		W_old	: INT ;
		dW	: INT ;
		x_prev	: INT ;
		x_inflectionPt	: INT ;
		t_inflectionPt	: UDINT ;
		v	: REAL ;
		v_max	: REAL ;
		t_u	: UDINT ;
		x_pre	: INT ;
		x_max	: INT ;
	END_STRUCT;
	lcpid_diff_typ : STRUCT
		init	: BOOL ;
		x_old	: INT ;
		dx	: INT ;
		dt	: UDINT ;
		dx_dt	: REAL ;
	END_STRUCT;
END_TYPE