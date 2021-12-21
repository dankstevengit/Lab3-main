(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTFlow
 * File: MTFlow.typ
 * Author: B&R
 ********************************************************************
 * Data types of library MTFlow
 ********************************************************************)

TYPE
	MTFlowStatusEnum : 
		( (*Status information*)
		mtERR_ORIFICE_TYPE_NOT_VALID := 36740, (*Error: Definition of orifice type invalid*)
		mtERR_NOZZLE_TYPE_NOT_VALID := 36741, (*Error: Definition of nozzle type invalid*)
		mtERR_VENTURI_TYPE_NOT_VALID := 36742, (*Error: Definition of venturi pipe type invalid*)
		mtERR_NEWTON_ITERATION_FAILED := 36743, (*Error: Iteration process failed to produce a valid solution*)
		mtERR_PRESSURE_RATIO_NOT_VALID := 36744, (*Error: Pressure ratio is outside valid range*)
		mtWARN_BORE_DIAMETER_NOT_VALID := 36730, (*Warning: Diameter of throttle unit outside valid range*)
		mtWARN_PIPE_DIAMETER_NOT_VALID := 36731, (*Warning: Pipe diameter outside valid range*)
		mtWARN_DIAMETER_RATIO_NOT_VALID := 36732, (*Warning: Diameter ratio outside valid range*)
		mtWARN_REYNOLDS_OUT_VALID_RANGE := 36733, (*Warning: Reynolds number is outside the valid range*)
		mtWARN_NEWTON_MAX_IT_REACHED := 36734 (*Warning: The maximum number of iterations has been reached*)
		);
	MTFlowOrificeEnum : 
		( (*Orifice type*)
		mtORIFICE_CORNER_TAPPING := 1, (*Orifice plate with corner pressure tappings*)
		mtORIFICE_D_D05_TAPPING := 2, (*Orifice plate with D and D/2 pressure tappings*)
		mtORIFICE_FLANGE_TAPPING := 3 (*Orifice plate with flange pressure tappings*)
		);
	MTFlowNozzleEnum : 
		( (*Nozzle type*)
		mtNOZZLE_ISA_1932 := 1, (*ISA 1932 nozzle*)
		mtNOZZLE_LONG_RADIUS := 2, (*Long radius nozzle*)
		mtNOZZLE_VENTURI := 3 (*Venturi nozzle*)
		);
	MTFlowVenturiEnum : 
		( (*Venturi tube type*)
		mtVENTURI_CAST := 1, (*Classical Venturi tube with an "as cast" convergent section*)
		mtVENTURI_MACHINED := 2, (*Classical Venturi tube with a machined convergent section*)
		mtVENTURI_ROUGH_WELDED := 3, (*Classical Venturi tube with a rough-welded sheet-iron convergent section*)
		mtVENTURI_USER_SPECIFIC := 4 (*User specific venturi tube, Discharge coefficient has to be defined (no limitations) *)
		);
	MTFlowInternalType : 	STRUCT 
		Iterations : UINT := 0; (*Data for internal use.*)
		ItSuccess : BOOL := 0; (*Data for internal use.*)
		ItStartValue : LREAL; (*Data for internal use.*)
		ItStepControl : LREAL := 1.0; (*Data for internal use.*)
		NewtonEps : LREAL; (*Data for internal use.*)
		MaxIt : UINT := 200; (*Data for internal use.*)
		CycleTime : REAL; (*Task cycle time. Unit: [s].*)
		Bootkey : UDINT := 0; (*Data for internal use.*)
	END_STRUCT;
END_TYPE
