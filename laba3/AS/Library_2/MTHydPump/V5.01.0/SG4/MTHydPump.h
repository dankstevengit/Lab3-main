/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTHYDPUMP_
#define _MTHYDPUMP_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <Acp10_MC.h>
#include <Acp10man.h>
#include <brsystem.h>
#include <MTTypes.h>
#include <MTSystem.h>
#include <MTAdvanced.h>
#include <sys_lib.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define TUNING_SETTLING_TIME_LIMIT 100.0f
 #define TUNING_NOTCH_FILTER_BANDWIDTH 10.0f
 #define TUNING_SWEEP_START_FREQUENCY 25.0f
 #define TUNING_SWEEP_END_FREQUENCY 125.0f
 #define TUNING_SWEEP_WAITING_TIME 0.0f
 #define TUNING_OVERSHOOT_REQUIRED 0.0f
 #define TUNING_OP_POINT_PRESSURE_MIN 2U
 #define TUNING_PRESSURE_SETTLING_WINDOW 0.5f
 #define mtHYD_WRN_TUNING_TEST_SIGNAL_INV (-2131750754)
 #define mtHYD_WRN_IDENTIFICATION_FAILED (-2131750755)
 #define mtHYD_WRN_TUNING_NOT_POSSIBLE (-2131750757)
 #define mtHYD_WRN_SYSTEM_NOT_SETTLED (-2131750759)
 #define mtHYD_WRN_TUNING_CTRL_CONFIG_INV (-2131750758)
 #define mtHYD_WRN_NO_RESONANCE_FOUND (-2131750760)
 #define mtHYD_WRN_MAX_PRESSURE_REACHED (-2131750761)
 #define mtHYD_WRN_TUNING_CONFIG_INVALID (-2131750762)
 #define mtHYD_ERR_TUNING_CONFIG_INVALID (-1058008947)
 #define CONTROLLER_STEP_CYCLIC 100U
 #define CONTROLLER_STEP_DISABLE_FB_BUSY 5U
 #define CONTROLLER_STEP_DISABLE_START 0U
 #define CONTROLLER_STEP_INIT_UPDATE 0U
 #define CONTROLLER_STEP_RESET_INT_DATA 10U
 #define mtHYD_ERR_MAX_SPEED_INVALID (-1058008959)
 #define mtHYD_ERR_MAX_TORQUE_INVALID (-1058008960)
 #define mtHYD_ERR_MODE_STANDALONE_INV (-1058008952)
 #define mtHYD_ERR_MOTTEMP_NULL_POINTER (-1058008945)
 #define mtHYD_ERR_LOADMM_NULL_POINTER (-1058008944)
 #define mtHYD_ERR_NOM_SPEED_INVALID (-1058008957)
 #define mtHYD_ERR_NOM_TORQUE_INVALID (-1058008958)
 #define mtHYD_ERR_OFFSET_MIN_PUMP_SPEED (-1058008954)
 #define mtHYD_ERR_OFFSET_PUMP_T_LIM_INV (-1058008956)
 #define mtHYD_ERR_OFFSET_SPEED_LIM_INV (-1058008962)
 #define mtHYD_ERR_TEMPMODEL_NOT_INIT (-1058008949)
 #define mtHYD_ERR_PUMPTYPE_INVALID (-1058008953)
 #define mtHYD_ERR_PUMP_HYSTERESIS_INV (-1058008955)
 #define mtHYD_ERR_OFFSET_TORQUELIM_INV (-1058008961)
 #define mtHYD_ERR_POW_MET_FILTER (-1058008946)
 #define mtHYD_ERR_POW_MET_PAR_INVALID (-1058008951)
 #define mtHYD_ERR_POW_MET_PRESSURE_NEG (-1058008950)
 #define mtHYD_ERR_POW_MET_READ_CYC (-1058008948)
 #define mtHYD_ERR_START_POS_INVALID (-1058009175)
 #define mtHYD_ERR_CYLINDER_PAR_INVALID (-1058009180)
 #define mtHYD_ERR_SYSTEM_PAR_INVALID (-1058009179)
 #define mtHYD_ERR_VALVE_PAR_INVALID (-1058009178)
 #define mtHYD_ERR_PUMP_PAR_INVALID (-1058009177)
 #define mtHYD_WRN_PUMP_TURNS_NEGATIVE (-2131750753)
 #define mtHYD_WRN_EXT_SIGNAL_SOURCE_INV (-2131750792)
 #define mtHYD_WRN_TRIGGER_PARID_INVALID (-2131750791)
 #define mtHYD_WRN_SWITCHOVER_PAR_INVALID (-2131750790)
 #define mtHYD_WRN_ADD_SPEED_INVALID (-2131750770)
 #define mtHYD_WRN_ADD_TORQUE_INVALID (-2131750771)
 #define mtHYD_WRN_AXIS_INVALID (-2131750786)
 #define mtHYD_WRN_BIQUAD_PAR_INVALID (-2131750807)
 #define mtHYD_WRN_CTRL_MODE_IMPOSSIBLE (-2131750789)
 #define mtHYD_WRN_CTRL_MODE_INVALID (-2131750788)
 #define mtHYD_WRN_GEAR_RATIO_INVALID (-2131750802)
 #define mtHYD_WRN_ISQ_FACTOR_LIMIT_INV (-2131750801)
 #define mtHYD_WRN_LEAKAGE_INVALID (-2131750796)
 #define mtHYD_WRN_MAX_SPEED_INVALID (-2131750779)
 #define mtHYD_WRN_MAX_TORQUE_INVALID (-2131750778)
 #define mtHYD_WRN_MIN_PRESSURE_INVALID (-2131750797)
 #define mtHYD_WRN_MIN_PRESS_PID_GAIN_0 (-2131750806)
 #define mtHYD_WRN_MODE_STANDALONE_INV (-2131750764)
 #define mtHYD_WRN_MOTORTEMP_INVALID (-2131750765)
 #define mtHYD_WRN_NOM_SPEED_INVALID (-2131750773)
 #define mtHYD_WRN_NOM_TORQUE_INVALID (-2131750772)
 #define mtHYD_WRN_NO_CAVITATION_PROTECT (-2131750808)
 #define mtHYD_ERR_EXT_SIGNAL_SOURCE_INV (-1058008965)
 #define mtHYD_ERR_TRIGGER_PARID_INVALID (-1058008969)
 #define mtHYD_ERR_SWITCHOVER_PAR_INVALID (-1058008970)
 #define mtHYD_ERR_P_SENSOR_PAR_INVALID (-1058008983)
 #define mtHYD_ERR_REVERSE_SPEED_LIM_INV (-1058008973)
 #define mtHYD_ERR_SENSOR_SOURCE_INVALID (-1058008984)
 #define mtHYD_ERR_SET_PRESSURE_LIM_INV (-1058008982)
 #define mtHYD_ERR_SET_VALUE_FILTER_INV (-1058008972)
 #define mtHYD_ERR_SPEED_LIM_INVALID (-1058008979)
 #define mtHYD_ERR_P_FILTER_TIME_INVALID (-1058008978)
 #define mtHYD_ERR_PAR_SET_INVALID (-1058008966)
 #define mtHYD_ERR_PID_PAR_INVALID (-1058008974)
 #define mtHYD_ERR_AXIS_INVALID (-1058008963)
 #define mtHYD_ERR_BIQUAD_PAR_INVALID (-1058008977)
 #define mtHYD_ERR_GEAR_RATIO_INVALID (-1058008981)
 #define mtHYD_ERR_HOLDON_PRESSURE_INV (-1058008971)
 #define mtHYD_ERR_ISQ_FACTOR_LIMIT_INV (-1058008980)
 #define mtHYD_ERR_LEAKAGE_INVALID (-1058008975)
 #define mtHYD_ERR_MIN_PRESSURE_INVALID (-1058008976)
 #define mtHYD_WRN_OFFSET_MIN_PUMP_SPEED (-2131750775)
 #define mtHYD_WRN_OFFSET_PUMP_T_LIM_INV (-2131750777)
 #define mtHYD_WRN_OFFSET_SPEED_LIM_INV (-2131750781)
 #define mtHYD_WRN_OFFSET_TORQUELIM_INV (-2131750780)
 #define mtHYD_WRN_PAR_SET_INVALID (-2131750787)
 #define mtHYD_WRN_PID_PAR_INVALID (-2131750795)
 #define mtHYD_WRN_POW_MET_PAR_INVALID (-2131750763)
 #define mtHYD_WRN_PRESSURE_PID_GAIN_0 (-2131750798)
 #define mtHYD_WRN_PUMPTYPE_INVALID (-2131750774)
 #define mtHYD_WRN_PUMP_HYSTERESIS_INV (-2131750776)
 #define mtHYD_WRN_P_FILTER_TIME_INVALID (-2131750799)
 #define mtHYD_WRN_P_SENSOR_PAR_INVALID (-2131750804)
 #define mtHYD_WRN_REVERSE_SPEED_LIM_INV (-2131750794)
 #define mtHYD_WRN_SENSOR_SOURCE_INVALID (-2131750805)
 #define mtHYD_WRN_SET_PRESSURE_LIM_INV (-2131750803)
 #define mtHYD_WRN_SET_VALUE_FILTER_INV (-2131750793)
 #define mtHYD_WRN_SPEED_LIM_INVALID (-2131750800)
 #define mtHYD_WRN_SWITCH_FREQ_INVALID (-2131750782)
 #define mtHYD_WRN_TEMPMODEL_MODE1 (-2131750766)
 #define POWERMETER_STEP_CYCLIC 2U
 #define POWERMETER_STEP_DISABLE_FB_BUSY 1U
 #define POWERMETER_STEP_DISABLE_START 0U
 #define POWERMETER_STEP_INITIALIZING 0U
 #define POWERMETER_STEP_INIT_DONE 1U
 #define POWERMETER_STEP_RESET_INT_DATA 2U
 #define PROTECTION_LAST_INDEX_LIM 13U
 #define PROTECTION_STEP_CLC_SC_ACP_TBL 10U
 #define PROTECTION_STEP_DISABLED 0U
 #define PROTECTION_STEP_DOWNLOAD_TABLE 20U
 #define PROTECTION_STEP_ERROR 100U
 #define PROTECTION_STEP_INIT 11U
 #define PROTECTION_STEP_READ_PARIDS 0U
 #define PROTECTION_STEP_RUN 40U
 #define PROTECTION_STEP_INITIALIZE_ACP 0U
 #define PROTECTION_RECOVER_TEMPMODELL 40U
 #define PROTECTION_STEP_START_CYCL_READ 30U
 #define PROTECTION_STEP_STOP 111U
 #define PROTECTION_STEP_MODEL_MODE_READ 1U
 #define PROTECTION_STEP_TEMPMODEL_WRITE 0U
 #define MOTOR_TERMINAL_POWER 844
 #define POWER_ACT 278
 #define MAX_WIN_LENGTH 10000
 #define STATE_DISABLED 0U
 #define STATE_INITIALIZATION 1U
 #define STATE_CYCLIC 2U
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST float TUNING_SETTLING_TIME_LIMIT;
 _GLOBAL_CONST float TUNING_NOTCH_FILTER_BANDWIDTH;
 _GLOBAL_CONST float TUNING_SWEEP_START_FREQUENCY;
 _GLOBAL_CONST float TUNING_SWEEP_END_FREQUENCY;
 _GLOBAL_CONST float TUNING_SWEEP_WAITING_TIME;
 _GLOBAL_CONST float TUNING_OVERSHOOT_REQUIRED;
 _GLOBAL_CONST unsigned char TUNING_OP_POINT_PRESSURE_MIN;
 _GLOBAL_CONST float TUNING_PRESSURE_SETTLING_WINDOW;
 _GLOBAL_CONST signed long mtHYD_WRN_TUNING_TEST_SIGNAL_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENTIFICATION_FAILED;
 _GLOBAL_CONST signed long mtHYD_WRN_TUNING_NOT_POSSIBLE;
 _GLOBAL_CONST signed long mtHYD_WRN_SYSTEM_NOT_SETTLED;
 _GLOBAL_CONST signed long mtHYD_WRN_TUNING_CTRL_CONFIG_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_NO_RESONANCE_FOUND;
 _GLOBAL_CONST signed long mtHYD_WRN_MAX_PRESSURE_REACHED;
 _GLOBAL_CONST signed long mtHYD_WRN_TUNING_CONFIG_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_TUNING_CONFIG_INVALID;
 _GLOBAL_CONST unsigned short CONTROLLER_STEP_CYCLIC;
 _GLOBAL_CONST unsigned short CONTROLLER_STEP_DISABLE_FB_BUSY;
 _GLOBAL_CONST unsigned short CONTROLLER_STEP_DISABLE_START;
 _GLOBAL_CONST unsigned short CONTROLLER_STEP_INIT_UPDATE;
 _GLOBAL_CONST unsigned short CONTROLLER_STEP_RESET_INT_DATA;
 _GLOBAL_CONST signed long mtHYD_ERR_MAX_SPEED_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_MAX_TORQUE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_MODE_STANDALONE_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_MOTTEMP_NULL_POINTER;
 _GLOBAL_CONST signed long mtHYD_ERR_LOADMM_NULL_POINTER;
 _GLOBAL_CONST signed long mtHYD_ERR_NOM_SPEED_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_NOM_TORQUE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_OFFSET_MIN_PUMP_SPEED;
 _GLOBAL_CONST signed long mtHYD_ERR_OFFSET_PUMP_T_LIM_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_OFFSET_SPEED_LIM_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_TEMPMODEL_NOT_INIT;
 _GLOBAL_CONST signed long mtHYD_ERR_PUMPTYPE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_PUMP_HYSTERESIS_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_OFFSET_TORQUELIM_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_POW_MET_FILTER;
 _GLOBAL_CONST signed long mtHYD_ERR_POW_MET_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_POW_MET_PRESSURE_NEG;
 _GLOBAL_CONST signed long mtHYD_ERR_POW_MET_READ_CYC;
 _GLOBAL_CONST signed long mtHYD_ERR_START_POS_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_CYLINDER_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_SYSTEM_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_VALVE_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_PUMP_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PUMP_TURNS_NEGATIVE;
 _GLOBAL_CONST signed long mtHYD_WRN_EXT_SIGNAL_SOURCE_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_TRIGGER_PARID_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_SWITCHOVER_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_ADD_SPEED_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_ADD_TORQUE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_AXIS_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_BIQUAD_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_CTRL_MODE_IMPOSSIBLE;
 _GLOBAL_CONST signed long mtHYD_WRN_CTRL_MODE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_GEAR_RATIO_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_ISQ_FACTOR_LIMIT_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_LEAKAGE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_MAX_SPEED_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_MAX_TORQUE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_MIN_PRESSURE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_MIN_PRESS_PID_GAIN_0;
 _GLOBAL_CONST signed long mtHYD_WRN_MODE_STANDALONE_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_MOTORTEMP_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_NOM_SPEED_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_NOM_TORQUE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_NO_CAVITATION_PROTECT;
 _GLOBAL_CONST signed long mtHYD_ERR_EXT_SIGNAL_SOURCE_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_TRIGGER_PARID_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_SWITCHOVER_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_P_SENSOR_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_REVERSE_SPEED_LIM_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_SENSOR_SOURCE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_SET_PRESSURE_LIM_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_SET_VALUE_FILTER_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_SPEED_LIM_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_P_FILTER_TIME_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_PAR_SET_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_PID_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_AXIS_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_BIQUAD_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_GEAR_RATIO_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_HOLDON_PRESSURE_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_ISQ_FACTOR_LIMIT_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_LEAKAGE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_MIN_PRESSURE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_OFFSET_MIN_PUMP_SPEED;
 _GLOBAL_CONST signed long mtHYD_WRN_OFFSET_PUMP_T_LIM_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_OFFSET_SPEED_LIM_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_OFFSET_TORQUELIM_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_PAR_SET_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PID_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_POW_MET_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PRESSURE_PID_GAIN_0;
 _GLOBAL_CONST signed long mtHYD_WRN_PUMPTYPE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PUMP_HYSTERESIS_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_P_FILTER_TIME_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_P_SENSOR_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_REVERSE_SPEED_LIM_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_SENSOR_SOURCE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_SET_PRESSURE_LIM_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_SET_VALUE_FILTER_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_SPEED_LIM_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_SWITCH_FREQ_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_TEMPMODEL_MODE1;
 _GLOBAL_CONST unsigned short POWERMETER_STEP_CYCLIC;
 _GLOBAL_CONST unsigned short POWERMETER_STEP_DISABLE_FB_BUSY;
 _GLOBAL_CONST unsigned short POWERMETER_STEP_DISABLE_START;
 _GLOBAL_CONST unsigned short POWERMETER_STEP_INITIALIZING;
 _GLOBAL_CONST unsigned short POWERMETER_STEP_INIT_DONE;
 _GLOBAL_CONST unsigned short POWERMETER_STEP_RESET_INT_DATA;
 _GLOBAL_CONST unsigned short PROTECTION_LAST_INDEX_LIM;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_CLC_SC_ACP_TBL;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_DISABLED;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_DOWNLOAD_TABLE;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_ERROR;
 _GLOBAL_CONST unsigned char PROTECTION_STEP_INIT;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_READ_PARIDS;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_RUN;
 _GLOBAL_CONST unsigned char PROTECTION_STEP_INITIALIZE_ACP;
 _GLOBAL_CONST unsigned char PROTECTION_RECOVER_TEMPMODELL;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_START_CYCL_READ;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_STOP;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_MODEL_MODE_READ;
 _GLOBAL_CONST unsigned short PROTECTION_STEP_TEMPMODEL_WRITE;
 _GLOBAL_CONST signed short MOTOR_TERMINAL_POWER;
 _GLOBAL_CONST signed short POWER_ACT;
 _GLOBAL_CONST signed short MAX_WIN_LENGTH;
 _GLOBAL_CONST unsigned char STATE_DISABLED;
 _GLOBAL_CONST unsigned char STATE_INITIALIZATION;
 _GLOBAL_CONST unsigned char STATE_CYCLIC;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum MTHydPumpControllerModeEnum
{	mtPUMP_SPEED_CONTROL = 0,
	mtPUMP_PRESSURE_SPEED_CONTROL = 1,
	mtPUMP_SLAVE_MODE = 2,
	mtPUMP_STOP = 3
} MTHydPumpControllerModeEnum;

