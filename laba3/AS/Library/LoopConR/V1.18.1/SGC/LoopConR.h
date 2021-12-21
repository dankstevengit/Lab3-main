/* Automation Studio Generated Header File, Format Version 1.00 */
/* do not change */
#ifndef LOOPCONR_H_
#define LOOPCONR_H_
#define _WEAK	__attribute__((__weak__))

#include <bur/plctypes.h>

#include <brsystem.h>


/* Constants */
_WEAK const unsigned char LCRDBLPID_MODE_TUNE_4 = 6;
_WEAK const unsigned char LCRDBLPID_MODE_TUNE_6 = 7;
_WEAK const unsigned char LCRDBLPID_MODE_TUNE_Y1 = 8;
_WEAK const unsigned char LCRDBLPID_MODE_TUNE_Y2 = 9;
_WEAK const unsigned char LCRDBLPID_TSTATE_ERROR = 4;
_WEAK const unsigned char LCRDBLPID_TSTATE_FINISHED = 3;
_WEAK const unsigned char LCRDBLPID_TSTATE_OFF = 0;
_WEAK const unsigned char LCRDBLPID_TSTATE_Y1 = 1;
_WEAK const unsigned char LCRDBLPID_TSTATE_Y2 = 2;
_WEAK const unsigned char LCRPID_D_MODE_E = 2;
_WEAK const unsigned char LCRPID_D_MODE_X = 1;
_WEAK const unsigned char LCRPID_FBK_MODE_EXTERN = 2;
_WEAK const unsigned char LCRPID_FBK_MODE_EXT_SELECTOR = 3;
_WEAK const unsigned char LCRPID_FBK_MODE_INTERN = 1;
_WEAK const unsigned char LCRPID_MODE_AUTO = 1;
_WEAK const unsigned char LCRPID_MODE_CLOSE = 4;
_WEAK const unsigned char LCRPID_MODE_CLOSE_JOLTFREE = 104;
_WEAK const unsigned char LCRPID_MODE_FREEZE = 5;
_WEAK const unsigned char LCRPID_MODE_FREEZE_JOLTFREE = 105;
_WEAK const unsigned char LCRPID_MODE_MAN = 2;
_WEAK const unsigned char LCRPID_MODE_MAN_JOLTFREE = 102;
_WEAK const unsigned char LCRPID_MODE_OPEN = 3;
_WEAK const unsigned char LCRPID_MODE_OPEN_JOLTFREE = 103;
_WEAK const unsigned short LCRPID_TUNE_ADDINFO_OSC_AMPL = 110;
_WEAK const unsigned short LCRPID_TUNE_ADDINFO_OSC_PERIOD = 111;
_WEAK const unsigned long LCRPID_TUNE_REQU_CHR_DIST_AP = 1000;
_WEAK const unsigned long LCRPID_TUNE_REQU_CHR_DIST_OS = 2000;
_WEAK const unsigned long LCRPID_TUNE_REQU_CHR_REF_AP = 4000;
_WEAK const unsigned long LCRPID_TUNE_REQU_CHR_REF_OS = 5000;
_WEAK const unsigned long LCRPID_TUNE_REQU_DIR_NEG = 20;
_WEAK const unsigned long LCRPID_TUNE_REQU_DIR_POS = 10;
_WEAK const unsigned long LCRPID_TUNE_REQU_OFF = 0;
_WEAK const unsigned long LCRPID_TUNE_REQU_OSCILLATE = 1;
_WEAK const unsigned long LCRPID_TUNE_REQU_OSC_1 = 10000;
_WEAK const unsigned long LCRPID_TUNE_REQU_OSC_2 = 20000;
_WEAK const unsigned long LCRPID_TUNE_REQU_OSC_3 = 30000;
_WEAK const unsigned long LCRPID_TUNE_REQU_P = 300;
_WEAK const unsigned long LCRPID_TUNE_REQU_PER_3 = 300000;
_WEAK const unsigned long LCRPID_TUNE_REQU_PER_4 = 400000;
_WEAK const unsigned long LCRPID_TUNE_REQU_PER_5 = 500000;
_WEAK const unsigned long LCRPID_TUNE_REQU_PI = 200;
_WEAK const unsigned long LCRPID_TUNE_REQU_PID = 100;
_WEAK const unsigned long LCRPID_TUNE_REQU_STEPRESPONSE = 2;
_WEAK const unsigned long LCRPID_TUNE_REQU_ZN_DIST = 3000;
_WEAK const unsigned short LCRPID_TUNE_STATE_CALC_PARA = 45;
_WEAK const unsigned short LCRPID_TUNE_STATE_FINISHED = 50;
_WEAK const unsigned short LCRPID_TUNE_STATE_OSCILLATE = 10;
_WEAK const unsigned short LCRPID_TUNE_STATE_OSC_CNTLPAR = 19;
_WEAK const unsigned short LCRPID_TUNE_STATE_OSC_PERFORM_1 = 12;
_WEAK const unsigned short LCRPID_TUNE_STATE_OSC_PERFORM_2 = 13;
_WEAK const unsigned short LCRPID_TUNE_STATE_OSC_SEQ_CNTL = 11;
_WEAK const unsigned short LCRPID_TUNE_STATE_OSC_WAIT_NEXT = 14;
_WEAK const unsigned short LCRPID_TUNE_STATE_READY = 0;
_WEAK const unsigned short LCRPID_TUNE_STATE_RESET_CNTL = 49;
_WEAK const unsigned short LCRPID_TUNE_STATE_STEP_MAXGRAD = 21;
_WEAK const unsigned short LCRPID_TUNE_STATE_STEP_WAITEQ1 = 20;
_WEAK const unsigned short LCRPID_TUNE_STATE_STEP_WAITEQ2 = 22;
_WEAK const unsigned long LCRSLIMPID_REQU_CHR_DIST_AP = 1000;
_WEAK const unsigned long LCRSLIMPID_REQU_CHR_DIST_OS = 2000;
_WEAK const unsigned long LCRSLIMPID_REQU_CHR_REF_AP = 4000;
_WEAK const unsigned long LCRSLIMPID_REQU_CHR_REF_OS = 5000;
_WEAK const unsigned long LCRSLIMPID_REQU_DIR_NEG = 20;
_WEAK const unsigned long LCRSLIMPID_REQU_DIR_POS = 10;
_WEAK const unsigned long LCRSLIMPID_REQU_OFF = 0;
_WEAK const unsigned long LCRSLIMPID_REQU_OSCILLATE = 1;
_WEAK const unsigned long LCRSLIMPID_REQU_OSC_1 = 10000;
_WEAK const unsigned long LCRSLIMPID_REQU_OSC_2 = 20000;
_WEAK const unsigned long LCRSLIMPID_REQU_OSC_3 = 30000;
_WEAK const unsigned long LCRSLIMPID_REQU_P = 300;
_WEAK const unsigned long LCRSLIMPID_REQU_PER_3 = 300000;
_WEAK const unsigned long LCRSLIMPID_REQU_PER_4 = 400000;
_WEAK const unsigned long LCRSLIMPID_REQU_PER_5 = 500000;
_WEAK const unsigned long LCRSLIMPID_REQU_PI = 200;
_WEAK const unsigned long LCRSLIMPID_REQU_PID = 100;
_WEAK const unsigned long LCRSLIMPID_REQU_READ_PARAS = 3;
_WEAK const unsigned long LCRSLIMPID_REQU_STEPRESPONSE = 2;
_WEAK const unsigned long LCRSLIMPID_REQU_WRITE_PARAS = 4;
_WEAK const unsigned long LCRSLIMPID_REQU_ZN_DIST = 3000;
_WEAK const unsigned short LCR_ERROR = 12025;
_WEAK const unsigned short LCR_ERR_DISABLED = 65534;
_WEAK const unsigned short LCR_ERR_LCRContinServo_TCHANGE = 12035;
_WEAK const unsigned short LCR_ERR_LCRContinServo_TIMPULSE = 12036;
_WEAK const unsigned short LCR_ERR_LCRCurveByPoints_TABLE = 12045;
_WEAK const unsigned short LCR_ERR_LCRDBLPID_DX_DT = 31562;
_WEAK const unsigned short LCR_ERR_LCRDBLPID_WX_LOW = 31561;
_WEAK const unsigned short LCR_ERR_LCRIntegrate_TN = 31550;
_WEAK const unsigned short LCR_ERR_LCRMovAvgFlt_BASE = 31551;
_WEAK const unsigned short LCR_ERR_LCRPIDTune_ABORT = 12038;
_WEAK const unsigned short LCR_ERR_LCRPIDTune_CONTROL_VAR = 31560;
_WEAK const unsigned short LCR_ERR_LCRPIDTune_INVALID_REQU = 31559;
_WEAK const unsigned short LCR_ERR_LCRPIDTune_PARAMETER = 12039;
_WEAK const unsigned short LCR_ERR_LCRPIDTune_TIMEOUT = 12040;
_WEAK const unsigned short LCR_ERR_LCRPIDTune_W_CHANGED = 12041;
_WEAK const unsigned short LCR_ERR_LCRPID_IDENT = 31552;
_WEAK const unsigned short LCR_ERR_LCRPID_MODE = 31553;
_WEAK const unsigned short LCR_ERR_LCRPID_PARADAT = 31554;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_DEADBAND = 12044;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_DMODE = 31556;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_DYMAX = 31557;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_FBKMODE = 31558;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_KFBK = 12025;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_KP = 12026;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_KW = 12027;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_TF = 12028;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_TN = 12029;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_TV = 12030;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_WX_MAXMIN = 12043;
_WEAK const unsigned short LCR_ERR_LCRPT12_T1_NEG = 12046;
_WEAK const unsigned short LCR_ERR_LCRPT12_T2_NEG = 12047;
_WEAK const unsigned short LCR_ERR_LCRPT1_T = 12031;
_WEAK const unsigned short LCR_ERR_LCRPWM_TMINPULSE = 12032;
_WEAK const unsigned short LCR_ERR_LCRPWM_TPERIOD = 12033;
_WEAK const unsigned short LCR_ERR_LCRRamp_DYUP_DYDOWN = 12034;
_WEAK const unsigned short LCR_ERR_LCRTT_TT_NEG = 12048;
_WEAK const unsigned short LCR_ERR_MAXMIN = 12037;
_WEAK const unsigned short LCR_ERR_POINTER = 31563;
_WEAK const unsigned short LCR_WARN_LCRDBLPID_TUNE_CHANGE = 12019;
_WEAK const unsigned short LCR_WARN_LCRPIDTune_CYCLETIME = 12004;
_WEAK const unsigned short LCR_WARN_LCRPID_A_LIMIT = 12008;
_WEAK const unsigned short LCR_WARN_LCRPID_I_MAXLIMIT = 12001;
_WEAK const unsigned short LCR_WARN_LCRPID_I_MINLIMIT = 12002;
_WEAK const unsigned short LCR_WARN_LCRPID_YFBK_LIMIT = 12003;
_WEAK const unsigned short LCR_WARN_LCRPID_YMAN_LIMIT = 12009;
_WEAK const unsigned short LCR_WARN_LCRPT12_T1_INT = 12011;
_WEAK const unsigned short LCR_WARN_LCRPT12_T1_TS = 12010;
_WEAK const unsigned short LCR_WARN_LCRPT12_T1_ZERO = 12005;
_WEAK const unsigned short LCR_WARN_LCRPT12_T2_INT = 12014;
_WEAK const unsigned short LCR_WARN_LCRPT12_T2_TS = 12013;
_WEAK const unsigned short LCR_WARN_LCRPT12_T2_ZERO = 12012;
_WEAK const unsigned short LCR_WARN_LCRTT_MEM = 12018;
_WEAK const unsigned short LCR_WARN_LCRTT_TT_INT = 12017;
_WEAK const unsigned short LCR_WARN_LCRTT_TT_TS = 12016;
_WEAK const unsigned short LCR_WARN_LCRTT_TT_ZERO = 12015;
_WEAK const unsigned short LCR_WARN_Tx_DT = 12007;


/* Datatypes */
typedef struct lcrpid_internal_typ
{
	unsigned short size;
	plcbit valid;
	float WX_max;
	float WX_min;
	plcbit invert;
	float deadband;
	float dY_max;
	float Kp;
	float Kp_Tn;
	float Tv_Tf;
	float Tf_reciproc;
	float Kw;
	float Kfbk_Kp;
	unsigned char fbk_mode;
	unsigned char d_mode;
	unsigned char force_mode;
	float Y_force;
	float W;
	float X;
	unsigned char pid_init;
	signed long Yp1;
	signed long Yp2;
	signed long dYi1;
	signed long dYi2;
	signed long Yi1;
	signed long Yi2;
	float dt_Tf;
	signed long a11;
	signed long a12;
	signed long a21;
	signed long a22;
	signed long Yd1;
	signed long Yd2;
	signed long Ytotal1;
	signed long Ytotal2;
	signed long Ylim1;
	signed long Ylim2;
	signed long Y1;
	signed long Y2;
	float e_fbk;
} lcrpid_internal_typ;

typedef struct lcrCurveByPoints_TabEntry_type
{
	float x;
	float y;
} lcrCurveByPoints_TabEntry_type;

typedef struct lcrpid_tune_osc_options_typ
{
	float osc_minAmplitude;
	float Q_min;
} lcrpid_tune_osc_options_typ;

