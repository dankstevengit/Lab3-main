(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTMpcMimo
 * File: MTMpcMimo.fun
 * Author: B&R
 ********************************************************************
 * Functions and function blocks of library MTMpcMimo
 ********************************************************************)

FUNCTION_BLOCK MTMpcMimoEnhanced (*Model based predictive controller including control-/model-performance inidices*)
	VAR_INPUT
		AsyncAccess : REFERENCE TO MTMpcMimoEnhancedPortType; (*Link to asynchronous comunication port*)
		Enable : BOOL; (*Enable function block*)
		Parameter : MTMpcMimoParameterType; (*Access to controller settings (target settings)*)
		Update : BOOL; (*Parameter update (rising edge)*)
		SetValue : REFERENCE TO LREAL; (*Intended sequence of reference values*)
		ActValue : ARRAY[0..9] OF LREAL; (*Controlled variables*)
		OutReference : ARRAY[0..9] OF LREAL; (*Manipulating variables acting on controlled system*)
		SetDisturbance : REFERENCE TO LREAL; (*Intended sequence of disturbance values ( feed forward disturbance comp.)*)
		ActDisturbance : ARRAY[0..9] OF LREAL; (*Measured disturbance take affect on the system*)
		DisturbanceEnable : ARRAY[0..9] OF BOOL; (*Consider intended sequences of process disturbances*)
		Reset : BOOL; (*Delete system behavior chronicle (rising edge)*)
		OutPresetValue : ARRAY[0..9] OF LREAL; (*External manipulating variables*)
		SetOut : ARRAY[0..9] OF BOOL; (*Force external manipulating variables*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Function block error active*)
		StatusID : DINT; (*Status information*)
		UpdateDone : BOOL; (*Update is done*)
		Out : ARRAY[0..9] OF LREAL; (*Manipulating variables*)
		OutPredicted : ARRAY[0..1999] OF LREAL; (*Predicted sequence of manipulating variables*)
		ActPredicted : ARRAY[0..1999] OF LREAL; (*Predicted sequence of controlled variables*)
		ResetActive : BOOL; (*System reset busy*)
		InitProgress : USINT; (*Residual calculation time of initialization procedure (%) *)
		Performance : MTMpcMimoEnhancedPerformanceType; (*Control quality evaluation*)
		ActValuePredicted0 : ARRAY[0..9] OF LREAL; (*Model based calculated CV*)
	END_VAR
	VAR
		BasicAdjustment : MTMpcMimoParameterType; (*Internal controller settings*)
		Internal : MTMpcMimoEnhancedInternalType; (*Data for internal use*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTMpcMimoLite (*Model based predictive controller*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block*)
		Parameter : MTMpcMimoParameterType; (*Access to controller settings (target settings)*)
		Update : BOOL; (*Parameter update (rising edge)*)
		SetValue : REFERENCE TO LREAL; (*Intended sequence of reference values*)
		ActValue : ARRAY[0..9] OF LREAL; (*Controlled variables*)
		OutReference : ARRAY[0..9] OF LREAL; (*Manipulating variables acting on controlled system*)
		SetDisturbance : REFERENCE TO LREAL; (*Intended sequence of disturbance values*)
		ActDisturbance : ARRAY[0..9] OF LREAL; (*Measured disturbance take affect on the system*)
		DisturbanceEnable : ARRAY[0..9] OF BOOL; (*Consider intended sequence of disturbance*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Function block error active*)
		StatusID : DINT; (*Status information*)
		UpdateDone : BOOL; (*Update is done*)
		Out : ARRAY[0..9] OF LREAL; (*Manipulating variables*)
		OutPredicted : ARRAY[0..1999] OF LREAL; (*Predicted sequence of manipulating variables*)
		ActPredicted : ARRAY[0..1999] OF LREAL; (*Predicted sequence of controlled variables*)
		Slack : ARRAY[0..9] OF LREAL; (*Slack variables if soft constraints are enabled*)
		ConditionNr : LREAL; (*L2 condition number of Hessian*)
	END_VAR
	VAR
		BasicAdjustment : MTMpcMimoParameterType; (*Internal controller settings*)
		Internal : MTMpcMimoLiteInternalType; (*Data for internal use*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTMpcMimoOilFractionator (*Linear time invariant multiple-variable oil-fractionator model*) (*$GROUP=User*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block*)
		TopDraw : LREAL; (*First manipulated variable*)
		SideDraw : LREAL; (*Second manipulated variable*)
		BottomRefluxDuty : LREAL; (*Third manipulated variable*)
		UpperRefluxDuty : LREAL; (*First disturbance variable*)
		IntermediateRefluxDuty : LREAL; (*Second disturbance varialbe*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Function block error active*)
		StatusID : DINT; (*Status information*)
		TopEndPointComposition : LREAL; (*First controlled variable*)
		SideEndPointComposition : LREAL; (*Second controlled variable*)
		BottomRefluxTemperature : LREAL; (*Third controlled variable*)
	END_VAR
	VAR
		Internal : MTMpcMimoOilFractionatorInternal; (*Data for internal use*)
	END_VAR
END_FUNCTION_BLOCK
