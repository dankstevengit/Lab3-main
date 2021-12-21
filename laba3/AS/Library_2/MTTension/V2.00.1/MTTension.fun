
{REDUND_OK} FUNCTION_BLOCK MTTensionController (*Tension controller.*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block.*)
		WebFactor : REAL; (*Eleastic modulus, Cross section*)
		WebLength : DINT; (*Web length to previous printing unit.*)
		MaxVelocityCorrection : REAL; (*Positiv and negative limit of controller output.*)
		Update : BOOL; (*Parameter update trigger.*)
		SetLineVelocity : REAL; (*Set line speed.*)
		SetMaterialTension : REAL; (*Set material tension.*)
		ActMaterialTension : REAL; (*Actual material tension.*)
		ResponseRate : REAL; (*Time constant of tension control loop.*)
		ResponseOvershoot : REAL; (*Tendency to osillate of the tension control loop.*)
		InitController : BOOL; (*Initializes control parameters at a positive edge.*)
		Invert : BOOL; (*Changes the sign of the controller output.*)
		Hold : BOOL; (*Last output value is kept constant.*)
		Reset : BOOL; (*Resets the controller at a rising edge.*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*)
		Error : BOOL; (*Indicates an error.*)
		StatusID : DINT; (*Status information.*)
		UpdateDone : BOOL; (*Update is done.*)
		VelocityCorrection : REAL; (*Actual correction speed*)
		InitDone : BOOL; (*Control parametes initialized.*)
	END_VAR
	VAR
		Internal : MTTensionControllerInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_OK} FUNCTION_BLOCK MTTensionDecoupling (*Tension decoupling network.*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block.*)
		Parameters : MTTensionParametersType; (*System parameters.*)
		Update : BOOL; (*Parameter update trigger.*)
		VelocityCorrectionIn : ARRAY[0..19] OF REAL; (*Output of tenstion controllers.*)
		SetLineVelocity : REAL; (*Set line speed.*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*)
		Error : BOOL; (*Indicates an error.*)
		StatusID : DINT; (*Status information.*)
		UpdateDone : BOOL; (*Update is done.*)
		VelocityCorrectionOut : ARRAY[0..19] OF REAL; (*Network output correction speed.*)
	END_VAR
	VAR
		Internal : MTTensionDecouplingInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_OK} FUNCTION_BLOCK MTTensionSimulationModel (*Tension Simulation Model.*) (*$GROUP=User*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block.*)
		Parameters : MTTensionSimulationType; (*System parameters.*)
		Update : BOOL; (*Parameter update trigger.*)
		ActVelocity : ARRAY[0..19] OF REAL; (*Velocity of feedrollers.*)
		MaterialTensionIn : REAL; (*Input Tension.*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*)
		Error : BOOL; (*Indicates an error.*)
		StatusID : DINT; (*Status information.*)
		UpdateDone : BOOL; (*Update is done.*)
		ActMaterialTension : ARRAY[0..19] OF REAL; (*Simulation Model output zone-tension.*)
		MaterialBreak : BOOL; (*Indicates material break*)
	END_VAR
	VAR
		Internal : MTTensionSimulationModelIntType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK
