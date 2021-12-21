(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTLoadSim
 * File: MTLoadSim.typ
 * Author: B + R
 ********************************************************************
 * Data types of library MTLoadSim
 ********************************************************************)

TYPE
	MTLoadSimConfigFrictionType : 	STRUCT 
		Mode : MTLoadSimFricModeEnum;
		StaticFriction : REAL;
		DynamicFriction : REAL;
		ViscousFriction : REAL;
		StribeckVelocity : REAL;
		ApproximateVelocity : REAL;
		FrictionEpsilon : REAL;
		StribeckExponent : REAL;
	END_STRUCT;
	MTLoadSimConfigMassType : 	STRUCT 
		Inertia : REAL;
		InitialStates : ARRAY[0..1]OF REAL;
	END_STRUCT;
	MTLoadSimConfigTwoMassType : 	STRUCT 
		InertiaMass1 : REAL;
		InertiaMass2 : REAL;
		Stiff : REAL;
		Damp : REAL;
		Ratio : REAL;
		InitialStates : ARRAY[0..3]OF REAL;
	END_STRUCT;
	MTLoadSimMassConfigType : 	STRUCT 
		Mass : MTLoadSimConfigMassType;
		Friction : MTLoadSimConfigFrictionType;
	END_STRUCT;
	MTLoadSimCouplConfigType : 	STRUCT 
		Stiff : REAL;
		Damp : REAL;
		Ratio : REAL;
		Efficiency : REAL;
		BacklashWidth : REAL;
		InitialOutputBacklash : REAL;
	END_STRUCT;
	MTLoadSimStateValuesInternalType : 	STRUCT 
		Position : LREAL;
		Velocity : LREAL;
		Acceleration : LREAL;
	END_STRUCT;
	MTLoadSimStateValuesType : 	STRUCT 
		Position : LREAL;
		Velocity : REAL;
		Acceleration : REAL;
	END_STRUCT;
	MTLoadSimCouplInternalType : 	STRUCT 
		TSample : REAL;
		Initialized : BOOL;
		InOperation : BOOL;
		Busy : BOOL;
		Error : BOOL;
		step : UINT;
		ErrorID : DINT;
		Position_old : LREAL;
		Configuration : MTLoadSimCouplConfigType;
		TorqueFeedback : LREAL;
		Torque : LREAL;
	END_STRUCT;
	MTLoadSimFricModeEnum : 
		(
		mtLOADSIM_MODE_NO_FRICTION,
		mtLOADSIM_MODE_FRIC_KINETIC,
		mtLOADSIM_MODE_FRIC_KARNOPP,
		mtLOADSIM_MODE_FRIC_REGULATED
		);
	MTLoadSimFrictionInternalType : 	STRUCT 
		TSample : REAL;
		Initialized : BOOL;
		InOperation : BOOL;
		Busy : BOOL;
		Error : BOOL;
		step : UINT;
		Reserve1 : UINT;
		ErrorID : DINT;
		Configuration : MTLoadSimConfigFrictionType;
		TorqueFriction : REAL;
	END_STRUCT;
	MTLoadSimTwoMassInternalType : 	STRUCT 
		TSample : REAL;
		Initialized : BOOL;
		InOperation : BOOL;
		Busy : BOOL;
		Error : BOOL;
		Reserve1 : UINT;
		step : UINT;
		ErrorID : DINT;
		StateValuesMass1 : MTLoadSimStateValuesInternalType;
		Torque1 : LREAL;
		StateValuesMass2 : MTLoadSimStateValuesInternalType;
		Torque2 : LREAL;
		Configuration : MTLoadSimConfigTwoMassType;
		TorqueFriction : LREAL;
		SysVector : ARRAY[0..39]OF REAL;
		Reserve2 : UINT;
		StatusBusy : BOOL;
		StatusWorking : BOOL;
	END_STRUCT;
	MTLoadSimMassInternalType : 	STRUCT 
		TSample : REAL;
		Initialized : BOOL;
		InOperation : BOOL;
		Busy : BOOL;
		Error : BOOL;
		step : UINT;
		Reserve1 : UINT;
		ErrorID : DINT;
		StateValues : MTLoadSimStateValuesInternalType;
		Configuration : MTLoadSimMassConfigType;
		TorqueFriction : REAL;
	END_STRUCT;
END_TYPE
