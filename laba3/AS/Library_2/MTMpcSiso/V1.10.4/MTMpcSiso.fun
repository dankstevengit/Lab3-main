(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTMpcSiso
 * File: MTMpcSiso.fun
 * Author: B&R
 ********************************************************************
 * Functions and function blocks of library MTMpcSiso
 ********************************************************************)

{REDUND_CONTEXT} FUNCTION_BLOCK MTMpcSisoEnhanced (*Model based predictive controller including control-/model-performance inidices*)
	VAR_INPUT
		AsyncAccess : REFERENCE TO MTMpcSisoEnhancedPortType; (*Link to asynchronous comunication port*)
		Enable : BOOL; (*Enable function block*)
		Parameter : MTMpcSisoParameterType; (*Access to controller settings (target settings)*)
		Update : {REDUND_UNREPLICABLE} BOOL; (*Parameter update (rising edge)*)
		SetValue : REFERENCE TO LREAL; (*Intended sequence of reference values*)
		ActValue : LREAL; (*Controlled variables*)
		OutReference : LREAL; (*Manipulating variables acting on controlled system*)
		SetDisturbance : REFERENCE TO LREAL; (*Intended sequence of disturbance values ( feed forward disturbance comp.)*)
		ActDisturbance : LREAL; (*Measured disturbance take affect on the system*)
		DisturbanceEnable : BOOL; (*Consider intended sequences of process disturbances*)
		Reset : BOOL; (*Delete system behavior chronicle (rising edge)*)
		OutPresetValue : LREAL; (*External manipulating variables*)
		SetOut : BOOL; (*Force external manipulating variables*)
	END_VAR
	VAR_OUTPUT
		Active : {REDUND_UNREPLICABLE} BOOL; (*Function block is active*)
		Error : {REDUND_UNREPLICABLE} BOOL; (*Function block error active*)
		StatusID : {REDUND_UNREPLICABLE} DINT; (*Status information*)
		UpdateDone : {REDUND_UNREPLICABLE} BOOL; (*Update is done*)
		Out : LREAL; (*Manipulating variables*)
		OutPredicted : ARRAY[0..199] OF LREAL; (*Predicted sequence of manipulating variables*)
		ActPredicted : ARRAY[0..199] OF LREAL; (*Predicted sequence of controlled variables*)
		ResetActive : {REDUND_UNREPLICABLE} BOOL; (*System reset busy*)
		InitProgress : {REDUND_UNREPLICABLE} USINT; (*Residual calculation time of initialization procedure (%) *)
		Performance : MTMpcSisoEnhancedPerformanceType; (*Control quality evaluation*)
		ActValuePredicted0 : LREAL; (*Model based calculated CV*)
	END_VAR
	VAR
		BasicAdjustment : {REDUND_UNREPLICABLE} MTMpcSisoParameterType; (*Internal controller settings*)
		Internal : MTMpcSisoEnhancedInternalType; (*Data for internal use*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_OK} FUNCTION_BLOCK MTMpcSisoLite (*Model based predictive controller*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block*)
		Parameter : MTMpcSisoParameterType; (*Access to controller settings (target settings)*)
		Update : BOOL; (*Parameter update (rising edge)*)
		SetValue : REFERENCE TO LREAL; (*Intended sequence of reference values*)
		ActValue : LREAL; (*Controlled variables*)
		OutReference : LREAL; (*Manipulating variables acting on controlled system*)
		SetDisturbance : REFERENCE TO LREAL; (*Intended sequence of disturbance values*)
		ActDisturbance : LREAL; (*Measured disturbance take affect on the system*)
		DisturbanceEnable : BOOL; (*Consider intended sequence of disturbance*)
	END_VAR
	VAR_OUTPUT
		Active : {REDUND_UNREPLICABLE} BOOL; (*Function block is active*)
		Error : {REDUND_UNREPLICABLE} BOOL; (*Function block error active*)
		StatusID : {REDUND_UNREPLICABLE} DINT; (*Status information*)
		UpdateDone : {REDUND_UNREPLICABLE} BOOL; (*Update is done*)
		Out : LREAL; (*Manipulating variables*)
		OutPredicted : ARRAY[0..199] OF LREAL; (*Predicted sequence of manipulating variables*)
		ActPredicted : ARRAY[0..199] OF LREAL; (*Predicted sequence of controlled variables*)
		Slack : LREAL; (*Slack variables if soft constraints are enabled*)
		ConditionNr : LREAL; (*L2 condition number of Hessian*)
	END_VAR
	VAR
		BasicAdjustment : {REDUND_UNREPLICABLE} MTMpcSisoParameterType; (*Internal controller settings*)
		Internal : MTMpcSisoLiteInternalType; (*Data for internal use*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_OK} FUNCTION_BLOCK MTMpcSisoReactor (*Linear time invariant dynamic model of a continuous stirred tank reactor*) (*$GROUP=User*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block*)
		CoolantTemperature : LREAL; (*Manipulated variable*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Function block error active*)
		StatusID : DINT; (*Status information*)
		ActTemperature : LREAL; (*Controlled variable*)
	END_VAR
	VAR
		Internal : MTMpcSisoReactorInternalType; (*Data for internal use*)
	END_VAR
END_FUNCTION_BLOCK