typedef enum MTHydPumpSwitchoverEnum
{	mtPUMP_NO_SWITCHOVER = 0,
	mtPUMP_SWITCHOVER_BY_PRESSURE = 1,
	mtPUMP_SWITCHOVER_BY_EXT_SIGNAL = 2,
	mtPUMP_SWITCHOVER_BY_TRIGGER = 3
} MTHydPumpSwitchoverEnum;

typedef enum MTHydPumpMaxLoadEnum
{	mtPUMP_CONTINUOUS_CURRENT = 0,
	mtPUMP_PEAK_CURRENT = 1,
	mtPUMP_POWER = 2,
	mtPUMP_HEAT_SINK_TEMPERATURE = 3,
	mtPUMP_MOTOR_TEMPERATURE = 4,
	mtPUMP_MOTOR_MODEL_TEMPERATURE = 5,
	mtPUMP_JUNCTION_TEMPERATURE = 6
} MTHydPumpMaxLoadEnum;

typedef enum MTHydPumpPumpProtectionEnum
{	mtPUMP_PROTECTION_OFF = 0,
	mtPUMP_PROTECTION_UNKNOWN_PUMP = 1000,
	mtPUMP_PROTECTION_DHPH2_008 = 2008,
	mtPUMP_PROTECTION_DHPH2_013 = 2013,
	mtPUMP_PROTECTION_DHPH2_019 = 2019,
	mtPUMP_PROTECTION_DHPH2_022 = 2022,
	mtPUMP_PROTECTION_DHPH2_025 = 2025,
	mtPUMP_PROTECTION_DHPH3_032 = 3032,
	mtPUMP_PROTECTION_DHPH3_040 = 3040,
	mtPUMP_PROTECTION_DHPH3_050 = 3050,
	mtPUMP_PROTECTION_DHPH6_160 = 6160,
	mtPUMP_PROTECTION_DHPC5_064 = 15064,
	mtPUMP_PROTECTION_DHPC5_080 = 15080,
	mtPUMP_PROTECTION_DHPC5_100 = 15100,
	mtPUMP_PROTECTION_DHPC6_125 = 16125,
	mtPUMP_PROTECTION_EIPS2_011 = 22011
} MTHydPumpPumpProtectionEnum;

