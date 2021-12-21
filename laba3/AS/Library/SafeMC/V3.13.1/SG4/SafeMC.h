/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _SAFEMC_
#define _SAFEMC_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <acp10man.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Datatypes and datatypes of function blocks */
typedef enum SMC_SinCos_R19_OptsIndex_enum
{	S19_ENCODER_TYPE = 0,
	S19_ALIGNMENT_BYTE_0 = 1,
	S19_ALIGNMENT_BYTE_1 = 2,
	S19_ALIGNMENT_BYTE_2 = 3,
	S19_NR_OF_SIGNAL_PERIODS = 4,
	S19_SCALE_REVO = 5,
	S19_SCALE_UNITS = 6,
	S19_SCALE_DIRECTION = 7,
	S19_SCALE_LENGTH = 8,
	S19_SCALE_NORMSPEEDMAX = 9,
	S19_ACCELERATION_MAX = 10,
	S19_HOMING_POS = 11,
	S19_HOMING_MAX_SPEED = 12,
	S19_HOMING_T_MON = 13,
	S19_HOMING_MODE = 14,
	S19_HOMING_REFSWEDGE = 15,
	S19_HOMING_TRIGGER_DIR = 16,
	S19_ALIGNMENT_BYTE_3 = 17,
	S19_DECELERATION_RAMP = 18,
	S19_USE_SMS = 19,
	S19_USE_AUTO_RESET_AT_STARTUP = 20,
	S19_SELECT_STO1_CHANNEL = 21,
	S19_USE_RAMPMONITORING_SS1 = 22,
	S19_USE_RAMPMONITORING_SS2 = 23,
	S19_USE_RAMPMONITORING_SLS = 24,
	S19_USE_EARLY_LIMIT_MON = 25,
	S19_USE_SMP = 26,
	S19_USE_ENC_POS_MON = 27,
	S19_USE_ENC_SPEED_MON = 28,
	S19_USE_SET_POS_ALIVE_TEST = 29,
	S19_FUNC_FAIL_SAFE_MODE = 30,
	S19_FUNC_FAIL_SAFE_DELAY_STO = 31,
	S19_FUNC_FAIL_SAFE_DELAY_BRK = 32,
	S19_ACCELERATION_LIM_POS = 33,
	S19_DECELERATION_LIM_POS = 34,
	S19_ACCELERATION_LIM_NEG = 35,
	S19_DECELERATION_LIM_NEG = 36,
	S19_SPEED_LIMIT_SMS = 37,
	S19_SPEED_LIMIT_SLS1 = 38,
	S19_SPEED_LIMIT_SLS2 = 39,
	S19_SPEED_LIMIT_SLS3 = 40,
	S19_SPEED_LIMIT_SLS4 = 41,
	S19_POS_LIMIT_MIN_SMP = 42,
	S19_POS_LIMIT_MAX_SMP = 43,
	S19_POS_LIMIT_MIN_SLP = 44,
	S19_POS_LIMIT_MAX_SLP = 45,
	S19_SPEED_TOLERANCE = 46,
	S19_POSITION_TOLERANCE = 47,
	S19_SLI_POSITION_WINDOW = 48,
	S19_SLI_T_OFF_DELAY = 49,
	S19_RAMP_MON_TIME_SS1 = 50,
	S19_RAMP_MON_TIME_SS2 = 51,
	S19_RAMP_MON_TIME_SLS1 = 52,
	S19_RAMP_MON_TIME_SLS2 = 53,
	S19_RAMP_MON_TIME_SLS3 = 54,
	S19_RAMP_MON_TIME_SLS4 = 55,
	S19_DELAY_RAMP_MONITORING = 56,
	S19_DELAY_SDI = 57,
	S19_DELAY_SBC = 58,
	S19_DELAY_SLP = 59,
	S19_DELAY_SBT = 60,
	S19_DELAY_SLA = 61,
	S19_EARLY_LIMIT_MON_TIME = 62,
	S19_ENC_MONITORING_POS_TOL = 63,
	S19_ENC_MONITORING_SPEED_TOL = 64,
	S19_SBT_INTERVAL = 65,
	S19_SBT_THRESHOLD = 66,
	S19_SBT_EXTERNAL_LOAD = 67,
	S19_SBT_DURATION = 68,
	S19_SBT_POSITION_TOLERANCE = 69
} SMC_SinCos_R19_OptsIndex_enum;

typedef enum SMC_EnDat22_R19_OptsIndex_enum
{	E19_ENCODER_TYPE = 0,
	E19_ALIGNMENT_BYTE_0 = 1,
	E19_ALIGNMENT_BYTE_1 = 2,
	E19_ALIGNMENT_BYTE_2 = 3,
	E19_SCALE_REVO = 4,
	E19_SCALE_UNITS = 5,
	E19_SCALE_DIRECTION = 6,
	E19_SCALE_LENGTH = 7,
	E19_SCALE_NORMSPEEDMAX = 8,
	E19_ACCELERATION_MAX = 9,
	E19_HOMING_POS = 10,
	E19_HOMING_MAX_SPEED = 11,
	E19_HOMING_T_MON = 12,
	E19_HOMING_MODE = 13,
	E19_HOMING_REFSWEDGE = 14,
	E19_HOMING_TRIGGER_DIR = 15,
	E19_HOMING_REF_PULSE = 16,
	E19_HOMING_REMANENT_SAFE_POS = 17,
	E19_HOMING_REF_P_BLOCK = 18,
	E19_ALIGNMENT_BYTE_3 = 19,
	E19_ALIGNMENT_BYTE_4 = 20,
	E19_DECELERATION_RAMP = 21,
	E19_USE_SMS = 22,
	E19_USE_AUTO_RESET_AT_STARTUP = 23,
	E19_SELECT_STO1_CHANNEL = 24,
	E19_USE_RAMPMONITORING_SS1 = 25,
	E19_USE_RAMPMONITORING_SS2 = 26,
	E19_USE_RAMPMONITORING_SLS = 27,
	E19_USE_EARLY_LIMIT_MON = 28,
	E19_USE_SMP = 29,
	E19_USE_ENC_POS_MON = 30,
	E19_USE_ENC_SPEED_MON = 31,
	E19_USE_SET_POS_ALIVE_TEST = 32,
	E19_FUNC_FAIL_SAFE_MODE = 33,
	E19_FUNC_FAIL_SAFE_DELAY_STO = 34,
	E19_FUNC_FAIL_SAFE_DELAY_BRK = 35,
	E19_ACCELERATION_LIM_POS = 36,
	E19_DECELERATION_LIM_POS = 37,
	E19_ACCELERATION_LIM_NEG = 38,
	E19_DECELERATION_LIM_NEG = 39,
	E19_SPEED_LIMIT_SMS = 40,
	E19_SPEED_LIMIT_SLS1 = 41,
	E19_SPEED_LIMIT_SLS2 = 42,
	E19_SPEED_LIMIT_SLS3 = 43,
	E19_SPEED_LIMIT_SLS4 = 44,
	E19_POS_LIMIT_MIN_SMP = 45,
	E19_POS_LIMIT_MAX_SMP = 46,
	E19_POS_LIMIT_MIN_SLP = 47,
	E19_POS_LIMIT_MAX_SLP = 48,
	E19_SPEED_TOLERANCE = 49,
	E19_POSITION_TOLERANCE = 50,
	E19_SLI_POSITION_WINDOW = 51,
	E19_SLI_T_OFF_DELAY = 52,
	E19_RAMP_MON_TIME_SS1 = 53,
	E19_RAMP_MON_TIME_SS2 = 54,
	E19_RAMP_MON_TIME_SLS1 = 55,
	E19_RAMP_MON_TIME_SLS2 = 56,
	E19_RAMP_MON_TIME_SLS3 = 57,
	E19_RAMP_MON_TIME_SLS4 = 58,
	E19_DELAY_RAMP_MONITORING = 59,
	E19_DELAY_SDI = 60,
	E19_DELAY_SBC = 61,
	E19_DELAY_SLP = 62,
	E19_DELAY_SLA = 63,
	E19_EARLY_LIMIT_MON_TIME = 64,
	E19_ENC_MONITORING_POS_TOL = 65,
	E19_ENC_MONITORING_SPEED_TOL = 66
} SMC_EnDat22_R19_OptsIndex_enum;

typedef struct SMC_SinCos_R19_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	unsigned char EncoderType;
	unsigned char AlignmentByte0;
	unsigned char AlignmentByte1;
	unsigned char AlignmentByte2;
	unsigned long NrOfSignalperiods;
	signed long ScaleRevo;
	signed long ScaleUnits;
	signed long ScaleDirection;
	signed long ScaleLength;
	signed long ScaleNormSpeedMax;
	signed long AccelerationMax;
	signed long HomingPos;
	signed long HomingMaxSpeed;
	signed long HomingTMon;
	unsigned char HomingMode;
	unsigned char HomingRefSwEdge;
	unsigned char HomingTriggerDir;
	unsigned char AlignmentByte3;
	signed long DecelerationRamp;
	unsigned char UseSMS;
	unsigned char UseAutoResetAtStartup;
	unsigned char SelectSTO1channel;
	unsigned char UseRampMonitoringSS1;
	unsigned char UseRampMonitoringSS2;
	unsigned char UseRampMonitoringSLS;
	unsigned char UseEarlyLimitMon;
	unsigned char UseSMP;
	unsigned char UseEncPosMon;
	unsigned char UseEncSpeedMon;
	unsigned char UseSetPosAliveTest;
	unsigned char FuncFailSafeMode;
	signed long FuncFailSafeDelaySTO;
	signed long FuncFailSafeDelayBrk;
	signed long AccelerationLimPos;
	signed long DecelerationLimPos;
	signed long AccelerationLimNeg;
	signed long DecelerationLimNeg;
	signed long SpeedLimitSMS;
	signed long SpeedLimitSLS1;
	signed long SpeedLimitSLS2;
	signed long SpeedLimitSLS3;
	signed long SpeedLimitSLS4;
	signed long PosLimitMinSMP;
	signed long PosLimitMaxSMP;
	signed long PosLimitMinSLP;
	signed long PosLimitMaxSLP;
	signed long SpeedTolerance;
	signed long PositionTolerance;
	signed long SliPositionWindow;
	signed long SliToffDelay;
	signed long RampMonTimeSS1;
	signed long RampMonTimeSS2;
	signed long RampMonTimeSLS1;
	signed long RampMonTimeSLS2;
	signed long RampMonTimeSLS3;
	signed long RampMonTimeSLS4;
	signed long DelayRampMonitoring;
	signed long DelaySDI;
	signed long DelaySBC;
	signed long DelaySLP;
	signed long DelaySBT;
	signed long DelaySLA;
	signed long EarlyLimitMonTime;
	signed long EncMonitoringPosTol;
	signed long EncMonitoringSpeedTol;
	signed long SbtInterval;
	signed long SbtThreshold;
	signed long SbtExternalLoad;
	signed long SbtDuration;
	signed long SbtPositionTolerance;
} SMC_SinCos_R19_Opts_typ;

