/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTLOADSIM_
#define _MTLOADSIM_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define mtLOADSIM_ERR_INVALID_DATAPOINTS 1089667088
 #define mtLOADSIM_ERR_INVALID_MODE 1089667087
 #define mtLOADSIM_ERR_INVALID_STRI_VEL 1089667086
 #define mtLOADSIM_ERR_INVALID_STRI_EXP 1089667085
 #define mtLOADSIM_ERR_INVALID_FRIC_EPS 1089667084
 #define mtLOADSIM_ERR_INVALID_CHAR_VEL 1089667083
 #define mtLOADSIM_ERR_INVALID_VISC_FRI 1089667082
 #define mtLOADSIM_ERR_INVALID_DYN_FRI 1089667081
 #define mtLOADSIM_ERR_INVALID_STAT_FRI 1089667080
 #define mtLOADSIM_ERR_INVALID_INERTIA 1089667079
 #define mtLOADSIM_ERR_INVALID_ACTIVE 1089667078
 #define mtLOADSIM_ERR_INVALID_TSAMPLE 1089667077
 #define mtLOADSIM_ERR_INVALID_BACKLASH 1089667076
 #define mtLOADSIM_ERR_INVALID_EFFICIENCY 1089667075
 #define mtLOADSIM_ERR_INVALID_RATIO 1089667074
 #define mtLOADSIM_ERR_INVALID_DAMPING 1089667073
 #define mtLOADSIM_ERR_INVALID_STIFFNESS 1089667072
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_DATAPOINTS;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_MODE;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_STRI_VEL;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_STRI_EXP;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_FRIC_EPS;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_CHAR_VEL;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_VISC_FRI;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_DYN_FRI;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_STAT_FRI;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_INERTIA;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_ACTIVE;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_TSAMPLE;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_BACKLASH;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_EFFICIENCY;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_RATIO;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_DAMPING;
 _GLOBAL_CONST signed long mtLOADSIM_ERR_INVALID_STIFFNESS;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum MTLoadSimFricModeEnum
{	mtLOADSIM_MODE_NO_FRICTION,
	mtLOADSIM_MODE_FRIC_KINETIC,
	mtLOADSIM_MODE_FRIC_KARNOPP,
	mtLOADSIM_MODE_FRIC_REGULATED
} MTLoadSimFricModeEnum;

typedef struct MTLoadSimConfigFrictionType
{	enum MTLoadSimFricModeEnum Mode;
	float StaticFriction;
	float DynamicFriction;
	float ViscousFriction;
	float StribeckVelocity;
	float ApproximateVelocity;
	float FrictionEpsilon;
	float StribeckExponent;
} MTLoadSimConfigFrictionType;

typedef struct MTLoadSimConfigMassType
{	float Inertia;
	float InitialStates[2];
} MTLoadSimConfigMassType;

typedef struct MTLoadSimConfigTwoMassType
{	float InertiaMass1;
	float InertiaMass2;
	float Stiff;
	float Damp;
	float Ratio;
	float InitialStates[4];
} MTLoadSimConfigTwoMassType;

typedef struct MTLoadSimMassConfigType
{	struct MTLoadSimConfigMassType Mass;
	struct MTLoadSimConfigFrictionType Friction;
} MTLoadSimMassConfigType;

typedef struct MTLoadSimCouplConfigType
{	float Stiff;
	float Damp;
	float Ratio;
	float Efficiency;
	float BacklashWidth;
	float InitialOutputBacklash;
} MTLoadSimCouplConfigType;

typedef struct MTLoadSimStateValuesInternalType
{	double Position;
	double Velocity;
	double Acceleration;
} MTLoadSimStateValuesInternalType;

typedef struct MTLoadSimStateValuesType
{	double Position;
	float Velocity;
	float Acceleration;
} MTLoadSimStateValuesType;

typedef struct MTLoadSimCouplInternalType
{	float TSample;
	plcbit Initialized;
	plcbit InOperation;
	plcbit Busy;
	plcbit Error;
	unsigned short step;
	signed long ErrorID;
	double Position_old;
	struct MTLoadSimCouplConfigType Configuration;
	double TorqueFeedback;
	double Torque;
} MTLoadSimCouplInternalType;

typedef struct MTLoadSimFrictionInternalType
{	float TSample;
	plcbit Initialized;
	plcbit InOperation;
	plcbit Busy;
	plcbit Error;
	unsigned short step;
	unsigned short Reserve1;
	signed long ErrorID;
	struct MTLoadSimConfigFrictionType Configuration;
	float TorqueFriction;
} MTLoadSimFrictionInternalType;

