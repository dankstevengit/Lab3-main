/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTMPCMIMO_
#define _MTMPCMIMO_
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
 #define mtPAT_INF_INTERNAL_MEM_ERASED 1089479464
 #define mtPAT_WRN_HIGH_CTRL_TIME_RATIO (-2131746002)
 #define mtPAT_WRN_CONFLICTING_CONSTRAINT (-2131746003)
 #define mtPAT_WRN_NOT_ENOUGH_DRAM (-2131746004)
 #define mtPAT_WRN_RE_INIT_NOT_EXECUTED (-2131746005)
 #define mtPAT_WRN_NO_MEMORY_ALLOCATED (-2131746006)
 #define mtPAT_WRN_FUB_NOT_INITIALIZED (-2131746007)
 #define mtPAT_WRN_INITIALIZATION (-2131746008)
 #define mtPAT_ERR_SOLUTION_INF (-1058004169)
 #define mtPAT_ERR_SOLUTION_NAN (-1058004170)
 #define mtPAT_ERR_SOLVER_ERR_NOT_DEF (-1058004171)
 #define mtPAT_ERR_SOLVER_INFEASIBILITY (-1058004172)
 #define mtPAT_ERR_SOLVER_MAX_ACTIVE_C (-1058004173)
 #define mtPAT_ERR_SOLVER_BOUND_INVALID (-1058004174)
 #define mtPAT_ERR_SOLVER_IEQC_INVALID (-1058004175)
 #define mtPAT_ERR_SOLVER_EQC_INVALID (-1058004176)
 #define mtPAT_ERR_SOLVER_MAXIT (-1058004177)
 #define mtPAT_ERR_ILLEGAL_SAMPLE_TIME (-1058004178)
 #define mtPAT_ERR_INCONSISTENT_SOLUTION (-1058004179)
 #define mtPAT_ERR_NAN_INF_AT_INTERFACE (-1058004180)
 #define mtPAT_ERR_DURING_MEM_ALLOCATION (-1058004181)
 #define mtPAT_ERR_NOT_ENOUGH_DRAM (-1058004182)
 #define mtPAT_ERR_WRONG_INTERFACE_ALLOC (-1058004183)
 #define mtPAT_ERR_MEMORY_NOT_DELETED (-1058004184)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtPAT_INF_INTERNAL_MEM_ERASED;
 _GLOBAL_CONST signed long mtPAT_WRN_HIGH_CTRL_TIME_RATIO;
 _GLOBAL_CONST signed long mtPAT_WRN_CONFLICTING_CONSTRAINT;
 _GLOBAL_CONST signed long mtPAT_WRN_NOT_ENOUGH_DRAM;
 _GLOBAL_CONST signed long mtPAT_WRN_RE_INIT_NOT_EXECUTED;
 _GLOBAL_CONST signed long mtPAT_WRN_NO_MEMORY_ALLOCATED;
 _GLOBAL_CONST signed long mtPAT_WRN_FUB_NOT_INITIALIZED;
 _GLOBAL_CONST signed long mtPAT_WRN_INITIALIZATION;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLUTION_INF;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLUTION_NAN;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_ERR_NOT_DEF;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_INFEASIBILITY;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_MAX_ACTIVE_C;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_BOUND_INVALID;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_IEQC_INVALID;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_EQC_INVALID;
 _GLOBAL_CONST signed long mtPAT_ERR_SOLVER_MAXIT;
 _GLOBAL_CONST signed long mtPAT_ERR_ILLEGAL_SAMPLE_TIME;
 _GLOBAL_CONST signed long mtPAT_ERR_INCONSISTENT_SOLUTION;
 _GLOBAL_CONST signed long mtPAT_ERR_NAN_INF_AT_INTERFACE;
 _GLOBAL_CONST signed long mtPAT_ERR_DURING_MEM_ALLOCATION;
 _GLOBAL_CONST signed long mtPAT_ERR_NOT_ENOUGH_DRAM;
 _GLOBAL_CONST signed long mtPAT_ERR_WRONG_INTERFACE_ALLOC;
 _GLOBAL_CONST signed long mtPAT_ERR_MEMORY_NOT_DELETED;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct MTMpcMimoSystemRangeType
{	unsigned long NActSum;
	unsigned long NOutSum;
	unsigned long NOutSumMerged;
	unsigned long NOutSumMax;
	unsigned long NDistSum;
	unsigned long NDistSumMax;
	unsigned long TempMemMax;
	unsigned long QpMemMax;
	unsigned char NSoftC;
} MTMpcMimoSystemRangeType;

