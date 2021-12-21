/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTREGISTER_
#define _MTREGISTER_
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
 #define mtPRN_WRN_RESPONSE_OVERSHOOT (-2131747963)
 #define mtPRN_WRN_MAX_VEL_CORRECTION (-2131747964)
 #define mtPRN_WRN_CTRL_PAR_CALCULATION (-2131747982)
 #define mtPRN_WRN_RESPONSE_RATE_INVALID (-2131747986)
 #define mtPRN_WRN_SENSOR_POSITION (-2131747965)
 #define mtPRN_WRN_IMAGE_LENGTH_INVALID (-2131747966)
 #define mtPRN_WRN_TENSION_IN_INVALID (-2131747967)
 #define mtPRN_WRN_REGISTER_MODE_INVALID (-2131747962)
 #define mtPRN_WRN_NR_OF_PRINTING_UNITS (-2131747968)
 #define mtPRN_WRN_WEB_LENGTH_INVALID (-2131747988)
 #define mtPRN_ERR_RESPONSE_OVERSHOOT (-1058006139)
 #define mtPRN_ERR_MAX_VEL_CORRECTION (-1058006140)
 #define mtPRN_ERR_RESPONSE_RATE_INVALID (-1058006162)
 #define mtPRN_ERR_SENSOR_POSITION (-1058006141)
 #define mtPRN_ERR_IMAGE_LENGTH_INVALID (-1058006142)
 #define mtPRN_ERR_MATERIAL_BREAK (-1058006137)
 #define mtPRN_ERR_TENSION_IN_INVALID (-1058006143)
 #define mtPRN_ERR_REGISTER_MODE_INVALID (-1058006138)
 #define mtPRN_ERR_NR_OF_PRINTING_UNITS (-1058006144)
 #define mtPRN_ERR_WEB_LENGTH_INVALID (-1058006164)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtPRN_WRN_RESPONSE_OVERSHOOT;
 _GLOBAL_CONST signed long mtPRN_WRN_MAX_VEL_CORRECTION;
 _GLOBAL_CONST signed long mtPRN_WRN_CTRL_PAR_CALCULATION;
 _GLOBAL_CONST signed long mtPRN_WRN_RESPONSE_RATE_INVALID;
 _GLOBAL_CONST signed long mtPRN_WRN_SENSOR_POSITION;
 _GLOBAL_CONST signed long mtPRN_WRN_IMAGE_LENGTH_INVALID;
 _GLOBAL_CONST signed long mtPRN_WRN_TENSION_IN_INVALID;
 _GLOBAL_CONST signed long mtPRN_WRN_REGISTER_MODE_INVALID;
 _GLOBAL_CONST signed long mtPRN_WRN_NR_OF_PRINTING_UNITS;
 _GLOBAL_CONST signed long mtPRN_WRN_WEB_LENGTH_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_RESPONSE_OVERSHOOT;
 _GLOBAL_CONST signed long mtPRN_ERR_MAX_VEL_CORRECTION;
 _GLOBAL_CONST signed long mtPRN_ERR_RESPONSE_RATE_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_SENSOR_POSITION;
 _GLOBAL_CONST signed long mtPRN_ERR_IMAGE_LENGTH_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_MATERIAL_BREAK;
 _GLOBAL_CONST signed long mtPRN_ERR_TENSION_IN_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_REGISTER_MODE_INVALID;
 _GLOBAL_CONST signed long mtPRN_ERR_NR_OF_PRINTING_UNITS;
 _GLOBAL_CONST signed long mtPRN_ERR_WEB_LENGTH_INVALID;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum MTRegisterControlModeEnum
{	mtPRN_KEY_COLOR = 0,
	mtPRN_SEQUENTIAL_COLOR = 1
} MTRegisterControlModeEnum;

typedef struct MTRegisterControllerInternalType
{	float CycleTime;
	float ImageLength;
	float WebLength;
	float SensorPosition;
	float MaxVelocityCorrection;
	float ResponseRate;
	float ResponseOvershoot;
	float PrefilterOut;
	float ControlStateVariable;
	float ControllerParameter[3];
	float ActSystemSampleTime;
	plcbit UpdateParametersValid;
	plcbit InitParametersValid;
	plcbit ParametersValid;
	plcbit EnableOld;
	plcbit UpdateOld;
	plcbit InitControllerOld;
	plcbit TriggerOld;
	plcbit ResetOld;
} MTRegisterControllerInternalType;

