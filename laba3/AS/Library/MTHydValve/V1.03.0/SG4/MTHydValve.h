/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTHYDVALVE_
#define _MTHYDVALVE_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <brsystem.h>
#include <sys_lib.h>
#include <MTTypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define mtHYD_WRN_IDENT_CURVE_INVALID (-2131750843)
 #define mtHYD_WRN_IDENT_CYLVEL_INVALID (-2131750840)
 #define mtHYD_ERR_IDENT_CYLVEL_INVALID (-1058009016)
 #define mtHYD_WRN_IDENT_VALVESIG_INVALID (-2131750841)
 #define mtHYD_ERR_IDENT_VALVESIG_INVALID (-1058009017)
 #define mtHYD_ERR_IDENT_WORK_ENVELOPE (-1058009018)
 #define mtHYD_ERR_IDENT_ZEROPOINTDRIFT (-1058009019)
 #define mtHYD_WRN_IDENT_PRESSUREDROP (-2131750844)
 #define mtHYD_ERR_IDENT_PRESSURE_INVALID (-1058009020)
 #define mtHYD_ERR_IDENT_POSITION_INVALID (-1058009021)
 #define mtHYD_WRN_IDENT_NO_UPDATE (-2131750845)
 #define mtHYD_WRN_IDENT_ACCURACY_INVALID (-2131750832)
 #define mtHYD_WRN_IDENT_NEGDIR_INVALID (-2131750833)
 #define mtHYD_WRN_IDENT_POSDIR_INVALID (-2131750834)
 #define mtHYD_WRN_IDENT_LIMITS_INVALID (-2131750835)
 #define mtHYD_WRN_IDENT_SUPPLY_INVALID (-2131750836)
 #define mtHYD_WRN_IDENT_MDATA_INVALID (-2131750837)
 #define mtHYD_WRN_IDENT_MODE_INVALID (-2131750838)
 #define mtHYD_ERR_IDENT_ACCURACY_INVALID (-1058009008)
 #define mtHYD_ERR_IDENT_NEGDIR_INVALID (-1058009009)
 #define mtHYD_ERR_IDENT_POSDIR_INVALID (-1058009010)
 #define mtHYD_ERR_IDENT_LIMITS_INVALID (-1058009011)
 #define mtHYD_ERR_IDENT_SUPPLY_INVALID (-1058009012)
 #define mtHYD_ERR_IDENT_MDATA_INVALID (-1058009013)
 #define mtHYD_ERR_IDENT_MODE_INVALID (-1058009014)
 #define mtHYD_WRN_CYL_PRESSURE_INVALID (-2131750846)
 #define mtHYD_WRN_FRICTION_NEGATIVE (-2131750847)
 #define mtHYD_WRN_PUMP_PRESSURE_HIGH (-2131750848)
 #define mtHYD_WRN_PUMP_PRESSURE_NEGATIVE (-2131750849)
 #define mtHYD_ERR_MAX_FORCE_INVALID (-1058009038)
 #define mtHYD_WRN_MAX_FORCE_INVALID (-2131750862)
 #define mtHYD_ERR_ACT_CYL_PRESSURE1_NEG (-1058009027)
 #define mtHYD_ERR_ACT_CYL_PRESSURE2_NEG (-1058009028)
 #define mtHYD_ERR_PUMP_PRESSURE_INVALID (-1058009043)
 #define mtHYD_WRN_GAIN_SETCYLVEL_INVALID (-2131750867)
 #define mtHYD_WRN_POSITION_MDATA_INVALID (-2131750868)
 #define mtHYD_WRN_FORCE_MDATA_INVALID (-2131750865)
 #define mtHYD_ERR_FORCE_CYCLIC_INVALID (-1058009036)
 #define mtHYD_ERR_FORCE_MDATA_INVALID (-1058009041)
 #define mtHYD_WRN_FORCE_PAR_INVALID (-2131750863)
 #define mtHYD_ERR_FORCE_PAR_INVALID (-1058009037)
 #define mtHYD_WRN_SIM_SYSPAR_INVALID (-2131750815)
 #define mtHYD_WRN_SIM_VALVEPAR_INVALID (-2131750813)
 #define mtHYD_WRN_SIM_CYLPAR_INVALID (-2131750814)
 #define mtHYD_ERR_SIM_SYSPAR_INVALID (-1058008994)
 #define mtHYD_ERR_SIM_CYCLIC_INVALID (-1058008991)
 #define mtHYD_ERR_SIM_VALVEPAR_INVALID (-1058008992)
 #define mtHYD_ERR_SIM_CYLPAR_INVALID (-1058008993)
 #define mtHYD_ERR_NODES_NOT_SORTED (-1058009024)
 #define mtHYD_ERR_NB_POINTS_INVALID (-1058009025)
 #define mtHYD_ERR_ACT_CYL_PRESSURE1_NEG (-1058009027)
 #define mtHYD_ERR_ACT_CYL_PRESSURE2_NEG (-1058009028)
 #define mtHYD_ERR_GAIN_SETCYLVEL_INVALID (-1058009035)
 #define mtHYD_ERR_PUMP_PRESSURE_INVALID (-1058009043)
 #define mtHYD_ERR_POSITION_MDATA_INVALID (-1058009044)
 #define mtHYD_WRN_NODES_NOT_SORTED (-2131750852)
 #define mtHYD_WRN_NB_POINTS_INVALID (-2131750853)
 #define mtHYD_WRN_FILTER_TIME_TOO_LOW (-2131750854)
 #define mtHYD_WRN_GAIN_SETCYLVEL_INVALID (-2131750867)
 #define mtHYD_WRN_POSITION_MDATA_INVALID (-2131750868)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_CURVE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_CYLVEL_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_CYLVEL_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_VALVESIG_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_VALVESIG_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_WORK_ENVELOPE;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_ZEROPOINTDRIFT;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_PRESSUREDROP;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_PRESSURE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_POSITION_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_NO_UPDATE;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_ACCURACY_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_NEGDIR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_POSDIR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_LIMITS_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_SUPPLY_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_MDATA_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_IDENT_MODE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_ACCURACY_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_NEGDIR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_POSDIR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_LIMITS_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_SUPPLY_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_MDATA_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_IDENT_MODE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_CYL_PRESSURE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_FRICTION_NEGATIVE;
 _GLOBAL_CONST signed long mtHYD_WRN_PUMP_PRESSURE_HIGH;
 _GLOBAL_CONST signed long mtHYD_WRN_PUMP_PRESSURE_NEGATIVE;
 _GLOBAL_CONST signed long mtHYD_ERR_MAX_FORCE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_MAX_FORCE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_ACT_CYL_PRESSURE1_NEG;
 _GLOBAL_CONST signed long mtHYD_ERR_ACT_CYL_PRESSURE2_NEG;
 _GLOBAL_CONST signed long mtHYD_ERR_PUMP_PRESSURE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_GAIN_SETCYLVEL_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_POSITION_MDATA_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_FORCE_MDATA_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_FORCE_CYCLIC_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_FORCE_MDATA_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_FORCE_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_FORCE_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_SIM_SYSPAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_SIM_VALVEPAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_SIM_CYLPAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_SIM_SYSPAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_SIM_CYCLIC_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_SIM_VALVEPAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_SIM_CYLPAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_NODES_NOT_SORTED;
 _GLOBAL_CONST signed long mtHYD_ERR_NB_POINTS_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_ACT_CYL_PRESSURE1_NEG;
 _GLOBAL_CONST signed long mtHYD_ERR_ACT_CYL_PRESSURE2_NEG;
 _GLOBAL_CONST signed long mtHYD_ERR_GAIN_SETCYLVEL_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_PUMP_PRESSURE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_POSITION_MDATA_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_NODES_NOT_SORTED;
 _GLOBAL_CONST signed long mtHYD_WRN_NB_POINTS_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_FILTER_TIME_TOO_LOW;
 _GLOBAL_CONST signed long mtHYD_WRN_GAIN_SETCYLVEL_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_POSITION_MDATA_INVALID;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum MTHydValveCoordinateSystemEnum
{	mtHYDVALVE_CYLCHAMBER1_POSDIR = 0,
	mtHYDVALVE_CYLCHAMBER2_POSDIR = 1
} MTHydValveCoordinateSystemEnum;

