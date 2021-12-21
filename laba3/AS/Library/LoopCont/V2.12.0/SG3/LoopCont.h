/* Automation Studio Generated Header File, Format Version 1.00 */
/* do not change */
#ifndef LOOPCONT_H_
#define LOOPCONT_H_
#define _WEAK	__attribute__((__weak__))

#include <bur/plctypes.h>

#include <brsystem.h>


/* Constants */
_WEAK const unsigned short LCPIDAUTOTUNE_ADDINFO_OSC_AMPL = 100;
_WEAK const unsigned short LCPIDAUTOTUNE_ADDINFO_OSC_PERIOD = 101;
_WEAK const unsigned short LCPIDAUTOTUNE_ADDINFO_PRESCALER = 102;
_WEAK const unsigned short LCPIDAUTOTUNE_ADDINFO_Y_OFF = 103;
_WEAK const unsigned short LCPIDAUTOTUNE_ADDINFO_Y_ON = 104;
_WEAK const unsigned char LCPIDAUTOTUNE_REQU_AUTOTUNE = 3;
_WEAK const unsigned char LCPIDAUTOTUNE_REQU_OFF = 0;
_WEAK const unsigned char LCPIDAUTOTUNE_REQU_OSCILLATE = 2;
_WEAK const unsigned char LCPIDAUTOTUNE_REQU_STEPRESPONSE = 1;
_WEAK const unsigned short LCPIDAUTOTUNE_STATE_FINISHED = 50;
_WEAK const unsigned short LCPIDAUTOTUNE_STATE_OSCILLATE = 40;
_WEAK const unsigned short LCPIDAUTOTUNE_STATE_READY = 0;
_WEAK const unsigned short LCPIDAUTOTUNE_STATE_RESET_CTRLR = 49;
_WEAK const unsigned short LCPIDAUTOTUNE_STATE_STEPRESPONSE = 20;
_WEAK const unsigned short LCPIDAUTOTUNE_STATE_WAIT_MAX = 30;
_WEAK const unsigned short LCPIDAUTOTUNE_STATE_WAIT_STEP = 10;
_WEAK const unsigned char LCPID_CALC_MODE_EXACT = 1;
_WEAK const unsigned char LCPID_CALC_MODE_FAST = 2;
_WEAK const unsigned char LCPID_D_MODE_E = 2;
_WEAK const unsigned char LCPID_D_MODE_X = 1;
_WEAK const unsigned char LCPID_FBK_MODE_EXTERN = 2;
_WEAK const unsigned char LCPID_FBK_MODE_EXT_SELECTOR = 3;
_WEAK const unsigned char LCPID_FBK_MODE_INTERN = 1;
_WEAK const unsigned char LCPID_OUT_MODE_AUTO = 1;
_WEAK const unsigned char LCPID_OUT_MODE_CLOSE = 4;
_WEAK const unsigned short LCPID_OUT_MODE_CLOSE_JOLTFREE = 104;
_WEAK const unsigned char LCPID_OUT_MODE_FREEZE = 5;
_WEAK const unsigned short LCPID_OUT_MODE_FREEZE_JOLTFREE = 105;
_WEAK const unsigned char LCPID_OUT_MODE_MAN = 2;
_WEAK const unsigned char LCPID_OUT_MODE_MAN_JOLTFREE = 102;
_WEAK const unsigned char LCPID_OUT_MODE_OPEN = 3;
_WEAK const unsigned short LCPID_OUT_MODE_OPEN_JOLTFREE = 103;
_WEAK const unsigned short LC_ERROR = 12015;
_WEAK const unsigned short LC_ERR_DISABLED = 65534;
_WEAK const unsigned short LC_ERR_LC3PHy_XSETVALUE = 12015;
_WEAK const unsigned short LC_ERR_LCCurveByPoints_TABLE = 12045;
_WEAK const unsigned short LC_ERR_LCIntegrate_TN = 12016;
_WEAK const unsigned short LC_ERR_LCMovAvFilter_BASE = 12017;
_WEAK const unsigned short LC_ERR_LCPIDAutotune_ABORT = 12038;
_WEAK const unsigned short LC_ERR_LCPIDAutotune_PARAMETER = 12039;
_WEAK const unsigned short LC_ERR_LCPIDAutotune_TIMEOUT = 12040;
_WEAK const unsigned short LC_ERR_LCPIDAutotune_W_CHANGED = 12041;
_WEAK const unsigned short LC_ERR_LCPID_IDENT = 12018;
_WEAK const unsigned short LC_ERR_LCPID_OUTMODE = 12019;
_WEAK const unsigned short LC_ERR_LCPID_PARADAT = 12020;
_WEAK const unsigned short LC_ERR_LCPID_PAR_CALCMODE = 12021;
_WEAK const unsigned short LC_ERR_LCPID_PAR_DMODE = 12022;
_WEAK const unsigned short LC_ERR_LCPID_PAR_DYMAX = 12023;
_WEAK const unsigned short LC_ERR_LCPID_PAR_FBKMODE = 12024;
_WEAK const unsigned short LC_ERR_LCPID_PAR_KFBK = 12025;
_WEAK const unsigned short LC_ERR_LCPID_PAR_KP = 12026;
_WEAK const unsigned short LC_ERR_LCPID_PAR_KW = 12027;
_WEAK const unsigned short LC_ERR_LCPID_PAR_PRESCALER = 12042;
_WEAK const unsigned short LC_ERR_LCPID_PAR_TF = 12028;
_WEAK const unsigned short LC_ERR_LCPID_PAR_TN = 12029;
_WEAK const unsigned short LC_ERR_LCPID_PAR_TV = 12030;
_WEAK const unsigned short LC_ERR_LCPT1_T = 12031;
_WEAK const unsigned short LC_ERR_LCPWM_DMod_TMINPULS = 12032;
_WEAK const unsigned short LC_ERR_LCPWM_DMod_TPERIOD = 12033;
_WEAK const unsigned short LC_ERR_LCRampLim_TUP_TDOWN = 12034;
_WEAK const unsigned short LC_ERR_LCTimBasOnOff_TCHANGE = 12035;
_WEAK const unsigned short LC_ERR_LCTimBasOnOff_TIMPULSE = 12036;
_WEAK const unsigned short LC_ERR_MAXMIN = 12037;
_WEAK const unsigned short LC_WARN_DT_MAXLIMIT = 12000;
_WEAK const unsigned short LC_WARN_LCPID_I_MAXLIMIT = 12001;
_WEAK const unsigned short LC_WARN_LCPID_I_MINLIMIT = 12002;
_WEAK const unsigned short LC_WARN_LCPID_YFBK_LIMIT = 12003;
_WEAK const unsigned short LC_WARN_LCxPHy_XSTART = 12006;
_WEAK const unsigned short LC_WARN_Tx_DT = 12007;