typedef enum MTHydPumpStandaloneEnum
{	mtPUMP_WITH_PRESSURE_CONTROL = 0,
	mtPUMP_WITHOUT_PRESSURE_CONTROL = 1
} MTHydPumpStandaloneEnum;

typedef enum MTHydPumpTuningStateEnum
{	mtPUMP_TUNING_IDLE = 0,
	mtPUMP_TUNING_WAIT = 1,
	mtPUMP_TUNING_IDENT_PHASE_1 = 2,
	mtPUMP_TUNING_IDENT_PHASE_2 = 3,
	mtPUMP_TUNING_IDENT_PHASE_3 = 4,
	mtPUMP_TUNING_USER = 5,
	mtPUMP_TUNING_TEST = 6
} MTHydPumpTuningStateEnum;

typedef enum MTHydPumpControllerEnum
{	mtPUMP_PI_CONTROLLER = 0,
	mtPUMP_PID_CONTROLLER = 1
} MTHydPumpControllerEnum;

typedef enum MTHydPumpTuningCalcContStateEnum
{	mtPUMP_TUNING_INIT = 0,
	mtPUMP_TUNING_CHECK_PARA = 1,
	mtPUMP_TUNING_INIT_CALC = 2,
	mtPUMP_TUNING_CALC = 3,
	mtPUMP_TUNING_CALC_DONE = 4
} MTHydPumpTuningCalcContStateEnum;

typedef enum MTHydPumpTuningAsyncEnum
{	st_HYDPUMPTUNING_WAIT = 0,
	st_HYDPUMPTUNING_RESUME = 1,
	st_HYDPUMPTUNING_CREATE = 2,
	st_HYDPUMPTUNING_DELETE = 3,
	st_HYDPUMPTUNING_SUSPEND = 4,
	st_HYDPUMPTUNING_ERROR = 5
} MTHydPumpTuningAsyncEnum;

typedef enum MTHydPumpTuningSystemIdentEnum
{	st_SYSIDENTSTEP_Idle = 0,
	st_SYSIDENTSTEP_IdentLSQ = 1,
	st_SYSIDENTSTEP_Bode1 = 2,
	st_SYSIDENTSTEP_CalcResAres = 3,
	st_SYSIDENTSTEP_Bode2 = 4,
	st_SYSIDENTSTEP_Error = 99
} MTHydPumpTuningSystemIdentEnum;

typedef struct MTHydPumpSimValveParType
{	double NomVolumeFlowA;
	double NomVolumeFlowB;
	double NomPressureDrop;
	double LeakageCoefficient;
} MTHydPumpSimValveParType;

typedef struct MTHydPumpSimSystemParType
{	double TankPressure;
	double OilElasticity;
	double OilDamping;
	double Gravity;
} MTHydPumpSimSystemParType;

typedef struct MTHydPumpSimPumpParType
{	double MaxPressure;
	double MaxSpeed;
	double DisplacementVolume;
	double VolumetricEfficiency;
	double NumberTeeth;
	double PulsationFactor;
	double LeakageCoefficient;
} MTHydPumpSimPumpParType;

typedef struct MTHydPumpSimCylinderParType
{	double Mass;
	double Area1;
	double Area2;
	double Stroke;
	double DeadVolume1;
	double DeadVolume2;
	double LeakageCoefficient;
	double SlideFriction1;
	double SlideFriction2;
	double StickFriction;
} MTHydPumpSimCylinderParType;

typedef struct BlockIO_ServoPumpModel
{	double PumpSpeed;
	double ProcessForce;
	double sCylm;
	double IntegratorLimited4_o2;
	double sCyl_pms;
	double mmm;
	double p2Pa;
	double Pabar;
	double p1Pa;
	double DataTypeConversion7;
	double Saturation;
	double ResettableDelay;
	double Clock;
	double Pabar_b;
	double DataTypeConversion5;
	double IntegratorLimited2;
	double mmm_b;
	double Saturation1;
	double error;
	double statusID;
	double pA;
	double pB;
	double Q1;
	double Q2;
	double qA_lmin;
	double qB_lmin;
	double pPump_bar;
	double dpPump_dt;
	double QPump_lmin;
	double TmpSignalConversionAtSFunctionI[4];
	double dx[5];
	double Fsum;
	double Fhyd;
	float Input5;
	float Input6;
	float Switch9;
	float Switch10;
	float Switch2;
	float Switch3;
	float Switch5;
	float DataTypeConversion;
	float DataTypeConversion1;
	float DataTypeConversion2;
	float DataTypeConversion3;
	float DataTypeConversion4;
	signed long Switch6;
	signed long DataTypeConversion22;
	signed char Input1;
	unsigned char Uk1;
	unsigned char FixPtRelationalOperator;
	unsigned char Uk1_b;
	unsigned char Compare;
	unsigned char FixPtRelationalOperator_e;
	plcbit Input;
	plcbit LogicalOperator;
	plcbit Switch1;
	plcbit Switch8;
	plcbit HitCrossing;
	plcbit LogicalOperator_o;
	plcbit DataTypeConversion21;
} BlockIO_ServoPumpModel;

typedef struct PrevZCSigStates_ServoPumpModel
{	unsigned char IntegratorLimited4_Reset_ZCE;
	unsigned char HitCrossing_Input_ZCE;
	unsigned char IntegratorLimited3_Reset_ZCE;
	unsigned char IntegratorLimited1_Reset_ZCE;
	unsigned char IntegratorLimited_Reset_ZCE;
	unsigned char ResettableDelay_Reset_ZCE;
	unsigned char IntegratorLimited2_Reset_ZCE;
} PrevZCSigStates_ServoPumpModel;

typedef struct ContinuousStates_ServoPumpModel
{	double IntegratorLimited4_CSTATE;
	double IntegratorLimited3_CSTATE;
	double IntegratorLimited1_CSTATE;
	double IntegratorLimited_CSTATE;
	double IntegratorLimited2_CSTATE;
} ContinuousStates_ServoPumpModel;

typedef struct D_Work_ServoPumpModel
{	double ResettableDelay_DSTATE;
	double internal_error;
	double internal_ParametersValid;
	double internal_StatusID;
	signed long HitCrossing_MODE;
	unsigned char DelayInput1_DSTATE;
	unsigned char DelayInput1_DSTATE_n;
	plcbit ModelSubsystem_MODE;
} D_Work_ServoPumpModel;

typedef struct ODE4_IntgData_ServoPumpModel
{	double* y;
	unsigned long f[4];
} ODE4_IntgData_ServoPumpModel;

typedef struct ModelData_ServoPumpModel
{	struct BlockIO_ServoPumpModel* blockIO;
	struct PrevZCSigStates_ServoPumpModel* prevZCSigState;
	struct ContinuousStates_ServoPumpModel* contStates;
	double* derivs;
	plcbit* contStateDisabled;
	plcbit zCCacheNeedsReset;
	plcbit derivCacheNeedsReset;
	plcbit blkStateChange;
	double odeY[5];
	double odeF[4][5];
	struct ODE4_IntgData_ServoPumpModel intgData;
	struct D_Work_ServoPumpModel* dwork;
} ModelData_ServoPumpModel;

typedef struct Sizes_ServoPumpModel
{	signed long numContStates;
	signed long numSampTimes;
} Sizes_ServoPumpModel;

typedef struct Timing_ServoPumpModel
{	unsigned long clockTick0;
	unsigned long clockTickH0;
	double stepSize0;
	unsigned long clockTick1;
	unsigned long clockTickH1;
	plcbit firstInitCondFlag;
	signed short simTimeStep;
	plcbit stopRequestedFlag;
	double* t;
	double tArray[2];
} Timing_ServoPumpModel;

