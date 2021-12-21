(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTFlow
 * File: MTFlow.fun
 * Author: B&R
 ********************************************************************
 * Functions and function blocks of library MTFlow
 ********************************************************************)

 FUNCTION_BLOCK MTFlowOrifice (*Function block to measure mass flow with orifices according to EN ISO 5167-2*)
	VAR_INPUT
		Enable : BOOL; (*Enable / disable function block*)
		OrificeType : MTFlowOrificeEnum; (*Kind of pressure tapping (defined with Quotients of distance (up-/downstream)*)
		DiameterPipe : LREAL; (*Pipe diameter in mm*)
		DiameterBore : LREAL; (*Bore diameter in mm*)
		DensityUpstream : LREAL; (*Density upstream in kg/m³*)
		KinViscUpstream : LREAL; (*Kinematic viscosity upstream in m²/s*)
		EnableCompressibility : BOOL; (*Enable / disable consider compressibility of fluid*)
		IsentropicExponent : LREAL; (*Isentropic exponent*)
		PressureUpstream : LREAL; (*Upstream pressure in bar*)
		PressureDownstream : LREAL; (*Downstream pressure in bar*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block active*)
		Error : BOOL; (*Function block error *)
		StatusID : MTFlowStatusEnum; (*Status ID*)
		DiameterRatio : LREAL; (*Diameter ratio DiameterBore/DiameterPipe*)
		ExpansionFactor : LREAL; (*Expansion factor*)
		ReynoldsDiameterPipe : LREAL; (*Reynolds number with respect to pipe diameter*)
		DischargeCoefficient : LREAL; (*Discharge coefficient, Reader-Harris/Gallager equation*)
		FlowVelocityPipe : LREAL; (*Mean axial velocity of the fluid in the pipe in m/s*)
		VolumeFlow : LREAL; (*Volume flow rate in m³/s*)
		MassFlow : LREAL; (*Mass flow rate in kg/s*)
		DistanceQuotientUpstream : LREAL; (*Quotient of the distance of the upstream tapping from the upstream face of the plate and the pipe diameter*)
		DistanceQuotientDownstream : LREAL; (*Quotient of the distance of the downstream tapping from the downstream face of the plate and the pipe diameter (downstream spacing from the downstream face)*)
	END_VAR
	VAR
		Internal : MTFlowInternalType; (*Internal parameter*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTFlowNozzle (*Function block to measure mass flow with nozzles according to EN ISO 5167-3*)
	VAR_INPUT
		Enable : BOOL; (*Enable / disable function block*)
		NozzleType : MTFlowNozzleEnum; (*Define nozzle type*)
		DiameterPipe : LREAL; (*Pipe diameter in mm*)
		DiameterBore : LREAL; (*Bore diameter in mm*)
		DensityUpstream : LREAL; (*Density upstream in kg/m³*)
		KinViscUpstream : LREAL; (*Kinematic viscosity upstream in m²/s*)
		EnableCompressibility : BOOL; (*Enable / disable consider compressibility of fluid*)
		IsentropicExponent : LREAL; (*Isentropic exponent*)
		PressureUpstream : LREAL; (*Upstream pressure in bar*)
		PressureDownstream : LREAL; (*Downstream pressure in bar*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block active*)
		Error : BOOL; (*Function block error *)
		StatusID : MTFlowStatusEnum; (*Status ID*)
		DiameterRatio : LREAL; (*Diameter ratio DiameterBore/DiameterPipe*)
		ExpansionFactor : LREAL; (*Expansion factor*)
		ReynoldsDiameterPipe : LREAL; (*Reynolds number with respect to pipe diameter*)
		DischargeCoefficient : LREAL; (*Discharge coefficient, Reader-Harris/Gallager equation*)
		FlowVelocityPipe : LREAL; (*Mean axial velocity of the fluid in the pipe in m/s*)
		VolumeFlow : LREAL; (*Volume flow rate in m³/s*)
		MassFlow : LREAL; (*Mass flow rate in kg/s*)
	END_VAR
	VAR
		Internal : MTFlowInternalType; (*Internal parameter*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTFlowVenturi (*Function block to measure mass flow with venturi tubes according to EN ISO 5167-4 *)
	VAR_INPUT
		Enable : BOOL; (*Enable / disable function block*)
		VenturiType : MTFlowVenturiEnum; (*Define type of venturi tube*)
		DiameterPipe : LREAL; (*Pipe diameter in mm*)
		DiameterBore : LREAL; (*Bore diameter in mm*)
		DensityUpstream : LREAL; (*Density upstream in kg/m³*)
		KinViscUpstream : LREAL; (*Kinematic viscosity upstream in m²/s*)
		EnableCompressibility : BOOL; (*Enable / disable consider compressibility of fluid*)
		IsentropicExponent : LREAL; (*Isentropic exponent*)
		PressureUpstream : LREAL; (*Upstream pressure in bar*)
		PressureDownstream : LREAL; (*Downstream pressure in bar*)
		DischargeCoefficientExternal : LREAL; (*External DischargeCoefficient if VenturiType == mtVENTURI_USER_SPECIFIC*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block active*)
		Error : BOOL; (*Function block error *)
		StatusID : MTFlowStatusEnum; (*Status ID*)
		DiameterRatio : LREAL; (*Diameter ratio DiameterBore/DiameterPipe*)
		ExpansionFactor : LREAL; (*Expansion factor*)
		ReynoldsDiameterPipe : LREAL; (*Reynolds number with respect to pipe diameter*)
		DischargeCoefficient : LREAL; (*Discharge coefficient, Reader-Harris/Gallager equation*)
		FlowVelocityPipe : LREAL; (*Mean axial velocity of the fluid in the pipe in m/s*)
		VolumeFlow : LREAL; (*Volume flow rate in m³/s*)
		MassFlow : LREAL; (*Mass flow rate in kg/s*)
	END_VAR
END_FUNCTION_BLOCK