/* Datatypes */
typedef struct lcpid_diff_typ
{
	plcbit init;
	signed short x_old;
	signed short dx;
	unsigned long dt;
	float dx_dt;
} lcpid_diff_typ;

typedef struct lcpid_stepResp_typ
{
	signed short W_old;
	signed short dW;
	signed short x_prev;
	signed short x_inflectionPt;
	unsigned long t_inflectionPt;
	float v;
	float v_max;
	unsigned long t_u;
	signed short x_pre;
	signed short x_max;
} lcpid_stepResp_typ;

typedef struct lcpid_procPar_typ
{
	unsigned short size;
	plcbit stepResp_valid;
	float stepResp_v;
	unsigned long stepResp_t_u;
	plcbit osc_valid;
	float osc_amplitudeRatio;
	unsigned long osc_tPeriod;
	plcbit force_params;
	float Kp;
	float Tn;
	float Tv;
} lcpid_procPar_typ;

typedef struct lcpid_old_typ
{
	lcpid_procPar_typ processPar;
	signed short P_manualAdjust;
	signed short I_manualAdjust;
	signed short D_manualAdjust;
	signed short Y_min;
	signed short Y_max;
	float dY_max;
	float Kw;
	float Kfbk;
	plcbit enable;
	unsigned char request;
	unsigned long time;
} lcpid_old_typ;

typedef struct lcpid_osc_val_typ
{
	signed short X;
	unsigned long t;
} lcpid_osc_val_typ;

typedef struct lcpid_osc_per_typ
{
	lcpid_osc_val_typ max;
	lcpid_osc_val_typ min;
} lcpid_osc_per_typ;

typedef struct lcpid_osc_typ
{
	unsigned short i_maxPeriod;
	unsigned short i_period;
	signed long X_amplitude;
	float amplitudeRatio;
	unsigned long tPeriod;
	lcpid_osc_per_typ period[5];
} lcpid_osc_typ;

typedef struct lcpid_addPar_typ
{
	signed short y_autotune_on;
	signed short y_autotune_off;
	unsigned long t_autotune_max;
	signed short diff_dx_max;
	unsigned long diff_dt_max;
	unsigned short osc_nrPeriods;
	signed short osc_minAmplitude;
	unsigned short optSwitches;
	float dY_max;
	float Tf_Tv;
	float Kw;
	float Kfbk;
	unsigned char fbk_mode;
	unsigned char d_mode;
	unsigned char calc_mode;
} lcpid_addPar_typ;

typedef struct lcpid_internal_typ
{
	unsigned short size;
	plcbit valid;
	lcpid_addPar_typ autotune_addpar;
	signed short Y_max;
	signed short Y_min;
	signed long dY_max1;
	signed long Kp1;
	signed long Kp_Tn_1;
	signed long Tv_Tf_1;
	signed long Tf_reciproc_1;
	signed long Kw1;
	signed long Kfbk_Kp_1;
	unsigned char fbk_mode;
	unsigned char d_mode;
	unsigned char calc_mode;
	unsigned short prescalerPow2;
	unsigned char force_outmode;
	signed short Y_force;
	signed short W;
	signed short X;
	unsigned char pid_init;
	unsigned long dt;
	signed long Yp1;
	signed long Yp2;
	signed long dYi1;
	signed long dYi2;
	signed long Yi1;
	signed long Yi2;
	signed long dt_Tf_1;
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
	signed long e_fbk;
} lcpid_internal_typ;

typedef struct lcCurveByPoints_TabEntry_type
{
	signed short x;
	signed short y;
} lcCurveByPoints_TabEntry_type;



/* Datatypes of function blocks */
typedef struct LCScINT
{
	/* VAR_INPUT (analogous) */
	signed short x;
	signed short x1;
	signed short y1;
	signed short x2;
	signed short y2;
	/* VAR_OUTPUT (analogous) */
	signed short y;
} LCScINT_typ;

typedef struct LCScDINT
{
	/* VAR_INPUT (analogous) */
	signed long x;
	signed long x1;
	signed long y1;
	signed long x2;
	signed long y2;
	/* VAR_OUTPUT (analogous) */
	signed long y;
} LCScDINT_typ;

typedef struct LCPT1
{
	/* VAR_INPUT (analogous) */
	signed short x;
	unsigned short t;
	signed short yset;
	unsigned long basetime;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short y;
	/* VAR (analogous) */
	unsigned long time_old;
	signed long rest;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit set;
	/* VAR (digital) */
	plcbit enable_old;
} LCPT1_typ;

typedef struct LCPosPeakVal
{
	/* VAR_INPUT (analogous) */
	signed short in;
	/* VAR_OUTPUT (analogous) */
	signed short out;
	/* VAR_INPUT (digital) */
	plcbit reset;
} LCPosPeakVal_typ;

typedef struct LCNegPeakVal
{
	/* VAR_INPUT (analogous) */
	signed short in;
	/* VAR_OUTPUT (analogous) */
	signed short out;
	/* VAR_INPUT (digital) */
	plcbit reset;
} LCNegPeakVal_typ;

typedef struct LCNegINT
{
	/* VAR_INPUT (analogous) */
	signed short in;
	/* VAR_OUTPUT (analogous) */
	signed short out;
} LCNegINT_typ;

typedef struct LCNegDINT
{
	/* VAR_INPUT (analogous) */
	signed long in;
	/* VAR_OUTPUT (analogous) */
	signed long out;
} LCNegDINT_typ;

typedef struct LCMovAvFilter
{
	/* VAR_INPUT (analogous) */
	signed short x;
	unsigned short base;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short y;
	/* VAR (analogous) */
	signed long sum_old;
	unsigned long x_old_ptr;
	signed short x_old[32];
	unsigned short xIdx;
	unsigned short base_old;
	unsigned long bootkey_old;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit enable_old;
} LCMovAvFilter_typ;

typedef struct LCLiScUINT
{
	/* VAR_INPUT (analogous) */
	unsigned short x;
	unsigned short x1;
	unsigned short y1;
	unsigned short x2;
	unsigned short y2;
	/* VAR_OUTPUT (analogous) */
	unsigned short y;
} LCLiScUINT_typ;

typedef struct LCLiScINT
{
	/* VAR_INPUT (analogous) */
	signed short x;
	signed short x1;
	signed short y1;
	signed short x2;
	signed short y2;
	/* VAR_OUTPUT (analogous) */
	signed short y;
} LCLiScINT_typ;

typedef struct LCLiScDINT
{
	/* VAR_INPUT (analogous) */
	signed long x;
	signed long x1;
	signed long y1;
	signed long x2;
	signed long y2;
	/* VAR_OUTPUT (analogous) */
	signed long y;
} LCLiScDINT_typ;

