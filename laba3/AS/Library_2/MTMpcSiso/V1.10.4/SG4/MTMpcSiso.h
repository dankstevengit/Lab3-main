/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTMPCSISO_
#define _MTMPCSISO_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <sys_lib.h>
#include <brsystem.h>
#include <astime.h>
#include <runtime.h>
#include <AsBrStr.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define mtPAT_INF_SYSTEM_ERASED 1089479465
 #define mtPAT_WRN_OPT_EXCEED_SAMPLE_TIME (-2131745914)
 #define mtPAT_WRN_DISPUTED_CONSTRAINT (-2131745915)
 #define mtPAT_WRN_TO_LESS_DRAM (-2131745916)
 #define mtPAT_WRN_INIT_NOT_EXECUTED (-2131745917)
 #define mtPAT_WRN_ANY_MEMORY_ALLOCATED (-2131745918)
 #define mtPAT_WRN_NOT_INITIALIZED (-2131745919)
 #define mtPAT_WRN_INITIALIZATION_IN_PRG (-2131745920)
 #define mtPAT_ERR_SOLUTION_CONTAIN_INF (-1058004085)
 #define mtPAT_ERR_SOLUTION_CONTAIN_NAN (-1058004086)
 #define mtPAT_ERR_SOLVER_ER_NOT_DEF (-1058004087)
 #define mtPAT_ERR_PROBLEM_INFEASIBILE (-1058004088)
 #define mtPAT_ERR_SOLVER_MAX_ACT_CONST (-1058004089)
 #define mtPAT_ERR_SOLVER_INV_BOUND (-1058004090)
 #define mtPAT_ERR_SOLVER_INV_IEQC (-1058004091)
 #define mtPAT_ERR_SOLVER_INV_EQC (-1058004092)
 #define mtPAT_ERR_SOLVER_MAXITERATION (-1058004093)
 #define mtPAT_ERR_SAMPLE_TIME_NOT_VALID (-1058004094)
 #define mtPAT_ERR_CONFLICTING_SOLUTION (-1058004095)
 #define mtPAT_ERR_NAN_INF_ON_INTERFACE (-1058004096)
 #define mtPAT_ERR_WHILE_MEM_ALLOCATION (-1058004097)
 #define mtPAT_ERR_TO_LESS_DRAM (-1058004098)
 #define mtPAT_ERR_FALSE_INTERFACE_ALLOC (-1058004099)
 #define mtPAT_ERR_MEM_NOT_DELETED (-1058004100)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtPAT_INF_SYSTEM_ERASED;
 _GLOBAL_CONST signed long mtPAT_WRN_OPT_EXCEED_SAMPLE_TIME;
 _GLOBAL_CONST signed long mtPAT_WRN_DISPUTED_CONSTRAINT;
 _GLOBAL_CONST signed long mtPAT_WRN_TO_LESS_DRAM;
 _GLOBAL_CONST signed long mtPAT_WRN_INIT_NOT_EXECUTED;
 _GLOBAL_CONST signed long mtPAT_WRN_ANY_MEMORY_ALLOCATED;
 _GLOBAL_CONST signed long mtPAT_WRN_NOT_INITIALIZED;
 _GLOBAL_CONST signed long mtPAT_WRN_INITIALIZATION_IN_PRG;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLUTION_CONTAIN_INF;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLUTION_CONTAIN_NAN;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_ER_NOT_DEF;
 _GLOBAL_CONST signed long mtPAT_ERR_PROBLEM_INFEASIBILE;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_MAX_ACT_CONST;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_INV_BOUND;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_INV_IEQC;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_INV_EQC;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_MAXITERATION;
 _GLOBAL_CONST signed long mtPAT_ERR_SAMPLE_TIME_NOT_VALID;
 _GLOBAL_CONST signed long mtPAT_ERR_CONFLICTING_SOLUTION;
 _GLOBAL_CONST signed long mtPAT_ERR_NAN_INF_ON_INTERFACE;
 _GLOBAL_CONST signed long mtPAT_ERR_WHILE_MEM_ALLOCATION;
 _GLOBAL_CONST signed long mtPAT_ERR_TO_LESS_DRAM;
 _GLOBAL_CONST signed long mtPAT_ERR_FALSE_INTERFACE_ALLOC;
 _GLOBAL_CONST signed long mtPAT_ERR_MEM_NOT_DELETED;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct MTMpcSisoSystemRangeType
{	unsigned long NActSum;
	unsigned long NOutSum;
	unsigned long NOutSumMerged;
	unsigned long NOutSumMax;
	unsigned long NDistSum;
	unsigned long NDistSumMax;
	unsigned long TempMemMax;
	unsigned long QpMemMax;
	unsigned char NSoftC;
} MTMpcSisoSystemRangeType;

