/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTHYDGEN_
#define _MTHYDGEN_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <brsystem.h>
#include <sys_lib.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define mtHYD_WRN_POSCORR_SETPOS (-2131750673)
 #define mtHYD_WRN_POSCORR_MAX_CORR (-2131750674)
 #define mtHYD_WRN_POSCORR_PAR_INVALID (-2131750675)
 #define mtHYD_ERR_POSCORR_PAR_INVALID (-1058008851)
 #define mtHYD_WRN_PROFID_NOTIN_TOLERANCE (-2131750679)
 #define mtHYD_WRN_PROFID_STICKING (-2131750680)
 #define mtHYD_WRN_PROFID_CALC_ACC_WRONG (-2131750681)
 #define mtHYD_WRN_PROFID_NEG_DT_INVALID (-2131750682)
 #define mtHYD_WRN_PROFID_POS_DT_INVALID (-2131750683)
 #define mtHYD_WRN_PROFID_MODE_INVALID (-2131750684)
 #define mtHYD_WRN_PROFID_NEG_PAR_INVALID (-2131750685)
 #define mtHYD_WRN_PROFID_POS_PAR_INVALID (-2131750686)
 #define mtHYD_WRN_PROFID_WORK_AREA_INV (-2131750687)
 #define mtHYD_WRN_PROFID_NO_UPDATE (-2131750688)
 #define mtHYD_ERR_PROFID_MODE_INVALID (-1058008860)
 #define mtHYD_ERR_PROFID_NEG_PAR_INVALID (-1058008861)
 #define mtHYD_ERR_PROFID_POS_PAR_INVALID (-1058008862)
 #define mtHYD_ERR_PROFID_WORK_AREA_INV (-1058008863)
 #define mtHYD_ERR_PROFID_OUT_OF_WORKAREA (-1058008864)
 #define mtHYD_WRN_TP_NEG_DEADTAB_INVALID (-2131750652)
 #define mtHYD_WRN_TP_POS_DEADTAB_INVALID (-2131750653)
 #define mtHYD_WRN_TP_NEG_DECTAB_INVALID (-2131750654)
 #define mtHYD_WRN_TP_POS_DECTAB_INVALID (-2131750655)
 #define mtHYD_WRN_VELGEN_SP_NOTREACHABLE (-2131750656)
 #define mtHYD_WRN_VELGEN_TP_NOTREACHABLE (-2131750657)
 #define mtHYD_WRN_VELGEN_SP_PAR_INVALID (-2131750658)
 #define mtHYD_WRN_VELGEN_TP_PAR_INVALID (-2131750659)
 #define mtHYD_WRN_VELGEN_VREF_INVALID (-2131750660)
 #define mtHYD_WRN_VELGEN_PBB_STOP_ACTIVE (-2131750661)
 #define mtHYD_WRN_VELGEN_SETINITVELOCITY (-2131750662)
 #define mtHYD_WRN_VELGEN_NEG_PAR_INVALID (-2131750663)
 #define mtHYD_WRN_VELGEN_POS_PAR_INVALID (-2131750664)
 #define mtHYD_ERR_VELGEN_NEG_PAR_INVALID (-1058008839)
 #define mtHYD_ERR_VELGEN_POS_PAR_INVALID (-1058008840)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtHYD_WRN_POSCORR_SETPOS;
 _GLOBAL_CONST signed long mtHYD_WRN_POSCORR_MAX_CORR;
 _GLOBAL_CONST signed long mtHYD_WRN_POSCORR_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_POSCORR_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_NOTIN_TOLERANCE;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_STICKING;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_CALC_ACC_WRONG;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_NEG_DT_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_POS_DT_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_MODE_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_NEG_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_POS_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_WORK_AREA_INV;
 _GLOBAL_CONST signed long mtHYD_WRN_PROFID_NO_UPDATE;
 _GLOBAL_CONST signed long mtHYD_ERR_PROFID_MODE_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_PROFID_NEG_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_PROFID_POS_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_PROFID_WORK_AREA_INV;
 _GLOBAL_CONST signed long mtHYD_ERR_PROFID_OUT_OF_WORKAREA;
 _GLOBAL_CONST signed long mtHYD_WRN_TP_NEG_DEADTAB_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_TP_POS_DEADTAB_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_TP_NEG_DECTAB_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_TP_POS_DECTAB_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_SP_NOTREACHABLE;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_TP_NOTREACHABLE;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_SP_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_TP_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_VREF_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_PBB_STOP_ACTIVE;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_SETINITVELOCITY;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_NEG_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_WRN_VELGEN_POS_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_VELGEN_NEG_PAR_INVALID;
 _GLOBAL_CONST signed long mtHYD_ERR_VELGEN_POS_PAR_INVALID;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum MTHydGenVelGenMovementStateEnum
{	mtHYDGEN_POS_DIR_STOPPING = 6,
	mtHYDGEN_POS_DIR_PBB_SAFEPOINT = 5,
	mtHYDGEN_POS_DIR_PBB_TARGETPOINT = 4,
	mtHYDGEN_POS_DIR_DECELERATION = 3,
	mtHYDGEN_POS_DIR_CONST_MOVEMENT = 2,
	mtHYDGEN_POS_DIR_ACCELERATION = 1,
	mtHYDGEN_STAND_STILL = 0,
	mtHYDGEN_NEG_DIR_ACCELERATION = -1,
	mtHYDGEN_NEG_DIR_CONST_MOVEMENT = -2,
	mtHYDGEN_NEG_DIR_DECELERATION = -3,
	mtHYDGEN_NEG_DIR_PBB_TARGETPOINT = -4,
	mtHYDGEN_NEG_DIR_PBB_SAFEPOINT = -5,
	mtHYDGEN_NEG_DIR_STOPPING = -6
} MTHydGenVelGenMovementStateEnum;