typedef enum MTHydValveCurveEnum
{	mtHYDVALVE_NOMINAL_CURVE = 0,
	mtHYDVALVE_VELOCITY_CURVE = 1
} MTHydValveCurveEnum;

typedef enum MTHydValveIdentMainStates
{	STATE_STANDSTILL,
	STATE_STARTUP,
	STATE_POS_ROUGHSCAN,
	STATE_NEG_ROUGHSCAN,
	STATE_POS_FINESCAN,
	STATE_NEG_FINESCAN,
	STATE_BUILDVALVECURVE,
	STATE_MOVEMIDDLE,
	STATE_STOP,
	STATE_ERROR
} MTHydValveIdentMainStates;

typedef enum MTHydValveIdentMinMeasModeEnum
{	mtHYDVALVE_MINMEAS_VELOCITY = 0,
	mtHYDVALVE_MINMEAS_VALVESIGNAL = 1
} MTHydValveIdentMinMeasModeEnum;

typedef enum MTHydValveIdentModeEnum
{	mtHYDVALVE_IDENT_AUTOMATIC = 0,
	mtHYDVALVE_IDENT_FIX_VALVESIGNAL = 1,
	mtHYDVALVE_IDENT_CYL_VELOCITIES = 2
} MTHydValveIdentModeEnum;