typedef struct tag_RTM_ServoPumpModel
{	unsigned char* errorStatus;
	unsigned long solverInfo[57];
	struct ModelData_ServoPumpModel ModelData;
	struct Sizes_ServoPumpModel Sizes;
	struct Timing_ServoPumpModel Timing;
} tag_RTM_ServoPumpModel;

typedef struct MTHydPumpSimulationInternalType
{	struct BlockIO_ServoPumpModel bur_BlockIO_ServoPumpModel;
	struct PrevZCSigStates_ServoPumpModel bur_PrevZCSigStates_ServoPumpMo;
	struct ContinuousStates_ServoPumpModel bur_ContinuousStates_ServoPumpM;
	struct D_Work_ServoPumpModel bur_D_Work_ServoPumpModel;
	struct tag_RTM_ServoPumpModel bur_ServoPumpModel;
	plcbit bur_init;
} MTHydPumpSimulationInternalType;

typedef struct StateDisabled_ServoPumpModel
{	plcbit IntegratorLimited4_CSTATE;
	plcbit IntegratorLimited3_CSTATE;
	plcbit IntegratorLimited1_CSTATE;
	plcbit IntegratorLimited_CSTATE;
	plcbit IntegratorLimited2_CSTATE;
} StateDisabled_ServoPumpModel;

typedef struct StateDerivatives_ServoPumpModel
{	double IntegratorLimited4_CSTATE;
	double IntegratorLimited3_CSTATE;
	double IntegratorLimited1_CSTATE;
	double IntegratorLimited_CSTATE;
	double IntegratorLimited2_CSTATE;
} StateDerivatives_ServoPumpModel;

typedef struct TaskCounters_ServoPumpModel
{	unsigned short TID[3];
} TaskCounters_ServoPumpModel;

typedef struct MTHydPumpSensorConfigType
{	unsigned long Source;
	float MinVoltage;
	float MaxVoltage;
	float MinPressure;
	float MaxPressure;
} MTHydPumpSensorConfigType;

typedef struct MTHydPumpControllerConfigType
{	struct MTHydPumpSensorConfigType PressureSensor;
	float MinPressureLimit;
	float MaxPressureLimit;
	float MaxPumpSpeed;
	plcbit ReversePumpMotorSpeed;
	float MaxPumpAcceleration;
	float MaxPumpDeceleration;
	float SlaveGearRatio;
} MTHydPumpControllerConfigType;

typedef struct MTHydPumpBiQuadFilterType
{	float CenterFrequencyNum;
	float DampingRatioNum;
	float CenterFrequencyDen;
	float DampingRatioDen;
} MTHydPumpBiQuadFilterType;

typedef struct MTHydPumpCtrlParSetType
{	struct MTPIDParametersType PressureController;
	struct MTPIDParametersType MinPressureController;
	struct MTHydPumpBiQuadFilterType BiQuadFilter;
	float MaxReversePumpSpeed;
	float SetPressureFilterTimeNegDir;
	float SetPressureFilterTimePosDir;
} MTHydPumpCtrlParSetType;

typedef struct MTHydPumpControllerParType
{	float ActPressureFilterTime;
	plcbit DisableMinPressureController;
	float MinSetPressure;
	struct MTHydPumpCtrlParSetType ControllerParameterSet[10];
	plcbit NegSetPumpSpeedAllowed;
	float LeakageCompensation;
} MTHydPumpControllerParType;

typedef struct MTHydPump_PreFilterType
{	double u;
	plcbit Set_y;
	double y_set;
	float T1;
	float Ts;
	unsigned char nCnt;
	float T1dec;
	double x[2];
	double a[2];
	double y;
} MTHydPump_PreFilterType;

typedef struct MTHydPumpIntSwitchoverType
{	float CompensationTime_sec;
	unsigned short HoldOnPressureDigits;
	float pActSwitchOver;
	unsigned short readStep;
	unsigned long waitCnt;
	plcbit con1StatusOld;
	plcbit con2StatusOld;
	plcbit con3StatusOld;
	plcbit forceStatusOld;
	plcbit enableOld;
	plcbit readFlag;
	float ExternalSignalThreshold;
} MTHydPumpIntSwitchoverType;

typedef struct MTHydPump_internal_async_typ
{	float aCrs;
	float sigma;
	float statorInduc;
	float rotorInduc;
	float mutualInduc;
	float MotorCurrRated;
	float MotorMagnetizingCurr;
	float MotorSpeedRated;
	struct MC_CAMPROFILE_TYP camProfile;
	struct MC_CAM_SECTIONS_TYP camData;
	struct MC_BR_ReadParID MC_BR_ReadParID_0;
	struct MC_BR_ReadParID MC_BR_ReadParID_1;
	struct MC_BR_ReadParID MC_BR_ReadParID_2;
	struct MC_BR_CalcCamFromSections MC_BR_CalcCamFromSections_0;
	struct MC_BR_DownloadCamProfileData MC_BR_DownloadCamProfileData_0;
} MTHydPump_internal_async_typ;

typedef struct MTHydPumpSwitchoverInfoType
{	float SwitchoverPressure;
	float SwitchoverExternalSignal;
	float CompensationTime;
	enum MTHydPumpSwitchoverEnum SwitchoverCondition;
} MTHydPumpSwitchoverInfoType;

typedef struct MTHydPumpSwitchoverParType
{	float HoldOnPressure;
	float SwitchoverTime;
	plcbit EnableSwitchoverByPressure;
	float PressureThreshold;
	plcbit EnableSwitchoverByExtSignal;
	unsigned long ExternalSignalSource;
	signed short ExternalSignalThreshold;
	plcbit ExternalSignalInvert;
	plcbit EnableSwitchoverByTrigger;
	unsigned short TriggerSourceParID;
} MTHydPumpSwitchoverParType;