typedef struct MTMpcMimoParameterType
{	plcbit MemMode;
	unsigned long CycleFactor;
	unsigned char NrAct;
	unsigned char NrOut;
	unsigned char NrDist;
	unsigned long PredictionHorizon;
	unsigned long ControlHorizon;
	unsigned char OutSamplesMerge;
	double OutOperatingPoint[10];
	double ActOperatingPoint[10];
	double WeightErrorExp[10];
	double WeightError[10];
	double OutMoveSuppression[10];
	double ActDeltaWeight[10];
	plcbit FIRModel[10];
	plcbit SoftConstraint[10];
	double OutDeltaMin[10];
	double OutDeltaMax[10];
	double OutMin[10];
	double OutMax[10];
	double ActSoftMin[10];
	double ActSoftMax[10];
	plcbit PostCtrlDisable;
	double* OutRespAct0;
	double* DistRespAct0;
	double* OutRespAct1;
	double* DistRespAct1;
	double* OutRespAct2;
	double* DistRespAct2;
	double* OutRespAct3;
	double* DistRespAct3;
	double* OutRespAct4;
	double* DistRespAct4;
	double* OutRespAct5;
	double* DistRespAct5;
	double* OutRespAct6;
	double* DistRespAct6;
	double* OutRespAct7;
	double* DistRespAct7;
	double* OutRespAct8;
	double* DistRespAct8;
	double* OutRespAct9;
	double* DistRespAct9;
	struct MTMpcMimoSystemRangeType SystemRange;
} MTMpcMimoParameterType;

typedef struct MTMpcMimoEnhancedPerformanceType
{	unsigned short InitTimeRatio;
	unsigned short CtrlTimeRatio;
	unsigned short TotalTimeRatio;
	double ConditionNbr;
	double StatObj;
	double DynObj;
	signed long Iter;
	double ActDeltaPrd[10];
	double ActIDeltaPrd[10];
	double PrdError[10];
	double PrdAvgError[10];
	double PrdIAError[10];
	double CtrlError[10];
	double CtrlAvgError[10];
	double CtrlIAError[10];
	double OutVar[10];
	double ActVar[10];
	double CorrActMeasuredPrd[10];
	double Slack[10];
	unsigned long CycleCount;
	plcbit PrdCompleted;
	double ActIScdDeltaPrd[2000];
	double ActScdDeltaPrd[2000];
	double PrdErrorScdOld[2000];
	double CtrlErrorScdOld[2000];
} MTMpcMimoEnhancedPerformanceType;

typedef struct MTMpcMimoEnhancedInternalScdType
{	struct MTMpcMimoSystemRangeType SystemRange;
	unsigned char NAct;
	unsigned char NOut;
	unsigned char NDist;
	unsigned long PrdHor;
	unsigned long CtrlHor;
	double OutOperatingPoint[10];
	double ActOperatingPoint[10];
	double OutMin[10];
	double OutMax[10];
	plcbit SoftConstraint[10];
	plcbit FIRModel[10];
	unsigned long CtrlHorReduced;
	double ActOld[10];
	double Act[10];
	double OutOld[10];
	double OutRef[10];
	double Out[10];
	double Dist[2000];
	double DistOld[10];
	double DistMeasured[10];
	double Set[2000];
	double OptStatOld[2000];
	double OutDeltaOptOld[2010];
	double OutDeltaScdOld[2000];
	double OutScdOld[2000];
	double OutStatActModel[10];
	double ActByOut[10];
	double DistDeltaPrd[2000];
	double DistScdOld[2000];
	double DistDeltaScdOld[2010];
	double DistStatActModel[10];
	double ActByDist[10];
	double ActScdOld[2000];
	double ActDeltaModel[10];
	double ActDeltaMeasured[10];
	double ActModelBased[10];
} MTMpcMimoEnhancedInternalScdType;

typedef struct MTMpcMimoEnhancedInternalType
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
	double ActPrd[2000];
	double ActDeltaPrd[2000];
	double OutDeltaOpt[2010];
	double StatOpt[2000];
	plcbit UpdateActive;
	struct MTMpcMimoEnhancedInternalScdType Scanned;
	plctime StartTime;
	plctime EndTime;
	double OutMinDragInd[10];
	double OutMaxDragInd[10];
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
	double TM5[2000];
	double TM6[2000];
	signed short TMQp[18061];
} MTMpcMimoEnhancedInternalType;

typedef struct MTMpcMimoEnhanced
{
	/* VAR_INPUT (analog) */
	struct MTMpcMimoEnhancedPortType* AsyncAccess;
	struct MTMpcMimoParameterType Parameter;
	double* SetValue;
	double ActValue[10];
	double OutReference[10];
	double* SetDisturbance;
	double ActDisturbance[10];
	double OutPresetValue[10];
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	double Out[10];
	double OutPredicted[2000];
	double ActPredicted[2000];
	unsigned char InitProgress;
	struct MTMpcMimoEnhancedPerformanceType Performance;
	double ActValuePredicted0[10];
	/* VAR (analog) */
	struct MTMpcMimoParameterType BasicAdjustment;
	struct MTMpcMimoEnhancedInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit DisturbanceEnable[10];
	plcbit Reset;
	plcbit SetOut[10];
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit ResetActive;
} MTMpcMimoEnhanced_typ;

typedef struct MTMpcMimoEnhancedPortType
{	struct MTMpcMimoEnhanced* Link;
	unsigned short StatusASync;
	unsigned char StatusQp;
	unsigned char _statemachine;
	unsigned char _result;
} MTMpcMimoEnhancedPortType;

typedef struct MTMpcMimoLiteInternalType
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
	double OutMinDragInd[10];
	double OutMaxDragInd[10];
	double ActPrd[2000];
	double ActDeltaPrd[2000];
	double OutDeltaOpt[2010];
	double StatOpt[2000];
	double OutDeltaScdOld[2000];
	double DistDeltaScdOld[2010];
	double ActScd[10];
	double ActOld[10];
	double OutOld[10];
	double DistOld[10];
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
	signed short TMQp[18061];
	unsigned long Bootkey;
} MTMpcMimoLiteInternalType;

typedef struct MTMpcMimoOilFractionatorInternal
{	double Ty0[3];
	double Ty1[3];
	double Ty2[3];
	double Tz0[3];
	double Tz1[3];
	double Vy0[3];
	double Vy1[3];
	double Vy2[3];
	double Vz0[3];
	double Vz1[3];
	unsigned short Tty0[3];
	unsigned short Tty1[3];
	unsigned short Tty2[3];
	unsigned short Ttz0[3];
	unsigned short Ttz1[3];
	double x0Internal[5];
	double x1Internal[5];
	double x2Internal[5];
	double x0Old[5];
	double x1Old[5];
	double x2Old[5];
	double CycleTime;
	double y0Buffer[200];
	double y1Buffer[200];
	double y2Buffer[200];
	double z0Buffer[200];
	double z1Buffer[200];
	unsigned long Bootkey;
} MTMpcMimoOilFractionatorInternal;

typedef struct MTMpcMimoLite
{
	/* VAR_INPUT (analog) */
	struct MTMpcMimoParameterType Parameter;
	double* SetValue;
	double ActValue[10];
	double OutReference[10];
	double* SetDisturbance;
	double ActDisturbance[10];
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	double Out[10];
	double OutPredicted[2000];
	double ActPredicted[2000];
	double Slack[10];
	double ConditionNr;
	/* VAR (analog) */
	struct MTMpcMimoParameterType BasicAdjustment;
	struct MTMpcMimoLiteInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit DisturbanceEnable[10];
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTMpcMimoLite_typ;

typedef struct MTMpcMimoOilFractionator
{
	/* VAR_INPUT (analog) */
	double TopDraw;
	double SideDraw;
	double BottomRefluxDuty;
	double UpperRefluxDuty;
	double IntermediateRefluxDuty;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	double TopEndPointComposition;
	double SideEndPointComposition;
	double BottomRefluxTemperature;
	/* VAR (analog) */
	struct MTMpcMimoOilFractionatorInternal Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
} MTMpcMimoOilFractionator_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTMpcMimoEnhanced(struct MTMpcMimoEnhanced* inst);
_BUR_PUBLIC void MTMpcMimoLite(struct MTMpcMimoLite* inst);
_BUR_PUBLIC void MTMpcMimoOilFractionator(struct MTMpcMimoOilFractionator* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTMPCMIMO_ */