typedef enum MTHydValveIntegrationModeEnum
{	mtHYDVALVE_INTEGRATION_MODE_OFF = 0,
	mtHYDVALVE_INTEGRATION_MODE_1 = 1,
	mtHYDVALVE_INTEGRATION_MODE_2 = 2
} MTHydValveIntegrationModeEnum;

typedef enum MTHydValveLookUpModeEnum
{	mt_LOOKUP_CONST_END_VALUE = 0,
	mt_LOOKUP_LIN_EXTRAPOLATION = 1
} MTHydValveLookUpModeEnum;

typedef enum MTHydValvePressureSourceEnum
{	mtHYDVALVE_CONST_PRESSURE_SOURCE = 0,
	mtHYDVALVE_SERVO_PUMP = 1
} MTHydValvePressureSourceEnum;

typedef enum MTHydValveValveCylConnectionEnum
{	mtHYDVALVE_PORT_A_TO_CYLCHAMBER1 = 0,
	mtHYDVALVE_PORT_A_TO_CYLCHAMBER2 = 1
} MTHydValveValveCylConnectionEnum;

typedef struct MTHydValveForceConMachDataType
{	float MaxPumpPressure;
	float TankPressure;
	float CylinderArea1;
	float CylinderArea2;
	float ValveNominalVolumeFlowPA;
	float ValveNominalVolumeFlowPB;
	float ValveNominalPressureDrop;
	float CylinderStroke;
	float BulkModulus;
	float DeadVolume1;
	enum MTHydValveCoordinateSystemEnum CoordinateSystem;
	enum MTHydValveValveCylConnectionEnum ValveCylinderConnection;
	float DeadVolume2;
} MTHydValveForceConMachDataType;

typedef struct MTHydValveForceParameterIntType
{	float GainFeedforwardVelocity;
	struct MTHydValveForceConMachDataType MachineData;
	float GainFeedforwardForce;
} MTHydValveForceParameterIntType;

typedef struct MTHydValvePIDOutputType
{	float ProportionalPart;
	float IntegrationPart;
	float DerivativePart;
	float PIDOut;
} MTHydValvePIDOutputType;

typedef struct MTHydValveInternalPIDParaType
{	float Gain;
	float IntegrationTimePositive;
	float IntegrationTimeNegative;
	float DerivativeTime;
	float FilterTime;
	float MinIntegrationPartValue;
	float MaxIntegrationPartValue;
	float MinOut;
	float MaxOut;
	float MaxForce;
} MTHydValveInternalPIDParaType;

typedef struct MTHydValveForceConInternalType
{	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	float CycleTime;
	struct MTHydValveForceParameterIntType Parameters;
	plcbit ServoCorrectionEnabled;
	plcbit EnableIntegrationPartOld;
	struct MTHydValvePIDOutputType PIDOutput;
	float ControlErrorOld;
	float LastIntegrationPart;
	float ValveOpeningForceServoCorrection;
	unsigned long dFyServo_StatusID;
	unsigned long vyServo_StatusID;
	unsigned long PIDAdv_StatusID;
	float ValveOpeningVyServoCorrection;
	float ControlError;
	float pPos;
	float pNeg;
	float Aneg;
	float Apos;
	float Qnom_neg;
	float Qnom_pos;
	struct MTHydValveInternalPIDParaType PIDParameters;
	float Fmax;
	plcbit CyclicError;
	enum MTPIDIntegrationEnum IntegrationStatus;
	plcbit ResetIntegrationPartOld;
} MTHydValveForceConInternalType;

typedef struct MTHydValveForceConPIDParType
{	float Gain;
	float IntegrationTime;
	float DerivativeTime;
	float FilterTime;
	float MaxForce;
} MTHydValveForceConPIDParType;

typedef struct MTHydValveForceConParType
{	float GainFeedforwardVelocity;
	struct MTHydValveForceConPIDParType PID;
	struct MTHydValveForceConMachDataType MachineData;
	float GainFeedforwardForce;
} MTHydValveForceConParType;

typedef struct MTHydValveIdentBinarySearchType
{	unsigned char Step;
	plcbit Done;
	unsigned char Counter;
	double Timer;
	unsigned char MaxCycles;
	double StartPosition;
	double EndPosition;
	double ActCylinderVelocity;
	double SetCylinderVelocity;
	double ActMaxValveTime;
	double SetMaxValveTime;
	plcbit NegativeVelocityScan;
	plcbit ValveSignalLowerZeroPoint;
	double ValveSignal;
	double ValveSignalLowLimit;
	double ValveSignalHighLimit;
	double StopDistance;
	unsigned char CounterBrakes;
} MTHydValveIdentBinarySearchType;

typedef struct MTHydValveIdentCharPointType
{	double MinMeasValveSignal;
	double MinMeasCylinderVelocity;
	double MaxMeasValveSignal;
	double MaxMeasCylinderVelocity;
} MTHydValveIdentCharPointType;

typedef struct MTHydValveIdentCommonType
{	plcbit Inverted;
	plcbit NegativeVelocityScanFirst;
	double FilterTimeVelocity;
	double SlewRateFall;
	double SlewRateRise;
	double CycleTime;
	double ZeroPointCylinderVelocity;
	double MoveBackValveSignalPos;
	double MoveBackValveSignalNeg;
	struct MTHydValveIdentCharPointType CharPointsNeg;
	struct MTHydValveIdentCharPointType CharPointsPos;
	double Apos;
	double Aneg;
	plcbit ResolveLeakage;
} MTHydValveIdentCommonType;

typedef struct MTHydValveIdentAccuracyType
{	float SettlingTime;
	float MeasureTime;
	float WaitingTime;
	float PressureBuildWaitingTime;
	float PositionDriftWaitingTime;
	float AllowedPositionDrift;
	float SlewRateRiseTime;
	float SlewRateFallTime;
} MTHydValveIdentAccuracyType;

typedef struct MTHydValveIdentDirectionParType
{	enum MTHydValveIdentModeEnum Mode;
	unsigned char NumPoints;
	enum MTHydValveIdentMinMeasModeEnum MinMeasMode;
	float MinMeasValveSignal;
	float MinMeasCylinderVelocity;
	float ValveSignals[23];
	float CylinderVelocities[23];
	float MoveBackCylinderVelocity;
} MTHydValveIdentDirectionParType;

typedef struct MTHydValveIdentMeasResultsType
{	double ValveSignal;
	double CylinderVelocity;
	double AvgPumpPressure;
	double AvgCylinderPressure1;
	double AvgCylinderPressure2;
	double AvgPumpSpeed;
} MTHydValveIdentMeasResultsType;

typedef struct MTHydValveIdentFineScanType
{	unsigned char Step;
	plcbit Done;
	plcbit Error;
	plcbit Warning;
	signed long StatusID;
	double Timer;
	unsigned char NumPoints;
	unsigned char Counter;
	double StartPosition;
	double EndPosition;
	struct MTHydValveIdentMeasResultsType MeasResults[23];
	unsigned char CounterBrakes;
	double StopDistance;
} MTHydValveIdentFineScanType;

typedef struct MTHydValveIdentInfoType
{	float CylinderVelocities[50];
	float ValveNominalVolumeFlow[50];
	float PumpPressure[50];
	float PumpSpeed[50];
	float CylinderPressure1[50];
	float CylinderPressure2[50];
} MTHydValveIdentInfoType;

typedef struct MTHydValveIdentMachDataType
{	float CylinderArea1;
	float CylinderArea2;
	float MinValveSignalValue;
	float ValveSignalZeroPoint;
	float MaxValveSignalValue;
	float ValveNominalPressureDrop;
	enum MTHydValveValveCylConnectionEnum ValveCylinderConnection;
	enum MTHydValveCoordinateSystemEnum CoordinateSystem;
} MTHydValveIdentMachDataType;

typedef struct MTHydValveIdentSupplyParType
{	enum MTHydValvePressureSourceEnum PressureSource;
	float SetPumpSpeed;
	float SetPumpPressure;
	float MaxAllowedPumpPressureDrop;
} MTHydValveIdentSupplyParType;

typedef struct MTHydValveIdentLimitsParType
{	float MinAllowedCylinderPosition;
	float MaxAllowedCylinderPosition;
} MTHydValveIdentLimitsParType;

typedef struct MTHydValveIdentParType
{	enum MTHydValveCurveEnum ValveCurveMode;
	struct MTHydValveIdentMachDataType MachineData;
	struct MTHydValveIdentSupplyParType PressureSupply;
	struct MTHydValveIdentLimitsParType Limits;
	struct MTHydValveIdentDirectionParType PositiveDirection;
	struct MTHydValveIdentDirectionParType NegativeDirection;
	struct MTHydValveIdentAccuracyType AccuracySettings;
} MTHydValveIdentParType;

typedef struct MTHydValveIdentIOType
{	double ActCylinderPosition;
	double ActCylinderVelocity;
	double ActCylinderPressure1;
	double ActCylinderPressure2;
	double ActPumpPressure;
	double ActPumpSpeed;
	double ValveSignal;
	double SetPumpPressure;
	double SetPumpSpeed;
} MTHydValveIdentIOType;

typedef struct MTHydValveIdentStartUpType
{	unsigned char Step;
	plcbit Done;
	plcbit Error;
	signed long StatusID;
	double Timer;
	unsigned char Counter;
	plcbit CheckDirectionDone;
	double PositionDrift;
	double ActCylinderPositionOld;
	double StartPosition;
	double EndPosition;
	double SlewRate;
	double MaxAbsValveSignalDuringCheck;
	double DistanceToStart;
	double DistanceToEnd;
	plcbit NearStart;
	plcbit MoveBackDone;
	plcbit MinMeasDone;
	plcbit GetCharPointsDone;
} MTHydValveIdentStartUpType;

typedef struct MTHydValveIdentMovePositionType
{	unsigned char Step;
	plcbit Done;
	plcbit CmdStop;
	double Timer;
	double ValveSignal;
	plcbit PositiveMovement;
	double ValveSignalAtStopping;
	double StopDistance;
	double BrakeDistance;
	double MaxValveDistance;
	double MaxValveVelocity;
	double MaxValveTime;
	double SafetyDistance;
	double ActCylinderPositionMaxValve;
	plcbit MaxValveReached;
	double ActCylinderPositionStopping;
	double ActCylinderPositionStopped;
	plcbit ZeroPointReached;
	double ZeroPointDriftVelocity;
} MTHydValveIdentMovePositionType;

typedef struct MTHydValveIdentMeasureOpType
{	unsigned char Step;
	plcbit Done;
	double Timer;
	signed long Counter;
	double ActCylinderPositionOld;
	double SumPumpPressure;
	double AvgPumpPressure;
	double SumCylinderPressure1;
	double AvgCylinderPressure1;
	double SumCylinderPressure2;
	double AvgCylinderPressure2;
	double SumPumpSpeed;
	double AvgPumpSpeed;
	double CylinderVelocity;
} MTHydValveIdentMeasureOpType;

typedef struct MTHydValveIdentRoughScanType
{	unsigned char Step;
	plcbit Done;
	plcbit Error;
	signed long StatusID;
	double Timer;
	plcbit ValveSignalLowerZeroPoint;
	double StartPosition;
	double EndPosition;
} MTHydValveIdentRoughScanType;

typedef struct MTHydValveIdentInternResultsType
{	double ValveSignalValues[50];
	double ValveOpeningValues[50];
	double ValveVolumeFlow[50];
	double CylinderVelocityValues[50];
	double PumpPressureValues[50];
	double PumpSpeedValues[50];
	double CylinderPressure1Values[50];
	double CylinderPressure2Values[50];
	unsigned char NumberOfPoints;
	unsigned char ZeroPointIndex;
	double QnomPA;
	double QnomPB;
	plcbit Plausible;
	plcbit PressureDrop;
} MTHydValveIdentInternResultsType;

typedef struct MTHydValveIdentInternalType
{	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	double CycleTime;
	struct MTHydValveIdentParType Parameters;
	enum MTHydValveIdentMainStates StepMainState;
	struct MTHydValveIdentIOType IO;
	struct MTHydValveIdentCommonType Common;
	plcbit InternalReset;
	double Timer;
	plcbit StartOld;
	plcbit StopOld;
	struct MTHydValveIdentStartUpType StartUp;
	struct MTHydValveIdentMovePositionType MovePosition;
	struct MTHydValveIdentMeasureOpType MeasureOp;
	struct MTHydValveIdentRoughScanType RoughScan;
	struct MTHydValveIdentBinarySearchType BinarySearch;
	struct MTHydValveIdentFineScanType FineScan;
	struct MTHydValveIdentMeasResultsType MeasResultsPos[23];
	unsigned char NumPointsPos;
	struct MTHydValveIdentMeasResultsType MeasResultsNeg[23];
	unsigned char NumPointsNeg;
	struct MTHydValveIdentInternResultsType ValveCurve;
} MTHydValveIdentInternalType;

typedef struct MTHydValveIdentResultsType
{	float ValveSignalValues[50];
	float ValveOpeningValues[50];
	unsigned char NumberOfPoints;
	unsigned char ZeroPointIndex;
	float ValveNominalVolumeFlowPA;
	float ValveNominalVolumeFlowPB;
} MTHydValveIdentResultsType;

typedef struct MTHydValveLookUpNodeType
{	float XValues;
	float FcnValues;
	float k;
	float d;
} MTHydValveLookUpNodeType;

typedef struct MTHydValveLinInternalType
{	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	float CycleTime;
	signed char CoordinateOrder;
	float NodeVectorX[50];
	float FcnValues[50];
	unsigned char NumberOfNodes;
	struct MTHydValveLookUpNodeType Nodes[50];
	enum MTHydValveLookUpModeEnum Mode;
	signed char DisMode;
	float ValveOpeningOld;
} MTHydValveLinInternalType;

typedef struct MTHydValvePosConMachDataType
{	float MaxPumpPressure;
	float CylinderArea1;
	float CylinderArea2;
	float ValveNominalVolumeFlowPA;
	float ValveNominalVolumeFlowPB;
	float ValveNominalPressureDrop;
	enum MTHydValveValveCylConnectionEnum ValveCylinderConnection;
	enum MTHydValveCoordinateSystemEnum CoordinateSystem;
} MTHydValvePosConMachDataType;

typedef struct MTHydValvePosConPIDParType
{	float Gain;
	float IntegrationTimePositive;
	float IntegrationTimeNegative;
	float DerivativeTime;
	float FilterTime;
} MTHydValvePosConPIDParType;

typedef struct MTHydValvePosConParType
{	struct MTHydValvePosConPIDParType PID;
	struct MTHydValvePosConMachDataType MachineData;
	float GainSetCylinderVelocity;
} MTHydValvePosConParType;

typedef struct MTHydValvePosContInternalType
{	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	float CycleTime;
	struct MTHydValvePosConParType Parameters;
	plcbit EnableServoCorrection;
	float Qnom_pos;
	float Qnom_neg;
	float Apos;
	float Aneg;
	float pPos;
	float pNeg;
	float ControlError;
	float ControlErrorOld;
	float LastIntegrationPartNegative;
	float LastIntegrationPartPositive;
	float ValveOpeningServoCorrection;
	struct MTHydValvePIDOutputType PIDOutput;
	float s_set_old;
	float s_act_old;
	float vCyl_rel;
	signed long PIDAdvStatusID;
	signed long vyServoStatusID;
	plcbit EnableIntegrationPartOld;
	signed char MovingDirection;
	signed char MovingDirectionOld;
	float MaxCylVelNegDir;
	float MaxCylVelPosDir;
	plcbit ResetIntegrationPartOld;
	plcbit CyclicError;
	enum MTPIDIntegrationEnum IntegrationStatus;
} MTHydValvePosContInternalType;

typedef struct MTHydValvePressObsInternalType
{	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	float CycleTime;
	struct MTHydValvePosConMachDataType MachineData;
	float QnomA;
	float QnomB;
	float A1;
	float A2;
	float pDenom;
	float PumpPressure;
	float FrictionForceNeg;
	float FrictionForcePos;
	plcbit flagLowPrioWarning;
	plcbit flagHighPrioWarning;
} MTHydValvePressObsInternalType;

typedef struct MTHydValveSimCylinderParType
{	float Mass;
	float CylinderArea1;
	float CylinderArea2;
	float CylinderStroke;
	float DeadVolume1;
	float DeadVolume2;
	float VelPropFrictionFactor;
	float SlideFrictionForce;
	float StickFrictionForce;
} MTHydValveSimCylinderParType;

typedef struct MTHydValveSimValveParType
{	float ValveNominalVolumeFlowPA;
	float ValveNominalVolumeFlowPB;
	float ValveNominalPressureDrop;
	float ValveLeakageFactor;
	float ValveOpeningValues[50];
	float ValveSignalValues[50];
	unsigned char NumNodesValveCurve;
} MTHydValveSimValveParType;

typedef struct MTHydValveSimSystemParType
{	float TankPressure;
	float BulkModulus;
	float Gravity;
	enum MTHydValveCoordinateSystemEnum CoordinateSystem;
	enum MTHydValveValveCylConnectionEnum ValveCylinderConnection;
	float MinCylinderPressure1;
	float MaxCylinderPressure1;
	float MinCylinderPressure2;
	float MaxCylinderPressure2;
	float InitialCylinderPressure1;
	float InitialCylinderPressure2;
	float InitialCylinderPosition;
	float InitialCylinderVelocity;
} MTHydValveSimSystemParType;

typedef struct NodeType
{	float d;
	float k;
	float FcnValues;
	float XValues;
} NodeType;

typedef struct MTHydValveSimModelInternalType
{	double CycleTime;
	struct MTHydValveSimCylinderParType CylinderParameters;
	struct MTHydValveSimValveParType ValveParameters;
	struct MTHydValveSimSystemParType SystemParameters;
	float EnableParameter;
	plcbit InhibitUpdate;
	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	float QA_lmin;
	float QB_lmin;
	float QA;
	float QB;
	float pB_bar;
	float pA_bar;
	float x_ode_old;
	float v_ode_old;
	float pB_ode_old;
	float pA_ode_old;
	float x_ode;
	float a_ode;
	float v_ode;
	float pB_ode;
	float pA_ode;
	float par_v[7];
	float par_pA[7];
	float par_pB[7];
	float par_x[7];
	float fcn_ptr_pB;
	float fcn_ptr_x;
	float fcn_ptr_v;
	float fcn_ptr_pA;
	float d1;
	float ValveSignal;
	float ValveOpening;
	float ActPumpPressure;
	float ProcessForce;
	float GravitationForce;
	float FrictionForce;
	unsigned char FrictionState;
	float PistonForce;
	signed short CoordinateOrder;
	float HydraulicForce;
	struct NodeType ValveNodes[50];
	signed char ValveDisMode;
	float pNeg;
	float pPos;
} MTHydValveSimModelInternalType;