typedef enum MTHydGenVelGenDirectionEnum
{	mtHYDGEN_POS_MOVEMENT = 1,
	mtHYDGEN_NO_MOVEMENT = 0,
	mtHYDGEN_NEG_MOVEMENT = -1
} MTHydGenVelGenDirectionEnum;

typedef enum MTHydGenProfileIdentDTModeEnum
{	mtHYDGEN_DEADTIME_IDENT_OFF = 0,
	mtHYDGEN_DEADTIME_IDENT_BASIC = 1,
	mtHYDGEN_DEADTIME_IDENT_ADVANCED = 2
} MTHydGenProfileIdentDTModeEnum;

typedef enum MTHydGenProfileIdentModeEnum
{	mtHYDGEN_STOP_WITH_RAMP = 0,
	mtHYDGEN_STOP_WITH_STEP = 1
} MTHydGenProfileIdentModeEnum;

typedef struct MTHydGenVelGenParDirType
{	float Acceleration;
	float Deceleration;
	float StopDeceleration;
	float JoltTime;
} MTHydGenVelGenParDirType;

typedef struct MTHydGenVelGenParType
{	struct MTHydGenVelGenParDirType PositiveDirection;
	struct MTHydGenVelGenParDirType NegativeDirection;
} MTHydGenVelGenParType;

typedef struct MTHydGenVelGenDecTableType
{	float Velocity[10];
	float Deceleration[10];
	unsigned char NumberOfNodes;
} MTHydGenVelGenDecTableType;

typedef struct MTHydGenVelGenDeadTimeTableType
{	float Velocity[10];
	float DeadTime[10];
	unsigned char NumberOfNodes;
} MTHydGenVelGenDeadTimeTableType;

typedef struct MTHydGenVelGenTargetPointDirType
{	plcbit Enable;
	float Position;
	float Velocity;
	float Deceleration;
	float DeadTime;
	float JoltTime;
	plcbit EnableDecelerationCurve;
	struct MTHydGenVelGenDecTableType DecelerationTable;
	plcbit EnableDeadTimeCurve;
	struct MTHydGenVelGenDeadTimeTableType DeadTimeTable;
} MTHydGenVelGenTargetPointDirType;

typedef struct MTHydGenVelGenTargetPointType
{	struct MTHydGenVelGenTargetPointDirType PositiveDirection;
	struct MTHydGenVelGenTargetPointDirType NegativeDirection;
} MTHydGenVelGenTargetPointType;

typedef struct MTHydGenVelGenSafePointDirType
{	plcbit Enable;
	float Position;
	float Velocity;
	float Deceleration;
	float DeadTime;
	float JoltTime;
} MTHydGenVelGenSafePointDirType;

typedef struct MTHydGenVelGenSafePointType
{	struct MTHydGenVelGenSafePointDirType PositiveDirection;
	struct MTHydGenVelGenSafePointDirType NegativeDirection;
} MTHydGenVelGenSafePointType;

