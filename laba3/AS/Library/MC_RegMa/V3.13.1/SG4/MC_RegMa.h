/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MC_REGMA_
#define _MC_REGMA_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct MC_BR_PRODUCT_REF
{	float Length;
	float LengthChange;
	float LengthTolerance;
	float StartOffset;
	float RegMarkPosition;
	float DistanceToSensor;
	unsigned short SearchMode;
	unsigned short MissedTriggerCount;
} MC_BR_PRODUCT_REF;

typedef struct MC_BR_RMTRIGGER_REF
{	unsigned short EventSourceParID;
	unsigned char PosSource;
	unsigned char Edge;
	float MinWidth;
	float MaxWidth;
	float WindowNegative;
	float WindowPositive;
	float MasterInterval;
	unsigned short IntervalSourceParID;
	float IntervalLevel;
	unsigned short IntervalCompareMode;
	signed long SensorDelay;
} MC_BR_RMTRIGGER_REF;

typedef struct MC_BR_RMIMG_REF
{	float Length;
	float LengthChange;
	float RegMarkPosition;
	float LengthTolerance;
	unsigned short SearchMode;
	unsigned short MissedTriggerCount;
	unsigned short EventSourceParID;
	unsigned char PosSource;
	unsigned char Edge;
	float MinWidth;
	float MaxWidth;
	float WindowNegative;
	float WindowPositive;
	float MasterInterval;
	float IntervalLevel;
	unsigned short IntervalSourceParID;
	unsigned short IntervalCompareMode;
	signed long SensorDelay;
	unsigned short LatchPM_Mode;
	unsigned short Camcon_InParID;
	unsigned short Capture_InParID;
	unsigned short Reserve;
	float IntervalStartDelay;
} MC_BR_RMIMG_REF;

typedef struct MC_0066_IS_TYP
{	plcbit SearchTrigger;
	plcbit SearchTrigger_executed;
	plcbit InitData;
	plcbit Active;
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	unsigned short ErrorID;
	plcbit DataInitialized;
	unsigned short MasterParID;
	unsigned short Mode;
	struct MC_BR_RMTRIGGER_REF TriggerInput;
	struct MC_BR_PRODUCT_REF ProductParameters;
	plcbit SearchActive;
	unsigned short MissedTriggers;
	unsigned long ValidTriggers;
	float ActLength;
	float ActIntervalLength;
	float ActPosition;
	plcbit SearchDone;
	float LengthError;
	float PositionError;
	float AverageProductLength;
	float ArrayProductLength[51];
	unsigned char cntProductLengths;
	unsigned char cnt_Average;
	unsigned short state;
	unsigned short LastState;
	unsigned short NextState;
	unsigned short CAMCONID;
	unsigned short CMPID;
	unsigned short DelayID;
	unsigned short LatchID;
	plcbit new_LatchIVPos;
	signed long LatchIVPos;
	signed long LatchIVPos_old;
	plcbit new_LatchPMPos;
	unsigned char SptID;
	unsigned char LockIDSend;
	unsigned char LockIDReceive;
	signed long LatchPMPos;
	signed long LatchPMPos_old;
	unsigned char LatchPMErrCount;
	unsigned char LatchPMErrCount_old;
	plcbit Skip_LengthCalculation;
	unsigned char LatchPMStatusCount;
	plcbit LatchPM_reconfiguredtoSearch;
	unsigned short sendSlot;
	unsigned short readSlot;
	unsigned short LatchPMValueOffset;
	unsigned char LatchPMRecIndex;
	unsigned char LatchPMParIndex;
	unsigned short LatchIVValueOffset;
	unsigned char LatchIVRecIndex;
	unsigned char LockID;
	unsigned short LatchPMEOffset;
	unsigned char LatchPMERecIndex;
	unsigned char LockIDPar;
	unsigned short LatchPMSCOffset;
	unsigned char LatchPMSCRecIndex;
	unsigned char LockIDMa;
	struct MC_BR_RMIMG_REF IMG;
	plcbit InitDataCMP;
	plcbit InitDataCAMCON;
	plcbit InitDataLatchPM;
	plcbit InitDataInternal;
	plcbit ReInitializeMasterInterval;
	plcbit FUBModeChanged;
	plcbit Wait_for_valid_PM;
	unsigned short Wait_for_which_telegrams;
	unsigned char SavedFrDrvCnt;
	unsigned char WaitForTelegrams;
	float IntervalStartDelay;
	signed long Latch_Init_value;
} MC_0066_IS_TYP;

