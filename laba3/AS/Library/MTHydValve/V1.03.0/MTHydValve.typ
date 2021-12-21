(*Types of MTHydValvePositionController*)

TYPE
	MTHydValveCoordinateSystemEnum : 
		( (*Enumeration for the coordinate system.*)
		mtHYDVALVE_CYLCHAMBER1_POSDIR := 0, (*A pressurization in the cylinder chamber 1 ensures a movement in positive direction.*)
		mtHYDVALVE_CYLCHAMBER2_POSDIR := 1 (*A pressurization in the cylinder chamber 2 ensures a movement in positive direction.*)
		);
	MTHydValveCurveEnum : 
		( (*Enum for valve identification mode. *)
		mtHYDVALVE_NOMINAL_CURVE := 0, (*Nominal valve characteristics curve. This curve should be used if the pressure drop over the valve is available. (Servo correction is on).*)
		mtHYDVALVE_VELOCITY_CURVE := 1 (*Valve characteristics curve is proportional to the measured cylinder velocity. This curve can be used if the pressure drop over the valve is not available. (Servo correction is off).*)
		);
	MTHydValveForceConInternalType :  	STRUCT  (*Internal parameter structure of MTHydValveForceController*)
		ParametersValid :  BOOL; (*Data for internal use.*)
		UpdateOld :  BOOL; (*Data for internal use.*)
		EnableOld :  BOOL; (*Data for internal use.*)
		CycleTime :  REAL; (*Task cycle time. Unit: [s].*)
		Parameters :  MTHydValveForceParameterIntType; (*Data for internal use.*)
		ServoCorrectionEnabled :  BOOL; (*Data for internal use.*)
		EnableIntegrationPartOld :  BOOL; (*Data for internal use.*)
		PIDOutput :  MTHydValvePIDOutputType; (*Data for internal use.*)
		ControlErrorOld :  REAL; (*Data for internal use.*)
		LastIntegrationPart :  REAL; (*Data for internal use.*)
		ValveOpeningForceServoCorrection :  REAL; (*Data for internal use.*)
		dFyServo_StatusID :  UDINT; (*Data for internal use.*)
		vyServo_StatusID :  UDINT; (*Data for internal use.*)
		PIDAdv_StatusID :  UDINT; (*Data for internal use.*)
		ValveOpeningVyServoCorrection :  REAL; (*Data for internal use.*)
		ControlError :  REAL; (*Data for internal use.*)
		pPos :  REAL; (*Data for internal use.*)
		pNeg :  REAL; (*Data for internal use.*)
		Aneg :  REAL; (*Data for internal use.*)
		Apos :  REAL; (*Data for internal use.*)
		Qnom_neg :  REAL; (*Data for internal use.*)
		Qnom_pos :  REAL; (*Data for internal use.*)
		PIDParameters :  MTHydValveInternalPIDParaType; (*Data for internal use.*)
		Fmax :  REAL; (*Data for internal use.*)
		CyclicError :  BOOL; (*Data for internal use.*)
		IntegrationStatus :  MTPIDIntegrationEnum; (*Data for internal use.*)
		ResetIntegrationPartOld :  BOOL; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*MTHydValveForceController*)

TYPE
	MTHydValveForceConMachDataType :  	STRUCT  (*MachineData parameters of the hydraulic force controller for servocorrection*)
		MaxPumpPressure :  REAL; (*Maximum system pressure (supply pressure). Units: [bar]. Valid value range: MaxPumpPressure &gt= 0.*)
		TankPressure :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Tank pressure. Units: [bar]. Valid value range: TankPressure >= 0.*)
		CylinderArea1 :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Cylinder piston area whose pressurization induces a movement in the positive direction (e.g. extending piston). Units: [cm2]. Valid value range: CylinderArea1 > 0.*)
		CylinderArea2 :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Cylinder piston area whose pressurization induces a movement in the negative direction (e.g. retracting piston). Units: [cm2]. Valid value range: CylinderArea2 > 0.*)
		ValveNominalVolumeFlowPA :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Nominal valve volume flow, which, together with CylinderArea1 results in a movement in the positive direction (e.g. extending piston). Units: [l/min]. Vali valuerange: ValveNomVolumeFlowPA > 0.*)
		ValveNominalVolumeFlowPB :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Nominal valve volume flow, which, together with CylinderArea2 results in a movement in the negative direction (e.g. retracting piston). Units: [l/min]. Valid value range: ValveNomVolumeFlowPB > 0.*)
		ValveNominalPressureDrop :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Nominal pressure drop at valve edge. Units: [bar]. Valid value range: ValveNomPressureDrop > 0.*)
		CylinderStroke :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). CylinderStroke. Valid value range: CylinderStroke > 0. Units: [mm]*)
		BulkModulus :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). BulkModulus. Valid value range: BulkModulus > 0. Units: [bar]*)
		DeadVolume1 :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). DeadVolume1 connectionside 1. Valid value range: DeadVolume1 >= 0. Units: [m^3]*)
		CoordinateSystem :  MTHydValveCoordinateSystemEnum; (*EnumerationType to constitute the positive direction.*)
		ValveCylinderConnection :  MTHydValveValveCylConnectionEnum; (*EnumerationType to constitute the connection between valve and cylinder.*)
		DeadVolume2 :  REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). DeadVolume2 connectionside 2. Valid value range: DeadVolume2 >= 0. Units: [m^3]*)
	END_STRUCT;
	MTHydValveForceConParType :  	STRUCT  (*Parameter structure of MTHydValveForceController*)
		GainFeedforwardVelocity :  REAL := 1; (*Factor to feed forward the velocity. Valid value range: 0<= GainFeedForwardVelocity <= 1.*)
		PID :  MTHydValveForceConPIDParType; (*PID parameter structure*)
		MachineData :  MTHydValveForceConMachDataType; (*Machinedata structure*)
		GainFeedforwardForce :  REAL := 1; (*Factor to feed forward the force. Valid value range: 0<= GainFeedForwardForce <= 1.*)
	END_STRUCT;
	MTHydValveForceConPIDParType :  	STRUCT  (*PID parameters of the hydraulic force controller.*)
		Gain :  REAL; (*Proportional gain. Valid value range: Gain >= 0.*)
		IntegrationTime :  REAL; (*Integral time constant (integral action time) for the integral component. Unit: [s]. Valid value range: IntegrationTimePositive = 0.  IntegrationTimePositive = 0 turns off the integral component.*)
		DerivativeTime :  REAL; (*Differential time constant (derivative time) for the derivative component. Unit: [s]. Valid value range: DerivativeTime = 0. DerivativeTime = 0 turns off the derivative component.*)
		FilterTime :  REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime >= 0. FilterTime < CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MaxForce :  REAL; (*Only for usage without servo correction! Maximum Force for scaling the controller Parameters.*)
	END_STRUCT;
	MTHydValveForceParameterIntType :  	STRUCT  (*Internal parameter substructure of MTHydValveForceController*)
		GainFeedforwardVelocity :  REAL := 1; (*Factor to feed forward the velocity. Valid value range:  0 <= GainFeedForwardVelocity <= 1.*)
		MachineData :  MTHydValveForceConMachDataType; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). MachineDataStructure *)
		GainFeedforwardForce :  REAL := 1; (*Factor to feed forward the force. Valid value range: 0<= GainFeedForwardForce <= 1.*)
	END_STRUCT;
END_TYPE

(*Types of MTHydValveIdentification*)

TYPE
	MTHydValveIdentBinarySearchType :  	STRUCT 
		Step :  USINT;
		Done :  BOOL;
		Counter :  USINT;
		Timer :  LREAL;
		MaxCycles :  USINT;
		StartPosition :  LREAL;
		EndPosition :  LREAL;
		ActCylinderVelocity :  LREAL;
		SetCylinderVelocity :  LREAL;
		ActMaxValveTime :  LREAL;
		SetMaxValveTime :  LREAL;
		NegativeVelocityScan :  BOOL;
		ValveSignalLowerZeroPoint :  BOOL;
		ValveSignal :  LREAL;
		ValveSignalLowLimit :  LREAL;
		ValveSignalHighLimit :  LREAL;
		StopDistance :  LREAL;
		CounterBrakes :  USINT;
	END_STRUCT;
	MTHydValveIdentCharPointType :  	STRUCT 
		MinMeasValveSignal :  LREAL;
		MinMeasCylinderVelocity :  LREAL;
		MaxMeasValveSignal :  LREAL;
		MaxMeasCylinderVelocity :  LREAL;
	END_STRUCT;
	MTHydValveIdentCommonType :  	STRUCT 
		Inverted :  BOOL;
		NegativeVelocityScanFirst :  BOOL;
		FilterTimeVelocity :  LREAL;
		SlewRateFall :  LREAL;
		SlewRateRise :  LREAL;
		CycleTime :  LREAL;
		ZeroPointCylinderVelocity :  LREAL;
		MoveBackValveSignalPos :  LREAL;
		MoveBackValveSignalNeg :  LREAL;
		CharPointsNeg :  MTHydValveIdentCharPointType;
		CharPointsPos :  MTHydValveIdentCharPointType;
		Apos :  LREAL;
		Aneg :  LREAL;
		ResolveLeakage :  BOOL;
	END_STRUCT;
	MTHydValveIdentAccuracyType :  	STRUCT  (*Additional settings for the identification.*)
		SettlingTime :  REAL := 0.5; (*Waiting time (after a signal valve modification) before MeasureTime will start. Unit: [s]. Valid value range: SettlingTime >= 0.*)
		MeasureTime :  REAL := 1.0; (*Duration for averaging the measuring signals (velocity, pressure, ...). Unit: [s]. Valid value range: MeasureTime > 0.*)
		WaitingTime :  REAL := 0.5; (*Time for waiting after movement. Unit: [s]. Valid value range: WaitingTime >= 0.*)
		PressureBuildWaitingTime :  REAL := 2.5; (*Time for waiting after movement. Unit: [s]. Valid value range: PressureBuildWaitingTime>= 0.*)
		PositionDriftWaitingTime :  REAL := 10.0; (*Time for waiting during position drift check. Unit: [s]. Valid value range: PositionDriftWaitingTime>= 0.*)
		AllowedPositionDrift :  REAL := 3.0; (*Maximum allowed position drift during waiting time at valve signal zero point. Unit: [mm]. Valid value range: AllowedPositionDrift > 0.*)
		SlewRateRiseTime :  REAL := 5.0; (*Slew rate time for increasing the valve signal (valve signal SlewRateRise = (MaxValveSignal-MinValveSignal)/TimeSlewRateRise). Unit: [s]. Valid value range: TimeSlewRateRise > 0.*)
		SlewRateFallTime :  REAL := 1.0; (*Slew rate time for stopping (valve signal SlewRateFall = (MaxValveSignal-MinValveSignal)/TimeSlewRateFall). Unit: [s]. Valid value range: TimeSlewRateFall > 0.*)
	END_STRUCT;
	MTHydValveIdentDirectionParType :  	STRUCT  (*Identification parameters for the specific movement direction.*)
		Mode :  MTHydValveIdentModeEnum := mtHYDVALVE_IDENT_AUTOMATIC; (*Method for identification.*)
		NumPoints :  USINT := 5; (*Number of points for the valve curve of this range (without the zero point). Valid value range: 3 <= NumPoints <= 24.*)
		MinMeasMode :  MTHydValveIdentMinMeasModeEnum := mtHYDVALVE_MINMEAS_VELOCITY; (*Specifying a cylinder velocity or a valve signal for the MinMeasPoint.*)
		MinMeasValveSignal :  REAL; (*Value of the valve signal at the lowest measureable point. Unit: [units] (e.g. V, mV, digits, ...).*)
		MinMeasCylinderVelocity :  REAL := 1.0; (*Value of the cylinder velocity at the lowest measureable point. Unit: [mm/s]. Valid value range: OverlapPointCylinderVelocity > 0. *)
		ValveSignals :  ARRAY[0..22]OF REAL; (*Use the defined ValveSignals for identification. These parameters are only used at Mode=mtHYDVALVE_IDENT_FIX_VALVESIGNAL. Unit: [Units]. ValveSignals must be in decreasing or increasing order.*)
		CylinderVelocities :  ARRAY[0..22]OF REAL; (*Use the defined CylinderVelocities for identification. These parameters are only used at Mode=mtHYDVALVE_IDENT_CYL_VELOCITIES. Unit: [mm/s]. CylinderVelocities must be in decreasing or increasing order. Valid value range: CylinderVelocities > 0.*)
		MoveBackCylinderVelocity :  REAL := 30.0; (*Cylinder velocity for moving back to start position for the next identification. Unit: [mm/s]. Valid value range: MoveBackCylinderVelocity > 0.*)
	END_STRUCT;
	MTHydValveIdentFineScanType :  	STRUCT 
		Step :  USINT;
		Done :  BOOL;
		Error :  BOOL;
		Warning :  BOOL;
		StatusID :  DINT;
		Timer :  LREAL;
		NumPoints :  USINT;
		Counter :  USINT;
		StartPosition :  LREAL;
		EndPosition :  LREAL;
		MeasResults :  ARRAY[0..22]OF MTHydValveIdentMeasResultsType;
		CounterBrakes :  USINT;
		StopDistance :  LREAL;
	END_STRUCT;
	MTHydValveIdentInfoType :  	STRUCT  (*Additional information of the identification.*)
		CylinderVelocities :  ARRAY[0..49]OF REAL; (*Cylinder velocities array. Unit: [mm/s].*)
		ValveNominalVolumeFlow :  ARRAY[0..49]OF REAL; (*Valve nominal volume flow array. Only available in ValveCurveMode=mtHYDVALVE_NOMINAL_CURVE. Unit: [1]. (Positive values: nominal volume flow P->A Negative values: nominal volume flow P->B).*)
		PumpPressure :  ARRAY[0..49]OF REAL; (*Average pump pressure. Unit: [bar].*)
		PumpSpeed :  ARRAY[0..49]OF REAL; (*Average pump speed. Unit: [rpm].*)
		CylinderPressure1 :  ARRAY[0..49]OF REAL; (*Average cylinder pressure in chamber 1. Unit: [bar].*)
		CylinderPressure2 :  ARRAY[0..49]OF REAL; (*Average cylinder pressure in chamber 2. Unit: [bar].*)
	END_STRUCT;
	MTHydValveIdentInternalType :  	STRUCT  (*Data for internal use.*)
		ParametersValid :  BOOL; (*Data for internal use.*)
		UpdateOld :  BOOL; (*Data for internal use.*)
		EnableOld :  BOOL; (*Data for internal use.*)
		CycleTime :  LREAL; (*Data for internal use.*)
		Parameters :  MTHydValveIdentParType; (*Data for internal use.*)
		StepMainState :  MTHydValveIdentMainStates; (*Data for internal use.*)
		IO :  MTHydValveIdentIOType;
		Common :  MTHydValveIdentCommonType;
		InternalReset :  BOOL;
		Timer :  LREAL;
		StartOld :  BOOL;
		StopOld :  BOOL;
		StartUp :  MTHydValveIdentStartUpType;
		MovePosition :  MTHydValveIdentMovePositionType;
		MeasureOp :  MTHydValveIdentMeasureOpType;
		RoughScan :  MTHydValveIdentRoughScanType;
		BinarySearch :  MTHydValveIdentBinarySearchType;
		FineScan :  MTHydValveIdentFineScanType;
		MeasResultsPos :  ARRAY[0..22]OF MTHydValveIdentMeasResultsType;
		NumPointsPos :  USINT;
		MeasResultsNeg :  ARRAY[0..22]OF MTHydValveIdentMeasResultsType;
		NumPointsNeg :  USINT;
		ValveCurve :  MTHydValveIdentInternResultsType;
	END_STRUCT;
	MTHydValveIdentMainStates : 
		(
		STATE_STANDSTILL,
		STATE_STARTUP,
		STATE_POS_ROUGHSCAN,
		STATE_NEG_ROUGHSCAN,
		STATE_POS_FINESCAN,
		STATE_NEG_FINESCAN,
		STATE_BUILDVALVECURVE,
		STATE_MOVEMIDDLE,
		STATE_STOP,
		STATE_ERROR
		);
	MTHydValveIdentInternResultsType :  	STRUCT 
		ValveSignalValues :  ARRAY[0..49]OF LREAL; (*Valve signals array. Unit: [units].*)
		ValveOpeningValues :  ARRAY[0..49]OF LREAL; (*Valve opening array. Unit: [1]. (Positive values: valve opening P->A. Negative values: valve opening P->B.).*)
		ValveVolumeFlow :  ARRAY[0..49]OF LREAL;
		CylinderVelocityValues :  ARRAY[0..49]OF LREAL;
		PumpPressureValues :  ARRAY[0..49]OF LREAL;
		PumpSpeedValues :  ARRAY[0..49]OF LREAL;
		CylinderPressure1Values :  ARRAY[0..49]OF LREAL;
		CylinderPressure2Values :  ARRAY[0..49]OF LREAL;
		NumberOfPoints :  USINT; (*Number of identified points. *)
		ZeroPointIndex :  USINT; (*Index of the zero point.*)
		QnomPA :  LREAL;
		QnomPB :  LREAL;
		Plausible :  BOOL;
		PressureDrop :  BOOL;
	END_STRUCT;
	MTHydValveIdentIOType :  	STRUCT 
		ActCylinderPosition :  LREAL;
		ActCylinderVelocity :  LREAL;
		ActCylinderPressure1 :  LREAL;
		ActCylinderPressure2 :  LREAL;
		ActPumpPressure :  LREAL;
		ActPumpSpeed :  LREAL;
		ValveSignal :  LREAL;
		SetPumpPressure :  LREAL;
		SetPumpSpeed :  LREAL;
	END_STRUCT;
	MTHydValveIdentLimitsParType :  	STRUCT  (*Limitations for the valve identification block.*)
		MinAllowedCylinderPosition :  REAL := 100.0; (*Minimum cylinder position allowed for identification. Unit: [mm]. Valid value range: MinAllowedCylinderPosition < MaxAllowedCylinderPosition.*)
		MaxAllowedCylinderPosition :  REAL := 600.0; (*Maximum cylinder position allowed for identification. Unit: [mm]. Valid value range: MinAllowedCylinderPosition < MaxAllowedCylinderPosition.*)
	END_STRUCT;
	MTHydValveIdentMachDataType :  	STRUCT  (*MachineData structure of valve identification.*)
		CylinderArea1 :  REAL; (*Cylinder piston area of chamber 1. Units: [cm2]. Valid value range: CylinderArea1 > 0.*)
		CylinderArea2 :  REAL; (*Cylinder piston area of chamber 1. Units: [cm2]. Valid value range:CylinderArea1 >= CylinderArea2 > 0.*)
		MinValveSignalValue :  REAL; (*Minimum valve signal value. Unit: [units] (e.g. V, mV, digits, ...). Valid value range: MinValveSignalValue < ValveSignalZeroPoint.*)
		ValveSignalZeroPoint :  REAL; (*Valve signal value of the zero point. There is no movement at this point. Unit: [units] (e.g. V, mV, digits, ...).*)
		MaxValveSignalValue :  REAL; (*Maximum valve signal value. Unit: [units] (e.g. V, mV, digits, ...). Valid value range: ValveSignalZeroPoint < MaxValveSignalValue.*)
		ValveNominalPressureDrop :  REAL := 5.0; (*Nominal pressure drop at valve edge. Units: [bar]. Valid value range: ValveNomPressureDrop > 0.*)
		ValveCylinderConnection :  MTHydValveValveCylConnectionEnum := mtHYDVALVE_PORT_A_TO_CYLCHAMBER1; (*Connection between valve and cylinder.*)
		CoordinateSystem :  MTHydValveCoordinateSystemEnum := mtHYDVALVE_CYLCHAMBER1_POSDIR; (*Coordinate system to set in which direction is the positive and negative movement.*)
	END_STRUCT;
	MTHydValveIdentMeasureOpType :  	STRUCT 
		Step :  USINT;
		Done :  BOOL;
		Timer :  LREAL;
		Counter :  DINT;
		ActCylinderPositionOld :  LREAL;
		SumPumpPressure :  LREAL;
		AvgPumpPressure :  LREAL;
		SumCylinderPressure1 :  LREAL;
		AvgCylinderPressure1 :  LREAL;
		SumCylinderPressure2 :  LREAL;
		AvgCylinderPressure2 :  LREAL;
		SumPumpSpeed :  LREAL;
		AvgPumpSpeed :  LREAL;
		CylinderVelocity :  LREAL;
	END_STRUCT;
	MTHydValveIdentMeasResultsType :  	STRUCT 
		ValveSignal :  LREAL;
		CylinderVelocity :  LREAL;
		AvgPumpPressure :  LREAL;
		AvgCylinderPressure1 :  LREAL;
		AvgCylinderPressure2 :  LREAL;
		AvgPumpSpeed :  LREAL;
	END_STRUCT;
	MTHydValveIdentMinMeasModeEnum : 
		(
		mtHYDVALVE_MINMEAS_VELOCITY := 0,
		mtHYDVALVE_MINMEAS_VALVESIGNAL := 1
		);
	MTHydValveIdentModeEnum : 
		( (*Enum for valve identification mode.*)
		mtHYDVALVE_IDENT_AUTOMATIC := 0, (*Automatic identification.*)
		mtHYDVALVE_IDENT_FIX_VALVESIGNAL := 1, (*Use defined valve signal values for identification.*)
		mtHYDVALVE_IDENT_CYL_VELOCITIES := 2 (*Use the defined cylinder velocities for identification.*)
		);
	MTHydValveIdentMovePositionType :  	STRUCT 
		Step :  USINT;
		Done :  BOOL;
		CmdStop :  BOOL;
		Timer :  LREAL;
		ValveSignal :  LREAL;
		PositiveMovement :  BOOL;
		ValveSignalAtStopping :  LREAL;
		StopDistance :  LREAL;
		BrakeDistance :  LREAL;
		MaxValveDistance :  LREAL;
		MaxValveVelocity :  LREAL;
		MaxValveTime :  LREAL;
		SafetyDistance :  LREAL;
		ActCylinderPositionMaxValve :  LREAL;
		MaxValveReached :  BOOL;
		ActCylinderPositionStopping :  LREAL;
		ActCylinderPositionStopped :  LREAL;
		ZeroPointReached :  BOOL;
		ZeroPointDriftVelocity :  LREAL;
	END_STRUCT;
	MTHydValveIdentParType :  	STRUCT  (*Identification parameters.*)
		ValveCurveMode :  MTHydValveCurveEnum; (*Mode for valve characteristics curve.*)
		MachineData :  MTHydValveIdentMachDataType; (*Machine data parameters.*)
		PressureSupply :  MTHydValveIdentSupplyParType; (*Pressure source parameters.*)
		Limits :  MTHydValveIdentLimitsParType; (*Limitations. E.g. working area for identification.*)
		PositiveDirection :  MTHydValveIdentDirectionParType; (*Identification parameters for a positive movement direction.*)
		NegativeDirection :  MTHydValveIdentDirectionParType; (*Identification parameters for a negative movement direction.*)
		AccuracySettings :  MTHydValveIdentAccuracyType; (*Additional settings for the identification.*)
	END_STRUCT;
	MTHydValveIdentResultsType :  	STRUCT  (*Results of the identification.*)
		ValveSignalValues :  ARRAY[0..49]OF REAL; (*Valve signals array. Unit: [units].*)
		ValveOpeningValues :  ARRAY[0..49]OF REAL; (*Valve opening array. Unit: [1]. (Positive values: valve opening P->A. Negative values: valve opening P->B.).*)
		NumberOfPoints :  USINT; (*Number of identified points. *)
		ZeroPointIndex :  USINT; (*Index of the zero point.*)
		ValveNominalVolumeFlowPA :  REAL; (*Identified nominal valve volume flow from the port P to A of the valve.*)
		ValveNominalVolumeFlowPB :  REAL; (*Identified nominal valve volume flow from the port P to B of the valve.*)
	END_STRUCT;
	MTHydValveIdentRoughScanType :  	STRUCT 
		Step :  USINT;
		Done :  BOOL;
		Error :  BOOL;
		StatusID :  DINT;
		Timer :  LREAL;
		ValveSignalLowerZeroPoint :  BOOL;
		StartPosition :  LREAL;
		EndPosition :  LREAL;
	END_STRUCT;
	MTHydValveIdentStartUpType :  	STRUCT 
		Step :  USINT;
		Done :  BOOL;
		Error :  BOOL;
		StatusID :  DINT;
		Timer :  LREAL;
		Counter :  USINT;
		CheckDirectionDone :  BOOL;
		PositionDrift :  LREAL;
		ActCylinderPositionOld :  LREAL;
		StartPosition :  LREAL;
		EndPosition :  LREAL;
		SlewRate :  LREAL;
		MaxAbsValveSignalDuringCheck :  LREAL;
		DistanceToStart :  LREAL;
		DistanceToEnd :  LREAL;
		NearStart :  BOOL;
		MoveBackDone :  BOOL;
		MinMeasDone :  BOOL;
		GetCharPointsDone :  BOOL;
	END_STRUCT;
	MTHydValveIdentSupplyParType :  	STRUCT  (*Pump parameters for valve identification.*)
		PressureSource :  MTHydValvePressureSourceEnum := mtHYDVALVE_CONST_PRESSURE_SOURCE; (*Choose the pressure supply source.*)
		SetPumpSpeed :  REAL := 200.0; (*Only for servo pump! (PressureSource = mtHYDVALVE_SERVO_PUMP). Set pump speed for identification. Unit: [rpm]. Valid value range: SetPumpSpeed > 0.*)
		SetPumpPressure :  REAL := 2000.0; (*Only for servo pump! (PressureSource = mtHYDVALVE_SERVO_PUMP). Set pump pressure for identification. Unit: [bar]. Valid value range: SetPumpPressure > 0.*)
		MaxAllowedPumpPressureDrop :  REAL := 50.0; (*Only for servo pump! (PressureSource = mtHYDVALVE_SERVO_PUMP). Maximum allowed pump pressure drop during identification. Unit: [bar]. Valid value range: MaxAllowedPumpPressureDrop > 0.*)
	END_STRUCT;
	MTHydValveIntegrationModeEnum : 
		( (*Enumeration type for integration modes.*)
		mtHYDVALVE_INTEGRATION_MODE_OFF := 0, (*The integrator is switched off. *)
		mtHYDVALVE_INTEGRATION_MODE_1 := 1, (*The integrator is turned on and integrates Yi with the integral action time PIDParameter.IntegrationTime (MovingDirection = 1, 'positive' direction) and PIDParameter.IntegrationTime  (MovingDirection = -1, 'negative' direction). When integration is turned off (PIDParameter.IntegrationMode = mtHYDVALVE_INTEGRATIONMODE_OFF), the last value of Yi is discarded and Yi is set to 0. When you turn integration back on (PIDParameter.IntegrationMode = mtHYDVALVE_INTEGRATIONMODE_1) it begins at Yi = 0.*)
		mtHYDVALVE_INTEGRATION_MODE_2 := 2 (*The integrator is turned on and integrates Yi with the integral action time PIDParameter.IntegrationTime (MovingDirection = 1, 'positive' direction) and PIDParameter.IntegrationTime (MovingDirection = -1, 'negative' direction). When integration is turned off (PIDParameter.IntegrationMode = mtHYDVALVE_INTEGRATIONMODE_OFF), the last value of Yi is saved and continues to be the setting for Yi. When you turn integration back on (PIDParameter.IntegrationMode = mtHYDVALVE_INTEGRATIONMODE_2) it begins at the last saved value of Yi.*)
		);
	MTHydValveInternalPIDParaType :  	STRUCT  (*PID parameters of the position controller.*)
		Gain :  REAL; (*Proportional gain. Valid value range: Gain &gt 0.*)
		IntegrationTimePositive :  REAL; (*Integral time constant (integral action time) for the integral component in positive direction. Unit: [s]. Valid value range: IntegrationTimePositive = 0. IntegrationTimePositive = 0 turns off the integral component for positive direction.*)
		IntegrationTimeNegative :  REAL; (*Integral time constant (integral action time) for the integral component in negative direction. Unit: [s]. Valid value range: IntegrationTimeNegative = 0. IntegrationTimeNegative = 0 turns off the integral component for negative direction.*)
		DerivativeTime :  REAL; (*Differential time constant (derivative time) for the derivative component. Unit: [s]. Valid value range: DerivativeTime = 0. DerivativeTime = 0 turns off the derivative component.*)
		FilterTime :  REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MinIntegrationPartValue :  REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MaxIntegrationPartValue :  REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MinOut :  REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MaxOut :  REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MaxForce :  REAL; (*Only for usage without servo correction! Maximum Force for scaling the controller Parameters.*)
	END_STRUCT;
END_TYPE

(*Types of MTHydValveLinearization*)

TYPE
	MTHydValveLinInternalType :  	STRUCT  (*Data for internal use.*)
		ParametersValid :  BOOL; (*Data for internal use.*)
		UpdateOld :  BOOL; (*Data for internal use.*)
		EnableOld :  BOOL; (*Data for internal use.*)
		CycleTime :  REAL; (*Task cycle time. Unit: [s].*)
		CoordinateOrder :  SINT; (*Data for internal use.*)
		NodeVectorX :  ARRAY[0..49]OF REAL; (*Data for internal use.*)
		FcnValues :  ARRAY[0..49]OF REAL; (*Data for internal use.*)
		NumberOfNodes :  USINT; (*Data for internal use.*)
		Nodes :  ARRAY[0..49]OF MTHydValveLookUpNodeType; (*Data for internal use.*)
		Mode :  MTHydValveLookUpModeEnum; (*Data for internal use.*)
		DisMode :  SINT; (*Data for internal use.*)
		ValveOpeningOld :  REAL; (*Data for internal use.*)
	END_STRUCT;
	MTHydValveLookUpModeEnum : 
		( (*Data for internal use.*)
		mt_LOOKUP_CONST_END_VALUE := 0, (*Data for internal use.*)
		mt_LOOKUP_LIN_EXTRAPOLATION := 1 (*Data for internal use.*)
		);
	MTHydValveLookUpNodeType :  	STRUCT  (*Data for internal use.*)
		XValues :  REAL; (*Data for internal use.*)
		FcnValues :  REAL; (*Data for internal use.*)
		k :  REAL; (*Data for internal use.*)
		d :  REAL; (*Data for internal use.*)
	END_STRUCT;
	MTHydValvePIDOutputType :  	STRUCT  (*Output of the internal used PID function.*)
		ProportionalPart :  REAL; (*Proportional part.*)
		IntegrationPart :  REAL; (*Integration part.*)
		DerivativePart :  REAL; (*Derivative part.*)
		PIDOut :  REAL; (*Total PID output.*)
	END_STRUCT;
	MTHydValvePosConMachDataType :  	STRUCT  (*MachineData structure of position controller*)
		MaxPumpPressure :  REAL; (*Maximum system pressure (supply pressure). Units: [bar]. Valid value range: MaxPumpPressure &gt= 0.*)
		CylinderArea1 :  REAL; (*Cylinder piston area whose pressurization induces a movement in the positive direction (e.g. extending piston). Units: [cm2]. Valid value range: CylinderArea1 &gt 0.*)
		CylinderArea2 :  REAL; (*Cylinder piston area whose pressurization induces a movement in the negative direction (e.g. retracting piston). Units: [cm2]. Valid value range: CylinderArea2 &gt 0.*)
		ValveNominalVolumeFlowPA :  REAL; (*Nominal valve volume flow from the port P to A of the valve. *)
		ValveNominalVolumeFlowPB :  REAL; (*Nominal valve volume flow from the port P to B of the valve. *)
		ValveNominalPressureDrop :  REAL; (*Nominal pressure drop at valve edge. Units: [bar]. Valid value range: ValveNomPressureDrop &gt 0.*)
		ValveCylinderConnection :  MTHydValveValveCylConnectionEnum; (*Connection between valve and cylinder.*)
		CoordinateSystem :  MTHydValveCoordinateSystemEnum; (*Coordinate system to set in which direction is the positive and negative movement.*)
	END_STRUCT;
	MTHydValvePosConParType :  	STRUCT 
		PID :  MTHydValvePosConPIDParType; (*PID Parameters for position controller.*)
		MachineData :  MTHydValvePosConMachDataType; (*Machine data used für servo correction of position controller.*)
		GainSetCylinderVelocity :  REAL := 1.0; (*Factor to manipulate the set velocity for the servo correction. Valid value range:  0 <= GainSetCylinderVelocity <=2.*)
	END_STRUCT;
	MTHydValvePosConPIDParType :  	STRUCT  (*PID parameters of the position controller.*)
		Gain :  REAL; (*Proportional gain. Valid value range: Gain >= 0.*)
		IntegrationTimePositive :  REAL; (*Integral time constant (integral action time) for the integral component in positive direction. Unit: [s]. Valid value range: IntegrationTimePositive = 0.  IntegrationTimePositive = 0 turns off the integral component for positive direction.*)
		IntegrationTimeNegative :  REAL; (*Integral time constant (integral action time) for the integral component in negative direction. Unit: [s]. Valid value range: IntegrationTimeNegative = 0. IntegrationTimeNegative = 0 turns off the integral component for negative direction.*)
		DerivativeTime :  REAL; (*Differential time constant (derivative time) for the derivative component. Unit: [s]. Valid value range: DerivativeTime = 0. DerivativeTime = 0 turns off the derivative component.*)
		FilterTime :  REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime >= 0. FilterTime < CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
	END_STRUCT;
	MTHydValvePosContInternalType :  	STRUCT  (*Data for internal use.*)
		ParametersValid :  BOOL; (*Data for internal use.*)
		UpdateOld :  BOOL; (*Data for internal use.*)
		EnableOld :  BOOL; (*Data for internal use.*)
		CycleTime :  REAL; (*Task cycle time. Unit: [s].*)
		Parameters :  MTHydValvePosConParType; (*Data for internal use.*)
		EnableServoCorrection :  BOOL; (*Data for internal use.*)
		Qnom_pos :  REAL; (*Data for internal use.*)
		Qnom_neg :  REAL; (*Data for internal use.*)
		Apos :  REAL; (*Data for internal use.*)
		Aneg :  REAL; (*Data for internal use.*)
		pPos :  REAL; (*Data for internal use.*)
		pNeg :  REAL; (*Data for internal use.*)
		ControlError :  REAL; (*Data for internal use.*)
		ControlErrorOld :  REAL; (*Data for internal use.*)
		LastIntegrationPartNegative :  REAL; (*Data for internal use.*)
		LastIntegrationPartPositive :  REAL; (*Data for internal use.*)
		ValveOpeningServoCorrection :  REAL; (*Data for internal use.*)
		PIDOutput :  MTHydValvePIDOutputType; (*Data for internal use.*)
		s_set_old :  REAL; (*Data for internal use.*)
		s_act_old :  REAL; (*Data for internal use.*)
		vCyl_rel :  REAL; (*Data for internal use.*)
		PIDAdvStatusID :  DINT; (*Data for internal use.*)
		vyServoStatusID :  DINT; (*Data for internal use.*)
		EnableIntegrationPartOld :  BOOL; (*Data for internal use.*)
		MovingDirection :  SINT; (*Data for internal use.*)
		MovingDirectionOld :  SINT; (*Data for internal use.*)
		MaxCylVelNegDir :  REAL; (*Data for internal use.*)
		MaxCylVelPosDir :  REAL; (*Data for internal use.*)
		ResetIntegrationPartOld :  BOOL; (*Data for internal use.*)
		CyclicError :  BOOL; (*Data for internal use.*)
		IntegrationStatus :  MTPIDIntegrationEnum; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*Types of MTHydValvePressureObserver*)

TYPE
	MTHydValvePressObsInternalType :  	STRUCT  (*Data for internal use.*)
		ParametersValid :  BOOL; (*Data for internal use.*)
		UpdateOld :  BOOL; (*Data for internal use.*)
		EnableOld :  BOOL; (*Data for internal use.*)
		CycleTime :  REAL; (*Task cycle time. Unit: [s].*)
		MachineData :  MTHydValvePosConMachDataType;
		QnomA :  REAL;
		QnomB :  REAL;
		A1 :  REAL;
		A2 :  REAL;
		pDenom :  REAL;
		PumpPressure :  REAL;
		FrictionForceNeg :  REAL;
		FrictionForcePos :  REAL;
		flagLowPrioWarning :  BOOL;
		flagHighPrioWarning :  BOOL;
	END_STRUCT;
	MTHydValvePressureSourceEnum : 
		( (*Enum for pressure supply.*)
		mtHYDVALVE_CONST_PRESSURE_SOURCE := 0, (*Constant pressure supply source.*)
		mtHYDVALVE_SERVO_PUMP := 1 (*Servo pump.*)
		);
	MTHydValveSimCylinderParType :  	STRUCT  (*CylinderParameter of SimulationModel*)
		Mass :  REAL := 100; (*Moving mass of cylinder. Units: [kg].*)
		CylinderArea1 :  REAL := 165; (*Area 1 of cylinder. Units:[cm2].*)
		CylinderArea2 :  REAL := 86; (*Area 2 of cylinder. Units:[cm2].*)
		CylinderStroke :  REAL := 500; (*Stroke. Units: [mm]*)
		DeadVolume1 :  REAL := 2.5; (*Dead volume in cylinder chamber 1. Units: [l]*)
		DeadVolume2 :  REAL := 4; (*Dead volume in cylinder chamber 2. Units: [l]*)
		VelPropFrictionFactor :  REAL := 400; (*Velocity proportional fricton factor. Units: [kg/s]*)
		SlideFrictionForce :  REAL := 100; (*Slide Friction Force. Units: [N].*)
		StickFrictionForce :  REAL := 300; (*Stick Friction Force. Units: [N].*)
	END_STRUCT;
	MTHydValveSimModelInternalType :  	STRUCT  (*Data for internal use.*)
		CycleTime :  LREAL; (*Task cycle time. Unit: [s].*)
		CylinderParameters :  MTHydValveSimCylinderParType;
		ValveParameters :  MTHydValveSimValveParType;
		SystemParameters :  MTHydValveSimSystemParType;
		EnableParameter :  REAL;
		InhibitUpdate :  BOOL; (*Data for internal use.*)
		ParametersValid :  BOOL; (*Data for internal use.*)
		UpdateOld :  BOOL; (*Data for internal use.*)
		EnableOld :  BOOL; (*Data for internal use.*)
		QA_lmin :  REAL;
		QB_lmin :  REAL;
		QA :  REAL;
		QB :  REAL;
		pB_bar :  REAL;
		pA_bar :  REAL;
		x_ode_old :  REAL;
		v_ode_old :  REAL;
		pB_ode_old :  REAL;
		pA_ode_old :  REAL;
		x_ode :  REAL;
		a_ode :  REAL;
		v_ode :  REAL;
		pB_ode :  REAL;
		pA_ode :  REAL;
		par_v :  ARRAY[0..6]OF REAL;
		par_pA :  ARRAY[0..6]OF REAL;
		par_pB :  ARRAY[0..6]OF REAL;
		par_x :  ARRAY[0..6]OF REAL;
		fcn_ptr_pB :  REAL;
		fcn_ptr_x :  REAL;
		fcn_ptr_v :  REAL;
		fcn_ptr_pA :  REAL;
		d1 :  REAL;
		ValveSignal :  REAL;
		ValveOpening :  REAL;
		ActPumpPressure :  REAL;
		ProcessForce :  REAL;
		GravitationForce :  REAL;
		FrictionForce :  REAL;
		FrictionState :  USINT;
		PistonForce :  REAL;
		CoordinateOrder :  INT;
		HydraulicForce :  REAL;
		ValveNodes :  ARRAY[0..49]OF NodeType;
		ValveDisMode :  SINT;
		pNeg :  REAL;
		pPos :  REAL;
	END_STRUCT;
	MTHydValveSimSystemParType :  	STRUCT  (*SystemParameters of SimulationModel*)
		TankPressure :  REAL := 1; (*Tank pressure. Units: [bar].*)
		BulkModulus :  REAL := 14000; (*Oil Elasticity. Units: [bar].*)
		Gravity :  REAL := 0; (*Gravity. Units:[m/s^2].*)
		CoordinateSystem :  MTHydValveCoordinateSystemEnum := mtHYDVALVE_CYLCHAMBER1_POSDIR; (*EnumerationType to constitute the positive direction.*)
		ValveCylinderConnection :  MTHydValveValveCylConnectionEnum := mtHYDVALVE_PORT_A_TO_CYLCHAMBER1; (*EnumerationType to constitute the connection between valve and cylinder.*)
		MinCylinderPressure1 :  REAL := 1; (*Minimum pressure in cylinderchamber 1. Units: [bar].*)
		MaxCylinderPressure1 :  REAL := 300; (*Maximum pressure in cylinderchamber 1. Units: [bar].*)
		MinCylinderPressure2 :  REAL := 1; (*Minimum pressure in cylinderchamber 2. Units: [bar].*)
		MaxCylinderPressure2 :  REAL := 300; (*Maximum pressure in cylinderchamber 2. Units: [bar].*)
		InitialCylinderPressure1 :  REAL := 1; (*Initial pressure in cylinderchamber 1. Units: [bar].*)
		InitialCylinderPressure2 :  REAL := 1.9; (*Initial pressure in cylinderchamber 2. Units: [bar].*)
		InitialCylinderPosition :  REAL := 100; (*Iniital position of cylinder. Units: [mm].*)
		InitialCylinderVelocity :  REAL := 0; (*Initial velocity of cylinder. Units: [mm/s].*)
	END_STRUCT;
	MTHydValveSimValveParType :  	STRUCT  (*ValveParameters of SimulationModel*)
		ValveNominalVolumeFlowPA :  REAL := 100; (*Nominal volume flow A. Units: [l/min].*)
		ValveNominalVolumeFlowPB :  REAL := 100; (*Nominal volume flow B. Units: [l/min].*)
		ValveNominalPressureDrop :  REAL := 5; (*Nominal pressure drop at valve edge. Units: [bar]. *)
		ValveLeakageFactor :  REAL := 0.001; (*Valve leakage coefficient. Units: [l/min/bar].*)
		ValveOpeningValues :  ARRAY[0..49]OF REAL := [-1,-0.4,0,0.4,1,45(0)]; (*Valve opening values of valve characteristics curve. Units: [%]. Range [-1 .. 1].*)
		ValveSignalValues :  ARRAY[0..49]OF REAL := [-1,-0.1,0,0.1,1,45(0)]; (*Valve signal values of valve characteristics curve. Units: [%]. Range [-1 .. 1].*)
		NumNodesValveCurve :  USINT := 5; (*Number of implemented points of valve characterics curve. Units: [1].*)
	END_STRUCT;
	MTHydValveValveCylConnectionEnum : 
		( (*Enumeration for connection between valve and cylinder.*)
		mtHYDVALVE_PORT_A_TO_CYLCHAMBER1 := 0, (*Port A of the valve is connected to the cylinder chamber 1.*)
		mtHYDVALVE_PORT_A_TO_CYLCHAMBER2 := 1 (*Port A of the valve is connected to the cylinder chamber 2.*)
		);
END_TYPE

(*Types of MTHydValveSimulationModel*)

TYPE
	NodeType :  	STRUCT  (*Node type of valve characteristics curve.*)
		d :  REAL;
		k :  REAL;
		FcnValues :  REAL;
		XValues :  REAL;
	END_STRUCT;
END_TYPE
