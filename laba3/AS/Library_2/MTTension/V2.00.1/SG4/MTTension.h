/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTTENSION_
#define _MTTENSION_
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
 #define mtPRN_WRN_MAX_VEL_CORRECTION (-2131747964)
 #define mtPRN_WRN_CTRL_PAR_CALCULATION (-2131747982)
 #define mtPRN_WRN_NUM_OF_ZONES_INVALID (-2131747983)
 #define mtPRN_WRN_RESPONSE_OVERSHOOT (-2131747963)
 #define mtPRN_WRN_RESPONSE_RATE_INVALID (-2131747986)
 #define mtPRN_WRN_WEB_FACTOR_INVALID (-2131747987)
 #define mtPRN_WRN_WEB_LENGTH_INVALID (-2131747988)
 #define mtPRN_ERR_MAX_VEL_CORRECTION (-1058006140)
 #define mtPRN_ERR_MATERIAL_BREAK (-1058006137)
 #define mtPRN_ERR_NUM_OF_ZONES_INVALID (-1058006159)
 #define mtPRN_ERR_RESPONSE_OVERSHOOT (-1058006139)
 #define mtPRN_ERR_RESPONSE_RATE_INVALID (-1058006162)
 #define mtPRN_ERR_WEB_FACTOR_INVALID (-1058006163)
 #define mtPRN_ERR_WEB_LENGTH_INVALID (-1058006164)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtPRN_WRN_MAX_VEL_CORRECTION;
 _GLOBAL_CONST signed long mtPRN_WRN_CTRL_PAR_CALCULATION;
 _GLOBAL_CONST signed long mtPRN_WRN_NUM_OF_ZONES_INVALID;
 _GLOBAL_CONST signed long mtPRN_WRN_RESPONSE_OVERSHOOT;
 _GLOBAL_CONST signed long mtPRN_WRN_RESPONSE_RATE_INVALID;
 _GLOBAL_CONST signed long mtPRN_WRN_WEB_FACTOR_INVALID;
 _GLOBAL_CONST signed long mtPRN_WRN_WEB_LENGTH_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_MAX_VEL_CORRECTION;
 _GLOBAL_CONST signed long mtPRN_ERR_MATERIAL_BREAK;
 _GLOBAL_CONST signed long mtPRN_ERR_NUM_OF_ZONES_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_RESPONSE_OVERSHOOT;
 _GLOBAL_CONST signed long mtPRN_ERR_RESPONSE_RATE_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_WEB_FACTOR_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_WEB_LENGTH_INVALID;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct MTTensionParametersType
{	unsigned char NumberOfZones;
	signed long WebLength[20];
} MTTensionParametersType;

typedef struct MTTensionSimulationType
{	float WebFactor;
	unsigned char NumberOfZones;
	signed long WebLength[20];
	plcbit Noise;
} MTTensionSimulationType;

typedef struct MTTensionControllerInternalType
{	float CycleTime;
	plcbit ParametersValid;
	float WebFactor;
	float WebLength;
	float MaxVelocityCorrection;
	float ResponseRate;
	float ResponseOvershoot;
	float PrefilterOut;
	float ProportionalPart;
	float IntegrationPart;
	float TensionErrorOld;
	float TensionError;
	float DerivativePart;
	struct MTPIDParametersType ControlParameters;
	plcbit ResetOld;
	plcbit Update;
	plcbit UpdateOld;
	plcbit InitController;
	plcbit InitControllerOld;
	plcbit UpdateParametersValid;
	plcbit InitParametersValid;
	plcbit EnableOld;
	enum MTPIDIntegrationEnum IntegrationStatus;
	signed long PID_StatusID;
} MTTensionControllerInternalType;

typedef struct MTTensionDecouplingInternalType
{	float CycleTime;
	plcbit ParametersValid;
	struct MTTensionParametersType Parameters;
	double Strain[20];
	float SetLineVelocityOld;
	float ActLineAcceleration;
	plcbit Update;
	plcbit UpdateOld;
	plcbit EnableOld;
} MTTensionDecouplingInternalType;

typedef struct MTTensionSimulationModelIntType
{	float CycleTime;
	plcbit ParametersValid;
	struct MTTensionSimulationType Parameters;
	double Strain[20];
	plcbit MaterialBreak[20];
	float RestOfMaterial[20];
	plcbit Update;
	plcbit UpdateOld;
	plcbit EnableOld;
} MTTensionSimulationModelIntType;

typedef struct MTTensionController
{
	/* VAR_INPUT (analog) */
	float WebFactor;
	signed long WebLength;
	float MaxVelocityCorrection;
	float SetLineVelocity;
	float SetMaterialTension;
	float ActMaterialTension;
	float ResponseRate;
	float ResponseOvershoot;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float VelocityCorrection;
	/* VAR (analog) */
	struct MTTensionControllerInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit InitController;
	plcbit Invert;
	plcbit Hold;
	plcbit Reset;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit InitDone;
} MTTensionController_typ;

typedef struct MTTensionDecoupling
{
	/* VAR_INPUT (analog) */
	struct MTTensionParametersType Parameters;
	float VelocityCorrectionIn[20];
	float SetLineVelocity;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float VelocityCorrectionOut[20];
	/* VAR (analog) */
	struct MTTensionDecouplingInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTTensionDecoupling_typ;

typedef struct MTTensionSimulationModel
{
	/* VAR_INPUT (analog) */
	struct MTTensionSimulationType Parameters;
	float ActVelocity[20];
	float MaterialTensionIn;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float ActMaterialTension[20];
	/* VAR (analog) */
	struct MTTensionSimulationModelIntType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit MaterialBreak;
} MTTensionSimulationModel_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTTensionController(struct MTTensionController* inst);
_BUR_PUBLIC void MTTensionDecoupling(struct MTTensionDecoupling* inst);
_BUR_PUBLIC void MTTensionSimulationModel(struct MTTensionSimulationModel* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTTENSION_ */