typedef struct lcrpid_osc_val_typ
{
	float X;
	float t;
} lcrpid_osc_val_typ;

typedef struct lcrpid_osc_per_typ
{
	lcrpid_osc_val_typ max;
	lcrpid_osc_val_typ min;
} lcrpid_osc_per_typ;

typedef struct lcrpid_tune_osc_typ
{
	lcrpid_tune_osc_options_typ options;
	unsigned short oscPhase;
	float Y_hi;
	float Y_lo;
	unsigned short i_maxPeriod;
	unsigned short i_period;
	float X_ampl;
	float X_avg;
	float X_min_avg;
	float X_max_avg;
	float Y_avg;
	float deltaY;
	float t_Ylohi[5];
	float t_Yhilo[5];
	float Q_act;
	float a_wx;
	float amplitudeRatio;
	float Ku;
	float W_old;
	float tPeriod;
	lcrpid_osc_per_typ period[5];
} lcrpid_tune_osc_typ;

typedef struct lcrpid_tune_step_options_typ
{
	float eqDeltaX;
	float eqDeltaWX;
	float eqDeltat;
	float evalDeltaX;
	unsigned short evalNfilter;
	unsigned short exitNotMaxdXCount;
	float exitdXRatio;
} lcrpid_tune_step_options_typ;