typedef struct MTHydValvePositionController
{
	/* VAR_INPUT (analog) */
	struct MTHydValvePosConParType Parameters;
	float SetCylinderPosition;
	float ActCylinderPosition;
	float ActPumpPressure;
	float ActCylinderPressure1;
	float ActCylinderPressure2;
	float SetCylinderVelocity;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float ValveOpening;
	float LastIntegrationPartPosDir;
	float LastIntegrationPartNegDir;
	/* VAR (analog) */
	struct MTHydValvePosContInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit EnableServoCorrection;
	plcbit Update;
	plcbit EnableIntegrationPart;
	plcbit ResetIntegrationPart;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTHydValvePositionController_typ;

typedef struct MTHydValveForceController
{
	/* VAR_INPUT (analog) */
	struct MTHydValveForceConParType Parameters;
	float SetForce;
	float ActForce;
	float ActPumpPressure;
	float ActCylinderPressure1;
	float ActCylinderPressure2;
	float SetForceRate;
	float ActCylinderPosition;
	float ActCylinderVelocity;
	float FeedForwardVelocity;
	float ValveOpeningPositionController;
	/* VAR_OUTPUT (analog) */
	float ValveOpening;
	signed long StatusID;
	/* VAR (analog) */
	struct MTHydValveForceConInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit EnableServoCorrection;
	plcbit Update;
	plcbit EnableIntegrationPart;
	plcbit ResetIntegrationPart;
	plcbit EnablePositionForceControl;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit InForceControl;
	plcbit InPositionControl;
} MTHydValveForceController_typ;

typedef struct MTHydValvePressureObserver
{
	/* VAR_INPUT (analog) */
	struct MTHydValvePosConMachDataType MachineData;
	float PumpPressure;
	float ProcessForce;
	float FrictionForce;
	float ValveOpening;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float CylinderPressure1;
	float CylinderPressure2;
	/* VAR (analog) */
	struct MTHydValvePressObsInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTHydValvePressureObserver_typ;

typedef struct MTHydValveSimulationModel
{
	/* VAR_INPUT (analog) */
	struct MTHydValveSimCylinderParType CylinderParameters;
	struct MTHydValveSimValveParType ValveParameters;
	struct MTHydValveSimSystemParType SystemParameters;
	float ValveSignal;
	float ActPumpPressure;
	float ProcessForce;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float ActCylinderPosition;
	float ActCylinderVelocity;
	float ActCylinderAcceleration;
	float ActCylinderPressure1;
	float ActCylinderPressure2;
	float ValveOpening;
	/* VAR (analog) */
	struct MTHydValveSimModelInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTHydValveSimulationModel_typ;

typedef struct MTHydValveLinearization
{
	/* VAR_INPUT (analog) */
	float ValveSignalValues[50];
	float ValveOpeningValues[50];
	unsigned char NumberOfPoints;
	float ValveOpening;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float ValveSignal;
	/* VAR (analog) */
	struct MTHydValveLinInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTHydValveLinearization_typ;

typedef struct MTHydValveIdentification
{
	/* VAR_INPUT (analog) */
	struct MTHydValveIdentParType Parameters;
	float ActCylinderPosition;
	float ActCylinderPressure1;
	float ActCylinderPressure2;
	float ActPumpPressure;
	float ActPumpSpeed;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float ValveSignal;
	float SetPumpPressure;
	float SetPumpSpeed;
	struct MTHydValveIdentResultsType ValveCurve;
	struct MTHydValveIdentInfoType IdentificationInfo;
	/* VAR (analog) */
	struct MTHydValveIdentInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit Start;
	plcbit Stop;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit IdentificationActive;
	plcbit IdentificationDone;
} MTHydValveIdentification_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTHydValvePositionController(struct MTHydValvePositionController* inst);
_BUR_PUBLIC void MTHydValveForceController(struct MTHydValveForceController* inst);
_BUR_PUBLIC void MTHydValvePressureObserver(struct MTHydValvePressureObserver* inst);
_BUR_PUBLIC void MTHydValveSimulationModel(struct MTHydValveSimulationModel* inst);
_BUR_PUBLIC void MTHydValveLinearization(struct MTHydValveLinearization* inst);
_BUR_PUBLIC void MTHydValveIdentification(struct MTHydValveIdentification* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTHYDVALVE_ */