typedef struct LCLimit
{
	/* VAR_INPUT (analogous) */
	signed long in;
	signed short max_value;
	signed short min_value;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short out;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit max_limit;
	plcbit min_limit;
} LCLimit_typ;

typedef struct LCIntegrate
{
	/* VAR_INPUT (analogous) */
	signed short x;
	unsigned short tn;
	signed short max_value;
	signed short min_value;
	signed short yset;
	unsigned long basetime;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short y;
	/* VAR (analogous) */
	unsigned long time_old;
	signed long rest;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit set;
	/* VAR_OUTPUT (digital) */
	plcbit max_limit;
	plcbit min_limit;
	/* VAR (digital) */
	plcbit enable_old;
} LCIntegrate_typ;

typedef struct LCCounter
{
	/* VAR_OUTPUT (analogous) */
	unsigned long muscnt;
	unsigned long mus100cnt;
	unsigned long mscnt;
	unsigned long ms100cnt;
	unsigned long seccnt;
	/* VAR (analogous) */
	unsigned short state;
	struct SysInfo sysinf_inst;
	unsigned short musecs_old;
	unsigned long bootkey_old;
	unsigned long sys_ticks_old;
	unsigned long to_100us;
	unsigned long to_1ms;
	unsigned short to_100ms;
	unsigned short to_1s;
} LCCounter_typ;

typedef struct LCComparator
{
	/* VAR_INPUT (analogous) */
	signed short xp;
	signed short xn;
	unsigned short sd;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit greater;
	plcbit equal;
	plcbit lower;
} LCComparator_typ;

typedef struct LC3PHy
{
	/* VAR_INPUT (analogous) */
	signed short x;
	signed short xstart;
	signed short xsetvalue1;
	signed short xsetvalue2;
	unsigned short hysteresis1;
	unsigned short hysteresis2;
	signed short ymax;
	signed short ymid;
	signed short ymin;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short y;
	/* VAR (analogous) */
	signed short x_old;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ymx;
	plcbit ymn;
	/* VAR (digital) */
	plcbit enable_old;
} LC3PHy_typ;

typedef struct LCScUINT
{
	/* VAR_INPUT (analogous) */
	unsigned short x;
	unsigned short x1;
	unsigned short y1;
	unsigned short x2;
	unsigned short y2;
	/* VAR_OUTPUT (analogous) */
	unsigned short y;
} LCScUINT_typ;

typedef struct LC2PHy
{
	/* VAR_INPUT (analogous) */
	signed short x;
	signed short xstart;
	signed short xsetvalue;
	unsigned short hysteresis;
	signed short ymax;
	signed short ymin;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short y;
	/* VAR (analogous) */
	signed short x_old;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit y1;
	plcbit enable_old;
} LC2PHy_typ;

typedef struct LCPIDAutoTune
{
	/* VAR_INPUT (analogous) */
	signed short Y_max;
	signed short Y_min;
	signed short P_manualAdjust;
	signed short I_manualAdjust;
	signed short D_manualAdjust;
	unsigned char request;
	unsigned long basetime;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	unsigned long ident;
	unsigned short addInfo;
	unsigned short state;
	/* VAR (analogous) */
	unsigned long dt;
	unsigned long t_autotune;
	struct lcpid_diff_typ diff;
	struct lcpid_old_typ old;
	struct lcpid_stepResp_typ stepResponse;
	struct lcpid_osc_typ oscillation;
	struct lcpid_procPar_typ processPar;
	struct lcpid_internal_typ internal_data;
	/* VAR_INPUT (digital) */
	plcbit enable;
} LCPIDAutoTune_typ;

typedef struct LCDifferentiate
{
	/* VAR_INPUT (analogous) */
	signed short x;
	unsigned short tv;
	unsigned short tf;
	unsigned long basetime;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short y;
	/* VAR (analogous) */
	unsigned long time_old;
	signed long a2n;
	signed long a1;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit enable_old;
} LCDifferentiate_typ;

typedef struct LCTimeBasedOnOff
{
	/* VAR_INPUT (analogous) */
	signed short x;
	signed short max_value;
	signed short min_value;
	unsigned short timpulse;
	unsigned short tchange_up;
	unsigned short tchange_dwn;
	unsigned long basetime;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	unsigned short hysteresis_up;
	unsigned short hysteresis_dwn;
	/* VAR (analogous) */
	unsigned long time_old;
	signed long t_cnt;
	signed long y_fix31_1;
	signed long y_fix31_2;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit ref;
	/* VAR_OUTPUT (digital) */
	plcbit up;
	plcbit down;
	plcbit refOK;
	/* VAR (digital) */
	plcbit ref_old;
} LCTimeBasedOnOff_typ;

typedef struct LCPID
{
	/* VAR_INPUT (analogous) */
	unsigned long ident;
	signed short W;
	signed short X;
	signed short A;
	signed short Y_man;
	signed short Y_fbk;
	unsigned char out_mode;
	unsigned long basetime;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed long e;
	signed short Y;
	signed long Yp;
	signed long Yi;
	signed long Yd;
	/* VAR (analogous) */
	unsigned long time_old;
	signed long Tv_Tf_old;
	signed long e_old;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit hold_I;
	/* VAR (digital) */
	plcbit enable_old;
} LCPID_typ;

typedef struct LCRampLim
{
	/* VAR_INPUT (analogous) */
	signed short x;
	unsigned short tup;
	unsigned short tdown;
	signed short max_value;
	signed short min_value;
	signed short yset;
	unsigned long basetime;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short y;
	/* VAR (analogous) */
	unsigned long time_old;
	unsigned short rest;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit set;
	/* VAR_OUTPUT (digital) */
	plcbit xreached;
	plcbit max_limit;
	plcbit min_limit;
	/* VAR (digital) */
	plcbit enable_old;
} LCRampLim_typ;

typedef struct LCPIDpara
{
	/* VAR_INPUT (analogous) */
	signed short Y_max;
	signed short Y_min;
	float dY_max;
	float Kp;
	float Tn;
	float Tv;
	float Tf;
	float Kw;
	float Kfbk;
	unsigned char fbk_mode;
	unsigned char d_mode;
	unsigned char calc_mode;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	unsigned long ident;
	/* VAR (analogous) */
	struct lcpid_internal_typ internal_data;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit enter;
} LCPIDpara_typ;

typedef struct LCPWM_DMod
{
	/* VAR_INPUT (analogous) */
	signed short x;
	signed short max_value;
	signed short min_value;
	unsigned short tminpuls;
	unsigned short tperiod;
	unsigned long basetime;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	/* VAR (analogous) */
	signed long area;
	unsigned short period;
	unsigned long time_old;
	unsigned short last;
	signed short x_old;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit y;
	/* VAR (digital) */
	plcbit enable_old;
} LCPWM_DMod_typ;

typedef struct LCCurveByPoints
{
	/* VAR_INPUT (analogous) */
	signed short x;
	unsigned short NoOfPoints;
	struct lcCurveByPoints_TabEntry_type* ptr_table;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	signed short y;
	/* VAR (analogous) */
	signed short i_tab;
	unsigned short iterations;
	struct LCScINT scal1;
} LCCurveByPoints_typ;



/* Prototyping of functions and function blocks */
void LCScINT(LCScINT_typ* inst);
void LCScDINT(LCScDINT_typ* inst);
void LCPT1(LCPT1_typ* inst);
void LCPosPeakVal(LCPosPeakVal_typ* inst);
void LCNegPeakVal(LCNegPeakVal_typ* inst);
void LCNegINT(LCNegINT_typ* inst);
void LCNegDINT(LCNegDINT_typ* inst);
void LCMovAvFilter(LCMovAvFilter_typ* inst);
void LCLiScUINT(LCLiScUINT_typ* inst);
void LCLiScINT(LCLiScINT_typ* inst);
void LCLiScDINT(LCLiScDINT_typ* inst);
void LCLimit(LCLimit_typ* inst);
void LCIntegrate(LCIntegrate_typ* inst);
void LCCounter(LCCounter_typ* inst);
void LCComparator(LCComparator_typ* inst);
void LC3PHy(LC3PHy_typ* inst);
void LCScUINT(LCScUINT_typ* inst);
void LC2PHy(LC2PHy_typ* inst);
void LCPIDAutoTune(LCPIDAutoTune_typ* inst);
void LCDifferentiate(LCDifferentiate_typ* inst);
void LCTimeBasedOnOff(LCTimeBasedOnOff_typ* inst);
void LCPID(LCPID_typ* inst);
void LCRampLim(LCRampLim_typ* inst);
void LCPIDpara(LCPIDpara_typ* inst);
void LCPWM_DMod(LCPWM_DMod_typ* inst);
void LCCurveByPoints(LCCurveByPoints_typ* inst);



#endif /* LOOPCONT_H_ */