typedef struct lcrpid_tune_step_typ
{
	lcrpid_tune_step_options_typ options;
	float Y0;
	float Y1;
	float t_jump;
	float W;
	float X0;
	float Xmax;
	float Xmin;
	float Xfiltered;
	plcbit deltaXok;
	plcbit deltaWXok;
	float eqTime;
	signed char dir;
	float deltaX;
	float X1;
	float t1;
	plcbit t1set;
	float dX_dt;
	float dX_dt_max;
	float XmaxGrad;
	float maxX1;
	float maxX2;
	float maxt1;
	float maxt2;
	float tmaxGrad;
	float gainFactor;
	float deadTime;
	float riseTime;
	unsigned short notMaxCount;
	float gradientRatio;
} lcrpid_tune_step_typ;

typedef struct lcrpid_procPar_typ
{
	unsigned short size;
	plcbit valid;
	plcbit stepResp_valid;
	float stepResp_v;
	float stepResp_t_u;
	float stepResp_t_g;
	plcbit osc_valid;
	float osc_amplitudeRatio;
	float osc_tPeriod;
	plcbit force_params;
	float Kp;
	float Kp_tune;
	float Tn;
	float Tn_tune;
	float Tv;
	float Tv_tune;
} lcrpid_procPar_typ;

typedef struct lcrpid_old_typ
{
	lcrpid_procPar_typ processPar;
	signed short P_manualAdjust;
	signed short I_manualAdjust;
	signed short D_manualAdjust;
	float Y_min;
	float Y_max;
	float dY_max;
	float Kw;
	float Kfbk;
	plcbit enable;
	unsigned long request;
} lcrpid_old_typ;

