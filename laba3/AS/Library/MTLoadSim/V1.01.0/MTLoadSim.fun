(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTLoadSim
 * File: MTLoadSim.fun
 * Author: B + R
 ********************************************************************
 * Functions and function blocks of library MTLoadSim
 ********************************************************************)

FUNCTION_BLOCK MTLoadSimCoupling
	VAR_INPUT
		Enable : BOOL;
		Configuration : MTLoadSimCouplConfigType;
		StateValues : MTLoadSimStateValuesType;
		StateValuesFeedback : MTLoadSimStateValuesType;
		ActivateSimulation : BOOL;
	END_VAR
	VAR_OUTPUT
		Initialized : BOOL;
		Busy : BOOL;
		Error : BOOL;
		ErrorID : DINT;
		Torque : REAL;
		TorqueFeedback : REAL;
		InOperation : BOOL;
	END_VAR
	VAR
		Internal : MTLoadSimCouplInternalType;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTLoadSimMass
	VAR_INPUT
		Enable : BOOL;
		Configuration : MTLoadSimMassConfigType;
		Torque : REAL;
		TorqueFeedback : REAL;
		TorqueLoad : REAL;
		ActivateSimulation : BOOL;
	END_VAR
	VAR_OUTPUT
		Initialized : BOOL;
		Busy : BOOL;
		Error : BOOL;
		ErrorID : DINT;
		StateValues : MTLoadSimStateValuesType;
		StateValuesFeedback : MTLoadSimStateValuesType;
		InOperation : BOOL;
	END_VAR
	VAR
		Internal : MTLoadSimMassInternalType;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTLoadSimFriction
	VAR_INPUT
		Enable : BOOL;
		Configuration : MTLoadSimConfigFrictionType;
		StateValues : MTLoadSimStateValuesType;
		StateValuesFeedback : MTLoadSimStateValuesType;
		TorqueDrive : REAL;
		ActivateSimulation : BOOL;
	END_VAR
	VAR_OUTPUT
		Initialized : BOOL;
		Busy : BOOL;
		Error : BOOL;
		ErrorID : DINT;
		TorqueFriction : REAL;
		InOperation : BOOL;
	END_VAR
	VAR
		Internal : MTLoadSimFrictionInternalType;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTLoadSimTwoMass
	VAR_INPUT
		Enable : BOOL;
		Configuration : MTLoadSimConfigTwoMassType;
		Torque : REAL;
		TorqueFrictionMass1 : REAL;
		TorqueFrictionMass2 : REAL;
		TorqueLoad : REAL;
		ActivateSimulation : BOOL;
	END_VAR
	VAR_OUTPUT
		Initialized : BOOL;
		Busy : BOOL;
		Error : BOOL;
		ErrorID : DINT;
		StateValuesMass1 : MTLoadSimStateValuesType;
		StateValuesMass2 : MTLoadSimStateValuesType;
		StateValuesFeedback : MTLoadSimStateValuesType;
		TorqueMass1 : REAL;
		TorqueMass2 : REAL;
		InOperation : BOOL;
	END_VAR
	VAR
		Internal : MTLoadSimTwoMassInternalType;
	END_VAR
END_FUNCTION_BLOCK


