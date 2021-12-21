(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: LoopConR
 * File: LoopConR.typ
 * Created: 02.11.2006
 ********************************************************************
 * Global data types of library LoopConR
 ********************************************************************)
TYPE
	lcrslimpid_par_typ : STRUCT
		Y_max	: REAL ;
		Y_min	: REAL ;
		Kp	: REAL ;
		Tn	: REAL ;
		Tv	: REAL ;
		Kfbk	: REAL ;
	END_STRUCT;
	lcrdblpid_par_typ : STRUCT
		Y_max	: REAL ;
		Y_min	: REAL ;
		K_fact	: INT ;
		Kp	: REAL ;
		Tn	: REAL ;
		Tv	: REAL ;
	END_STRUCT;
	lcrpid_tune_osc_options_typ : STRUCT
		osc_minAmplitude	: REAL ;
		Q_min	: REAL ;
	END_STRUCT;
	lcrpid_tune_step_options_typ : STRUCT
		eqDeltaX	: REAL ;
		eqDeltaWX	: REAL ;
		eqDeltat	: REAL ;
		evalDeltaX	: REAL ;
		evalNfilter	: UINT ;
		exitNotMaxdXCount	: UINT ;
		exitdXRatio	: REAL ;
	END_STRUCT;
	lcrdblpid_tune_typ : STRUCT
		P1_manualAdjust	: INT ;
		I1_manualAdjust	: INT ;
		D1_manualAdjust	: INT ;
		P2_manualAdjust	: INT ;
		I2_manualAdjust	: INT ;
		D2_manualAdjust	: INT ;
		X_min	: REAL ;
		X_max	: REAL ;
		X0	: REAL ;
		dYmin	: REAL ;
		Y0	: REAL ;
		Y1step	: REAL ;
		Y2step	: REAL ;
		tuneY1_opt	: UDINT ;
		tuneY2_opt	: UDINT ;
		tune_first	: USINT ;
		hyst	: REAL ;
		measDelta	: REAL ;
		eqDeltaWX	: REAL ;
		eqDeltat	: REAL ;
		osc_opt	: lcrpid_tune_osc_options_typ ;
		step_opt	: lcrpid_tune_step_options_typ ;
	END_STRUCT;
	lcrpid_tune_addpar_typ : STRUCT
		t_max_tune	: REAL ;
		WX_min	: REAL ;
		WX_max	: REAL ;
		dY_max	: REAL ;
		Tf_Tv	: REAL ;
		Kw	: REAL ;
		Kfbk	: REAL ;
		fbk_mode	: USINT ;
		d_mode	: USINT ;
		deadband	: REAL ;
		invert	: BOOL ;
	END_STRUCT;
	lcrpid_procPar_typ : STRUCT
		size	: UINT ;
		valid	: BOOL ;
		stepResp_valid	: BOOL ;
		stepResp_v	: REAL ;
		stepResp_t_u	: REAL ;
		stepResp_t_g	: REAL ;
		osc_valid	: BOOL ;
		osc_amplitudeRatio	: REAL ;
		osc_tPeriod	: REAL ;
		force_params	: BOOL ;
		Kp	: REAL ;
		Kp_tune	: REAL ;
		Tn	: REAL ;
		Tn_tune	: REAL ;
		Tv	: REAL ;
		Tv_tune	: REAL ;
	END_STRUCT;
	lcrpid_old_typ : STRUCT
		processPar	: lcrpid_procPar_typ ;
		P_manualAdjust	: INT ;
		I_manualAdjust	: INT ;
		D_manualAdjust	: INT ;
		Y_min	: REAL ;
		Y_max	: REAL ;
		dY_max	: REAL ;
		Kw	: REAL ;
		Kfbk	: REAL ;
		enable	: BOOL ;
		request	: UDINT ;
	END_STRUCT;
	lcrpid_tune_step_typ : STRUCT
		options	: lcrpid_tune_step_options_typ ;
		Y0	: REAL ;
		Y1	: REAL ;
		t_jump	: REAL ;
		W	: REAL ;
		X0	: REAL ;
		Xmax	: REAL ;
		Xmin	: REAL ;
		Xfiltered	: REAL ;
		deltaXok	: BOOL ;
		deltaWXok	: BOOL ;
		eqTime	: REAL ;
		dir	: SINT ;
		deltaX	: REAL ;
		X1	: REAL ;
		t1	: REAL ;
		t1set	: BOOL ;
		dX_dt	: REAL ;
		dX_dt_max	: REAL ;
		XmaxGrad	: REAL ;
		maxX1	: REAL ;
		maxX2	: REAL ;
		maxt1	: REAL ;
		maxt2	: REAL ;
		tmaxGrad	: REAL ;
		gainFactor	: REAL ;
		deadTime	: REAL ;
		riseTime	: REAL ;
		notMaxCount	: UINT ;
		gradientRatio	: REAL ;
	END_STRUCT;
	lcrpid_osc_val_typ : STRUCT
		X	: REAL ;
		t	: REAL ;
	END_STRUCT;
	lcrpid_osc_per_typ : STRUCT
		max	: lcrpid_osc_val_typ ;
		min	: lcrpid_osc_val_typ ;
	END_STRUCT;
	lcrpid_tune_osc_typ : STRUCT
		options	: lcrpid_tune_osc_options_typ ;
		oscPhase	: UINT ;
		Y_hi	: REAL ;
		Y_lo	: REAL ;
		i_maxPeriod	: UINT ;
		i_period	: UINT ;
		X_ampl	: REAL ;
		X_avg	: REAL ;
		X_min_avg	: REAL ;
		X_max_avg	: REAL ;
		Y_avg	: REAL ;
		deltaY	: REAL ;
		t_Ylohi	: ARRAY[0..4] OF REAL ;
		t_Yhilo	: ARRAY[0..4] OF REAL ;
		Q_act	: REAL ;
		a_wx	: REAL ;
		amplitudeRatio	: REAL ;
		Ku	: REAL ;
		W_old	: REAL ;
		tPeriod	: REAL ;
		period	: ARRAY[0..4] OF lcrpid_osc_per_typ ;
	END_STRUCT;
	lcrCurveByPoints_TabEntry_type : STRUCT
		x	: REAL ;
		y	: REAL ;
	END_STRUCT;
	lcrpid_internal_typ : STRUCT
		size	: UINT ;
		valid	: BOOL ;
		WX_max	: REAL ;
		WX_min	: REAL ;
		invert	: BOOL ;
		deadband	: REAL ;
		dY_max	: REAL ;
		Kp	: REAL ;
		Kp_Tn	: REAL ;
		Tv_Tf	: REAL ;
		Tf_reciproc	: REAL ;
		Kw	: REAL ;
		Kfbk_Kp	: REAL ;
		fbk_mode	: USINT ;
		d_mode	: USINT ;
		force_mode	: USINT ;
		Y_force	: REAL ;
		W	: REAL ;
		X	: REAL ;
		pid_init	: USINT ;
		Yp1	: DINT ;
		Yp2	: DINT ;
		dYi1	: DINT ;
		dYi2	: DINT ;
		Yi1	: DINT ;
		Yi2	: DINT ;
		dt_Tf	: REAL ;
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
		e_fbk	: REAL ;
	END_STRUCT;
END_TYPE