typedef struct MTHydPumpControllerInternalType
{	unsigned long CycleTime;
	unsigned long CycleTime400;
	struct MTHydPumpControllerConfigType Configuration;
	struct MTHydPumpControllerParType Parameters;
	struct MTHydPumpSwitchoverParType SwitchoverParameters;
	plcbit InductionMotor;
	plcbit ConfigSwitchOver;
	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit Update;
	plcbit Enable;
	plcbit EnableOld;
	plcbit UpdateDone;
	struct ACP10AXIS_typ Axis;
	unsigned short StepOld;
	unsigned short Step;
	unsigned short StepInit;
	unsigned short StepUpdate;
	unsigned short MaSlUpdate;
	plcbit configSwitchOver;
	float SensorOffset;
	float SensorScal;
	unsigned long ControllerType;
	enum MTHydPumpControllerModeEnum ControllerModeOld;
	float nSet;
	float SetPressure;
	float nFeedForward;
	signed short pSetACP;
	float nActUnscaled;
	plcbit Reverse;
	unsigned long MasterAxisOld;
	float SetPressureOld;
	plcbit NewParSetDownloaded;
	plcbit busyMaSlCom;
	plcbit BusyUpdate;
	unsigned char actMotorType;
	unsigned char MasterReceiveSlot;
	unsigned short MaSlIndex;
	unsigned short StepParSetsChange;
	unsigned short ParameterApply;
	struct ACP10PRB06_typ parListTabMaSl[10];
	struct ACP10DATBL_typ parListMaSl;
	unsigned char ParIndex;
	unsigned short PrelimPqOutN;
	struct ACP10PRB06_typ parListTab[256];
	struct ACP10DATBL_typ parList;
	unsigned short parSeqI;
	unsigned short parI;
	struct ACP10PRB06_typ parSeqTab[14];
	struct ACP10DATBL_typ parSeq;
	struct MC_BR_InitParSequ MC_BR_InitParSequ_0;
	struct MC_BR_DownloadParSequ MC_BR_DownloadParSequ_0;
	struct MC_BR_InitParList MC_BR_InitParList_0;
	struct MC_BR_InitParList MC_BR_InitParList_1;
	struct MC_BR_WriteParID MC_BR_WriteParID_0;
	struct MC_BR_InitCyclicRead MC_BR_InitCyclicRead_pAct;
	struct MC_BR_InitCyclicRead MC_BR_InitCyclicRead_nAct;
	struct MC_BR_InitCyclicRead MC_BR_InitCyclicRead_ContStatus;
	struct MC_BR_InitCyclicWrite MC_BR_InitCyclicWrite_pSet;
	struct MC_BR_InitCyclicWrite MC_BR_InitCyclicWrite_nSet;
	struct MC_BR_InitCyclicWrite MC_BR_InitCyclicWrite_nFF;
	struct MC_BR_InitCyclicWrite MC_BR_InitCyclicWrite_ContByte;
	struct MC_BR_InitMasterParIDTransfer MC_BR_InitMasterParIDTransfer_0;
	struct MC_BR_ReadParID MC_BR_ReadParID_0;
	plcbit executeOld[19];
	struct MTHydPumpIntSwitchoverType SwitchOver;
	struct MTHydPump_internal_async_typ async;
	float LeakageCompensationSpeed;
	unsigned short ControllerMode;
	signed long StatusID_Old;
	struct MTHydPump_PreFilterType PreFilter[2];
	plcbit ParameterCheckDone;
	plcbit InitializationDone;
	unsigned short UpdateCounter;
	unsigned short CheckParaSetCounter;
	unsigned short InitCounter;
	unsigned short pQContStatus;
	struct RTInfo RTInfo_inst;
	plcbit IsStandAlone;
	unsigned short StepDisable;
	plcbit NewValidParameter;
	plcbit NotDisabled;
	plcbit ResetMC_BR_FB_Done;
	float Timer;
	float MaxReverseTime;
} MTHydPumpControllerInternalType;

typedef struct MTHydPumpPowerMeterParType
{	float VolumetricEfficiency;
	float DisplacementVolume;
	unsigned short WindowLengthMechanicalPower;
	unsigned short WindowLengthElectricalPower;
} MTHydPumpPowerMeterParType;

typedef struct PowerMeterMovAvg_internal_typ
{	plcstring statusTxt[101];
	float Ts;
	plcbit paraValid;
	plcbit update;
	unsigned short n;
	double sum;
	float buffer[128];
	unsigned long pBuffer;
	unsigned short i_act;
	unsigned short i_old;
	unsigned short base;
	unsigned short bufferLength;
	plcbit bufferFull;
	plcbit memAllocated;
	plcbit update_old;
	plcbit enable_old;
	unsigned long Bootkey;
} PowerMeterMovAvg_internal_typ;

typedef struct PowerMeterMovAvg_typ
{	plcbit enable;
	unsigned short window;
	plcbit update;
	float u;
	unsigned short status;
	float y;
	struct PowerMeterMovAvg_internal_typ internal;
} PowerMeterMovAvg_typ;

typedef struct MTHydPumpPowerMeterInternalType
{	unsigned long CycleTime;
	float VolumetricEfficiency;
	float DisplacementVolume;
	plcbit UpdateOld;
	plcbit EnableOld;
	plcbit ParametersValid;
	struct MC_BR_InitCyclicRead MC_BR_InitCyclicRead_MPow;
	struct MC_BR_InitCyclicRead MC_BR_InitCyclicRead_EPow;
	unsigned short Step;
	unsigned short StepOld;
	float MechanicalPower;
	float ElectricalPower;
	plcbit ExecuteOld[2];
	unsigned short StepDisable;
	plcbit NotDisabled;
	plcbit ResetMC_BR_FB_Done;
	plcbit InitializationDone;
	struct PowerMeterMovAvg_typ movAvgPmech;
	struct PowerMeterMovAvg_typ movAvgPel;
	struct RTInfo RTInfo_inst;
} MTHydPumpPowerMeterInternalType;

typedef struct MTHydPumpDriveParType
{	float OffsetAmbientTemperature;
	float OffsetSpeedLimit;
	float OffsetTorqueLimit;
	float OffsetTorqueLimitJunction;
	float NominalTorque;
	float NominalTorqueJunction;
	float MaxTorque;
	float NominalSpeed;
	float MaxSpeed;
} MTHydPumpDriveParType;

typedef struct MTHydPumpPumpParType
{	float HysteresisPumpFlushing;
	float OffsetPumpTorqueLimit;
	float OffsetMinPumpSpeed;
} MTHydPumpPumpParType;

typedef struct MTHydPumpProtectionAdvParType
{	enum MTHydPumpStandaloneEnum ModeStandalone;
	unsigned short MaxSpeedParID;
	struct MTHydPumpDriveParType DriveParameters;
	struct MTHydPumpPumpParType PumpParameters;
} MTHydPumpProtectionAdvParType;

typedef struct MTHydPumpProtectionTransferType
{	float load_border_speed;
	float load_border_torque;
	float load_border_torque_junction;
	float max_speed;
	float max_torque;
	float nom_speed;
	float nom_torque;
	float nom_torque_junction;
	float sc_load_cont_curr;
	float sc_load_peak_curr;
	float sc_load_power;
	float sc_temp_headsink;
	float sc_temp_junction;
	float sc_temp_motor;
	float sc_temp_motor_model;
	float temp_ambient;
} MTHydPumpProtectionTransferType;

typedef struct MTHydPumpProtectionLoadType
{	float temp_headsink_lim;
	float motor_wind_temp_max;
	float temp_motor_model_lim;
	float temp_junction_lim;
	float motor_speed_rated;
	float motor_speed_max;
	float motor_current_rated;
	float acopos_current_rated;
	float motor_torque_const;
	float lim_t1_pos;
	float acopos_power_rated;
	float motor_stator_resistance;
	float temp_junction_delta_max;
	float f_switch;
} MTHydPumpProtectionLoadType;

typedef struct MTHydPumpCalcPumpParaType
{	float k1;
	float k2;
	float k3;
	float k4;
	float pBorder1;
	float pBorder2;
	float pBorder3;
	float pBorder4;
	float nBorder1;
	float nBorder2;
	float nBorder3;
	float nBorder4;
	float kS;
	float kSt;
	float kA;
	float nmin;
	float nFlush;
	float nFlushMin;
} MTHydPumpCalcPumpParaType;

