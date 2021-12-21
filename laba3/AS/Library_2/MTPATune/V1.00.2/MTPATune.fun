
{REDUND_OK} FUNCTION_BLOCK MTPATuneFiniteFrequency (*Parametric dynamic model indentification combined with loop shaping based PID tuning*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*)
		Parameters : MTPATuneFFParametersType; (*Function block parameters.*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*)
		Offset : REAL; (*Offset which is added to output Out. Offset kept constant during active tuning procedure.*)
		Start : BOOL; (*Starts the tuning on rising edge.*)
		PlantInput : REAL; (*Current plant input signal.*)
		PlantOutput : REAL; (*Current plant output signal.*)
		RecalculateController : BOOL; (*Calculates the controller parameters again without identification on a rising edge (onle if tuning was carried out once).*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*)
		Error : BOOL; (*Indicates an error.*)
		StatusID : DINT; (*Status information.*)
		UpdateDone : BOOL; (*Update is done.*)
		TuningActive : BOOL; (*Tuning is active.*)
		TuningDone : BOOL; (*Tuning completed.*)
		Out : REAL; (*Output value (manipulated variable).*)
		PIDParameters : MTPATunePIDParametersType; (*PID parameters.*)
		Numerator : ARRAY[0..1] OF REAL; (*Coefficients of plant transer function nominator: k(s) = b[1]*s +  b[0]*) (* *) (*#PAR#*)
		Denominator : ARRAY[0..2] OF REAL; (*Coefficients of plant transer function denominator: d(s) =a[2] * s^2 +  a[1] * s + a[0]*) (* *) (*#PAR#*)
	END_VAR
	VAR
		Internal : MTPATuneFFInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK
