/* Automation Studio Generated Header File, Format Version 1.00 */
/* do not change */
#ifndef LOOPCONR_H_
#define LOOPCONR_H_
#define _WEAK	__attribute__((__weak__))

#include <bur/plctypes.h>

#include <brsystem.h>


/* Constants */
_WEAK const unsigned char LCRPID_D_MODE_E = 2;
_WEAK const unsigned char LCRPID_D_MODE_X = 1;
_WEAK const unsigned char LCRPID_FBK_MODE_EXTERN = 2;
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
_WEAK const unsigned short LCR_ERROR = 12015;
_WEAK const unsigned short LCR_ERR_DISABLED = 65534;
_WEAK const unsigned short LCR_ERR_LCRContinServo_TCHANGE = 12035;
_WEAK const unsigned short LCR_ERR_LCRContinServo_TIMPULSE = 12036;
_WEAK const unsigned short LCR_ERR_LCRCurveByPoints_TABLE = 12045;
_WEAK const unsigned short LCR_ERR_LCRIntegrate_TN = 12016;
_WEAK const unsigned short LCR_ERR_LCRMovAvgFlt_BASE = 12017;
_WEAK const unsigned short LCR_ERR_LCRPID_IDENT = 12018;
_WEAK const unsigned short LCR_ERR_LCRPID_MODE = 12019;
_WEAK const unsigned short LCR_ERR_LCRPID_PARADAT = 12020;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_DEADBAND = 12044;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_DMODE = 12022;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_DYMAX = 12023;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_FBKMODE = 12024;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_KFBK = 12025;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_KP = 12026;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_KW = 12027;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_TF = 12028;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_TN = 12029;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_TV = 12030;
_WEAK const unsigned short LCR_ERR_LCRPID_PAR_WX_MAXMIN = 12043;
_WEAK const unsigned short LCR_ERR_LCRPT1_T = 12031;
_WEAK const unsigned short LCR_ERR_LCRPWM_TMINPULSE = 12032;
_WEAK const unsigned short LCR_ERR_LCRPWM_TPERIOD = 12033;
_WEAK const unsigned short LCR_ERR_LCRRamp_DYUP_DYDOWN = 12034;
_WEAK const unsigned short LCR_ERR_MAXMIN = 12037;
_WEAK const unsigned short LCR_WARN_LCRPID_A_LIMIT = 12008;
_WEAK const unsigned short LCR_WARN_LCRPID_I_MAXLIMIT = 12001;
_WEAK const unsigned short LCR_WARN_LCRPID_I_MINLIMIT = 12002;
_WEAK const unsigned short LCR_WARN_LCRPID_YFBK_LIMIT = 12003;
_WEAK const unsigned short LCR_WARN_LCRPID_YMAN_LIMIT = 12009;
_WEAK const unsigned short LCR_WARN_Tx_DT = 12007;


/* Datatypes */
typedef struct lcrpid_addPar_typ
{
	float y_autotune_on;
	float y_autotune_off;
	float t_autotune_max;
	signed short diff_dx_max;
	unsigned long diff_dt_max;
	unsigned short osc_nrPeriods;
	unsigned short optSwitches;
	float dY_max;
	float Tf_Tv;
	float Kw;
	float Kfbk;
	unsigned char fbk_mode;
	unsigned char d_mode;
	unsigned char calc_mode;
} lcrpid_addPar_typ;

typedef struct lcrpid_internal_typ
{
	unsigned short size;
	plcbit valid;
	lcrpid_addPar_typ autotune_addpar;
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
	plcbit ref_old;
} LCRTimeBasedOnOff_typ;



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



#endif /* LOOPCONR_H_ */

