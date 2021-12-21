(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTIdent
 * File: MTIdent.fun
 * Author: B&R
 * Created: August 30, 2013
 ********************************************************************
 * Functions and function blocks of library MTIdent
 ********************************************************************)

FUNCTION_BLOCK MTIdentLSQ (*This function block implements a recursive LSQ identification of a discrete dynamic system.*) (*$GROUP=User*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block.*) (* *) (*#PAR#*)
		SystemOrder : USINT; (*System order of the parametric Model.*) (* *) (*#PAR#*)
		StepHeight : REAL; (*End value of the applied step for identification.*) (* *) (*#PAR#*)
		Update : BOOL; (*Parameters update trigger.*) (* *) (*#PAR#*)
		PlantOutput : REAL; (*Output signal of system.*) (* *) (*#CYC#*)
		StartIdentification : BOOL; (*Start and stop identification.*) (* *) (*#CMD#*)
		WeightingFactor : REAL; (*Weighting factor.*) (* *) (*#CMD#OPT#*)
	END_VAR
	VAR_OUTPUT
		Busy : BOOL; (*Function bolck is working.*) (* *) (*#PAR#*)
		Active : BOOL; (*Function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update is sucessful.*) (* *) (*#PAR#*)
		PlantInput : REAL; (*Input signal for unkown system.*) (* *) (*#CYC#*)
		EstimationDeviation : REAL; (*Difference between the estimated and real plant output*) (* *) (*#CYC#*)
		IdentificationActive : BOOL; (*IdentificationActive denotes that the FB is identifying but can be stopped by the user any time.*) (* *) (*#CMD#*)
		IdentificationDone : BOOL; (*IdentificationDone recommends to use the identified data from up to now or even continue with the identification.*) (* *) (*#CMD#*)
		Numerator : ARRAY[0..4] OF REAL; (*Coefficients of numerator [b0, b1, b2, ... bm]. Maximum numerator order m = 4.*) (* *) (*#CMD#*)
		Denominator : ARRAY[0..5] OF REAL; (*Coefficients of denominator [a0, a1, a2, ... an]. Maximum denominator order n = 5.*) (* *) (*#CMD#*)
		SampleTime : REAL; (*SampleTime of transferfunction.*) (* *) (*#CMD#*)
		SystemReference : UDINT; (*System reference.*) (* *) (*#CMD#OPT#*)
	END_VAR
	VAR
		Internal : MTIdentLSQInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK
