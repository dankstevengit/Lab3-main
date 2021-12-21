(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTIdent
 * File: MTIdent.typ
 * Author: B&R
 * Created: August 30, 2013
 ********************************************************************
 * Data types of library MTIdent
 ********************************************************************)

TYPE
	MTIdentLSQInternalType : 	STRUCT 
		CycleTime : REAL; (*Task cycle time. Unit: [s].*)
		ParametersValid : BOOL; (*Data for internal use.*)
		EnableOld : BOOL; (*Data for internal use.*)
		EnableDone : BOOL; (*Data for internal use.*)
		UpdateOld : BOOL; (*Data for internal use.*)
		DisabledBusy : BOOL; (*Data for internal use.*)
		StartIdentificationOld : BOOL; (*Data for internal use.*)
		SystemOrder : USINT; (*Order of numerator.*)
		WeightingFactor : REAL; (*Weighting factor.*)
		PMatrix : ARRAY[0..99]OF LREAL; (*Matrix for the recursive LSQ - algorithm.*)
		DataVector : ARRAY[0..9]OF LREAL; (*Data vector which contains the current input and output value of the plant as well as past values to compute the recursive LSQ algorithm.*)
		ParameterVector : ARRAY[0..9]OF LREAL; (*Estimated coefficients of the transfer function.*)
		NumberParameter : USINT; (*Number of parameter to be estimated.*)
		IdentificationState : USINT; (*Data for internal use.*)
		SettlingIndex : USINT; (*Data for internal use.*)
		NumberOfSettlingPhases : USINT; (*Data for internal use.*)
		LQParameterVector : ARRAY[0..2]OF REAL; (*Data for internal use.*)
		LQOutput : ARRAY[0..1]OF REAL; (*Data for internal use.*)
		StepHeight : REAL; (*Data for internal use.*)
		PlantOutputOld : REAL; (*Data for internal use.*)
		NoiseDeadBand : REAL; (*Data for internal use.*)
		PlantOutputOffset : REAL; (*Data for internal use.*)
		IdentificationSamples : USINT; (*Data for internal use.*)
		IdentificationDoneOld : BOOL; (*Data for internal use.*)
		SysRefParaNew : BOOL; (*Data for internal use.*)
		SampleTime : REAL; (*Data for internal use.*)
		CounterOld : UDINT; (*Data for internal use.*)
		SystemReference : MTTransferFcnType; (*Data for internal use.*)
	END_STRUCT;
END_TYPE