typedef struct MTHydPumpDriveProtectIntType
{	float CycleTime;
	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	struct MTHydPumpPumpParType AdvancedPumpParameters;
	struct MTHydPumpDriveParType AdvancedDriveParameters;
	struct MTHydPumpProtectionTransferType acp_transfer;
	struct MTHydPumpProtectionLoadType acp_load;
	float OffsetPeakCurrent;
	float OffsetContinuousCurrent;
	float OffsetPower;
	unsigned long tlim_add_isq_parid;
	unsigned short tlim_add_isq_value;
	unsigned long sctrl_add_isq_parid;
	float sctrl_add_isq_value;
	unsigned long lim_parid_array[14];
	float lim_value_array[14];
	struct MTHydPumpCalcPumpParaType calc_pump_par;
	unsigned char torqueOverride[4];
	unsigned char pumpMode;
	unsigned short PumpProtection;
	plcbit standalone;
	struct ACP10PRB06_typ parTable[100];
	struct ACP10DATBL_typ parTableAttributes;
	unsigned short rawACPdata;
	unsigned short step;
	unsigned short stepInitAcopos;
	struct MC_BR_InitCyclicRead fubMC_BR_InitCyclicRead_0;
	struct MC_BR_InitParList fubMC_BR_InitParList_0;
	struct MC_BR_ReadParID fubMC_BR_ReadParID_tlim_add;
	struct MC_BR_ReadParID fubMC_BR_ReadParID_sctrl_add;
	struct MC_BR_ReadParID fubMC_BR_ReadParID_TempMotor;
	struct MC_BR_ReadParID fubMC_BR_ReadParID_LoadMM;
	struct MC_BR_ReadParID fubMC_BR_ReadParID_MMMode;
	struct MC_BR_ReadParID fubMC_BR_ReadParID_array[14];
	struct MC_BR_WriteParID fubMC_BR_WriteParID_speed;
	struct MC_BR_WriteParID fubMC_BR_WriteParID_torque;
	struct MC_BR_WriteParID fubMC_BR_WriteParID_torqueOffset;
	struct MC_BR_WriteParID fubMC_BR_WriteParID_TempMM;
	struct MC_BR_WriteParID fubMC_BR_WriteParID_LoadMM;
	struct MC_ReadStatus fubMC_ReadStatus_0;
	plcbit init_done;
	plcbit flagLimitSpeed;
	plcbit flagLimitTorque;
	float pumpLoadCounter;
	plcbit torqueLimitOld;
	plcbit TempModelInitialized;
	unsigned short MotorModelMode;
	float MotorTemperatureOld;
	float TempJunctionDeltaMaxPercent;
	float TempDeviation;
	float LoadMotorModelWrite;
	unsigned char TempModelInitStep;
	unsigned short MaxSpeedParID;
	float AmbientTemperature;
	unsigned short DisableStep;
	plcbit ResetAllPLCOpenFubsDone;
	float Timer;
	plcbit RecoverTempModel;
} MTHydPumpDriveProtectIntType;

typedef struct MTHydPumpTuningConfigType
{	float MaxPumpPressure;
	float MaxPumpSpeed;
	float OperationPointSpeed;
	float Phase1ExcitationSpeed;
	float Phase1Time;
	float WaitingTime;
	float Phase3ExcitationSpeed;
	float Phase3Time;
} MTHydPumpTuningConfigType;

typedef struct MTHydPumpTuningCtrlConfigType
{	float RiseTime;
	enum MTHydPumpControllerEnum ControllerType;
	float DerivativeTimeScale;
	float FilterTimeScale;
	plcbit ActivateCompensationFilter;
} MTHydPumpTuningCtrlConfigType;

typedef struct MTHydPumpTuningTestType
{	float SetSpeed[5];
	float SetPressure[5];
	float DurationTime[5];
} MTHydPumpTuningTestType;

typedef struct MTHydPumpTuningPlantParType
{	float Par1;
	float Par2;
	float Par3;
	float Par4;
	float Par5;
	float Par6;
	float Par7;
} MTHydPumpTuningPlantParType;

typedef struct SineSweepInternalType
{	float StartFrequency;
	float EndFrequency;
	float AntiResonanceMagnitude_dB;
	float AntiResonanceMagnitude;
	float ResonanceMagnitude_dB;
	float ResonanceMagnitude;
	signed short AntiResonanceIndex;
	signed short ResonanceIndex;
	float FrequencyNum;
	float FrequencyDen;
	float DampingNum;
	float DampingDen;
	unsigned long SweepTimer;
	float WaitingTime;
	float Phase3Time;
	plcbit TimeFinished;
} SineSweepInternalType;

typedef struct StepResponseInternalType
{	unsigned long StepResponseTimer;
	plcbit NegStepDone;
	plcbit PosStepDone;
	float StepResponseTime;
} StepResponseInternalType;

typedef struct PressureSettlingInternalType
{	float MeanDuration;
	signed short NbOfElementsMean;
	signed short Counter;
	float MeanPressureOld;
	float SettlingTime;
	float MeanPressure;
} PressureSettlingInternalType;

typedef struct TuningParametersInternalType
{	float PlantGainIntegrator;
	float OvershootRequired;
	float DerivativeTime;
	float FilterTime;
	float MagnitudeMargin;
	unsigned long TuningTestDurationTimer;
	float TuningTestDurationTime;
	float TuningTestTime;
	unsigned long TuningTestTimer;
	float ActMaxMinPumpPressure;
	float PressureStepStart[5];
	float PressureStepHeight[5];
	float RiseTime[5];
	float Overshoot[5];
	unsigned char TestSignalsCounter;
} TuningParametersInternalType;

typedef struct MTHydPumpLSQInternalParType
{	double PMatrix[100];
	double DataVector[10];
	double ParameterVector[10];
	float PlantOutputOffset;
	unsigned short Samples;
	unsigned short CntDownSampling;
	plcbit StartOld;
} MTHydPumpLSQInternalParType;

typedef struct MTHydPumpLSQParametersType
{	unsigned char SystemOrder;
	unsigned short NumberOfSamples;
	unsigned short DownSampling;
	float CycleTime;
	float WeightingFactor;
	float PlantInputOffset;
} MTHydPumpLSQParametersType;

typedef struct asyncBodeType
{	unsigned long Status;
	plcbit Done;
	enum MTHydPumpTuningAsyncEnum Step;
	plcbit Active;
	struct MTSystemBode BodeFB;
	unsigned long SysReference4thOrder;
} asyncBodeType;

typedef struct asyncCtrlCalcType
{	unsigned long Status;
	plcbit Done;
	enum MTHydPumpTuningAsyncEnum Step;
	plcbit Active;
	struct MTAdvancedLoopShaping LS_FB;
} asyncCtrlCalcType;

typedef struct asyncLSQType
{	signed long NumberOfSavedValues;
	float Input[10001];
	float Output[10001];
	unsigned long Status;
	plcbit Done;
	enum MTHydPumpTuningAsyncEnum Step;
	float Denominator[6];
	float Numerator[6];
	unsigned long StatusLSQ;
	plcbit Active;
	struct MTHydPumpLSQInternalParType LSQInternalParameters;
	float EstimationDeviation;
	float SampleTime;
	struct MTHydPumpLSQParametersType LSQ4thOrderParameters;
	signed long i;
} asyncLSQType;