typedef struct MTRegisterSystemType
{	unsigned char NumberOfPrintingUnits;
	signed long WebLength[20];
	enum MTRegisterControlModeEnum Mode[20];
	plcbit AccelerationCompensation;
} MTRegisterSystemType;

typedef struct MTRegisterTransDelayBufferType
{	unsigned long NumberOfBufferElements;
	unsigned long CurrentIndex;
	unsigned long DelayIndex;
	signed long DiffIndex;
	double Integration;
	float* DataIn;
	float* DataTt;
	float TimeDelay;
	float TransportDelay;
	float TransportDelayDerivation;
	float MaxDelayTime;
} MTRegisterTransDelayBufferType;

typedef struct MTRegisterDecouplingInternalType
{	float CycleTime;
	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	struct MTRegisterSystemType Parameters;
	float Strain[20];
	float DelayedStrain[20];
	float DelayedChangingStrain[20];
	unsigned short NumberOfBufferElements;
	plcbit UpdateEpsBuffer[19];
	plcbit UpdateEpsDerBuffer[19];
	struct MTRegisterTransDelayBufferType EpsBuffer[19];
	struct MTRegisterTransDelayBufferType EpsDerBuffer[19];
	float TransportDelayDerivation[19];
} MTRegisterDecouplingInternalType;

typedef struct MTRegisterSimulationModelType
{	unsigned char NumberOfPrintingUnits;
	signed long ImageLength;
	signed long WebLength[20];
	signed long SensorPosition[20];
	enum MTRegisterControlModeEnum Mode[20];
	float TensionIn;
	plcbit Noise;
} MTRegisterSimulationModelType;

typedef struct MTRegisterTransDelayLRBufferType
{	unsigned long NumberOfBufferElements;
	unsigned long CurrentIndex;
	unsigned long DelayIndex;
	signed long DiffIndex;
	double Integration;
	double* DataIn;
	float* DataTt;
	float TimeDelay;
	float TransportDelay;
	float TransportDelayDerivation;
	float MaxDelayTime;
} MTRegisterTransDelayLRBufferType;

typedef struct MTRegisterSimulationModelIntType
{	float CycleTime;
	plcbit ParametersValid;
	plcbit UpdateOld;
	plcbit EnableOld;
	struct MTRegisterSimulationModelType Parameters;
	double Strain[20];
	double DelayedStrain[20];
	float KeyError[20];
	float SequentialError[20];
	plcbit MaterialBreak[20];
	float RestOfMaterial[20];
	float RegisterError[20];
	float DeltaPos[20];
	plcbit Trigger[20];
	unsigned char NumberEpsBufferElements;
	plcbit UpdateEpsBuffer[19];
	struct MTRegisterTransDelayLRBufferType EpsBuffer[19];
} MTRegisterSimulationModelIntType;

typedef struct MTRegisterController
{
	/* VAR_INPUT (analog) */
	signed long WebLength;
	signed long ImageLength;
	signed long SensorPosition;
	float MaxVelocityCorrection;
	float SetLineVelocity;
	signed long SetRegisterPosition;
	signed long ActRegisterPosition;
	float ResponseRate;
	float ResponseOvershoot;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float VelocityCorrection;
	/* VAR (analog) */
	struct MTRegisterControllerInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit Trigger;
	plcbit InitController;
	plcbit Invert;
	plcbit Hold;
	plcbit Reset;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit InitDone;
} MTRegisterController_typ;

typedef struct MTRegisterDecoupling
{
	/* VAR_INPUT (analog) */
	struct MTRegisterSystemType Parameters;
	float VelocityCorrectionIn[20];
	float SetLineVelocity;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float VelocityCorrectionOut[20];
	/* VAR (analog) */
	struct MTRegisterDecouplingInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTRegisterDecoupling_typ;

typedef struct MTRegisterSimulationModel
{
	/* VAR_INPUT (analog) */
	struct MTRegisterSimulationModelType Parameters;
	float SetLineVelocity;
	float ActVelocity[20];
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	signed long ActRegisterPosition[20];
	/* VAR (analog) */
	struct MTRegisterSimulationModelIntType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit Trigger[20];
	plcbit MaterialBreak;
} MTRegisterSimulationModel_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTRegisterController(struct MTRegisterController* inst);
_BUR_PUBLIC void MTRegisterDecoupling(struct MTRegisterDecoupling* inst);
_BUR_PUBLIC void MTRegisterSimulationModel(struct MTRegisterSimulationModel* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTREGISTER_ */