typedef struct MTHydGenVelGenPBBDataType
{	double CycleTime;
	plcbit Enabled;
	double sTarget;
	double vTarget;
	double aMax;
	double j0;
	double j1;
	double j3;
	double tDead;
	plcbit Active;
	plcbit Reached;
	double DistanceToStartBraking;
	unsigned char Phase;
	double sBrake;
	double s0s;
	double v0s;
	double a0s;
	double s1s;
	double v1s;
	double a1s;
	double s2s;
	double v2s;
	double s3s;
	double v3s;
	double delta_t0;
	double delta_s0;
	double delta_v0;
	double delta_t1;
	double delta_s1;
	double delta_v1;
	double delta_t2;
	double delta_s2;
	double delta_v2;
	double delta_t3;
	double delta_s3;
	double delta_v3;
	plcbit PBA;
	plcbit vRefLim;
} MTHydGenVelGenPBBDataType;

typedef struct MTHydGenVelGenInternalType
{	double CycleTime;
	plcbit InhibitUpdate;
	plcbit ParametersValid;
	struct MTHydGenVelGenParType Parameters;
	plcbit UpdateOld;
	plcbit EnableOld;
	struct MTHydGenVelGenTargetPointType TargetPoint;
	struct MTHydGenVelGenSafePointType SafePoints[10];
	plcbit StartOld;
	plcbit StopOld;
	plcbit AbortOld;
	plcbit SetInitVelocityOld;
	plcbit StoppingActive;
	double vRef;
	enum MTHydGenVelGenDirectionEnum moveDir;
	double aAcc;
	double aDec;
	double jAcc;
	double jDec;
	unsigned char ProfileState;
	double vSetProfileGen;
	double aSetProfileGen;
	double jSetProfileGen;
	double vSetPBB;
	double aSetPBB;
	double jSetPBB;
	double vPrev;
	double aPrev;
	plcbit JoltCorrectionActive;
	double vJoltProfileGen;
	plcbit ExecuteStartMovement;
	struct MTHydGenVelGenPBBDataType TP_PBB_Data;
	struct MTHydGenVelGenPBBDataType SP_PBB_Data[10];
	struct MTHydGenVelGenPBBDataType PBB_Temp;
} MTHydGenVelGenInternalType;

typedef struct MTHydGenVelGenTPInfoType
{	enum MTHydGenVelGenDirectionEnum ActDirection;
	plcbit Enabled;
	plcbit Reached;
	plcbit PositionBasedBrakingActive;
	float DistanceToStartBraking;
	float ActDeceleration;
	float ActDeadTime;
} MTHydGenVelGenTPInfoType;

typedef struct MTHydGenVelGenSPInfoType
{	enum MTHydGenVelGenDirectionEnum ActDirection;
	plcbit Enabled;
	plcbit Reached;
	plcbit PositionBasedBrakingActive;
	float DistanceToStartBraking;
} MTHydGenVelGenSPInfoType;

typedef struct MTHydGenProfileIdentParDirType
{	float TargetCylinderPosition;
	float MaxCylinderVelocity;
	float CylinderVelocityStep1;
	float CylinderVelocityStep2;
	float CylinderVelocityStep3;
} MTHydGenProfileIdentParDirType;

typedef struct MTHydGenProfileIdentParType
{	struct MTHydGenProfileIdentParDirType PositiveDirection;
	struct MTHydGenProfileIdentParDirType NegativeDirection;
	float MinAllowedCylinderPosition;
	float MaxAllowedCylinderPosition;
} MTHydGenProfileIdentParType;

typedef struct MTHydGenProfIdentDeadTimeDirType
{	enum MTHydGenProfileIdentDTModeEnum Mode;
	float TuningVelocity;
	float UpperPositionTolerance;
	float LowerPositionTolerance;
	float TestValues[10];
	float MinDeadTime;
	float MaxDeadTime;
} MTHydGenProfIdentDeadTimeDirType;

typedef struct MTHydGenProfileIdentDeadTimeType
{	struct MTHydGenProfIdentDeadTimeDirType PositiveDirection;
	struct MTHydGenProfIdentDeadTimeDirType NegativeDirection;
} MTHydGenProfileIdentDeadTimeType;

typedef struct MTHydGenProfIdentOutputDirType
{	float Acceleration;
	float Deceleration;
	float TargetDeceleration;
	float DeadTime;
} MTHydGenProfIdentOutputDirType;

typedef struct MTHydGenProfileIdentOutputType
{	struct MTHydGenProfIdentOutputDirType PositiveDirection;
	struct MTHydGenProfIdentOutputDirType NegativeDirection;
} MTHydGenProfileIdentOutputType;