typedef struct MTLoadSimTwoMassInternalType
{	float TSample;
	plcbit Initialized;
	plcbit InOperation;
	plcbit Busy;
	plcbit Error;
	unsigned short Reserve1;
	unsigned short step;
	signed long ErrorID;
	struct MTLoadSimStateValuesInternalType StateValuesMass1;
	double Torque1;
	struct MTLoadSimStateValuesInternalType StateValuesMass2;
	double Torque2;
	struct MTLoadSimConfigTwoMassType Configuration;
	double TorqueFriction;
	float SysVector[40];
	unsigned short Reserve2;
	plcbit StatusBusy;
	plcbit StatusWorking;
} MTLoadSimTwoMassInternalType;

typedef struct MTLoadSimMassInternalType
{	float TSample;
	plcbit Initialized;
	plcbit InOperation;
	plcbit Busy;
	plcbit Error;
	unsigned short step;
	unsigned short Reserve1;
	signed long ErrorID;
	struct MTLoadSimStateValuesInternalType StateValues;
	struct MTLoadSimMassConfigType Configuration;
	float TorqueFriction;
} MTLoadSimMassInternalType;

typedef struct MTLoadSimCoupling
{
	/* VAR_INPUT (analog) */
	struct MTLoadSimCouplConfigType Configuration;
	struct MTLoadSimStateValuesType StateValues;
	struct MTLoadSimStateValuesType StateValuesFeedback;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	float Torque;
	float TorqueFeedback;
	/* VAR (analog) */
	struct MTLoadSimCouplInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit ActivateSimulation;
	/* VAR_OUTPUT (digital) */
	plcbit Initialized;
	plcbit Busy;
	plcbit Error;
	plcbit InOperation;
} MTLoadSimCoupling_typ;

typedef struct MTLoadSimMass
{
	/* VAR_INPUT (analog) */
	struct MTLoadSimMassConfigType Configuration;
	float Torque;
	float TorqueFeedback;
	float TorqueLoad;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	struct MTLoadSimStateValuesType StateValues;
	struct MTLoadSimStateValuesType StateValuesFeedback;
	/* VAR (analog) */
	struct MTLoadSimMassInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit ActivateSimulation;
	/* VAR_OUTPUT (digital) */
	plcbit Initialized;
	plcbit Busy;
	plcbit Error;
	plcbit InOperation;
} MTLoadSimMass_typ;

typedef struct MTLoadSimFriction
{
	/* VAR_INPUT (analog) */
	struct MTLoadSimConfigFrictionType Configuration;
	struct MTLoadSimStateValuesType StateValues;
	struct MTLoadSimStateValuesType StateValuesFeedback;
	float TorqueDrive;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	float TorqueFriction;
	/* VAR (analog) */
	struct MTLoadSimFrictionInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit ActivateSimulation;
	/* VAR_OUTPUT (digital) */
	plcbit Initialized;
	plcbit Busy;
	plcbit Error;
	plcbit InOperation;
} MTLoadSimFriction_typ;

typedef struct MTLoadSimTwoMass
{
	/* VAR_INPUT (analog) */
	struct MTLoadSimConfigTwoMassType Configuration;
	float Torque;
	float TorqueFrictionMass1;
	float TorqueFrictionMass2;
	float TorqueLoad;
	/* VAR_OUTPUT (analog) */
	signed long ErrorID;
	struct MTLoadSimStateValuesType StateValuesMass1;
	struct MTLoadSimStateValuesType StateValuesMass2;
	struct MTLoadSimStateValuesType StateValuesFeedback;
	float TorqueMass1;
	float TorqueMass2;
	/* VAR (analog) */
	struct MTLoadSimTwoMassInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit ActivateSimulation;
	/* VAR_OUTPUT (digital) */
	plcbit Initialized;
	plcbit Busy;
	plcbit Error;
	plcbit InOperation;
} MTLoadSimTwoMass_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MTLoadSimCoupling(struct MTLoadSimCoupling* inst);
_BUR_PUBLIC void MTLoadSimMass(struct MTLoadSimMass* inst);
_BUR_PUBLIC void MTLoadSimFriction(struct MTLoadSimFriction* inst);
_BUR_PUBLIC void MTLoadSimTwoMass(struct MTLoadSimTwoMass* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTLOADSIM_ */

