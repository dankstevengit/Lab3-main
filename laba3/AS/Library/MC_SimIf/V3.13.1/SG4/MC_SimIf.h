/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MC_SIMIF_
#define _MC_SIMIF_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef struct MC_LOAD_SIM_INPUT_DATA_REF
{	double Position;
	float Velocity;
	float Acceleration;
} MC_LOAD_SIM_INPUT_DATA_REF;

typedef struct MC_0131_IS_TYP
{	float TSample;
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	unsigned char state;
	struct MC_LOAD_SIM_INPUT_DATA_REF LoadSimInputData;
	unsigned char LockID;
	unsigned char LockIDPar;
	unsigned short PosIntegerOffset;
	unsigned char PosIntegerRecIdx;
	unsigned char Reserve1;
	unsigned short PosRealOffset;
	unsigned char PosRealRecIdx;
	unsigned char Reserve2;
	unsigned short VelRealOffset;
	unsigned char VelRecIdx;
	unsigned char LockIDFb;
	unsigned short ErrorID;
	unsigned long Reserve3;
} MC_0131_IS_TYP;

typedef struct MC_0132_IS_TYP
{	float TSample;
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	unsigned char state;
	unsigned char LockID;
	unsigned char LockIDPar;
	unsigned short VarIdx;
	unsigned short ErrorID;
	unsigned short VarParIndex;
	unsigned char LockIDFb;
	unsigned char Reserve1;
	unsigned short Reserve2;
	unsigned long Reserve3;
} MC_0132_IS_TYP;

typedef struct MC_0142_IS_TYP
{	float TSample;
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	unsigned char state;
	float Torque;
	unsigned char LockID;
	unsigned char LockIDPar;
	unsigned char Reserve1;
	unsigned char Reserve2;
	unsigned short TorqueRealOffset;
	unsigned char TorqueRealRecIdx;
	unsigned char LockIDFb;
	unsigned short ErrorID;
	unsigned short Reserve3;
} MC_0142_IS_TYP;

typedef struct MC_0143_IS_TYP
{	float TSample;
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
	unsigned char state;
	unsigned char nextState;
	unsigned char LockID;
	unsigned char LockIDPar;
	unsigned char Reserve1;
	unsigned short VarIdx;
	unsigned short ErrorID;
	unsigned long Increments;
	unsigned long MotorRevolutions;
	unsigned short VarParIndex;
	unsigned short Reserve2;
	unsigned short PreviousMode;
	unsigned char LockIDFb;
	unsigned short C_ErrorID;
} MC_0143_IS_TYP;

typedef struct MC_BR_ReadLoadSimInputData
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	struct MC_LOAD_SIM_INPUT_DATA_REF LoadSimInputData;
	/* VAR (analog) */
	unsigned long C_Axis;
	struct MC_0131_IS_TYP IS;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_BR_ReadLoadSimInputData_typ;

typedef struct MC_BR_WriteLoadSimTorque
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	float Torque;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	/* VAR (analog) */
	unsigned long C_Axis;
	struct MC_0132_IS_TYP IS;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_BR_WriteLoadSimTorque_typ;

typedef struct MC_BR_ReadLoadSimTorque
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	float Torque;
	/* VAR (analog) */
	unsigned long C_Axis;
	struct MC_0142_IS_TYP IS;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_BR_ReadLoadSimTorque_typ;

typedef struct MC_BR_WriteLoadSimPosition
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	double Position;
	/* VAR_OUTPUT (analog) */
	unsigned short ErrorID;
	/* VAR (analog) */
	unsigned long C_Axis;
	struct MC_0143_IS_TYP IS;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	/* VAR_OUTPUT (digital) */
	plcbit Valid;
	plcbit Busy;
	plcbit Error;
} MC_BR_WriteLoadSimPosition_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void MC_BR_ReadLoadSimInputData(struct MC_BR_ReadLoadSimInputData* inst);
_BUR_PUBLIC void MC_BR_WriteLoadSimTorque(struct MC_BR_WriteLoadSimTorque* inst);
_BUR_PUBLIC void MC_BR_ReadLoadSimTorque(struct MC_BR_ReadLoadSimTorque* inst);
_BUR_PUBLIC void MC_BR_WriteLoadSimPosition(struct MC_BR_WriteLoadSimPosition* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MC_SIMIF_ */