typedef struct lcrpid_tune_addpar_typ
{
	float t_max_tune;
	float WX_min;
	float WX_max;
	float dY_max;
	float Tf_Tv;
	float Kw;
	float Kfbk;
	unsigned char fbk_mode;
	unsigned char d_mode;
	float deadband;
	plcbit invert;
} lcrpid_tune_addpar_typ;

typedef struct lcrdblpid_tune_typ
{
	signed short P1_manualAdjust;
	signed short I1_manualAdjust;
	signed short D1_manualAdjust;
	signed short P2_manualAdjust;
	signed short I2_manualAdjust;
	signed short D2_manualAdjust;
	float X_min;
	float X_max;
	float X0;
	float dYmin;
	float Y0;
	float Y1step;
	float Y2step;
	unsigned long tuneY1_opt;
	unsigned long tuneY2_opt;
	unsigned char tune_first;
	float hyst;
	float measDelta;
	float eqDeltaWX;
	float eqDeltat;
	lcrpid_tune_osc_options_typ osc_opt;
	lcrpid_tune_step_options_typ step_opt;
} lcrdblpid_tune_typ;

typedef struct lcrdblpid_par_typ
{
	float Y_max;
	float Y_min;
	signed short K_fact;
	float Kp;
	float Tn;
	float Tv;
} lcrdblpid_par_typ;

typedef struct lcrslimpid_par_typ
{
	float Y_max;
	float Y_min;
	float Kp;
	float Tn;
	float Tv;
	float Kfbk;
} lcrslimpid_par_typ;



/* Datatypes of function blocks */
typedef struct LCRScal
{
	/* VAR_INPUT (analogous) */
	float x;
	float x1;
	float y1;
	float x2;
	float y2;
	/* VAR_OUTPUT (analogous) */
	float y;
} LCRScal_typ;

typedef struct LCRPID
{
	/* VAR_INPUT (analogous) */
	unsigned long ident;
	float W;
	float X;
	float Y_max;
	float Y_min;
	float A;
	float Y_man;
	float Y_fbk;
	unsigned char mode;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float e;
	float Y;
	float Yp;
	float Yi;
	float Yd;
	/* VAR (analogous) */
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	float Tv_Tf_old;
	float e_old;
	unsigned short deadband_state;
	struct SysInfo sysinfo_inst;
	struct LCRScal scal_inst;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit hold_I;
	/* VAR (digital) */
	plcbit enable_old;
} LCRPID_typ;

typedef struct LCRCurveByPoints
{
	/* VAR_INPUT (analogous) */
	float x;
	unsigned short NoOfPoints;
	struct lcrCurveByPoints_TabEntry_type* ptr_table;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float y;
	/* VAR (analogous) */
	signed short i_tab;
	unsigned short iterations;
	struct LCRScal scal1;
} LCRCurveByPoints_typ;

typedef struct LCRPIDpara
{
	/* VAR_INPUT (analogous) */
	float WX_max;
	float WX_min;
	float deadband;
	float dY_max;
	float Kp;
	float Tn;
	float Tv;
	float Tf;
	float Kw;
	float Kfbk;
	unsigned char fbk_mode;
	unsigned char d_mode;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	unsigned long ident;
	/* VAR (analogous) */
	struct lcrpid_internal_typ internal_data;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit enter;
	plcbit invert;
} LCRPIDpara_typ;

typedef struct LCRContinServo
{
	/* VAR_INPUT (analogous) */
	float x;
	float max_value;
	float min_value;
	float t_impulse;
	float t_change_up;
	float t_change_down;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float hysteresis_up;
	float hysteresis_down;
	/* VAR (analogous) */
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	signed long t_cnt_1;
	signed long t_cnt_2;
	signed long y_dbl_1;
	signed long y_dbl_2;
	struct SysInfo sysInfo_inst;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ref;
	/* VAR_OUTPUT (digital) */
	plcbit up;
	plcbit down;
	plcbit refOk;
	/* VAR (digital) */
	plcbit enable_old;
	plcbit ref_old;
} LCRContinServo_typ;

typedef struct LCRPT1
{
	/* VAR_INPUT (analogous) */
	float x;
	float t;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float y;
	/* VAR (analogous) */
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	signed long y_dbl_1;
	signed long y_dbl_2;
	struct SysInfo sysinfo_inst;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit set;
} LCRPT1_typ;

typedef struct LCRRamp
{
	/* VAR_INPUT (analogous) */
	float x;
	float dy_up;
	float dy_down;
	float y_max;
	float y_min;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float y;
	/* VAR (analogous) */
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	signed long y_dbl_1;
	signed long y_dbl_2;
	struct SysInfo sysinfo_inst;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit set;
	/* VAR_OUTPUT (digital) */
	plcbit x_reached;
	plcbit max_limit;
	plcbit min_limit;
} LCRRamp_typ;

typedef struct LCRIntegrate
{
	/* VAR_INPUT (analogous) */
	float x;
	float tn;
	float y_max;
	float y_min;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float y;
	/* VAR (analogous) */
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	signed long y_dbl_1;
	signed long y_dbl_2;
	struct SysInfo sysinfo_inst;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit set;
	/* VAR_OUTPUT (digital) */
	plcbit max_limit;
	plcbit min_limit;
} LCRIntegrate_typ;

typedef struct LCRLimit
{
	/* VAR_INPUT (analogous) */
	float in;
	signed long max_value;
	signed long min_value;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed long out;
	/* VAR_OUTPUT (digital) */
	plcbit max_limit;
	plcbit min_limit;
} LCRLimit_typ;

typedef struct LCRLimScal
{
	/* VAR_INPUT (analogous) */
	float x;
	float x1;
	float y1;
	float x2;
	float y2;
	/* VAR_OUTPUT (analogous) */
	float y;
} LCRLimScal_typ;

typedef struct LCRMovAvgFlt
{
	/* VAR_INPUT (analogous) */
	float x;
	unsigned short base;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float y;
	/* VAR (analogous) */
	signed long sum_old_dbl_1;
	signed long sum_old_dbl_2;
	float x_old[32];
	unsigned long p_xold;
	unsigned short i_xold;
	unsigned short base_old;
	unsigned long bootkey_old;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit enable_old;
} LCRMovAvgFlt_typ;

typedef struct LCRPWM
{
	/* VAR_INPUT (analogous) */
	float x;
	float max_value;
	float min_value;
	float t_min_pulse;
	float t_period;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float t_on;
	float t_off;
	/* VAR (analogous) */
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	signed long cnt_terron_1;
	signed long cnt_terron_2;
	signed long cnt_terroff_1;
	signed long cnt_terroff_2;
	signed long cnt_t_pulse_1;
	signed long cnt_t_pulse_2;
	struct SysInfo sysinfo_inst;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit pulse;
	/* VAR (digital) */
	plcbit corr;
} LCRPWM_typ;

typedef struct LCRTimeBasedOnOff
{
	/* VAR_INPUT (analogous) */
	float x;
	float max_value;
	float min_value;
	float timpulse;
	float tchange_up;
	float tchange_down;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float hysteresis_up;
	float hysteresis_down;
	/* VAR (analogous) */
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	signed long t_cnt_1;
	signed long t_cnt_2;
	signed long y_dbl_1;
	signed long y_dbl_2;
	struct SysInfo sysInfo_inst;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ref;
	/* VAR_OUTPUT (digital) */
	plcbit up;
	plcbit down;
	plcbit refOk;
	/* VAR (digital) */
	plcbit enable_old;
	plcbit ref_old;
} LCRTimeBasedOnOff_typ;

typedef struct LCRDifferentiate
{
	/* VAR_INPUT (analogous) */
	float x;
	float tv;
	float tf;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	float y;
	/* VAR (analogous) */
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	struct SysInfo sysinfo_inst;
	signed long a11;
	signed long a12;
	signed long a21;
	signed long a22;
	/* VAR_INPUT (digital) */
	plcbit enable;
} LCRDifferentiate_typ;

typedef struct LCRPIDTune
{
	/* VAR_INPUT (analogous) */
	float Y_min;
	float Y_max;
	float Y0;
	float Y1;
	float X0;
	float X_min;
	float X_max;
	signed short P_manualAdjust;
	signed short I_manualAdjust;
	signed short D_manualAdjust;
	unsigned long request;
	struct lcrpid_tune_addpar_typ* pAddPar;
	struct lcrpid_tune_osc_options_typ* pOptions_osc;
	struct lcrpid_tune_step_options_typ* pOptions_step;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	unsigned short addInfo;
	unsigned long ident;
	unsigned short state;
	/* VAR (analogous) */
	float t_autotune;
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	struct SysInfo sysinfo_inst;
	struct LCRMovAvgFlt MovAvgFlt_inst;
	struct lcrpid_old_typ old;
	struct lcrpid_procPar_typ processPar;
	struct lcrpid_internal_typ internal_data;
	struct lcrpid_tune_addpar_typ addPar;
	struct lcrpid_tune_osc_typ oscillation;
	struct lcrpid_tune_step_typ stepresponse;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit okToStep;
	/* VAR_OUTPUT (digital) */
	plcbit rdyToStep;
} LCRPIDTune_typ;

typedef struct LCRSlimPID
{
	/* VAR_INPUT (analogous) */
	float W;
	float X;
	unsigned long request;
	struct lcrslimpid_par_typ* pPar;
	/* VAR_OUTPUT (analogous) */
	float e;
	float Y;
	unsigned short status;
	unsigned short addInfo;
	/* VAR (analogous) */
	struct LCRMovAvgFlt MovAvgFlt_inst;
	struct LCRPIDTune PIDTune_inst;
	struct LCRPID PID_inst;
	unsigned long requ_old;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit enable_old;
} LCRSlimPID_typ;

typedef struct LCRPFM
{
	/* VAR_INPUT (analogous) */
	float x;
	float max_value;
	float min_value;
	float t_pulse;
	float t_pause;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	/* VAR (analogous) */
	float area;
	float area_c;
	float range;
	float last;
	float tpls;
	unsigned short counter_state;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	struct SysInfo sysinfo_inst;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit pulse;
	/* VAR (digital) */
	plcbit enable_old;
} LCRPFM_typ;

typedef struct LCRTt
{
	/* VAR_INPUT (analogous) */
	signed long Tt;
	float x;
	float y_set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	signed long Ts;
	signed long Tt_Max;
	float* pRingBuf;
	float* pBuf_OutIn;
	unsigned char set_old;
	unsigned char Set_y;
	unsigned long Bootkey;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit set;
	/* VAR (digital) */
	plcbit enable_old;
} LCRTt_typ;

typedef struct LCRPT2
{
	/* VAR_INPUT (analogous) */
	float V;
	float T1;
	float T2;
	float x;
	float y_set;
	unsigned char set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	unsigned long x1_dbl_1;
	unsigned long x1_dbl_2;
	unsigned long x2_dbl_1;
	unsigned long x2_dbl_2;
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	unsigned char set_old;
	unsigned char Set_y;
	unsigned long Bootkey;
	/* VAR_INPUT (digital) */
	plcbit enable;
} LCRPT2_typ;

typedef struct LCRSimModExt
{
	/* VAR_INPUT (analogous) */
	signed long Tt_h;
	signed long Tt_c;
	float k_h;
	float k_c;
	float PT2_T1;
	float PT2_T2;
	float Temp_amb;
	float Temp_c;
	float Alpha_h;
	float Alpha_c;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	struct LCRTt Tt_heat;
	struct LCRTt Tt_cool;
	float k_h_intern;
	float k_c_intern;
	struct LCRPT2 PT2;
	float y_c;
	float y_end;
	float y_h;
	unsigned long Bootkey;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit enable_old;
} LCRSimModExt_typ;

