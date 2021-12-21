(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: AsHydCon
 * File: AsHydCon.typ
 * Created: 04.09.2006
 ********************************************************************
 * Global data types of library AsHydCon
 ********************************************************************)
TYPE
  HRCNode_Internal_typ : STRUCT
    X  : REAL;
    Y  : REAL;
    X1  : REAL;
    X2  : REAL;
    Rness_crit  : REAL;
    X1_dbl_1  : UDINT;
    X1_dbl_2  : UDINT;
    X2_dbl_1  : UDINT;
    X2_dbl_2  : UDINT;
    deltaX_dbl_1  : UDINT;
    deltaX_dbl_2  : UDINT;
    deltaY_dbl_1  : UDINT;
    deltaY_dbl_2  : UDINT;
    k_dbl_1  : UDINT;
    k_dbl_2  : UDINT;
    d_dbl_1  : UDINT;
    d_dbl_2  : UDINT;
  END_STRUCT;

  HCRNode_typ : STRUCT
    X  : REAL;
    Y  : REAL;
    Internal  : HRCNode_Internal_typ;
  END_STRUCT;

  HRCLinSpline_Internal_typ : STRUCT
    AscendingX_o  : SINT;
    AscendingXs_o  : SINT;
    AscendingY_o  : SINT;
    AscendingYs_o  : SINT;
    AscendingX_d  : SINT;
    AscendingXs_d  : SINT;
    AscendingY_d  : SINT;
    AscendingYs_d  : SINT;
    Rness_crit  : REAL;
    RnessP  : REAL;
    RnessR  : REAL;
    _Smooth1_dbl_1  : UDINT;
    _Smooth1_dbl_2  : UDINT;
    _1Smooth_dbl_1  : UDINT;
    _1Smooth_dbl_2  : UDINT;
    _1Smooth1_dbl_1  : UDINT;
    _1Smooth1_dbl_2  : UDINT;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRvyServo_Fp_Internal_typ : STRUCT
    Alpha  : REAL;
    vCyl_sup_pos  : REAL;
    vCyl_sup_neg  : REAL;
    vCyl_sup  : REAL;
    vCyl_max_pos  : REAL;
    vCyl_max_neg  : REAL;
    vCyl_max  : REAL;
    vCyl_sum  : REAL;
    vCyl_nOverlap  : REAL;
    vCyl_old  : REAL;
    pSupply  : REAL;
    pTank  : REAL;
    Qnom_pos  : REAL;
    Qnom_neg  : REAL;
    pCyl_pos  : REAL;
    pCyl_neg  : REAL;
    yValve_min  : REAL;
    _1_yValve_0  : REAL;
    Neg_y  : BOOL;
    yValve_0_dbl_1  : UDINT;
    yValve_0_dbl_2  : UDINT;
    Supply_Tank_pos_dbl_1  : UDINT;
    Supply_Tank_pos_dbl_2  : UDINT;
    Supply_Tank_neg_dbl_1  : UDINT;
    Supply_Tank_neg_dbl_2  : UDINT;
    Qn_pos_2_A_neg_2_dbl_1  : UDINT;
    Qn_pos_2_A_neg_2_dbl_2  : UDINT;
    Qn_neg_2_A_pos_2_dbl_1  : UDINT;
    Qn_neg_2_A_pos_2_dbl_2  : UDINT;
    Qn_pos_2_A_neg_3_dbl_1  : UDINT;
    Qn_pos_2_A_neg_3_dbl_2  : UDINT;
    Qn_neg_2_A_pos_3_dbl_1  : UDINT;
    Qn_neg_2_A_pos_3_dbl_2  : UDINT;
    K_dbl_1  : UDINT;
    K_dbl_2  : UDINT;
    K_nOverlap_dbl_1  : UDINT;
    K_nOverlap_dbl_2  : UDINT;
    pCyl_pos_Numer_pos_dbl_1  : UDINT;
    pCyl_pos_Numer_pos_dbl_2  : UDINT;
    pCyl_neg_Numer_pos_dbl_1  : UDINT;
    pCyl_neg_Numer_pos_dbl_2  : UDINT;
    pCyl_pos_Numer_neg_dbl_1  : UDINT;
    pCyl_pos_Numer_neg_dbl_2  : UDINT;
    pCyl_neg_Numer_neg_dbl_1  : UDINT;
    pCyl_neg_Numer_neg_dbl_2  : UDINT;
    pCyl_Denom_dbl_1  : UDINT;
    pCyl_Denom_dbl_2  : UDINT;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRvyServo_Internal_typ : STRUCT
    Alpha  : REAL;
    vCyl_sup_pos  : REAL;
    vCyl_sup_neg  : REAL;
    vCyl_sup  : REAL;
    vCyl_max_pos  : REAL;
    vCyl_max_neg  : REAL;
    vCyl_max  : REAL;
    vCyl_sum  : REAL;
    vCyl_nOverlap  : REAL;
    vCyl_old  : REAL;
    Qnom_pos  : REAL;
    Qnom_neg  : REAL;
    yValve_min  : REAL;
    _1_yValve_0  : REAL;
    Neg_y  : BOOL;
    yValve_0_dbl_1  : UDINT;
    yValve_0_dbl_2  : UDINT;
    K_pos_dbl_1  : UDINT;
    K_pos_dbl_2  : UDINT;
    K_neg_dbl_1  : UDINT;
    K_neg_dbl_2  : UDINT;
    K_nOverlap_pos_dbl_1  : UDINT;
    K_nOverlap_pos_dbl_2  : UDINT;
    K_nOverlap_neg_dbl_1  : UDINT;
    K_nOverlap_neg_dbl_2  : UDINT;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRPID_Internal_typ : STRUCT
    WX_min  : REAL;
    WX_max  : REAL;
    _100_WX_delta_dbl_1  : UDINT;
    _100_WX_delta_dbl_2  : UDINT;
    W_norm_dbl_1  : UDINT;
    W_norm_dbl_2  : UDINT;
    X_norm_dbl_1  : UDINT;
    X_norm_dbl_2  : UDINT;
    Invert  : BOOL;
    e_norm_dbl_1  : UDINT;
    e_norm_dbl_2  : UDINT;
    Kp  : REAL;
    Kw  : REAL;
    Kp_Kw_1_dbl_1  : UDINT;
    Kp_Kw_1_dbl_2  : UDINT;
    Yp_dbl_1  : UDINT;
    Yp_dbl_2  : UDINT;
    Ts  : DINT;
    Ts_dbl_1  : UDINT;
    Ts_dbl_2  : UDINT;
    Tn_pos_dbl_1  : UDINT;
    Tn_pos_dbl_2  : UDINT;
    Tn_neg_dbl_1  : UDINT;
    Tn_neg_dbl_2  : UDINT;
    Kp_Ts_Tn_pos_dbl_1  : UDINT;
    Kp_Ts_Tn_pos_dbl_2  : UDINT;
    Kp_Ts_Tn_neg_dbl_1  : UDINT;
    Kp_Ts_Tn_neg_dbl_2  : UDINT;
    Yi_dbl_1  : UDINT;
    Yi_dbl_2  : UDINT;
    Yi_pos_last_dbl_1  : UDINT;
    Yi_pos_last_dbl_2  : UDINT;
    Yi_neg_last_dbl_1  : UDINT;
    Yi_neg_last_dbl_2  : UDINT;
    I_Switch_old  : SINT;
    d_mode  : USINT;
    D  : REAL;
    Tv_dbl_1  : UDINT;
    Tv_dbl_2  : UDINT;
    Tf_dbl_1  : UDINT;
    Tf_dbl_2  : UDINT;
    x1d_dbl_1  : UDINT;
    x1d_dbl_2  : UDINT;
    x2d_dbl_1  : UDINT;
    x2d_dbl_2  : UDINT;
    a0d_dbl_1  : UDINT;
    a0d_dbl_2  : UDINT;
    a1d_dbl_1  : UDINT;
    a1d_dbl_2  : UDINT;
    b0d_dbl_1  : UDINT;
    b0d_dbl_2  : UDINT;
    b1d_dbl_1  : UDINT;
    b1d_dbl_2  : UDINT;
    Yd_dbl_1  : UDINT;
    Yd_dbl_2  : UDINT;
    Reset_Yd  : USINT;
    Y_min  : REAL;
    Y_max  : REAL;
    Ytotal_dbl_1  : UDINT;
    Ytotal_dbl_2  : UDINT;
    Ylim_dbl_1  : UDINT;
    Ylim_dbl_2  : UDINT;
    K_Fbk_Kp_dbl_1  : UDINT;
    K_Fbk_Kp_dbl_2  : UDINT;
    e_Fbk_dbl_1  : UDINT;
    e_Fbk_dbl_2  : UDINT;
    dY_max  : REAL;
    dY_max_Ts_dbl_1  : UDINT;
    dY_max_Ts_dbl_2  : UDINT;
    Y_dbl_1  : UDINT;
    Y_dbl_2  : UDINT;
    UpdateValid  : BOOL;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRPIDPara_typ : STRUCT
    WX_min  : REAL;
    WX_max  : REAL;
    Kw  : REAL;
    Kp  : REAL;
    Tn_pos  : REAL;
    Tn_neg  : REAL;
    K_Fbk  : REAL;
    d_mode  : USINT;
    Tv  : REAL;
    Tf  : REAL;
    dY_max  : REAL;
    Y_min  : REAL;
    Y_max  : REAL;
  END_STRUCT;

  HCRValvePara_typ : STRUCT
    Qnom_pos  : REAL;
    Qnom_neg  : REAL;
    pDelta_nom  : REAL;
    yValve_0  : REAL;
    Neg_y  : BOOL;
  END_STRUCT;

  HCRSystemPara_typ : STRUCT
    pSupply  : REAL;
    pTank  : REAL;
    A_Cyl_pos  : REAL;
    A_Cyl_neg  : REAL;
    V0_pos  : REAL;
    V0_neg  : REAL;
    s_Cyl_min  : REAL;
    s_Cyl_max  : REAL;
  END_STRUCT;

  HCRs_Cont_Internal_typ : STRUCT
    vCyl_sup_pos  : REAL;
    vCyl_sup_neg  : REAL;
    vCyl_sup  : REAL;
    s_set_old  : REAL;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRSPF_Internal_typ : STRUCT
    Profile_Nb  : USINT;
    Profile_ID  : USINT;
    MovementPhase  : USINT;
    s_set_0_dbl_1  : UDINT;
    s_set_0_dbl_2  : UDINT;
    v_set_0_dbl_1  : UDINT;
    v_set_0_dbl_2  : UDINT;
    s_set_dbl_1  : UDINT;
    s_set_dbl_2  : UDINT;
    v_set_dbl_1  : UDINT;
    v_set_dbl_2  : UDINT;
    vC_pos_dbl_1  : UDINT;
    vC_pos_dbl_2  : UDINT;
    vC_neg_dbl_1  : UDINT;
    vC_neg_dbl_2  : UDINT;
    aAcc_pos_dbl_1  : UDINT;
    aAcc_pos_dbl_2  : UDINT;
    aDec_pos_dbl_1  : UDINT;
    aDec_pos_dbl_2  : UDINT;
    aAcc_neg_dbl_1  : UDINT;
    aAcc_neg_dbl_2  : UDINT;
    aDec_neg_dbl_1  : UDINT;
    aDec_neg_dbl_2  : UDINT;
    sDelta_dbl_1  : UDINT;
    sDelta_dbl_2  : UDINT;
    sBrake_dbl_1  : UDINT;
    sBrake_dbl_2  : UDINT;
    vTop_dbl_1  : UDINT;
    vTop_dbl_2  : UDINT;
    AccVec_dbl  : ARRAY[0..23] OF UDINT;
    ConstVec_dbl  : ARRAY[0..23] OF UDINT;
    DecVec_dbl  : ARRAY[0..23] OF UDINT;
    Timer_dbl_1  : UDINT;
    Timer_dbl_2  : UDINT;
    T_cycle_dbl_1  : UDINT;
    T_cycle_dbl_2  : UDINT;
    CounterState  : UINT;
    musecs_old  : UINT;
    SysTicks_old  : UDINT;
    enable_old  : BOOL;
    Bootkey_T  : UDINT;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRMovePara_typ : STRUCT
    vC_pos  : REAL;
    vC_neg  : REAL;
    aAcc_pos  : REAL;
    aDec_pos  : REAL;
    aAcc_neg  : REAL;
    aDec_neg  : REAL;
  END_STRUCT;

  HCRFyServo_Fp_Internal_typ : STRUCT
    Alpha  : REAL;
    Qnom_pos  : REAL;
    Qnom_neg  : REAL;
    Neg_y  : BOOL;
    Supply_Tank_pos_dbl_1  : UDINT;
    Supply_Tank_pos_dbl_2  : UDINT;
    Supply_Tank_neg_dbl_1  : UDINT;
    Supply_Tank_neg_dbl_2  : UDINT;
    K_numer_dbl_1  : UDINT;
    K_numer_dbl_2  : UDINT;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRDT1_Internal_typ : STRUCT
    Ts  : DINT;
    Ts_dbl_1  : UDINT;
    Ts_dbl_2  : UDINT;
    Tv_old  : REAL;
    Tf_old  : REAL;
    n_Avg_old  : USINT;
    u_Buf  : ARRAY[0..99] OF REAL;
    u_BufCnt  : SINT;
    u_Sum_dbl_1  : UDINT;
    u_Sum_dbl_2  : UDINT;
    u_Avg_dbl_1  : UDINT;
    u_Avg_dbl_2  : UDINT;
    Reset_y_old  : USINT;
    Reset_y_2  : USINT;
    x_dbl_1  : UDINT;
    x_dbl_2  : UDINT;
    Tv_Tf_dbl_1  : UDINT;
    Tv_Tf_dbl_2  : UDINT;
    Exp_Ts_Tf_dbl_1  : UDINT;
    Exp_Ts_Tf_dbl_2  : UDINT;
    Tv_Tf_Exp_dbl_1  : UDINT;
    Tv_Tf_Exp_dbl_2  : UDINT;
    V_Exp_dbl_1  : UDINT;
    V_Exp_dbl_2  : UDINT;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRPT1_Internal_typ : STRUCT
    Ts  : DINT;
    Ts_dbl_1  : UDINT;
    Ts_dbl_2  : UDINT;
    V_old  : REAL;
    T1_old  : REAL;
    Set_y_old  : USINT;
    Set_y_2  : USINT;
    x_dbl_1  : UDINT;
    x_dbl_2  : UDINT;
    Exp_Ts_T1_dbl_1  : UDINT;
    Exp_Ts_T1_dbl_2  : UDINT;
    V_Exp_dbl_1  : UDINT;
    V_Exp_dbl_2  : UDINT;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRPT2_Internal_typ : STRUCT
    Ts  : DINT;
    Ts_dbl_1  : UDINT;
    Ts_dbl_2  : UDINT;
    V_old  : REAL;
    T1_old  : REAL;
    T2_old  : REAL;
    Set_y_old  : USINT;
    Set_y_2  : USINT;
    x1_dbl_1  : UDINT;
    x1_dbl_2  : UDINT;
    x2_dbl_1  : UDINT;
    x2_dbl_2  : UDINT;
    Exp_Ts_T1_dbl_1  : UDINT;
    Exp_Ts_T1_dbl_2  : UDINT;
    Exp_Ts_T2_dbl_1  : UDINT;
    Exp_Ts_T2_dbl_2  : UDINT;
    Exp_Ts_T1_T2_dbl_1  : UDINT;
    Exp_Ts_T1_T2_dbl_2  : UDINT;
    Exp_T1_T2_dbl_1  : UDINT;
    Exp_T1_T2_dbl_2  : UDINT;
    V1_Exp_dbl_1  : UDINT;
    V1_Exp_dbl_2  : UDINT;
    V2_Exp_dbl_1  : UDINT;
    V2_Exp_dbl_2  : UDINT;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRPT2s_Internal_typ : STRUCT
    Ts  : DINT;
    Ts_dbl_1  : UDINT;
    Ts_dbl_2  : UDINT;
    V_old  : REAL;
    D_old  : REAL;
    Tf_old  : REAL;
    Set_y_old  : USINT;
    Set_y_2  : USINT;
    x1_dbl_1  : UDINT;
    x1_dbl_2  : UDINT;
    x2_dbl_1  : UDINT;
    x2_dbl_2  : UDINT;
    Sqrt_D_1_dbl_1  : UDINT;
    Sqrt_D_1_dbl_2  : UDINT;
    Ts_Tf_dbl_1  : UDINT;
    Ts_Tf_dbl_2  : UDINT;
    Exp_D_Ts_Tf_dbl_1  : UDINT;
    Exp_D_Ts_Tf_dbl_2  : UDINT;
    a0_dbl_1  : UDINT;
    a0_dbl_2  : UDINT;
    a1_dbl_1  : UDINT;
    a1_dbl_2  : UDINT;
    b0_dbl_1  : UDINT;
    b0_dbl_2  : UDINT;
    b1_dbl_1  : UDINT;
    b1_dbl_2  : UDINT;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRPT1cP_Internal_typ : STRUCT
    Ts  : DINT;
    Ts_dbl_1  : UDINT;
    Ts_dbl_2  : UDINT;
    T1_intern  : REAL;
    nCnt  : UDINT;
    Set_y_old  : USINT;
    Set_y_2  : USINT;
    x_dbl_1  : UDINT;
    x_dbl_2  : UDINT;
    Exp_5_dbl_1  : UDINT;
    Exp_5_dbl_2  : UDINT;
    a0_dbl_1  : UDINT;
    a0_dbl_2  : UDINT;
    b0_dbl_1  : UDINT;
    b0_dbl_2  : UDINT;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRDT2s_Internal_typ : STRUCT
    Ts  : DINT;
    Ts_dbl_1  : UDINT;
    Ts_dbl_2  : UDINT;
    D_old  : REAL;
    Tv_old  : REAL;
    Tf_old  : REAL;
    Reset_y_old  : USINT;
    Reset_y_2  : USINT;
    x1_dbl_1  : UDINT;
    x1_dbl_2  : UDINT;
    x2_dbl_1  : UDINT;
    x2_dbl_2  : UDINT;
    Sqrt_D_1_dbl_1  : UDINT;
    Sqrt_D_1_dbl_2  : UDINT;
    Tv_Tf_dbl_1  : UDINT;
    Tv_Tf_dbl_2  : UDINT;
    Ts_Tf_dbl_1  : UDINT;
    Ts_Tf_dbl_2  : UDINT;
    Exp_D_Ts_Tf_dbl_1  : UDINT;
    Exp_D_Ts_Tf_dbl_2  : UDINT;
    a0_dbl_1  : UDINT;
    a0_dbl_2  : UDINT;
    a1_dbl_1  : UDINT;
    a1_dbl_2  : UDINT;
    b0_dbl_1  : UDINT;
    b0_dbl_2  : UDINT;
    b1_dbl_1  : UDINT;
    b1_dbl_2  : UDINT;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRJoltFree_Internal_typ : STRUCT
    uSwitch_old  : BOOL;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRF_Cont_Internal_typ : STRUCT
    Qnom_pos  : REAL;
    Qnom_neg  : REAL;
    _0006_A_Cyl_pos_dbl_1  : UDINT;
    _0006_A_Cyl_pos_dbl_2  : UDINT;
    _0006_A_Cyl_neg_dbl_1  : UDINT;
    _0006_A_Cyl_neg_dbl_2  : UDINT;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRPIDPara_s_typ : STRUCT
    s_min  : REAL;
    s_max  : REAL;
    Kw  : REAL;
    Kp  : REAL;
    Tn_pos  : REAL;
    Tn_neg  : REAL;
    K_Fbk  : REAL;
    d_mode  : USINT;
    Tv  : REAL;
    Tf  : REAL;
    dv_max  : REAL;
    v_min  : REAL;
    v_max  : REAL;
  END_STRUCT;

  HCRPIDPara_F_typ : STRUCT
    Fp_min  : REAL;
    Fp_max  : REAL;
    Kw  : REAL;
    Kp  : REAL;
    Tn  : REAL;
    K_Fbk  : REAL;
    d_mode  : USINT;
    Tv  : REAL;
    Tf  : REAL;
    dQ_max  : REAL;
    Q_min  : REAL;
    Q_max  : REAL;
  END_STRUCT;

  HCRsF_Cont_Internal_typ : STRUCT
    uSwitch_old  : BOOL;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRs_Cont_InVar_typ : STRUCT
    I_Switch  : USINT;
    v_man  : REAL;
    v_add  : REAL;
    v_set  : REAL;
    Fp_Cyl  : REAL;
    Ff_Cyl_pos  : REAL;
    Ff_Cyl_neg  : REAL;
  END_STRUCT;

  HCRF_Cont_InVar_typ : STRUCT
    I_Switch  : USINT;
    Q_man  : REAL;
    Q_add  : REAL;
    v_act  : REAL;
  END_STRUCT;

  HCRDT2_Internal_typ : STRUCT
    Ts  : DINT;
    Ts_dbl_1  : UDINT;
    Ts_dbl_2  : UDINT;
    Tv_old  : REAL;
    T1_old  : REAL;
    T2_old  : REAL;
    n_Avg_old  : USINT;
    u_Buf  : ARRAY[0..99] OF REAL;
    u_BufCnt  : SINT;
    u_Sum_dbl_1  : UDINT;
    u_Sum_dbl_2  : UDINT;
    u_Avg_dbl_1  : UDINT;
    u_Avg_dbl_2  : UDINT;
    Reset_y_old  : USINT;
    Reset_y_2  : USINT;
    x1_dbl_1  : UDINT;
    x1_dbl_2  : UDINT;
    x2_dbl_1  : UDINT;
    x2_dbl_2  : UDINT;
    Tv_T1_dbl_1  : UDINT;
    Tv_T1_dbl_2  : UDINT;
    Tv_T2_dbl_1  : UDINT;
    Tv_T2_dbl_2  : UDINT;
    Exp_Ts_T1_dbl_1  : UDINT;
    Exp_Ts_T1_dbl_2  : UDINT;
    Exp_Ts_T2_dbl_1  : UDINT;
    Exp_Ts_T2_dbl_2  : UDINT;
    Exp_T1_T2_dbl_1  : UDINT;
    Exp_T1_T2_dbl_2  : UDINT;
    a0_dbl_1  : UDINT;
    a0_dbl_2  : UDINT;
    a1_dbl_1  : UDINT;
    a1_dbl_2  : UDINT;
    b0_dbl_1  : UDINT;
    b0_dbl_2  : UDINT;
    b1_dbl_1  : UDINT;
    b1_dbl_2  : UDINT;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRFIFO_Internal_typ : STRUCT
    Ts  : DINT;
    t_FIFO_max  : DINT;
    MemSize  : UDINT;
    MemSize_REAL  : UDINT;
    Set_y_2  : BOOL;
    pFIFO_Buf  : UDINT;
    pFIFO_OutIn  : UDINT;
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;

  HCRLinValve_Internal_typ : STRUCT
    enable_old  : BOOL;
    Bootkey  : UDINT;
  END_STRUCT;
END_TYPE