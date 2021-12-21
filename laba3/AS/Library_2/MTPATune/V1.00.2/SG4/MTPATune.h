/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTPATUNE_
#define _MTPATUNE_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <sys_lib.h>
#include <brsystem.h>
#include <astime.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define mtPAT_WRN_PID_CALC_MAX_ITER (-2131745893)
 #define mtPAT_WRN_INVALID_OUT_LIMITATION (-2131745894)
 #define mtPAT_WRN_INVALID_PHASE_MARGIN (-2131745895)
 #define mtPAT_WRN_INVALID_MAX_AMPLITUDE (-2131745896)
 #define mtPAT_WRN_INVALID_MAX_TIME_CONST (-2131745897)
 #define mtPAT_WRN_MAX_IT_LOW_FREQ_SEARCH (-2131745898)
 #define mtPAT_WRN_NO_TUNING_CONVERGENCE (-2131745899)
 #define mtPAT_WRN_INVALID_IDENT_VERIFY (-2131745900)
 #define mtPAT_ERR_PID_RECALC_FAILED (-1058004067)
 #define mtPAT_ERR_OUTPUT_SATURATION (-1058004068)
 #define mtPAT_ERR_INVALID_OUT_LIMITATION (-1058004069)
 #define mtPAT_ERR_INVALID_PHASE_MARGIN (-1058004070)
 #define mtPAT_ERR_INVALID_MAX_AMPLITUDE (-1058004071)
 #define mtPAT_ERR_INVALID_MAX_TIME_CONST (-1058004072)
 #define mtPAT_ERR_INVALID_PLANT_IO (-1058004073)
 #define mtPAT_ERR_PID_TUNING_FAILED (-1058004074)
 #define mtPAT_ERR_SMALL_MAX_TIME_CONST (-1058004075)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtPAT_WRN_PID_CALC_MAX_ITER;
 _GLOBAL_CONST signed long mtPAT_WRN_INVALID_OUT_LIMITATION;
 _GLOBAL_CONST signed long mtPAT_WRN_INVALID_PHASE_MARGIN;
 _GLOBAL_CONST signed long mtPAT_WRN_INVALID_MAX_AMPLITUDE;
 _GLOBAL_CONST signed long mtPAT_WRN_INVALID_MAX_TIME_CONST;
 _GLOBAL_CONST signed long mtPAT_WRN_MAX_IT_LOW_FREQ_SEARCH;
 _GLOBAL_CONST signed long mtPAT_WRN_NO_TUNING_CONVERGENCE;
 _GLOBAL_CONST signed long mtPAT_WRN_INVALID_IDENT_VERIFY;
 _GLOBAL_CONST signed long mtPAT_ERR_PID_RECALC_FAILED;
 _GLOBAL_CONST signed long mtPAT_ERR_OUTPUT_SATURATION;
 _GLOBAL_CONST signed long mtPAT_ERR_INVALID_OUT_LIMITATION;
 _GLOBAL_CONST signed long mtPAT_ERR_INVALID_PHASE_MARGIN;
 _GLOBAL_CONST signed long mtPAT_ERR_INVALID_MAX_AMPLITUDE;
 _GLOBAL_CONST signed long mtPAT_ERR_INVALID_MAX_TIME_CONST;
 _GLOBAL_CONST signed long mtPAT_ERR_INVALID_PLANT_IO;
 _GLOBAL_CONST signed long mtPAT_ERR_PID_TUNING_FAILED;
 _GLOBAL_CONST signed long mtPAT_ERR_SMALL_MAX_TIME_CONST;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum MTPATuneControllerEnum
{	mtPAT_PI_Controller = 0,
	mtPAT_PID_Controller = 1
} MTPATuneControllerEnum;

typedef struct MTPATuneFFParametersType
{	enum MTPATuneControllerEnum ControllerType;
	float MaxAmplitude;
	float MaxTimeConstant;
	float SystemSettlingTime;
	float PhaseMargin;
	float MinOut;
	float MaxOut;
} MTPATuneFFParametersType;

typedef struct MTPATunePIDParametersType
{	float Gain;
	float IntegrationTime;
	float DerivativeTime;
	float FilterTime;
	float DerivativeGain;
} MTPATunePIDParametersType;

typedef struct MTPATuneFFInternalType
{	struct MTPATuneFFParametersType Parameters;
	plcbit PIDSelect;
	plcbit RecalculatePIDOld;
	plcbit ParametersValid;
	float Offset;
	plcbit Error;
	plcbit Warning;
	plcbit UpdateOld;
	plcbit EnableOld;
	unsigned short nErrorRegister;
	plcbit StartOld;
	float dTuningProgress;
	float dOmegaFilterProgress;
	float dBetaHigh;
	float dAlphaHigh;
	float dOmegaHigh;
	float dBetaLow;
	float dAlphaLow;
	float dOmegaLow;
	float pdBetaPlantOld[2];
	float pdBetaPlant[2];
	float pdAlphaPlantOld[2];
	float pdAlphaPlant[2];
	float pdBetaY[2];
	float pdBetaU[2];
	float pdAlphaY[2];
	float pdAlphaU[2];
	float pdAmpl[2];
	unsigned char nArrayCount;
	float pdOmegaArray[11];
	float pdBetaArray[11];
	float pdAlphaArray[11];
	float pdOmega[2];
	float dTime;
	plctime timeCURRENT;
	plctime timeINIT;
	float dIteration;
	plcbyte nCalc;
	signed short nCount;
	signed short nPeriodSize;
	signed short nPeriodNum;
	signed short nPeriodMax;
	unsigned char nPlantOrder;
	float dCycleTime;
	plcbyte byTunerStatus;
} MTPATuneFFInternalType;

typedef struct MTPATuneFiniteFrequency
{
	/* VAR_INPUT (analog) */
	struct MTPATuneFFParametersType Parameters;
	float Offset;
	float PlantInput;
	float PlantOutput;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float Out;
	struct MTPATunePIDParametersType PIDParameters;
	float Numerator[2];
	float Denominator[3];
	/* VAR (analog) */
	struct MTPATuneFFInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit Start;
	plcbit RecalculateController;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit TuningActive;
	plcbit TuningDone;
} MTPATuneFiniteFrequency_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTPATuneFiniteFrequency(struct MTPATuneFiniteFrequency* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTPATUNE_ */