typedef struct MTHydPumpTuningInternalType
{	struct MTHydPumpTuningConfigType TuningConfiguration;
	struct MTHydPumpTuningCtrlConfigType ControllerConfiguration;
	struct MTHydPumpTuningPlantParType PlantParameters;
	plcbit UpdateOld;
	plcbit EnableOld;
	plcbit StartTestOld;
	plcbit StartTuningOld;
	plcbit StartControllerCalculationOld;
	plcbit AbortOld;
	float CycleTime;
	plcbit ParametersValid;
	plcbit InOperationPoint;
	plcbit PT1CalculationDownDone;
	plcbit PT1CalculationDone;
	plcbit ResonanceFreqCalcSuccessful;
	plcbit ResonanceFreqCalcNotSuccessful;
	plcbit ValidControllerParameters;
	plcbit ValidControllerTestParameters;
	plcbit ControllerTestDone;
	plcbit StartTuningJustIdentified;
	plcbit IdentificationWasOnceSuccessful;
	plcbit WithTuningTest;
	enum MTHydPumpTuningCalcContStateEnum CalcControllerState;
	struct SineSweepInternalType SineSweep;
	struct StepResponseInternalType StepResponse;
	struct PressureSettlingInternalType PressureSettling;
	struct TuningParametersInternalType TuningParametersInternal;
	struct MTSystemBode BodePT1;
	struct MTTransferFcnType TransferFcn4thOrderSysRef;
	unsigned long SysReference4thOrder;
	struct MTSystemTransferFcn TransferFcnPT1;
	struct MTSystemTransferFcn TransferFcnDT1;
	struct MTHydPumpLSQInternalParType LSQInternalParameters;
	signed long IdentIndexSweep;
	struct MTHydPumpLSQParametersType LSQ4thOrderParameters;
	struct MTHydPumpLSQParametersType LSQPT1Parameters;
	plcbit TuningParametersValid;
	plcbit TuningTestParametersValid;
	unsigned long IdentificationTimer;
	signed short StatusLSQ;
	float EstimationDeviation;
	float SampleTime;
	float Denominator[6];
	float Numerator[6];
	unsigned long TaskIdentCtrlCalc;
	unsigned long TaskIdentBode;
	unsigned long TaskIdent;
	struct asyncBodeType asyncBode;
	enum MTHydPumpTuningSystemIdentEnum SystemIdentStep;
	struct asyncCtrlCalcType asyncCtrlCalc;
	struct asyncLSQType asyncLSQ;
	struct MTHydPumpTuningTestType TestSignal;
} MTHydPumpTuningInternalType;

typedef struct MTHydPumpSimulationModel
{
	/* VAR_INPUT (analog) */
	double StartCylinderPosition;
	struct MTHydPumpSimCylinderParType CylinderParameters;
	struct MTHydPumpSimValveParType ValveParameters;
	struct MTHydPumpSimPumpParType PumpParameters;
	struct MTHydPumpSimSystemParType SystemParameters;
	signed char ValveSignal;
	float PumpSpeed;
	float ProcessForce;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float CylinderPosition;
	float CylinderVelocity;
	float PumpPressure;
	float CylinderPressure1;
	float CylinderPressure2;
	/* VAR (analog) */
	struct MTHydPumpSimulationInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Busy;
	plcbit Active;
	plcbit Error;
} MTHydPumpSimulationModel_typ;

typedef struct MTHydPumpController
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	unsigned long MasterAxis;
	struct MTHydPumpControllerConfigType Configuration;
	struct MTHydPumpControllerParType Parameters;
	struct MTHydPumpSwitchoverParType SwitchoverParameters;
	float SetPumpPressure;
	float SetPumpSpeed;
	enum MTHydPumpControllerModeEnum ControllerMode;
	unsigned char SelectControllerParSet;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float ActPumpPressure;
	float ActPumpSpeed;
	unsigned char SelectedControllerParSet;
	struct MTHydPumpSwitchoverInfoType SwitchoverInfo;
	/* VAR (analog) */
	struct MTHydPumpControllerInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit EnableSwitchover;
	plcbit ForceSwitchover;
	/* VAR_OUTPUT (digital) */
	plcbit Busy;
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit InPressureControl;
	plcbit InSpeedControl;
	plcbit InMinimumPressureControl;
	plcbit BiQuadFilterActive;
} MTHydPumpController_typ;

typedef struct MTHydPumpDriveProtection
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	float* LoadMotorModel;
	float* MotorTemperature;
	enum MTHydPumpPumpProtectionEnum PumpProtection;
	struct MTHydPumpProtectionAdvParType AdvancedParameters;
	float ActPumpPressure;
	float ActPumpSpeed;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	enum MTHydPumpMaxLoadEnum ActMaxLoad;
	float ActMaxLoadPercent;
	float ActTorqueLimit;
	float ActSpeedLimit;
	float ActPumpLoad;
	float MinPumpFlushingSpeed;
	/* VAR (analog) */
	struct MTHydPumpDriveProtectIntType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit PumpFlushingActivated;
	/* VAR_OUTPUT (digital) */
	plcbit Busy;
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit InProtection;
	plcbit PumpFlushingRequired;
	plcbit TempModelInitialized;
} MTHydPumpDriveProtection_typ;

typedef struct MTHydPumpPowerMeter
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	struct MTHydPumpPowerMeterParType Parameters;
	float ActPumpPressure;
	float ActPumpSpeed;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float ElectricalPower;
	float MechanicalPower;
	float HydraulicPower;
	/* VAR (analog) */
	struct MTHydPumpPowerMeterInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTHydPumpPowerMeter_typ;

typedef struct MTHydPumpPressureTuning
{
	/* VAR_INPUT (analog) */
	struct MTHydPumpTuningConfigType TuningConfiguration;
	float ActPumpPressure;
	float ActPumpSpeed;
	struct MTHydPumpTuningCtrlConfigType ControllerConfiguration;
	struct MTHydPumpTuningTestType TestSignal;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float SetPumpPressure;
	float SetPumpSpeed;
	struct MTPIDParametersType Controller;
	struct MTHydPumpBiQuadFilterType CompensationFilter;
	enum MTHydPumpTuningStateEnum TuningState;
	/* VAR (analog) */
	struct MTHydPumpTuningInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit StartTuning;
	plcbit StartControllerCalculation;
	plcbit StartTest;
	plcbit Abort;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit TuningDone;
	plcbit ControllerCalculationDone;
	plcbit TestDone;
	plcbit FilterRecommended;
} MTHydPumpPressureTuning_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTHydPumpSimulationModel(struct MTHydPumpSimulationModel* inst);
_BUR_PUBLIC void MTHydPumpController(struct MTHydPumpController* inst);
_BUR_PUBLIC void MTHydPumpDriveProtection(struct MTHydPumpDriveProtection* inst);
_BUR_PUBLIC void MTHydPumpPowerMeter(struct MTHydPumpPowerMeter* inst);
_BUR_PUBLIC void MTHydPumpPressureTuning(struct MTHydPumpPressureTuning* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTHYDPUMP_ */