typedef struct MTHydGenProfIdentQualityDirType
{	float Acceleration;
	float Deceleration;
	float TargetDeceleration;
	float DeadTime;
} MTHydGenProfIdentQualityDirType;

typedef struct MTHydGenProfieIdentQualityType
{	struct MTHydGenProfIdentQualityDirType PositiveDirection;
	struct MTHydGenProfIdentQualityDirType NegativeDirection;
} MTHydGenProfieIdentQualityType;

typedef struct MTHydGenProfileIdentStatCalcType
{	double Inputs[3];
	double Mean;
	double Variance;
	double StandardDeviation;
} MTHydGenProfileIdentStatCalcType;

typedef struct MTHydGenProfileIdentStatDTType
{	float Value;
	float EndDeviation;
	float MaxDeviation;
} MTHydGenProfileIdentStatDTType;

typedef struct MTHydGenProfileIdentStatDirType
{	struct MTHydGenProfileIdentStatDTType DeadTime[10];
	struct MTHydGenProfileIdentStatCalcType Acceleration;
	struct MTHydGenProfileIdentStatCalcType Deceleration;
	struct MTHydGenProfileIdentStatCalcType TargetDeceleration;
} MTHydGenProfileIdentStatDirType;

typedef struct MTHydGenProfileIdentStatType
{	struct MTHydGenProfileIdentStatDirType PosDir;
	struct MTHydGenProfileIdentStatDirType NegDir;
} MTHydGenProfileIdentStatType;

typedef struct MTHydGenProfileIdentMoveAvgType
{	unsigned char NumOfElmements;
	float Buffer[20];
	unsigned char CntAct;
	unsigned char CntOld;
	plcbit BufferFull;
	float Sum;
	float Average;
} MTHydGenProfileIdentMoveAvgType;

typedef struct MTHydGenProfIdentifiedParDirType
{	double UnscaledAcc;
	double UnscaledDec;
	double UnscaledTargetDec;
	double TimeConstant;
	double ScaledAcc;
	double ScaledDec;
	double ScaledTargetDec;
} MTHydGenProfIdentifiedParDirType;

typedef struct MTHydGenProfIdentifiedParType
{	struct MTHydGenProfIdentifiedParDirType PosDir;
	struct MTHydGenProfIdentifiedParDirType NegDir;
} MTHydGenProfIdentifiedParType;

typedef struct MTHydGenProfIdentIntRampType
{	float Value;
	float UserValue;
	float EnableUserValue;
} MTHydGenProfIdentIntRampType;

typedef struct MTHydGenProfIdentIntParDirType
{	float MaxCylPosition;
	float EndCylPosition;
	float SetVelocity;
	float K;
	struct MTHydGenProfIdentIntRampType aRamp;
} MTHydGenProfIdentIntParDirType;

typedef struct MTHydGenProfIdentIntParType
{	plcbit Step1Done;
	plcbit Step2Done;
	plcbit Step3Done;
	float DeltaActPosition;
	float DeltaSetPosition;
	float PositionAtStep;
	float VelocityAtStep;
	struct MTHydGenProfIdentIntParDirType PosDir;
	struct MTHydGenProfIdentIntParDirType NegDir;
} MTHydGenProfIdentIntParType;

typedef struct MTHydGenProfIdentIntDTTupleType
{	float DeadTime;
	float Deviation;
	float MaxDeviation;
} MTHydGenProfIdentIntDTTupleType;

typedef struct MTHydGenProfIdentIntDTParDirType
{	plcbit Done;
	unsigned char Index;
	unsigned char NumTestValues;
	float Velocity;
	float MaxPosition;
	float rSet;
	struct MTHydGenProfIdentIntDTTupleType Top;
	struct MTHydGenProfIdentIntDTTupleType Try;
	struct MTHydGenProfIdentIntDTTupleType Bottom;
} MTHydGenProfIdentIntDTParDirType;

typedef struct MTHydGenProfIdentIntDTParType
{	struct MTHydGenProfIdentIntDTParDirType PosDir;
	struct MTHydGenProfIdentIntDTParDirType NegDir;
} MTHydGenProfIdentIntDTParType;

