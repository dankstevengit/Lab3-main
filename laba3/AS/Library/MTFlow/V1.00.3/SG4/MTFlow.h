/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTFLOW_
#define _MTFLOW_
#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <sys_lib.h>
#include <brsystem.h>

/* Datatypes and datatypes of function blocks */
typedef enum MTFlowStatusEnum
{	mtERR_ORIFICE_TYPE_NOT_VALID = 36740,
	mtERR_NOZZLE_TYPE_NOT_VALID = 36741,
	mtERR_VENTURI_TYPE_NOT_VALID = 36742,
	mtERR_NEWTON_ITERATION_FAILED = 36743,
	mtERR_PRESSURE_RATIO_NOT_VALID = 36744,
	mtWARN_BORE_DIAMETER_NOT_VALID = 36730,
	mtWARN_PIPE_DIAMETER_NOT_VALID = 36731,
	mtWARN_DIAMETER_RATIO_NOT_VALID = 36732,
	mtWARN_REYNOLDS_OUT_VALID_RANGE = 36733,
	mtWARN_NEWTON_MAX_IT_REACHED = 36734
} MTFlowStatusEnum;

typedef enum MTFlowOrificeEnum
{	mtORIFICE_CORNER_TAPPING = 1,
	mtORIFICE_D_D05_TAPPING = 2,
	mtORIFICE_FLANGE_TAPPING = 3
} MTFlowOrificeEnum;

typedef enum MTFlowNozzleEnum
{	mtNOZZLE_ISA_1932 = 1,
	mtNOZZLE_LONG_RADIUS = 2,
	mtNOZZLE_VENTURI = 3
} MTFlowNozzleEnum;

typedef enum MTFlowVenturiEnum
{	mtVENTURI_CAST = 1,
	mtVENTURI_MACHINED = 2,
	mtVENTURI_ROUGH_WELDED = 3,
	mtVENTURI_USER_SPECIFIC = 4
} MTFlowVenturiEnum;

typedef struct MTFlowInternalType
{	unsigned short Iterations;
	plcbit ItSuccess;
	double ItStartValue;
	double ItStepControl;
	double NewtonEps;
	unsigned short MaxIt;
	float CycleTime;
	unsigned long Bootkey;
} MTFlowInternalType;

typedef struct MTFlowOrifice
{
	/* VAR_INPUT (analog) */
	enum MTFlowOrificeEnum OrificeType;
	double DiameterPipe;
	double DiameterBore;
	double DensityUpstream;
	double KinViscUpstream;
	double IsentropicExponent;
	double PressureUpstream;
	double PressureDownstream;
	/* VAR_OUTPUT (analog) */
	enum MTFlowStatusEnum StatusID;
	double DiameterRatio;
	double ExpansionFactor;
	double ReynoldsDiameterPipe;
	double DischargeCoefficient;
	double FlowVelocityPipe;
	double VolumeFlow;
	double MassFlow;
	double DistanceQuotientUpstream;
	double DistanceQuotientDownstream;
	/* VAR (analog) */
	struct MTFlowInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit EnableCompressibility;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
} MTFlowOrifice_typ;

typedef struct MTFlowNozzle
{
	/* VAR_INPUT (analog) */
	enum MTFlowNozzleEnum NozzleType;
	double DiameterPipe;
	double DiameterBore;
	double DensityUpstream;
	double KinViscUpstream;
	double IsentropicExponent;
	double PressureUpstream;
	double PressureDownstream;
	/* VAR_OUTPUT (analog) */
	enum MTFlowStatusEnum StatusID;
	double DiameterRatio;
	double ExpansionFactor;
	double ReynoldsDiameterPipe;
	double DischargeCoefficient;
	double FlowVelocityPipe;
	double VolumeFlow;
	double MassFlow;
	/* VAR (analog) */
	struct MTFlowInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit EnableCompressibility;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
} MTFlowNozzle_typ;

typedef struct MTFlowVenturi
{
	/* VAR_INPUT (analog) */
	enum MTFlowVenturiEnum VenturiType;
	double DiameterPipe;
	double DiameterBore;
	double DensityUpstream;
	double KinViscUpstream;
	double IsentropicExponent;
	double PressureUpstream;
	double PressureDownstream;
	double DischargeCoefficientExternal;
	/* VAR_OUTPUT (analog) */
	enum MTFlowStatusEnum StatusID;
	double DiameterRatio;
	double ExpansionFactor;
	double ReynoldsDiameterPipe;
	double DischargeCoefficient;
	double FlowVelocityPipe;
	double VolumeFlow;
	double MassFlow;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit EnableCompressibility;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
} MTFlowVenturi_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTFlowOrifice(struct MTFlowOrifice* inst);
_BUR_PUBLIC void MTFlowNozzle(struct MTFlowNozzle* inst);
_BUR_PUBLIC void MTFlowVenturi(struct MTFlowVenturi* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTFLOW_ */