typedef struct LCRPT1e
{
	/* VAR_INPUT (analogous) */
	float V;
	float T1;
	float x;
	float y_set;
	unsigned char set;
	/* VAR_OUTPUT (analogous) */
	float y;
	unsigned short status;
	/* VAR (analogous) */
	unsigned long x1_dbl_1;
	unsigned long x1_dbl_2;
	signed long Ts;
	unsigned long Ts_dbl_1;
	unsigned long Ts_dbl_2;
	unsigned char set_old;
	unsigned char Set_y;
	unsigned long Bootkey;
	/* VAR_INPUT (digital) */
	plcbit enable;
} LCRPT1e_typ;

typedef struct LCRDblActPID
{
	/* VAR_INPUT (analogous) */
	float W;
	float X;
	float Y_man;
	unsigned char mode;
	struct lcrdblpid_par_typ* pPar1;
	struct lcrdblpid_par_typ* pPar2;
	struct lcrpid_tune_addpar_typ* pAddPar;
	struct lcrdblpid_tune_typ* pOpt;
	/* VAR_OUTPUT (analogous) */
	signed long e;
	float Y1;
	float Y2;
	unsigned short status;
	unsigned char tuneState;
	/* VAR (analogous) */
	struct LCRPID pid;
	struct LCRPIDTune tune;
	struct SysInfo sysinfo_inst;
	float gradient;
	float Y_avg;
	float tcnt;
	float Tmeas;
	float y_lim_old;
	float p_fact;
	unsigned long bootkey_old;
	unsigned long systicks_old;
	unsigned short musecs_old;
	unsigned char use_par;
	unsigned char meas;
	unsigned char mode_old;
	unsigned char tune_step;
	unsigned char tune_grad;
	unsigned char tune_2nd;
	unsigned char invert;
	unsigned char counter_state;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit hold_I;
	plcbit okToStep;
	/* VAR_OUTPUT (digital) */
	plcbit rdyToStep;
	/* VAR (digital) */
	plcbit enable_old;
} LCRDblActPID_typ;

typedef struct LCRMinMax
{
	/* VAR_INPUT (analogous) */
	float in;
	/* VAR_OUTPUT (analogous) */
	float out_min;
	float out_max;
	/* VAR_INPUT (digital) */
	plcbit reset;
} LCRMinMax_typ;



/* Prototyping of functions and function blocks */
void LCRPID(LCRPID_typ* inst);
void LCRScal(LCRScal_typ* inst);
void LCRCurveByPoints(LCRCurveByPoints_typ* inst);
void LCRPIDpara(LCRPIDpara_typ* inst);
void LCRContinServo(LCRContinServo_typ* inst);
void LCRPT1(LCRPT1_typ* inst);
void LCRRamp(LCRRamp_typ* inst);
void LCRIntegrate(LCRIntegrate_typ* inst);
void LCRLimit(LCRLimit_typ* inst);
void LCRLimScal(LCRLimScal_typ* inst);
void LCRMovAvgFlt(LCRMovAvgFlt_typ* inst);
void LCRPWM(LCRPWM_typ* inst);
void LCRTimeBasedOnOff(LCRTimeBasedOnOff_typ* inst);
void LCRDifferentiate(LCRDifferentiate_typ* inst);
void LCRSlimPID(LCRSlimPID_typ* inst);
void LCRPIDTune(LCRPIDTune_typ* inst);
void LCRPFM(LCRPFM_typ* inst);
void LCRSimModExt(LCRSimModExt_typ* inst);
void LCRTt(LCRTt_typ* inst);
void LCRPT2(LCRPT2_typ* inst);
void LCRPT1e(LCRPT1e_typ* inst);
void LCRDblActPID(LCRDblActPID_typ* inst);
void LCRMinMax(LCRMinMax_typ* inst);



#endif /* LOOPCONR_H_ */