typedef struct MTHydGenProfileIdentInternalType
{	double CycleTime;
	plcbit InhibitUpdate;
	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	plcbit StartIdentificationOld;
	plcbit StopIdentificationOld;
	plcbit RunIdentification;
	plcbit StopWithRampActive;
	struct MTHydGenProfileIdentParType Parameters;
	enum MTHydGenProfileIdentModeEnum Mode;
	struct MTHydGenProfileIdentDeadTimeType DeadTimeIdentification;
	float UpperVelocityLimit;
	double Timer;
	double WaitingTime;
	unsigned char StepIdentification;
	unsigned char StepIdentificationDeadTime;
	struct MTHydGenProfIdentIntParType Ident;
	struct MTHydGenProfIdentIntDTParType IdentDeadTime;
	float StartPositionTolerance;
	float StickingPositionTolerance;
	struct MTHydGenProfIdentifiedParType Identified;
	float TargetDecFactor;
	struct MTHydGenProfileIdentStatType Statistics;
	unsigned char NextStep;
	plcbit MoveToStartPosition;
	signed long StatusIDUpdate;
	struct MTHydGenProfileIdentMoveAvgType MovingAverage;
	plcbit UseMaxPositionForIdentification;
} MTHydGenProfileIdentInternalType;

typedef struct MTHydGenAdaptCorrParType
{	float MaxPositionCorrection;
	float PositionTolerance;
	unsigned char NumMeanMovements;
	float WaitingTime;
} MTHydGenAdaptCorrParType;

typedef struct MTHydGenAdaptCorrInternalType
{	double CycleTime;
	plcbit InhibitUpdate;
	struct MTHydGenAdaptCorrParType Parameters;
	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	signed long StatusIDUpdate;
	float ActPosError;
	plcbit MovementDoneOld;
	plcbit ResetCorrectionOld;
	float corr_vals[10];
	float a[10];
	plcbit SettlingPhase;
	unsigned char index;
	float MeanError;
	float t;
	float SetPositionOld;
	unsigned char i;
} MTHydGenAdaptCorrInternalType;

typedef struct MTHydGenVelocityGenerator
{
	/* VAR_INPUT (analog) */
	struct MTHydGenVelGenParType Parameters;
	float ActPosition;
	float ReferenceVelocity;
	struct MTHydGenVelGenSafePointType SafePoints[10];
	struct MTHydGenVelGenTargetPointType TargetPoint;
	float InitVelocity;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float Velocity;
	float Acceleration;
	float Jerk;
	enum MTHydGenVelGenMovementStateEnum MovementState;
	struct MTHydGenVelGenSPInfoType SafePointInfos[10];
	struct MTHydGenVelGenTPInfoType TargetPointInfos;
	/* VAR (analog) */
	struct MTHydGenVelGenInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit Start;
	plcbit Stop;
	plcbit Abort;
	plcbit SetInitVelocity;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit StartDone;
	plcbit StoppingActive;
	plcbit SetInitVelocityDone;
} MTHydGenVelocityGenerator_typ;

typedef struct MTHydGenProfileIdentification
{
	/* VAR_INPUT (analog) */
	struct MTHydGenProfileIdentParType Parameters;
	enum MTHydGenProfileIdentModeEnum Mode;
	float ActCylinderPosition;
	float ActCylinderVelocity;
	struct MTHydGenProfileIdentDeadTimeType DeadTimeIdentification;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float SetCylinderVelocity;
	struct MTHydGenProfileIdentOutputType IdentifiedParameters;
	struct MTHydGenProfieIdentQualityType Quality;
	/* VAR (analog) */
	struct MTHydGenProfileIdentInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit StartIdentification;
	plcbit StopIdentification;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit MovePositive;
	plcbit MoveNegative;
	plcbit IdentificationActive;
	plcbit IdentificationDone;
} MTHydGenProfileIdentification_typ;

typedef struct MTHydGenAdaptivePosCorrection
{
	/* VAR_INPUT (analog) */
	struct MTHydGenAdaptCorrParType Parameters;
	float ActPosition;
	float SetPosition;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float PositionCorrection;
	/* VAR (analog) */
	struct MTHydGenAdaptCorrInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit MovementDone;
	plcbit ResetCorrection;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit CalculationDone;
} MTHydGenAdaptivePosCorrection_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTHydGenVelocityGenerator(struct MTHydGenVelocityGenerator* inst);
_BUR_PUBLIC void MTHydGenProfileIdentification(struct MTHydGenProfileIdentification* inst);
_BUR_PUBLIC void MTHydGenAdaptivePosCorrection(struct MTHydGenAdaptivePosCorrection* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTHYDGEN_ */