typedef struct MC_ADDINFO001_REF
{	float LengthErrorFiltered;
	float DistancePAction;
	float DistanceIAction;
	float DistanceIntegralTime;
	float PositionErrorFiltered;
	float ShiftPAction;
	float ShiftIAction;
	float ShiftIntegralTime;
	float TimeBetweenRMs;
	float Reserve1;
	float Reserve2;
	float Reserve3;
	float Reserve4;
	float Reserve5;
} MC_ADDINFO001_REF;

typedef struct MC_RMCALC001_REF
{	unsigned short Mode;
	float MaxDistanceCorrection;
	float MaxShiftCorrection;
	plcbit DistanceCorrectionClamp;
	plcbit AutoParamIntegrator;
	float DistanceGain;
	float DistanceIntegralTime;
	float ShiftGain;
	float ShiftIntegralTime;
	unsigned char ValuesForAveraging;
	unsigned char ValuesForQueuing;
} MC_RMCALC001_REF;

typedef struct MC_0091_IS_TYP
{	plcbit InitData;
	plcbit Reset;
	plcbit Calculate;
	float LengthError;
	float PositionError;
	struct MC_RMCALC001_REF ControllerParameters;
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	unsigned short ErrorID;
	plcbit DataInitialized;
	unsigned long ValidCorrections;
	float Distance;
	float Shift;
	plcbit LimiterActive;
	plcbit ShiftLimiterActive;
	plcbit DistanceLimiterActive;
	float LengthErrorQ[51];
	float PositionErrorQ[51];
	unsigned char QLength;
	unsigned char WriteIndex;
	plcbit FirstAfterEnable;
	unsigned long TickCountOld;
	unsigned short state;
} MC_0091_IS_TYP;

typedef struct MC_BR_CFG_RM2_REF
{	float ProductLength;
	float RegMarkPosition;
	float RegMarkOffset;
	float DistanceToSensor;
} MC_BR_CFG_RM2_REF;

typedef struct MC_BR_ADV_RM2_REF
{	unsigned short Mode;
	unsigned short EventSourceParID;
	unsigned char Edge;
	float MinWidth;
	float MaxWidth;
	float WindowNeg;
	float WindowPos;
	signed long SensorDelay;
	plcbit CorrectCurrentCycle;
	float CorrectionValueLimitNeg;
	float CorrectionValueLimitPos;
} MC_BR_ADV_RM2_REF;

typedef struct MC_BR_ADDINFO_RM2_REF
{	float ActLength;
	float AverageProductLength;
	float CutLength;
	unsigned short QueueElements;
	plcbit LimitNegActive;
	plcbit LimitPosActive;
	float ActualCorrectionValue;
} MC_BR_ADDINFO_RM2_REF;

typedef struct MC_BR_RM2_IMG_REF
{	unsigned short EventSourceParID;
	unsigned char Edge;
	unsigned char Reserve;
	signed long MinWidth;
	signed long MaxWidth;
	signed long WindowNeg;
	signed long WindowPos;
	signed long LatchTDelay;
	signed long LatchIV;
	signed long LatchIVL;
	float SPTDelay;
} MC_BR_RM2_IMG_REF;

typedef struct MC_RMC002_FIFO_TYP
{	unsigned short QueueElements;
	unsigned char IdxWriteIn;
	unsigned char IdxReadOut;
	signed long BufferRM[256];
	signed long BufferPL[256];
} MC_RMC002_FIFO_TYP;

typedef struct MC_0117_IS_TYP
{	plcbit SearchRM;
	plcbit IgnoreSearchRM;
	plcbit InitData;
	unsigned char Reserve1;
	signed long CutPosition;
	signed long oldFBCutPosition;
	signed long oldFBCutPositionCL;
	signed long ProductLength;
	signed long ProductLengthAtCut;
	signed long RegMarkPosition;
	signed long RegMarkOffset;
	signed long DistanceToSensor;
	unsigned short Mode;
	unsigned short EventSourceParID;
	unsigned char Edge;
	unsigned char Reserve2;
	signed long MinWidth;
	signed long MaxWidth;
	signed long WindowNeg;
	signed long WindowPos;
	signed long SensorDelay;
	signed long CorrectionValueLimitNeg;
	signed long CorrectionValueLimitPos;
	plcbit CorrectCurrentCycle;
	plcbit Active;
	plcbit Valid;
	plcbit Busy;
	unsigned char Reserve3;
	plcbit Error;
	unsigned short ErrorID;
	plcbit DataInitialized;
	plcbit SearchDone;
	unsigned short ProductsWithoutRM;
	unsigned long ValidRMs;
	signed long CorrectionValue;
	signed long CorrectionValueUnlimited;
	signed long ActLength;
	signed long AverageProductLength;
	signed long ArrayProductLength[50];
	unsigned char idxProductLengths;
	unsigned char cntAverage;
	plcbit LimitNegActive;
	plcbit LimitPosActive;
	signed long CutLength;
	struct MC_BR_RM2_IMG_REF IMG;
	unsigned char state;
	unsigned char LastState;
	unsigned char NextState;
	unsigned char Reserve4;
	unsigned short BitCompInfo;
	unsigned short BitIndex;
	unsigned short BitOffset;
	unsigned short LatchIndex;
	unsigned short DelayIndex;
	unsigned short Reserve8;
	unsigned char BitRecIndex;
	unsigned char LockID;
	unsigned char LockIDPar;
	plcbit IgnoreLatchErrorCountOnce;
	signed long LatchPos;
	signed long oldLatchPos;
	unsigned short LatchPosOffset;
	unsigned char LatchPosRecIndex;
	unsigned char LatchErrCount;
	unsigned char oldLatchErrCount;
	unsigned char LatchStatusCount;
	plcbit LatchReconfiguredtoSearch;
	unsigned char SavedFrDrvCnt;
	unsigned char WaitForTelegrams;
	plcbit PerformLengthCalculation;
	plcbit ModeAcceptAllTrigger;
	plcbit ModeSignalWidth;
	unsigned char ProductCntToStart;
	plcbit PerformLimitation;
	plcbit FiFoUsed;
	plcbit RMOccuredOnce;
	struct MC_RMC002_FIFO_TYP FIFOBuffer;
	signed long MasterAxisPositionAtBeginning;
	signed long DelayTime;
	float SPTDelayTime;
	signed long LatchTime;
} MC_0117_IS_TYP;

typedef struct MC_BR_RegMarkCapture001
{
	/* VAR_INPUT (analog) */
	unsigned long Master;
	unsigned long Axis;
	struct MC_BR_RMTRIGGER_REF TriggerInput;
	struct MC_BR_PRODUCT_REF ProductParameters;
	unsigned short Mode;
	unsigned short MasterParID;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	unsigned long ValidTriggers;
	unsigned short MissedTriggers;
	float ActLength;
	float ActIntervalLength;
	float ActPosition;
	float LengthError;
	float PositionError;
	float AverageProductLength;
	/* VAR (analog) */
	unsigned long C_Master;
	unsigned long C_Axis;
	struct MC_0066_IS_TYP IS;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit SearchTrigger;
	plcbit InitData;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	plcbit DataInitialized;
	plcbit SearchActive;
	plcbit SearchDone;
} MC_BR_RegMarkCapture001_typ;

typedef struct MC_BR_RegMarkCalc001
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	float LengthError;
	float PositionError;
	struct MC_RMCALC001_REF ControllerParameters;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	unsigned long ValidCorrections;
	float Distance;
	float Shift;
	struct MC_ADDINFO001_REF AdditionalInfo;
	/* VAR (analog) */
	unsigned long C_Axis;
	struct MC_0091_IS_TYP IS;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit InitData;
	plcbit Reset;
	plcbit Calculate;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	plcbit DataInitialized;
	plcbit ResetDone;
	plcbit DistanceLimiterActive;
	plcbit ShiftLimiterActive;
} MC_BR_RegMarkCalc001_typ;

typedef struct MC_BR_RegMarkCapture002
{
	/* VAR_INPUT (analog) */
	unsigned long Master;
	unsigned long Axis;
	signed long CutPosition;
	struct MC_BR_CFG_RM2_REF Configuration;
	struct MC_BR_ADV_RM2_REF AdvancedParameters;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	unsigned long ValidRMs;
	unsigned short ProductsWithoutRM;
	float CorrectionValue;
	struct MC_BR_ADDINFO_RM2_REF AdditionalInfo;
	/* VAR (analog) */
	struct MC_0117_IS_TYP IS;
	unsigned long C_Master;
	unsigned long C_Axis;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit SearchRM;
	plcbit InitData;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	plcbit DataInitialized;
	plcbit SearchDone;
} MC_BR_RegMarkCapture002_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MC_BR_RegMarkCapture001(struct MC_BR_RegMarkCapture001* inst);
_BUR_PUBLIC void MC_BR_RegMarkCalc001(struct MC_BR_RegMarkCalc001* inst);
_BUR_PUBLIC void MC_BR_RegMarkCapture002(struct MC_BR_RegMarkCapture002* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MC_REGMA_ */

