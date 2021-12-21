/* Automation Studio Generated Header File, Format Version 1.00 */
/* do not change */
#ifndef ASHYDCON_H_
#define ASHYDCON_H_
#define _WEAK	__attribute__((__weak__))

#include <bur/plctypes.h>

#include <brsystem.h>


/* Constants */
_WEAK const unsigned short HCR_ERR_DISABLED = 65534;
_WEAK const unsigned short HCR_ERR_DT12S_D_NEG = 32250;
_WEAK const unsigned short HCR_ERR_DT12S_T1_NEG = 32251;
_WEAK const unsigned short HCR_ERR_DT12S_T1_T2_ZERO = 32252;
_WEAK const unsigned short HCR_ERR_DT12S_T2_NEG = 32253;
_WEAK const unsigned short HCR_ERR_DT12S_TF_NEG_ZERO = 32254;
_WEAK const unsigned short HCR_ERR_DT12S_TV_NEG = 32255;
_WEAK const unsigned short HCR_ERR_FIFO_MEM = 32256;
_WEAK const unsigned short HCR_ERR_FIFO_T_FIFO_NEG = 32257;
_WEAK const unsigned short HCR_ERR_JFREE_TSWITCH_NEG = 32258;
_WEAK const unsigned short HCR_ERR_LIN_NODEVEC_EMPTY = 32259;
_WEAK const unsigned short HCR_ERR_LIN_X_NOT_ASC_DESC = 32260;
_WEAK const unsigned short HCR_ERR_LIN_Y_NOT_ASC_DESC = 32261;
_WEAK const unsigned short HCR_ERR_NOTCH_B_NEG_ZERO = 32307;
_WEAK const unsigned short HCR_ERR_NOTCH_F0_NEG_ZERO = 32308;
_WEAK const unsigned short HCR_ERR_PID_DY_MAX_NEG = 32262;
_WEAK const unsigned short HCR_ERR_PID_D_MODE_INVALID = 32263;
_WEAK const unsigned short HCR_ERR_PID_KW_0_1 = 32264;
_WEAK const unsigned short HCR_ERR_PID_K_FBK_NEG = 32265;
_WEAK const unsigned short HCR_ERR_PID_NIL_PTR = 32300;
_WEAK const unsigned short HCR_ERR_PID_TF_NEG = 32266;
_WEAK const unsigned short HCR_ERR_PID_TF_ZERO = 32267;
_WEAK const unsigned short HCR_ERR_PID_TN_NEG_NEG = 32268;
_WEAK const unsigned short HCR_ERR_PID_TN_POS_NEG = 32269;
_WEAK const unsigned short HCR_ERR_PID_TV_NEG = 32270;
_WEAK const unsigned short HCR_ERR_PID_WX_MAX_MIN = 32271;
_WEAK const unsigned short HCR_ERR_PID_Y_MAX_MIN = 32272;
_WEAK const unsigned short HCR_ERR_PT12_T1_NEG = 32273;
_WEAK const unsigned short HCR_ERR_PT12_T2_NEG = 32274;
_WEAK const unsigned short HCR_ERR_PT1CP_T1_NEG = 32275;
_WEAK const unsigned short HCR_ERR_PT2S_D_NEG = 32276;
_WEAK const unsigned short HCR_ERR_PT2S_TF_NEG_ZERO = 32277;
_WEAK const unsigned short HCR_ERR_RAMP_T_FALL_NEG = 32286;
_WEAK const unsigned short HCR_ERR_RAMP_T_HOLD_NEG = 32287;
_WEAK const unsigned short HCR_ERR_RAMP_T_RISE_NEG = 32288;
_WEAK const unsigned short HCR_ERR_SERVO_MODE_FY = 32303;
_WEAK const unsigned short HCR_ERR_SERVO_MODE_VY = 32304;
_WEAK const unsigned short HCR_ERR_SERVO_Y_MIN = 32278;
_WEAK const unsigned short HCR_ERR_SPF_A_ACC_NEG_NEG_ZERO = 32289;
_WEAK const unsigned short HCR_ERR_SPF_A_ACC_POS_NEG_ZERO = 32290;
_WEAK const unsigned short HCR_ERR_SPF_A_DEC_NEG_NEG_ZERO = 32291;
_WEAK const unsigned short HCR_ERR_SPF_A_DEC_POS_NEG_ZERO = 32292;
_WEAK const unsigned short HCR_ERR_SPF_NIL_PTR = 32293;
_WEAK const unsigned short HCR_ERR_SPF_PER_S_END = 32320;
_WEAK const unsigned short HCR_ERR_SPF_PER_S_HOME = 32320;
_WEAK const unsigned short HCR_ERR_SPF_PER_S_PERIODIC = 32320;
_WEAK const unsigned short HCR_ERR_SPF_T_JOLT_NEG = 32294;
_WEAK const unsigned short HCR_ERR_SPF_VC_NEG_NEG = 32295;
_WEAK const unsigned short HCR_ERR_SPF_VC_POS_NEG = 32296;
_WEAK const unsigned short HCR_ERR_SYSTEM_A_CYL = 32279;
_WEAK const unsigned short HCR_ERR_SYSTEM_H_CYL = 32297;
_WEAK const unsigned short HCR_ERR_SYSTEM_M_CYL = 32298;
_WEAK const unsigned short HCR_ERR_SYSTEM_NIL_PTR = 32299;
_WEAK const unsigned short HCR_ERR_SYSTEM_P_DIFF = 32280;
_WEAK const unsigned short HCR_ERR_SYSTEM_P_SUPPLY = 32281;
_WEAK const unsigned short HCR_ERR_SYSTEM_P_SUPPLY_MAX = 32300;
_WEAK const unsigned short HCR_ERR_SYSTEM_P_TANK = 32282;
_WEAK const unsigned short HCR_ERR_SYSTEM_V0_NEG = 32301;
_WEAK const unsigned short HCR_ERR_SYSTEM_V0_POS = 32302;
_WEAK const unsigned short HCR_ERR_VALVE_NIL_PTR = 32368;
_WEAK const unsigned short HCR_ERR_VALVE_P_DELTA_NOM = 32283;
_WEAK const unsigned short HCR_ERR_VALVE_Q_NOM = 32284;
_WEAK const unsigned short HCR_ERR_VALVE_Y_0 = 32285;
_WEAK const unsigned short HCR_WARN_AUTOTUNE_KP_INVALID = 32413;
_WEAK const unsigned short HCR_WARN_DT12S_T1_TS = 32370;
_WEAK const unsigned short HCR_WARN_DT12S_T1_ZERO = 32371;
_WEAK const unsigned short HCR_WARN_DT12S_T2_TS = 32372;
_WEAK const unsigned short HCR_WARN_DT12S_T2_ZERO = 32373;
_WEAK const unsigned short HCR_WARN_DT12S_TF_TS = 32374;
_WEAK const unsigned short HCR_WARN_DT12S_TV_TS = 32375;
_WEAK const unsigned short HCR_WARN_DT12S_TV_ZERO = 32376;
_WEAK const unsigned short HCR_WARN_FIFO_T_FIFO_INT = 32377;
_WEAK const unsigned short HCR_WARN_FIFO_T_FIFO_TS = 32378;
_WEAK const unsigned short HCR_WARN_JFREE_TSWITCH_5TS = 32379;
_WEAK const unsigned short HCR_WARN_JFREE_TSWITCH_ZERO = 32380;
_WEAK const unsigned short HCR_WARN_LIN_CRIT_RNESS = 32381;
_WEAK const unsigned short HCR_WARN_LIN_NB_NODE = 32382;
_WEAK const unsigned short HCR_WARN_LIN_X_NOT_ASC_DESC_S = 32383;
_WEAK const unsigned short HCR_WARN_LIN_Y_NOT_ASC_DESC = 32384;
_WEAK const unsigned short HCR_WARN_LIN_Y_NOT_ASC_DESC_S = 32385;
_WEAK const unsigned short HCR_WARN_NOTCH_F0_FS = 32414;
_WEAK const unsigned short HCR_WARN_PID_TF_TS = 32386;
_WEAK const unsigned short HCR_WARN_PID_TN_NEG_TS = 32387;
_WEAK const unsigned short HCR_WARN_PID_TN_POS_TS = 32388;
_WEAK const unsigned short HCR_WARN_PID_TV_TS = 32389;
_WEAK const unsigned short HCR_WARN_PID_YADD_100 = 32390;
_WEAK const unsigned short HCR_WARN_PID_YI_MAX = 32391;
_WEAK const unsigned short HCR_WARN_PID_YI_MIN = 32392;
_WEAK const unsigned short HCR_WARN_PID_YMAN_MAX = 32393;
_WEAK const unsigned short HCR_WARN_PID_YMAN_MIN = 32394;
_WEAK const unsigned short HCR_WARN_PT12_T1_TS = 32395;
_WEAK const unsigned short HCR_WARN_PT12_T1_ZERO = 32396;
_WEAK const unsigned short HCR_WARN_PT12_T2_TS = 32397;
_WEAK const unsigned short HCR_WARN_PT12_T2_ZERO = 32398;
_WEAK const unsigned short HCR_WARN_PT1CP_T1_TS = 32399;
_WEAK const unsigned short HCR_WARN_PT1CP_T1_ZERO = 32400;
_WEAK const unsigned short HCR_WARN_PT2S_TF_TS = 32401;
_WEAK const unsigned short HCR_WARN_SERVO_FF_CYL_NEG = 32402;
_WEAK const unsigned short HCR_WARN_SERVO_FF_CYL_POS = 32403;
_WEAK const unsigned short HCR_WARN_SERVO_P_CYL_NEG_HIGH = 32404;
_WEAK const unsigned short HCR_WARN_SERVO_P_CYL_NEG_LOW = 32405;
_WEAK const unsigned short HCR_WARN_SERVO_P_CYL_NEG_NEG = 32406;
_WEAK const unsigned short HCR_WARN_SERVO_P_CYL_POS_HIGH = 32407;
_WEAK const unsigned short HCR_WARN_SERVO_P_CYL_POS_LOW = 32408;
_WEAK const unsigned short HCR_WARN_SERVO_P_CYL_POS_NEG = 32409;
_WEAK const unsigned short HCR_WARN_SERVO_V_CYL_MAX = 32410;
_WEAK const unsigned short HCR_WARN_SERVO_Y_MAX = 32411;
_WEAK const unsigned short HCR_WARN_SPF_MEM = 32412;


/* Datatypes */
typedef struct HCRNode_Internal_typ
{
	float X;
	float Y;
	float X1;
	float X2;
	float Rness_crit;
	unsigned long X1_dbl_1;
	unsigned long X1_dbl_2;
	unsigned long X2_dbl_1;
	unsigned long X2_dbl_2;
	unsigned long deltaX_dbl_1;
	unsigned long deltaX_dbl_2;
	unsigned long deltaY_dbl_1;
	unsigned long deltaY_dbl_2;
	unsigned long k_dbl_1;
	unsigned long k_dbl_2;
	unsigned long d_dbl_1;
	unsigned long d_dbl_2;
} HCRNode_Internal_typ;

typedef struct HCRNode_typ
{
	float X;
	float Y;
	HCRNode_Internal_typ Internal;
} HCRNode_typ;

typedef struct HCRLinSpline_Internal_typ
{
	signed char AscendingX_o;
	signed char AscendingXs_o;
	signed char AscendingY_o;
	signed char AscendingYs_o;
	signed char AscendingX_d;
	signed char AscendingXs_d;
	signed char AscendingY_d;
	signed char AscendingYs_d;
	float Rness_crit;
	float RnessP;
	float RnessR;
	unsigned long _Smooth1_dbl_1;
	unsigned long _Smooth1_dbl_2;
	unsigned long _1Smooth_dbl_1;
	unsigned long _1Smooth_dbl_2;
	unsigned long _1Smooth1_dbl_1;
	unsigned long _1Smooth1_dbl_2;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRLinSpline_Internal_typ;

typedef struct HCRvyServo_Fp_Internal_typ
{
	float Alpha;
	float vCyl_sup_pos;
	float vCyl_sup_neg;
	float vCyl_sup;
	float vCyl_max_pos;
	float vCyl_max_neg;
	float vCyl_max;
	float vCyl_sum;
	float vCyl_thresh;
	float vCyl_nOverlap_pos;
	float vCyl_nOverlap_neg;
	float vCyl_old;
	float pSupply_max;
	float pSupply;
	float pTank;
	float Qnom_pos;
	float Qnom_neg;
	float A_Cyl_pos;
	float A_Cyl_neg;
	float pCyl_pos;
	float pCyl_neg;
	float yValve_zero;
	float yValve_min;
	float _1_yValve_0;
	plcbit Neg_y;
	unsigned long yValve_0_dbl_1;
	unsigned long yValve_0_dbl_2;
	unsigned long Supply_Tank_pos_dbl_1;
	unsigned long Supply_Tank_pos_dbl_2;
	unsigned long Supply_Tank_neg_dbl_1;
	unsigned long Supply_Tank_neg_dbl_2;
	unsigned long Qn_pos_2_A_neg_2_dbl_1;
	unsigned long Qn_pos_2_A_neg_2_dbl_2;
	unsigned long Qn_neg_2_A_pos_2_dbl_1;
	unsigned long Qn_neg_2_A_pos_2_dbl_2;
	unsigned long Qn_pos_2_A_neg_3_dbl_1;
	unsigned long Qn_pos_2_A_neg_3_dbl_2;
	unsigned long Qn_neg_2_A_pos_3_dbl_1;
	unsigned long Qn_neg_2_A_pos_3_dbl_2;
	unsigned long K_dbl_1;
	unsigned long K_dbl_2;
	unsigned long K_pos_dbl_1;
	unsigned long K_pos_dbl_2;
	unsigned long K_neg_dbl_1;
	unsigned long K_neg_dbl_2;
	unsigned long K_nOverlap_dbl_1;
	unsigned long K_nOverlap_dbl_2;
	unsigned long K_nOverlap_pos_dbl_1;
	unsigned long K_nOverlap_pos_dbl_2;
	unsigned long K_nOverlap_neg_dbl_1;
	unsigned long K_nOverlap_neg_dbl_2;
	unsigned long S_nOverlap_dbl_1;
	unsigned long S_nOverlap_dbl_2;
	unsigned long pCyl_pos_Numer_pos_dbl_1;
	unsigned long pCyl_pos_Numer_pos_dbl_2;
	unsigned long pCyl_neg_Numer_pos_dbl_1;
	unsigned long pCyl_neg_Numer_pos_dbl_2;
	unsigned long pCyl_pos_Numer_neg_dbl_1;
	unsigned long pCyl_pos_Numer_neg_dbl_2;
	unsigned long pCyl_neg_Numer_neg_dbl_1;
	unsigned long pCyl_neg_Numer_neg_dbl_2;
	unsigned long pCyl_Denom_dbl_1;
	unsigned long pCyl_Denom_dbl_2;
	unsigned char Update_old;
	unsigned char Update_2;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRvyServo_Fp_Internal_typ;

typedef struct HCRvyServo_Internal_typ
{
	float Alpha;
	float vCyl_sup_pos;
	float vCyl_sup_neg;
	float vCyl_sup;
	float vCyl_max_pos;
	float vCyl_max_neg;
	float vCyl_max;
	float vCyl_sum;
	float vCyl_thresh;
	float vCyl_nOverlap_pos;
	float vCyl_nOverlap_neg;
	float vCyl_old;
	float pSupply_max;
	float pSupply;
	float pTank;
	float Qnom_pos;
	float Qnom_neg;
	float A_Cyl_pos;
	float A_Cyl_neg;
	float yValve_zero;
	float yValve_min;
	float _1_yValve_0;
	plcbit Neg_y;
	unsigned long yValve_0_dbl_1;
	unsigned long yValve_0_dbl_2;
	unsigned long K_pos_dbl_1;
	unsigned long K_pos_dbl_2;
	unsigned long K_neg_dbl_1;
	unsigned long K_neg_dbl_2;
	unsigned long K_nOverlap_pos_dbl_1;
	unsigned long K_nOverlap_pos_dbl_2;
	unsigned long K_nOverlap_neg_dbl_1;
	unsigned long K_nOverlap_neg_dbl_2;
	unsigned long S_nOverlap_dbl_1;
	unsigned long S_nOverlap_dbl_2;
	unsigned long pDelta_min_dbl_1;
	unsigned long pDelta_min_dbl_2;
	unsigned char Update_old;
	unsigned char Update_2;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRvyServo_Internal_typ;

typedef struct HCRPID_Internal_typ
{
	float WX_min;
	float WX_max;
	unsigned long _100_WX_delta_dbl_1;
	unsigned long _100_WX_delta_dbl_2;
	unsigned long W_norm_dbl_1;
	unsigned long W_norm_dbl_2;
	unsigned long X_norm_dbl_1;
	unsigned long X_norm_dbl_2;
	plcbit Invert;
	unsigned long e_norm_dbl_1;
	unsigned long e_norm_dbl_2;
	float Kp;
	float Kw;
	unsigned long Kp_Kw_1_dbl_1;
	unsigned long Kp_Kw_1_dbl_2;
	float Kp_intrude;
	plcbit P_intrude;
	unsigned long Yp_dbl_1;
	unsigned long Yp_dbl_2;
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	unsigned long Tn_pos_dbl_1;
	unsigned long Tn_pos_dbl_2;
	unsigned long Tn_neg_dbl_1;
	unsigned long Tn_neg_dbl_2;
	unsigned long Kp_Ts_Tn_pos_dbl_1;
	unsigned long Kp_Ts_Tn_pos_dbl_2;
	unsigned long Kp_Ts_Tn_neg_dbl_1;
	unsigned long Kp_Ts_Tn_neg_dbl_2;
	float Yi_load;
	signed char I_load;
	unsigned long Yi_dbl_1;
	unsigned long Yi_dbl_2;
	unsigned long Yi_pos_last_dbl_1;
	unsigned long Yi_pos_last_dbl_2;
	unsigned long Yi_neg_last_dbl_1;
	unsigned long Yi_neg_last_dbl_2;
	signed char I_Switch_old;
	unsigned char d_mode;
	float D;
	unsigned long Tv_dbl_1;
	unsigned long Tv_dbl_2;
	unsigned long Tf_dbl_1;
	unsigned long Tf_dbl_2;
	unsigned long x1d_dbl_1;
	unsigned long x1d_dbl_2;
	unsigned long x2d_dbl_1;
	unsigned long x2d_dbl_2;
	unsigned long a0d_dbl_1;
	unsigned long a0d_dbl_2;
	unsigned long a1d_dbl_1;
	unsigned long a1d_dbl_2;
	unsigned long b0d_dbl_1;
	unsigned long b0d_dbl_2;
	unsigned long b1d_dbl_1;
	unsigned long b1d_dbl_2;
	unsigned long Yd_dbl_1;
	unsigned long Yd_dbl_2;
	unsigned char Reset_Yd;
	float Y_min;
	float Y_max;
	unsigned long Ytotal_dbl_1;
	unsigned long Ytotal_dbl_2;
	unsigned long Ylim_dbl_1;
	unsigned long Ylim_dbl_2;
	float Y_Fbk_ext;
	unsigned char Fbk_mode;
	unsigned long K_Fbk_Kp_dbl_1;
	unsigned long K_Fbk_Kp_dbl_2;
	unsigned long e_Fbk_dbl_1;
	unsigned long e_Fbk_dbl_2;
	float dY_max;
	unsigned long dY_max_Ts_dbl_1;
	unsigned long dY_max_Ts_dbl_2;
	unsigned long Y_dbl_1;
	unsigned long Y_dbl_2;
	plcbit UpdateValid;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRPID_Internal_typ;

typedef struct HCRPIDPara_typ
{
	float WX_min;
	float WX_max;
	float Kw;
	float Kp;
	float Tn_pos;
	float Tn_neg;
	float K_Fbk;
	unsigned char d_mode;
	float Tv;
	float Tf;
	float dY_max;
	float Y_min;
	float Y_max;
} HCRPIDPara_typ;

typedef struct HCRValvePara_typ
{
	float Qnom_pos;
	float Qnom_neg;
	float pDelta_nom;
	float yValve_0;
	plcbit Neg_y;
} HCRValvePara_typ;

typedef struct HCRSystemPara_typ
{
	float pSupply_max;
	float pSupply;
	float pTank;
	float A_Cyl_pos;
	float A_Cyl_neg;
} HCRSystemPara_typ;

typedef struct HCRs_Cont_Internal_typ
{
	float vCyl_sup_pos;
	float vCyl_sup_neg;
	float vCyl_sup;
	float s_set_old;
	float s_act_old;
	float v_act;
	unsigned char Oset_Mode;
	float Qy_Oset_s_pos;
	float Qy_Oset_s_neg;
	unsigned char Qy_I_Switch;
	float Qy_I;
	signed char MoveDir_I;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRs_Cont_Internal_typ;

typedef struct HCRSPF_Internal_typ
{
	unsigned char Profile_Nb;
	unsigned char Profile_ID;
	unsigned char MovementPhase;
	float s_end;
	unsigned long s_set_0_dbl_1;
	unsigned long s_set_0_dbl_2;
	unsigned long v_set_0_dbl_1;
	unsigned long v_set_0_dbl_2;
	unsigned long a_set_0_dbl_1;
	unsigned long a_set_0_dbl_2;
	float s_set;
	float s_set_jolt;
	unsigned long s_set_dbl_1;
	unsigned long s_set_dbl_2;
	float v_set_old;
	float v_set;
	float v_set_jolt;
	unsigned long v_set_dbl_1;
	unsigned long v_set_dbl_2;
	float a_set;
	float a_set_jolt;
	unsigned long a_set_dbl_1;
	unsigned long a_set_dbl_2;
	unsigned long vC_pos_dbl_1;
	unsigned long vC_pos_dbl_2;
	unsigned long vC_neg_dbl_1;
	unsigned long vC_neg_dbl_2;
	unsigned long aAcc_pos_dbl_1;
	unsigned long aAcc_pos_dbl_2;
	unsigned long aDec_pos_dbl_1;
	unsigned long aDec_pos_dbl_2;
	unsigned long aAcc_neg_dbl_1;
	unsigned long aAcc_neg_dbl_2;
	unsigned long aDec_neg_dbl_1;
	unsigned long aDec_neg_dbl_2;
	float t_Jolt_max;
	float t_Jolt_limit;
	float t_Jolt;
	unsigned long t_Jolt_dbl_1;
	unsigned long t_Jolt_dbl_2;
	float sDelta;
	unsigned long sDelta_dbl_1;
	unsigned long sDelta_dbl_2;
	float sBrake;
	unsigned long sBrake_dbl_1;
	unsigned long sBrake_dbl_2;
	float vTop;
	unsigned long vTop_dbl_1;
	unsigned long vTop_dbl_2;
	unsigned long AccVec_dbl[40];
	unsigned long ConstVec_dbl[40];
	unsigned long DecVec_dbl[40];
	float AccVec[20];
	float ConstVec[20];
	float DecVec[20];
	unsigned long pBuf_s_set;
	unsigned long pBuf_v_set;
	unsigned long pBuf_a_set;
	signed long BufCntMax;
	signed long BufCnt;
	signed long BufCnt_t_Jolt;
	signed long BufCnt_t_Jolt_old;
	unsigned long s_set_Sum_dbl_1;
	unsigned long s_set_Sum_dbl_2;
	unsigned long v_set_Sum_dbl_1;
	unsigned long v_set_Sum_dbl_2;
	unsigned long a_set_Sum_dbl_1;
	unsigned long a_set_Sum_dbl_2;
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	float Timer;
	unsigned long Timer_dbl_1;
	unsigned long Timer_dbl_2;
	float T_cycle;
	unsigned long T_cycle_dbl_1;
	unsigned long T_cycle_dbl_2;
	unsigned short CounterState;
	unsigned long musecs_old;
	unsigned long SysTicks_old;
	plcbit enable_old;
	unsigned long Bootkey_T;
	unsigned long Bootkey;
} HCRSPF_Internal_typ;

typedef struct HCRMovePara_typ
{
	float t_Jolt;
	float vC_pos;
	float vC_neg;
	float aAcc_pos;
	float aDec_pos;
	float aAcc_neg;
	float aDec_neg;
} HCRMovePara_typ;

typedef struct HCRFyServo_Fp_Internal_typ
{
	float Alpha;
	float pSupply_max;
	float pSupply;
	float pTank;
	float Qnom_pos;
	float Qnom_neg;
	float A_Cyl_pos;
	float A_Cyl_neg;
	plcbit Neg_y;
	unsigned long Supply_Tank_pos_dbl_1;
	unsigned long Supply_Tank_pos_dbl_2;
	unsigned long Supply_Tank_neg_dbl_1;
	unsigned long Supply_Tank_neg_dbl_2;
	unsigned long K_numer_dbl_1;
	unsigned long K_numer_dbl_2;
	unsigned char Update_old;
	unsigned char Update_2;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRFyServo_Fp_Internal_typ;

typedef struct HCRDT1_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	float Tv_old;
	float Tf_old;
	unsigned char n_Avg_old;
	float u_Buf[100];
	signed char u_BufCnt;
	unsigned long u_Sum_dbl_1;
	unsigned long u_Sum_dbl_2;
	unsigned long u_Avg_dbl_1;
	unsigned long u_Avg_dbl_2;
	unsigned char Reset_y_old;
	unsigned char Reset_y_2;
	unsigned long x_dbl_1;
	unsigned long x_dbl_2;
	unsigned long Tv_Tf_dbl_1;
	unsigned long Tv_Tf_dbl_2;
	unsigned long Exp_Ts_Tf_dbl_1;
	unsigned long Exp_Ts_Tf_dbl_2;
	unsigned long Tv_Tf_Exp_dbl_1;
	unsigned long Tv_Tf_Exp_dbl_2;
	unsigned long V_Exp_dbl_1;
	unsigned long V_Exp_dbl_2;
	unsigned long Bootkey;
} HCRDT1_Internal_typ;

typedef struct HCRPT1_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	float V_old;
	float T1_old;
	unsigned char Set_y_old;
	unsigned char Set_y_2;
	unsigned long x_dbl_1;
	unsigned long x_dbl_2;
	unsigned long Exp_Ts_T1_dbl_1;
	unsigned long Exp_Ts_T1_dbl_2;
	unsigned long V_Exp_dbl_1;
	unsigned long V_Exp_dbl_2;
	unsigned long Bootkey;
} HCRPT1_Internal_typ;

typedef struct HCRPT2_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	float V_old;
	float T1_old;
	float T2_old;
	unsigned char Set_y_old;
	unsigned char Set_y_2;
	unsigned long x1_dbl_1;
	unsigned long x1_dbl_2;
	unsigned long x2_dbl_1;
	unsigned long x2_dbl_2;
	unsigned long Exp_Ts_T1_dbl_1;
	unsigned long Exp_Ts_T1_dbl_2;
	unsigned long Exp_Ts_T2_dbl_1;
	unsigned long Exp_Ts_T2_dbl_2;
	unsigned long Exp_Ts_T1_T2_dbl_1;
	unsigned long Exp_Ts_T1_T2_dbl_2;
	unsigned long Exp_T1_T2_dbl_1;
	unsigned long Exp_T1_T2_dbl_2;
	unsigned long V1_Exp_dbl_1;
	unsigned long V1_Exp_dbl_2;
	unsigned long V2_Exp_dbl_1;
	unsigned long V2_Exp_dbl_2;
	unsigned long Bootkey;
} HCRPT2_Internal_typ;

typedef struct HCRPT2s_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	float V_old;
	float D_old;
	float Tf_old;
	unsigned char Set_y_old;
	unsigned char Set_y_2;
	unsigned long x1_dbl_1;
	unsigned long x1_dbl_2;
	unsigned long x2_dbl_1;
	unsigned long x2_dbl_2;
	unsigned long Sqrt_D_1_dbl_1;
	unsigned long Sqrt_D_1_dbl_2;
	unsigned long Ts_Tf_dbl_1;
	unsigned long Ts_Tf_dbl_2;
	unsigned long Exp_D_Ts_Tf_dbl_1;
	unsigned long Exp_D_Ts_Tf_dbl_2;
	unsigned long a0_dbl_1;
	unsigned long a0_dbl_2;
	unsigned long a1_dbl_1;
	unsigned long a1_dbl_2;
	unsigned long b0_dbl_1;
	unsigned long b0_dbl_2;
	unsigned long b1_dbl_1;
	unsigned long b1_dbl_2;
	unsigned long Bootkey;
} HCRPT2s_Internal_typ;

typedef struct HCRPT1cP_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	float T1_intern;
	unsigned long nCnt;
	unsigned char Set_y_old;
	unsigned char Set_y_2;
	unsigned long x_dbl_1;
	unsigned long x_dbl_2;
	unsigned long Exp_5_dbl_1;
	unsigned long Exp_5_dbl_2;
	unsigned long a0_dbl_1;
	unsigned long a0_dbl_2;
	unsigned long b0_dbl_1;
	unsigned long b0_dbl_2;
	unsigned long Bootkey;
} HCRPT1cP_Internal_typ;

typedef struct HCRDT2s_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	float D_old;
	float Tv_old;
	float Tf_old;
	unsigned char Reset_y_old;
	unsigned char Reset_y_2;
	unsigned long x1_dbl_1;
	unsigned long x1_dbl_2;
	unsigned long x2_dbl_1;
	unsigned long x2_dbl_2;
	unsigned long Sqrt_D_1_dbl_1;
	unsigned long Sqrt_D_1_dbl_2;
	unsigned long Tv_Tf_dbl_1;
	unsigned long Tv_Tf_dbl_2;
	unsigned long Ts_Tf_dbl_1;
	unsigned long Ts_Tf_dbl_2;
	unsigned long Exp_D_Ts_Tf_dbl_1;
	unsigned long Exp_D_Ts_Tf_dbl_2;
	unsigned long a0_dbl_1;
	unsigned long a0_dbl_2;
	unsigned long a1_dbl_1;
	unsigned long a1_dbl_2;
	unsigned long b0_dbl_1;
	unsigned long b0_dbl_2;
	unsigned long b1_dbl_1;
	unsigned long b1_dbl_2;
	unsigned long Bootkey;
} HCRDT2s_Internal_typ;

typedef struct HCRJoltFree_Internal_typ
{
	plcbit uSwitch_old;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRJoltFree_Internal_typ;

typedef struct HCRF_Cont_Internal_typ
{
	float Q_min;
	float Q_max;
	float Qnom_pos;
	float Qnom_neg;
	unsigned char Oset_Mode;
	float Qy_Oset_F_pos;
	float Qy_Oset_F_neg;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRF_Cont_Internal_typ;

typedef struct HCRPIDPara_s_typ
{
	float s_min;
	float s_max;
	float Kw;
	float Kp;
	float Tn_pos;
	float Tn_neg;
	float K_Fbk;
	unsigned char d_mode;
	float Tv;
	float Tf;
	float dv_max;
	float v_min;
	float v_max;
} HCRPIDPara_s_typ;

typedef struct HCRPIDPara_F_typ
{
	float Fp_min;
	float Fp_max;
	float Kw;
	float Kp;
	float Tn;
	float K_Fbk;
	unsigned char d_mode;
	float Tv;
	float Tf;
	float dQ_max;
	float Q_min;
	float Q_max;
} HCRPIDPara_F_typ;

typedef struct HCRsF_Cont_Internal_typ
{
	unsigned char uSwitch_old;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRsF_Cont_Internal_typ;

typedef struct HCRs_Cont_InVar_typ
{
	unsigned char I_Switch;
	float v_man;
	float v_add;
	float v_set;
	float Fp_Cyl;
	float Ff_Cyl_pos;
	float Ff_Cyl_neg;
	float Qy_Oset_ext;
	unsigned char Oset_Mode;
} HCRs_Cont_InVar_typ;

typedef struct HCRF_Cont_InVar_typ
{
	unsigned char I_Switch;
	float Q_man;
	float Q_add;
	float v_act;
	float Qy_Oset_ext;
	unsigned char Oset_Mode;
} HCRF_Cont_InVar_typ;

typedef struct HCRDT2_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	float Tv_old;
	float T1_old;
	float T2_old;
	unsigned char n_Avg_old;
	float u_Buf[100];
	signed char u_BufCnt;
	unsigned long u_Sum_dbl_1;
	unsigned long u_Sum_dbl_2;
	unsigned long u_Avg_dbl_1;
	unsigned long u_Avg_dbl_2;
	unsigned char Reset_y_old;
	unsigned char Reset_y_2;
	unsigned long x1_dbl_1;
	unsigned long x1_dbl_2;
	unsigned long x2_dbl_1;
	unsigned long x2_dbl_2;
	unsigned long Tv_T1_dbl_1;
	unsigned long Tv_T1_dbl_2;
	unsigned long Tv_T2_dbl_1;
	unsigned long Tv_T2_dbl_2;
	unsigned long Exp_Ts_T1_dbl_1;
	unsigned long Exp_Ts_T1_dbl_2;
	unsigned long Exp_Ts_T2_dbl_1;
	unsigned long Exp_Ts_T2_dbl_2;
	unsigned long Exp_T1_T2_dbl_1;
	unsigned long Exp_T1_T2_dbl_2;
	unsigned long a0_dbl_1;
	unsigned long a0_dbl_2;
	unsigned long a1_dbl_1;
	unsigned long a1_dbl_2;
	unsigned long b0_dbl_1;
	unsigned long b0_dbl_2;
	unsigned long b1_dbl_1;
	unsigned long b1_dbl_2;
	unsigned long Bootkey;
} HCRDT2_Internal_typ;

typedef struct HCRFIFO_Internal_typ
{
	signed long Ts;
	signed long t_FIFO_max;
	unsigned long MemSize;
	unsigned long MemSize_REAL;
	plcbit Set_y_2;
	unsigned long pFIFO_Buf;
	unsigned long pFIFO_OutIn;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRFIFO_Internal_typ;

typedef struct HCRLinValve_Internal_typ
{
	plcbit Neg_Uy;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRLinValve_Internal_typ;

typedef struct HCRs_Cont_p_Internal_typ
{
	float vCyl_sup_pos;
	float vCyl_sup_neg;
	float vCyl_sup;
	float s_set_old;
	float s_act_old;
	float v_act;
	unsigned char Oset_Mode;
	float Qy_Oset_s_pos;
	float Qy_Oset_s_neg;
	unsigned char Qy_I_Switch;
	float Qy_I;
	signed char MoveDir_I;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRs_Cont_p_Internal_typ;

typedef struct HCRsF_Cont_p_Internal_typ
{
	unsigned char uSwitch_old;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRsF_Cont_p_Internal_typ;

typedef struct HCRs_Cont_p_InVar_typ
{
	unsigned char I_Switch;
	float v_man;
	float v_add;
	float v_set;
	float pCyl_pos;
	float pCyl_neg;
	float Qy_Oset_ext;
	unsigned char Oset_Mode;
} HCRs_Cont_p_InVar_typ;

typedef struct HCRAutoTune_Internal_typ
{
	float E;
	float V0_pos;
	unsigned long V0_pos_mod_dbl_1;
	unsigned long V0_pos_mod_dbl_2;
	float V0_neg;
	unsigned long V0_neg_mod_dbl_1;
	unsigned long V0_neg_mod_dbl_2;
	unsigned long s_Cyl_min_dbl_1;
	unsigned long s_Cyl_min_dbl_2;
	unsigned long s_Cyl_max_dbl_1;
	unsigned long s_Cyl_max_dbl_2;
	float h_Cyl;
	unsigned long h_Cyl_dbl_1;
	unsigned long h_Cyl_dbl_2;
	unsigned long E_A_pos_2_dbl_1;
	unsigned long E_A_pos_2_dbl_2;
	unsigned long E_A_neg_2_dbl_1;
	unsigned long E_A_neg_2_dbl_2;
	float s0_Cyl;
	unsigned long s0_Cyl_dbl_1;
	unsigned long s0_Cyl_dbl_2;
	float c0_Cyl;
	unsigned long c0_Cyl_dbl_1;
	unsigned long c0_Cyl_dbl_2;
	float omega0_Cyl;
	unsigned long omega0_Cyl_dbl_1;
	unsigned long omega0_Cyl_dbl_2;
	float vCyl_sup_pos;
	float vCyl_sup_neg;
	float vCyl_sup;
	unsigned long Kp_dbl_1;
	unsigned long Kp_dbl_2;
	float Kp_physical;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRAutoTune_Internal_typ;

typedef struct HCRRampGen_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	unsigned long Timer_dbl_1;
	unsigned long Timer_dbl_2;
	unsigned long k_Ramp_dbl_1;
	unsigned long k_Ramp_dbl_2;
	unsigned long y_dbl_1;
	unsigned long y_dbl_2;
	unsigned char RampGenPhase;
	plcbit enable_old;
	unsigned long Bootkey;
} HCRRampGen_Internal_typ;

typedef struct HCRSystemParaAdd_typ
{
	float V0_pos;
	float V0_neg;
	float h_Cyl;
	float m_Cyl;
} HCRSystemParaAdd_typ;

typedef struct HCRNotch_Internal_typ
{
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	unsigned long fs_dbl_1;
	unsigned long fs_dbl_2;
	float V_old;
	float f0_old;
	float B_old;
	unsigned char Set_y_old;
	unsigned char Set_y_2;
	float fg_upper;
	float fg_lower;
	float B_act;
	float D;
	float Tf;
	unsigned long x1_dbl_1;
	unsigned long x1_dbl_2;
	unsigned long x2_dbl_1;
	unsigned long x2_dbl_2;
	unsigned long D_Ts_Tf_dbl_1;
	unsigned long D_Ts_Tf_dbl_2;
	unsigned long Sqrt_D_1_dbl_1;
	unsigned long Sqrt_D_1_dbl_2;
	unsigned long a0_dbl_1;
	unsigned long a0_dbl_2;
	unsigned long a1_dbl_1;
	unsigned long a1_dbl_2;
	unsigned long b0_dbl_1;
	unsigned long b0_dbl_2;
	unsigned long b1_dbl_1;
	unsigned long b1_dbl_2;
	unsigned long Bootkey;
} HCRNotch_Internal_typ;



/* Datatypes of function blocks */
typedef struct HCRDT2
{
	/* VAR_INPUT (analogous) */
	float Tv;
	float T1;
	float T2;
	float u;
	unsigned char n_Avg;
	unsigned char Reset_y;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRDT2_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRDT2_typ;

typedef struct HCRFIFO
{
	/* VAR_INPUT (analogous) */
	signed long t_FIFO;
	float x;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRFIFO_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Set_y;
} HCRFIFO_typ;

typedef struct HCRFyServo_Fp
{
	/* VAR_INPUT (analogous) */
	float pSupply_max;
	float pSupply;
	float pTank;
	float A_Cyl_pos;
	float A_Cyl_neg;
	float Qnom_pos;
	float Qnom_neg;
	unsigned char Update;
	float Fp;
	float u;
	/* VAR_OUTPUT (analogous) */
	float yValve;
	float Qy;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRFyServo_Fp_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Neg_y;
} HCRFyServo_Fp_typ;

typedef struct HCRSPF
{
	/* VAR_INPUT (analogous) */
	struct HCRMovePara_typ* pMove_Para;
	float s_home;
	float s_end;
	/* VAR_OUTPUT (analogous) */
	float s_set;
	float v_set;
	float a_set;
	signed char MoveDir;
	signed char ApproachDir;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRSPF_Internal_typ Internal;
	struct SysInfo SystemInfo;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Stop;
	plcbit Set_home;
	plcbit Init;
	plcbit Brake;
	/* VAR_OUTPUT (digital) */
	plcbit Reached;
} HCRSPF_typ;

typedef struct HCRPID
{
	/* VAR_INPUT (analogous) */
	struct HCRPIDPara_typ Parameter;
	unsigned char Update;
	float W;
	float X;
	signed char I_Switch;
	unsigned char CTRLmode;
	float Yman;
	float Yadd;
	/* VAR_OUTPUT (analogous) */
	float e;
	float Yp;
	float Yi;
	float Yd;
	float Y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRPID_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Invert;
} HCRPID_typ;

typedef struct HCRvyServo_Fp
{
	/* VAR_INPUT (analogous) */
	float pSupply_max;
	float pSupply;
	float pTank;
	float A_Cyl_pos;
	float A_Cyl_neg;
	float Qnom_pos;
	float Qnom_neg;
	float pDelta_nom;
	float yValve_0;
	float yValve_min;
	unsigned char Update;
	float Fp_Cyl;
	float Ff_Cyl_pos;
	float Ff_Cyl_neg;
	float vCyl_abs;
	float vCyl_rel;
	/* VAR_OUTPUT (analogous) */
	float yValve;
	float Qy;
	signed char MoveDir;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRvyServo_Fp_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Neg_y;
	plcbit Zero_yValve;
} HCRvyServo_Fp_typ;

typedef struct HCRs_Cont
{
	/* VAR_INPUT (analogous) */
	struct HCRSystemPara_typ* pSystem_Para;
	struct HCRValvePara_typ* pValve_Para;
	struct HCRPIDPara_s_typ* pPID_Para_s;
	unsigned char vyServoMode;
	unsigned char Update;
	float s_set;
	float s_act;
	unsigned char I_Switch;
	unsigned char CTRLmode;
	float v_man;
	float v_add;
	float v_set;
	float Fp_Cyl;
	float Ff_Cyl_pos;
	float Ff_Cyl_neg;
	float Qy_Oset_ext;
	unsigned char Oset_Mode;
	/* VAR_OUTPUT (analogous) */
	float Qy_s;
	float Qy_Oset_s;
	float Qy;
	signed char MoveDir;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRs_Cont_Internal_typ Internal;
	struct HCRPID PID;
	struct HCRvyServo_Fp vyServo_Fp;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Invert;
} HCRs_Cont_typ;

typedef struct HCRF_Cont
{
	/* VAR_INPUT (analogous) */
	struct HCRSystemPara_typ* pSystem_Para;
	struct HCRValvePara_typ* pValve_Para;
	struct HCRPIDPara_F_typ* pPID_Para_F;
	unsigned char FyServoMode;
	unsigned char Update;
	float Fp_set;
	float Fp_act;
	unsigned char I_Switch;
	unsigned char CTRLmode;
	float Q_man;
	float Q_add;
	float v_act;
	float Qy_Oset_ext;
	unsigned char Oset_Mode;
	/* VAR_OUTPUT (analogous) */
	float Qy_F;
	float Qy_Oset_F;
	float Qy;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRF_Cont_Internal_typ Internal;
	struct HCRPID PID;
	struct HCRFyServo_Fp FyServo_Fp;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Invert;
} HCRF_Cont_typ;

typedef struct HCRLinSpline
{
	/* VAR_INPUT (analogous) */
	unsigned short NbNodes;
	struct HCRNode_typ* pNodeVec;
	unsigned char Smooth;
	float Rness;
	signed char DisMode;
	float x;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRLinSpline_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Invert;
	plcbit Update;
} HCRLinSpline_typ;

typedef struct HCRLinValve
{
	/* VAR_INPUT (analogous) */
	unsigned short NbNodes;
	struct HCRNode_typ* pNodeVec;
	signed char DisMode;
	float Qy;
	/* VAR_OUTPUT (analogous) */
	float Uy;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRLinValve_Internal_typ Internal;
	struct HCRLinSpline LinSpline;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Neg_Uy;
	plcbit Update;
} HCRLinValve_typ;

typedef struct HCRPT1cP
{
	/* VAR_INPUT (analogous) */
	float T1;
	float u;
	unsigned char Set_y;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRPT1cP_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRPT1cP_typ;

typedef struct HCRJoltFree
{
	/* VAR_INPUT (analogous) */
	float tSwitch;
	float u1;
	float u2;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRJoltFree_Internal_typ Internal;
	struct HCRPT1cP PT1cP;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit uSwitch;
} HCRJoltFree_typ;

typedef struct HCRDT2s
{
	/* VAR_INPUT (analogous) */
	float D;
	float Tv;
	float Tf;
	float u;
	unsigned char Reset_y;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRDT2s_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRDT2s_typ;

typedef struct HCRPT2s
{
	/* VAR_INPUT (analogous) */
	float V;
	float D;
	float Tf;
	float u;
	unsigned char Set_y;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRPT2s_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRPT2s_typ;

typedef struct HCRPT2
{
	/* VAR_INPUT (analogous) */
	float V;
	float T1;
	float T2;
	float u;
	unsigned char Set_y;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRPT2_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRPT2_typ;

typedef struct HCRvyServo
{
	/* VAR_INPUT (analogous) */
	float pSupply_max;
	float pSupply;
	float pTank;
	float A_Cyl_pos;
	float A_Cyl_neg;
	float Qnom_pos;
	float Qnom_neg;
	float pDelta_nom;
	float yValve_0;
	float yValve_min;
	unsigned char Update;
	float pCyl_pos;
	float pCyl_neg;
	float vCyl_abs;
	float vCyl_rel;
	/* VAR_OUTPUT (analogous) */
	float yValve;
	float Qy;
	signed char MoveDir;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRvyServo_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Neg_y;
	plcbit Zero_yValve;
} HCRvyServo_typ;

typedef struct HCRsF_Cont
{
	/* VAR_INPUT (analogous) */
	struct HCRSystemPara_typ* pSystem_Para;
	struct HCRValvePara_typ* pValve_Para;
	struct HCRPIDPara_s_typ* pPID_Para_s;
	struct HCRPIDPara_F_typ* pPID_Para_F;
	unsigned char vyServoMode;
	unsigned char FyServoMode;
	float tSwitch;
	unsigned char Update;
	float s_set;
	float s_act;
	struct HCRs_Cont_InVar_typ s_Cont_InVar;
	float Fp_set;
	float Fp_act;
	struct HCRF_Cont_InVar_typ F_Cont_InVar;
	unsigned char CTRLmode;
	unsigned char uSwitch;
	/* VAR_OUTPUT (analogous) */
	float Qy_s;
	float Qy_Oset_s;
	float Qy_F;
	float Qy_Oset_F;
	float Qy;
	signed char MoveDir;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRsF_Cont_Internal_typ Internal;
	struct HCRs_Cont s_Cont;
	struct HCRF_Cont F_Cont;
	struct HCRJoltFree JoltFree;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRsF_Cont_typ;

typedef struct HCRDT1
{
	/* VAR_INPUT (analogous) */
	float Tv;
	float Tf;
	float u;
	unsigned char n_Avg;
	unsigned char Reset_y;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRDT1_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRDT1_typ;

typedef struct HCRPT1
{
	/* VAR_INPUT (analogous) */
	float V;
	float T1;
	float u;
	unsigned char Set_y;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRPT1_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRPT1_typ;

typedef struct HCRRampGen
{
	/* VAR_INPUT (analogous) */
	float t_rise;
	float t_hold;
	float t_fall;
	float y_start;
	float y_hold;
	float y_end;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRRampGen_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Init;
	/* VAR_OUTPUT (digital) */
	plcbit Finished;
} HCRRampGen_typ;

typedef struct HCRAutoTune
{
	/* VAR_INPUT (analogous) */
	float pSupply_max;
	float A_Cyl_pos;
	float A_Cyl_neg;
	float Qnom_pos;
	float Qnom_neg;
	float pDelta_nom;
	float V0_pos;
	float V0_neg;
	float h_Cyl;
	float m_Cyl;
	float s_min;
	float s_max;
	unsigned char Update;
	/* VAR_OUTPUT (analogous) */
	float Kp;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRAutoTune_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRAutoTune_typ;

typedef struct HCRs_Cont_p
{
	/* VAR_INPUT (analogous) */
	struct HCRSystemPara_typ* pSystem_Para;
	struct HCRValvePara_typ* pValve_Para;
	struct HCRPIDPara_s_typ* pPID_Para_s;
	unsigned char vyServoMode;
	unsigned char Update;
	float s_set;
	float s_act;
	unsigned char I_Switch;
	unsigned char CTRLmode;
	float v_man;
	float v_add;
	float v_set;
	float pCyl_pos;
	float pCyl_neg;
	float Qy_Oset_ext;
	unsigned char Oset_Mode;
	/* VAR_OUTPUT (analogous) */
	float Qy_s;
	float Qy_Oset_s;
	float Qy;
	signed char MoveDir;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRs_Cont_p_Internal_typ Internal;
	struct HCRPID PID;
	struct HCRvyServo vyServo;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Invert;
} HCRs_Cont_p_typ;

typedef struct HCRNotch
{
	/* VAR_INPUT (analogous) */
	float V;
	float f0;
	float B;
	float u;
	unsigned char Set_y;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRNotch_Internal_typ Internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRNotch_typ;

typedef struct HCRsF_Cont_p
{
	/* VAR_INPUT (analogous) */
	struct HCRSystemPara_typ* pSystem_Para;
	struct HCRValvePara_typ* pValve_Para;
	struct HCRPIDPara_s_typ* pPID_Para_s;
	struct HCRPIDPara_F_typ* pPID_Para_F;
	unsigned char vyServoMode;
	unsigned char FyServoMode;
	float tSwitch;
	unsigned char Update;
	float s_set;
	float s_act;
	struct HCRs_Cont_p_InVar_typ s_Cont_p_InVar;
	float Fp_set;
	float Fp_act;
	struct HCRF_Cont_InVar_typ F_Cont_InVar;
	unsigned char CTRLmode;
	unsigned char uSwitch;
	/* VAR_OUTPUT (analogous) */
	float Qy_s;
	float Qy_Oset_s;
	float Qy_F;
	float Qy_Oset_F;
	float Qy;
	signed char MoveDir;
	unsigned short status;
	/* VAR (analogous) */
	struct HCRsF_Cont_p_Internal_typ Internal;
	struct HCRs_Cont_p s_Cont_p;
	struct HCRF_Cont F_Cont;
	struct HCRvyServo vyServo;
	struct HCRJoltFree JoltFree;
	/* VAR_INPUT (digital) */
	plcbit enable;
} HCRsF_Cont_p_typ;



/* Prototyping of functions and function blocks */
void HCRDT2(HCRDT2_typ* inst);
void HCRFIFO(HCRFIFO_typ* inst);
void HCRFyServo_Fp(HCRFyServo_Fp_typ* inst);
void HCRSPF(HCRSPF_typ* inst);
void HCRs_Cont(HCRs_Cont_typ* inst);
void HCRF_Cont(HCRF_Cont_typ* inst);
void HCRLinValve(HCRLinValve_typ* inst);
void HCRJoltFree(HCRJoltFree_typ* inst);
void HCRPT1cP(HCRPT1cP_typ* inst);
void HCRDT2s(HCRDT2s_typ* inst);
void HCRPT2s(HCRPT2s_typ* inst);
void HCRPT2(HCRPT2_typ* inst);
void HCRPID(HCRPID_typ* inst);
void HCRvyServo(HCRvyServo_typ* inst);
void HCRvyServo_Fp(HCRvyServo_Fp_typ* inst);
void HCRsF_Cont(HCRsF_Cont_typ* inst);
void HCRLinSpline(HCRLinSpline_typ* inst);
void HCRDT1(HCRDT1_typ* inst);
void HCRPT1(HCRPT1_typ* inst);
void HCRRampGen(HCRRampGen_typ* inst);
void HCRAutoTune(HCRAutoTune_typ* inst);
void HCRs_Cont_p(HCRs_Cont_p_typ* inst);
void HCRNotch(HCRNotch_typ* inst);
void HCRsF_Cont_p(HCRsF_Cont_p_typ* inst);



#endif /* ASHYDCON_H_ */