typedef struct MTMpcSisoParameterType
{	plcbit MemMode;
	unsigned long CycleFactor;
	unsigned char NrDist;
	unsigned long PredictionHorizon;
	unsigned long ControlHorizon;
	unsigned char OutSamplesMerge;
	double OutOperatingPoint;
	double ActOperatingPoint;
	double WeightErrorExp;
	double WeightError;
	double OutMoveSuppression;
	double ActDeltaWeight;
	plcbit FIRModel;
	plcbit SoftConstraint;
	double OutDeltaMin;
	double OutDeltaMax;
	double OutMin;
	double OutMax;
	double ActSoftMin;
	double ActSoftMax;
	plcbit PostCtrlDisable;
	double* OutRespAct0;
	double* DistRespAct0;
	struct MTMpcSisoSystemRangeType SystemRange;
} MTMpcSisoParameterType;

typedef struct MTMpcSisoEnhancedPerformanceType
{	unsigned short InitTimeRatio;
	unsigned short CtrlTimeRatio;
	unsigned short TotalTimeRatio;
	double ConditionNbr;
	double StatObj;
	double DynObj;
	signed long Iter;
	double ActDeltaPrd;
	double ActIDeltaPrd;
	double PrdError;
	double PrdAvgError;
	double PrdIAError;
	double CtrlError;
	double CtrlAvgError;
	double CtrlIAError;
	double OutVar;
	double ActVar;
	double CorrActMeasuredPrd;
	double Slack;
	unsigned long CycleCount;
	plcbit PrdCompleted;
	double ActIScdDeltaPrd[200];
	double ActScdDeltaPrd[200];
	double PrdErrorScdOld[200];
	double CtrlErrorScdOld[200];
} MTMpcSisoEnhancedPerformanceType;

typedef struct MTMpcSisoEnhancedInternalScdType
{	struct MTMpcSisoSystemRangeType SystemRange;
	unsigned char NAct;
	unsigned char NOut;
	unsigned char NDist;
	unsigned long PrdHor;
	unsigned long CtrlHor;
	double OutOperatingPoint;
	double ActOperatingPoint;
	double OutMin;
	double OutMax;
	plcbit SoftConstraint;
	plcbit FIRModel;
	unsigned long CtrlHorReduced;
	double ActOld;
	double Act;
	double OutOld;
	double OutRef;
	double Out;
	double Dist[200];
	double DistOld;
	double DistMeasured;
	double Set[200];
	double OptStatOld[200];
	double OutDeltaOptOld[201];
	double OutDeltaScdOld[200];
	double OutScdOld[200];
	double OutStatActModel;
	double ActByOut;
	double DistDeltaPrd[200];
	double DistScdOld[200];
	double DistDeltaScdOld[201];
	double DistStatActModel;
	double ActByDist;
	double ActScdOld[200];
	double ActDeltaModel;
	double ActDeltaMeasured;
	double ActModelBased;
} MTMpcSisoEnhancedInternalScdType;

typedef struct MTMpcSisoEnhancedInternalType
{	signed long FailureMemory[100];
	plcbit Warning;
	plcbit Initialized;
	plcbit InputError;
	signed short SolverError;
	signed short TotalAdd;
	signed short TotalDrop;
	plcbit InitStatus;
	plcbit SolverStatus;
	plcbit PostCtrlStatus;
	plcbit UpdateOld;
	plcbit SystemReset;
	plcbit SystemResetOld;
	unsigned long CtrlHorReduced;
	unsigned long SlideCount;
	unsigned long DRAM;
	unsigned long CtrlTimeStamp;
	unsigned char CtrlMode;
	unsigned long InitTime;
	unsigned long SolverTime;
	unsigned long PostCtrlTime;
	unsigned long ProcessTime;
	double CycleTime;
	double EigenvalueMin;
	double EigenvalueMax;
	double ActPrd[200];
	double ActDeltaPrd[200];
	double OutDeltaOpt[201];
	double StatOpt[200];
	plcbit UpdateActive;
	struct MTMpcSisoEnhancedInternalScdType Scanned;
	plctime StartTime;
	plctime EndTime;
	double OutMinDragInd;
	double OutMaxDragInd;
	plcbit Bootkey;
	double* Hzp;
	double* YTransform;
	double* Hyp;
	double* HypT;
	double* H;
	double* Zin;
	double* Rin;
	double* RcnIn;
	double* Hoy;
	double* Hoz;
	double* Hoyz;
	double* Hcyz;
	double* L;
	double* TM1;
	double* TM2;
	double* TM3;
	double* TM4;
	double TM5[200];
	double TM6[200];
	signed short TMQp[1807];
} MTMpcSisoEnhancedInternalType;

