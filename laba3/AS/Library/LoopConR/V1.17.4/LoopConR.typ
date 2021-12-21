(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: LoopConR
 * File: LoopConR.typ
 * Created: 11.11.2003
 ********************************************************************
 * Global data types of library LoopConR
 ********************************************************************)
TYPE
	lcrCurveByPoints_TabEntry_type : STRUCT
		x	: REAL ;
		y	: REAL ;
	END_STRUCT;
	lcrpid_addPar_typ : STRUCT
		y_autotune_on	: REAL ;
		y_autotune_off	: REAL ;
		t_autotune_max	: REAL ;
		diff_dx_max	: INT ;
		diff_dt_max	: UDINT ;
		osc_nrPeriods	: UINT ;
		optSwitches	: UINT ;
		dY_max	: REAL ;
		Tf_Tv	: REAL ;
		Kw	: REAL ;
		Kfbk	: REAL ;
		fbk_mode	: USINT ;
		d_mode	: USINT ;
		calc_mode	: USINT ;
	END_STRUCT;
	lcrpid_internal_typ : STRUCT
		size	: UINT ;
		valid	: BOOL ;
		autotune_addpar	: lcrpid_addPar_typ ;
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