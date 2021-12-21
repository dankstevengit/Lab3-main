(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: AsHydCon
 * File: AsHydCon.fun
 * Created: 05.09.2006
 ********************************************************************
 * Functions and function blocks of library AsHydCon
 ********************************************************************)
FUNCTION_BLOCK HCRPT1
  VAR_INPUT
    enable : BOOL;
    V : REAL;
    T1 : REAL;
    u : REAL;
    Set_y : USINT;
    y_set : REAL;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRPT1_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRPT2
  VAR_INPUT
    enable : BOOL;
    V : REAL;
    T1 : REAL;
    T2 : REAL;
    u : REAL;
    Set_y : USINT;
    y_set : REAL;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRPT2_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRPT2s
  VAR_INPUT
    enable : BOOL;
    V : REAL;
    D : REAL;
    Tf : REAL;
    u : REAL;
    Set_y : USINT;
    y_set : REAL;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRPT2s_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRDT1
  VAR_INPUT
    enable : BOOL;
    Tv : REAL;
    Tf : REAL;
    u : REAL;
    n_Avg : USINT;
    Reset_y : USINT;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRDT1_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRDT2
  VAR_INPUT
    enable : BOOL;
    Tv : REAL;
    T1 : REAL;
    T2 : REAL;
    u : REAL;
    n_Avg : USINT;
    Reset_y : USINT;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRDT2_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRDT2s
  VAR_INPUT
    enable : BOOL;
    D : REAL;
    Tv : REAL;
    Tf : REAL;
    u : REAL;
    Reset_y : USINT;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRDT2s_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRPT1cP
  VAR_INPUT
    enable : BOOL;
    T1 : REAL;
    u : REAL;
    Set_y : USINT;
    y_set : REAL;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRPT1cP_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRJoltFree
  VAR_INPUT
    enable : BOOL;
    tSwitch : REAL;
    uSwitch : BOOL;
    u1 : REAL;
    u2 : REAL;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRJoltFree_Internal_typ;
    PT1cP : HCRPT1cP;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRFIFO
  VAR_INPUT
    enable : BOOL;
    t_FIFO : DINT;
    x : REAL;
    Set_y : BOOL;
    y_set : REAL;
  END_VAR VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRFIFO_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRSPF
  VAR_INPUT
    enable : BOOL;
    pMove_Para : REFERENCE TO HCRMovePara_typ;
    Stop : BOOL;
    s_home : REAL;
    Set_home : BOOL;
    s_end : REAL;
    Init : BOOL;
    Brake : BOOL;
  END_VAR
  VAR_OUTPUT
    s_set : REAL;
    v_set : REAL;
    Reached : BOOL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRSPF_Internal_typ;
    SystemInfo : SysInfo;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRvyServo
  VAR_INPUT
    enable : BOOL;
    pSupply : REAL;
    pTank : REAL;
    A_Cyl_pos : REAL;
    A_Cyl_neg : REAL;
    Qnom_pos : REAL;
    Qnom_neg : REAL;
    pDelta_nom : REAL;
    yValve_0 : REAL;
    yValve_min : REAL;
    Neg_y : BOOL;
    Update : USINT;
    pCyl_pos : REAL;
    pCyl_neg : REAL;
    vCyl_abs : REAL;
    vCyl_rel : REAL;
    Zero_yValve : BOOL;
  END_VAR
  VAR_OUTPUT
    yValve : REAL;
    Qy : REAL;
    MoveDir : SINT;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRvyServo_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRvyServo_Fp
  VAR_INPUT
    enable : BOOL;
    pSupply : REAL;
    pTank : REAL;
    A_Cyl_pos : REAL;
    A_Cyl_neg : REAL;
    Qnom_pos : REAL;
    Qnom_neg : REAL;
    pDelta_nom : REAL;
    yValve_0 : REAL;
    yValve_min : REAL;
    Neg_y : BOOL;
    Update : USINT;
    Fp_Cyl : REAL;
    Ff_Cyl_pos : REAL;
    Ff_Cyl_neg : REAL;
    vCyl_abs : REAL;
    vCyl_rel : REAL;
    Zero_yValve : BOOL;
  END_VAR
  VAR_OUTPUT
    yValve : REAL;
    Qy : REAL;
    MoveDir : SINT;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRvyServo_Fp_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRFyServo_Fp
  VAR_INPUT
    enable : BOOL;
    pSupply : REAL;
    pTank : REAL;
    A_Cyl_pos : REAL;
    A_Cyl_neg : REAL;
    Qnom_pos : REAL;
    Qnom_neg : REAL;
    Neg_y : BOOL;
    Update : USINT;
    Fp : REAL;
    u : REAL;
  END_VAR
  VAR_OUTPUT
    yValve : REAL;
    Qy : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRFyServo_Fp_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRLinSpline
  VAR_INPUT
    enable : BOOL;
    NbNodes : UINT;
    pNodeVec : REFERENCE TO HCRNode_typ;
    Invert : BOOL;
    Smooth : USINT;
    Rness : REAL;
    Update : BOOL;
    DisMode : SINT;
    x : REAL;
  END_VAR
  VAR_OUTPUT
    y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HRCLinSpline_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRLinValve
  VAR_INPUT
    enable : BOOL;
    NbNodes : UINT;
    pNodeVec : REFERENCE TO HCRNode_typ;
    Update : BOOL;
    DisMode : SINT;
    Qy : REAL;
  END_VAR
  VAR_OUTPUT
    Uy : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRLinValve_Internal_typ;
    LinSpline : HCRLinSpline;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRPID
  VAR_INPUT
    enable : BOOL;
    Parameter : HCRPIDPara_typ;
    Update : USINT;
    W : REAL;
    X : REAL;
    Invert : BOOL;
    I_Switch : SINT;
    CTRLmode : USINT;
    Yman : REAL;
    Yadd : REAL;
  END_VAR
  VAR_OUTPUT
    e : REAL;
    Yp : REAL;
    Yi : REAL;
    Yd : REAL;
    Y : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRPID_Internal_typ;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRs_Cont
  VAR_INPUT
    enable : BOOL;
    pSystem_Para : REFERENCE TO HCRSystemPara_typ;
    pValve_Para : REFERENCE TO HCRValvePara_typ;
    pPID_Para_s : REFERENCE TO HCRPIDPara_s_typ;
    Update : USINT;
    s_set : REAL;
    s_act : REAL;
    Invert : BOOL;
    I_Switch : USINT;
    CTRLmode : USINT;
    v_man : REAL;
    v_add : REAL;
    v_set : REAL;
    Fp_Cyl : REAL;
    Ff_Cyl_pos : REAL;
    Ff_Cyl_neg : REAL;
  END_VAR
  VAR_OUTPUT
    Qy : REAL;
    MoveDir : SINT;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRs_Cont_Internal_typ;
    PID : HCRPID;
    vyServo_Fp : HCRvyServo_Fp;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRF_Cont
  VAR_INPUT
    enable : BOOL;
    pSystem_Para : REFERENCE TO HCRSystemPara_typ;
    pValve_Para : REFERENCE TO HCRValvePara_typ;
    pPID_Para_F : REFERENCE TO HCRPIDPara_F_typ;
    Update : USINT;
    Fp_set : REAL;
    Fp_act : REAL;
    Invert : BOOL;
    I_Switch : USINT;
    CTRLmode : USINT;
    Q_man : REAL;
    Q_add : REAL;
    v_act : REAL;
  END_VAR
  VAR_OUTPUT
    Qy : REAL;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRF_Cont_Internal_typ;
    PID : HCRPID;
    FyServo_Fp : HCRFyServo_Fp;
  END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK HCRsF_Cont
  VAR_INPUT
    enable : BOOL;
    pSystem_Para : REFERENCE TO HCRSystemPara_typ;
    pValve_Para : REFERENCE TO HCRValvePara_typ;
    pPID_Para_s : REFERENCE TO HCRPIDPara_s_typ;
    pPID_Para_F : REFERENCE TO HCRPIDPara_F_typ;
    tSwitch : REAL;
    Update : USINT;
    s_set : REAL;
    s_act : REAL;
    s_Cont_InVar : HCRs_Cont_InVar_typ;
    Fp_set : REAL;
    Fp_act : REAL;
    F_Cont_InVar : HCRF_Cont_InVar_typ;
    CTRLmode : USINT;
    uSwitch : BOOL;
  END_VAR
  VAR_OUTPUT
    Qy : REAL;
    MoveDir : SINT;
    status : UINT;
  END_VAR
  VAR
    Internal : HCRsF_Cont_Internal_typ;
    s_Cont : HCRs_Cont;
    F_Cont : HCRF_Cont;
    JoltFree : HCRJoltFree;
  END_VAR
END_FUNCTION_BLOCK