typedef struct MTMpcSisoEnhanced
{
	/* VAR_INPUT (analog) */
	struct MTMpcSisoEnhancedPortType* AsyncAccess;
	struct MTMpcSisoParameterType Parameter;
	double* SetValue;
	double ActValue;
	double OutReference;
	double* SetDisturbance;
	double ActDisturbance;
	double OutPresetValue;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	double Out;
	double OutPredicted[200];
	double ActPredicted[200];
	unsigned char InitProgress;
	struct MTMpcSisoEnhancedPerformanceType Performance;
	double ActValuePredicted0;
	/* VAR (analog) */
	struct MTMpcSisoParameterType BasicAdjustment;
	struct MTMpcSisoEnhancedInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit DisturbanceEnable;
	plcbit Reset;
	plcbit SetOut;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit ResetActive;
} MTMpcSisoEnhanced_typ;

typedef struct MTMpcSisoEnhancedPortType
{	struct MTMpcSisoEnhanced* Link;
	unsigned short StatusASync;
	unsigned char StatusQp;
	unsigned char _statemachine;
	unsigned char _result;
} MTMpcSisoEnhancedPortType;

typedef struct MTMpcSisoLiteInternalType
{	signed short SolverError;
	unsigned long CtrlHorReduced;
	unsigned long CycleCount;
	unsigned long InitTime;
	unsigned long SolverTime;
	double CycleTime;
	plcbit Warning;
	signed long Iter;
	signed short TotalAdd;
	signed short TotalDrop;
	plcbit UpdateActive;
	plcbit Update;
	plcbit UpdateOld;
	double EigenvalueMin;
	double EigenvalueMax;
	double OutMinDragInd;
	double OutMaxDragInd;
	double ActPrd[200];
	double ActDeltaPrd[200];
	double OutDeltaOpt[201];
	double StatOpt[200];
	double OutDeltaScdOld[200];
	double DistDeltaScdOld[201];
	double ActScd;
	double ActOld;
	double OutOld;
	double DistOld;
	double* Hzp;
	double* YTransform;
	double* Hyp;
	double* HypT;
	double* H;
	double* Hoyz;
	double* Hcyz;
	double* L;
	double* Zin;
	double* Rin;
	double* RcnIn;
	double* TM1;
	double* TM2;
	double* TM3;
	double* TM4;
	signed short TMQp[1807];
	unsigned long Bootkey;
} MTMpcSisoLiteInternalType;

typedef struct MTMpcSisoReactorInternalType
{	double V;
	double T;
	double d;
	double Td;
	unsigned short Tt;
	double xInternal;
	double xOld1;
	double xOld2;
	double yOld;
	double CycleTime;
	double yBuffer[200];
	unsigned long Bootkey;
} MTMpcSisoReactorInternalType;

typedef struct MTMpcSisoLite
{
	/* VAR_INPUT (analog) */
	struct MTMpcSisoParameterType Parameter;
	double* SetValue;
	double ActValue;
	double OutReference;
	double* SetDisturbance;
	double ActDisturbance;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	double Out;
	double OutPredicted[200];
	double ActPredicted[200];
	double Slack;
	double ConditionNr;
	/* VAR (analog) */
	struct MTMpcSisoParameterType BasicAdjustment;
	struct MTMpcSisoLiteInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit DisturbanceEnable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTMpcSisoLite_typ;

typedef struct MTMpcSisoReactor
{
	/* VAR_INPUT (analog) */
	double CoolantTemperature;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	double ActTemperature;
	/* VAR (analog) */
	struct MTMpcSisoReactorInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
} MTMpcSisoReactor_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTMpcSisoEnhanced(struct MTMpcSisoEnhanced* inst);
_BUR_PUBLIC void MTMpcSisoLite(struct MTMpcSisoLite* inst);
_BUR_PUBLIC void MTMpcSisoReactor(struct MTMpcSisoReactor* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTMPCSISO_ */

