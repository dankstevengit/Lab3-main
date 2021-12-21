/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTIDENT_
#define _MTIDENT_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <MTTypes.h>
#include <brsystem.h>
#include <sys_lib.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define mtACD_WRN_OTHER_FB_USES_SYSREF (-2131755008)
 #define mtACD_WRN_ABORTED_TOO_EARLY (-2131752963)
 #define mtACD_WRN_NOT_SETTLED_DOWN (-2131752964)
 #define mtACD_WRN_SMALL_WEIGHT_FACTOR (-2131752965)
 #define mtACD_WRN_INVALID_WEIGHT_FACTOR (-2131752966)
 #define mtACD_WRN_INVALID_SYSTEM_ORDER (-2131752967)
 #define mtACD_WRN_SYSTEM_ORDER_TOO_HIGH (-2131752968)
 #define mtACD_ERR_NOT_SETTLED_DOWN (-1058011141)
 #define mtACD_ERR_INVALID_WEIGHT_FACTOR (-1058011142)
 #define mtACD_ERR_INVALID_SYSTEM_ORDER (-1058011143)
 #define mtACD_ERR_SYSTEM_ORDER_TOO_HIGH (-1058011144)
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtACD_WRN_OTHER_FB_USES_SYSREF;
 _GLOBAL_CONST signed long mtACD_WRN_ABORTED_TOO_EARLY;
 _GLOBAL_CONST signed long mtACD_WRN_NOT_SETTLED_DOWN;
 _GLOBAL_CONST signed long mtACD_WRN_SMALL_WEIGHT_FACTOR;
 _GLOBAL_CONST signed long mtACD_WRN_INVALID_WEIGHT_FACTOR;
 _GLOBAL_CONST signed long mtACD_WRN_INVALID_SYSTEM_ORDER;
 _GLOBAL_CONST signed long mtACD_WRN_SYSTEM_ORDER_TOO_HIGH;
 _GLOBAL_CONST signed long mtACD_ERR_NOT_SETTLED_DOWN;
 _GLOBAL_CONST signed long mtACD_ERR_INVALID_WEIGHT_FACTOR;
 _GLOBAL_CONST signed long mtACD_ERR_INVALID_SYSTEM_ORDER;
 _GLOBAL_CONST signed long mtACD_ERR_SYSTEM_ORDER_TOO_HIGH;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct MTIdentLSQInternalType
{	float CycleTime;
	plcbit ParametersValid;
	plcbit EnableOld;
	plcbit EnableDone;
	plcbit UpdateOld;
	plcbit DisabledBusy;
	plcbit StartIdentificationOld;
	unsigned char SystemOrder;
	float WeightingFactor;
	double PMatrix[100];
	double DataVector[10];
	double ParameterVector[10];
	unsigned char NumberParameter;
	unsigned char IdentificationState;
	unsigned char SettlingIndex;
	unsigned char NumberOfSettlingPhases;
	float LQParameterVector[3];
	float LQOutput[2];
	float StepHeight;
	float PlantOutputOld;
	float NoiseDeadBand;
	float PlantOutputOffset;
	unsigned char IdentificationSamples;
	plcbit IdentificationDoneOld;
	plcbit SysRefParaNew;
	float SampleTime;
	unsigned long CounterOld;
	struct MTTransferFcnType SystemReference;
} MTIdentLSQInternalType;

typedef struct MTIdentLSQ
{
	/* VAR_INPUT (analog) */
	unsigned char SystemOrder;
	float StepHeight;
	float PlantOutput;
	float WeightingFactor;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float PlantInput;
	float EstimationDeviation;
	float Numerator[5];
	float Denominator[6];
	float SampleTime;
	unsigned long SystemReference;
	/* VAR (analog) */
	struct MTIdentLSQInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit StartIdentification;
	/* VAR_OUTPUT (digital) */
	plcbit Busy;
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit IdentificationActive;
	plcbit IdentificationDone;
} MTIdentLSQ_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTIdentLSQ(struct MTIdentLSQ* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTIDENT_ */