typedef struct SMC_EnDat22_R19_Opts_typ
{	unsigned char EnableBits[64];
	unsigned short StructInfoAxisTypeID;
	unsigned short StructInfoSize;
	unsigned long StructInfoVersion;
	unsigned char EncoderType;
	unsigned char AlignmentByte0;
	unsigned char AlignmentByte1;
	unsigned char AlignmentByte2;
	signed long ScaleRevo;
	signed long ScaleUnits;
	signed long ScaleDirection;
	signed long ScaleLength;
	signed long ScaleNormSpeedMax;
	signed long AccelerationMax;
	signed long HomingPos;
	signed long HomingMaxSpeed;
	signed long HomingTMon;
	unsigned char HomingMode;
	unsigned char HomingRefSwEdge;
	unsigned char HomingTriggerDir;
	unsigned char HomingRefPulse;
	unsigned char HomingRemanentSafePosition;
	unsigned char HomingRefPBlock;
	unsigned char AlignmentByte3;
	unsigned char AlignmentByte4;
	signed long DecelerationRamp;
	unsigned char UseSMS;
	unsigned char UseAutoResetAtStartup;
	unsigned char SelectSTO1channel;
	unsigned char UseRampMonitoringSS1;
	unsigned char UseRampMonitoringSS2;
	unsigned char UseRampMonitoringSLS;
	unsigned char UseEarlyLimitMon;
	unsigned char UseSMP;
	unsigned char UseEncPosMon;
	unsigned char UseEncSpeedMon;
	unsigned char UseSetPosAliveTest;
	unsigned char FuncFailSafeMode;
	signed long FuncFailSafeDelaySTO;
	signed long FuncFailSafeDelayBrk;
	signed long AccelerationLimPos;
	signed long DecelerationLimPos;
	signed long AccelerationLimNeg;
	signed long DecelerationLimNeg;
	signed long SpeedLimitSMS;
	signed long SpeedLimitSLS1;
	signed long SpeedLimitSLS2;
	signed long SpeedLimitSLS3;
	signed long SpeedLimitSLS4;
	signed long PosLimitMinSMP;
	signed long PosLimitMaxSMP;
	signed long PosLimitMinSLP;
	signed long PosLimitMaxSLP;
	signed long SpeedTolerance;
	signed long PositionTolerance;
	signed long SliPositionWindow;
	signed long SliToffDelay;
	signed long RampMonTimeSS1;
	signed long RampMonTimeSS2;
	signed long RampMonTimeSLS1;
	signed long RampMonTimeSLS2;
	signed long RampMonTimeSLS3;
	signed long RampMonTimeSLS4;
	signed long DelayRampMonitoring;
	signed long DelaySDI;
	signed long DelaySBC;
	signed long DelaySLP;
	signed long DelaySLA;
	signed long EarlyLimitMonTime;
	signed long EncMonitoringPosTol;
	signed long EncMonitoringSpeedTol;
} SMC_EnDat22_R19_Opts_typ;

typedef struct SafeMC_ReadSafeInData
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEINDAT_typ SafeInData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeInData_typ;

typedef struct SafeMC_ReadSafeInData2
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEINDAT2_typ SafeInData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeInData2_typ;

typedef struct SafeMC_ReadSafeOutData
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEOUTDAT_typ SafeOutData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeOutData_typ;

typedef struct SafeMC_ReadSafeOutData2
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct ACP10SAFEOUTDAT2_typ SafeOutData;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} SafeMC_ReadSafeOutData2_typ;



/* Prototyping of functions and function blocks */
void SafeMC_ReadSafeInData(struct SafeMC_ReadSafeInData* inst);
void SafeMC_ReadSafeInData2(struct SafeMC_ReadSafeInData2* inst);
void SafeMC_ReadSafeOutData(struct SafeMC_ReadSafeOutData* inst);
void SafeMC_ReadSafeOutData2(struct SafeMC_ReadSafeOutData2* inst);
unsigned short SafeMC_action(unsigned long nc_object, unsigned long action, void *par_ptr, unsigned long par_size);


#ifdef __cplusplus
};
#endif
#endif /* _SAFEMC_ */

