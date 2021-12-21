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
	MTHydValveForceConInternalType : {REDUND_UNREPLICABLE} 	STRUCT  (*Internal parameter structure of MTHydValveForceController*)
		ParametersValid : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		UpdateOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		EnableOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		CycleTime : {REDUND_UNREPLICABLE} REAL; (*Task cycle time. Unit: [s].*)
		Parameters : {REDUND_UNREPLICABLE} MTHydValveForceParameterIntType; (*Data for internal use.*)
		ServoCorrectionEnabled : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		EnableIntegrationPartOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		PIDOutput : {REDUND_UNREPLICABLE} MTHydValvePIDOutputType; (*Data for internal use.*)
		ControlErrorOld : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		LastIntegrationPart : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		ValveOpeningForceServoCorrection : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		dFyServo_StatusID : {REDUND_UNREPLICABLE} UDINT; (*Data for internal use.*)
		vyServo_StatusID : {REDUND_UNREPLICABLE} UDINT; (*Data for internal use.*)
		PIDAdv_StatusID : {REDUND_UNREPLICABLE} UDINT; (*Data for internal use.*)
		ValveOpeningVyServoCorrection : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		ControlError : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		pPos : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		pNeg : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		Aneg : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		Apos : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		Qnom_neg : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		Qnom_pos : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		PIDParameters : {REDUND_UNREPLICABLE} MTHydValveInternalPIDParaType; (*Data for internal use.*)
		Fmax : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		CyclicError : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		IntegrationStatus : {REDUND_UNREPLICABLE} MTPIDIntegrationEnum; (*Data for internal use.*)
		ResetIntegrationPartOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*MTHydValveForceController*)

TYPE
	MTHydValveForceConMachDataType : {REDUND_UNREPLICABLE} 	STRUCT  (*MachineData parameters of the hydraulic force controller for servocorrection*)
		MaxPumpPressure : {REDUND_UNREPLICABLE} REAL; (*Maximum system pressure (supply pressure). Units: [bar]. Valid value range: MaxPumpPressure &gt= 0.*)
		TankPressure : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Tank pressure. Units: [bar]. Valid value range: TankPressure >= 0.*)
		CylinderArea1 : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Cylinder piston area whose pressurization induces a movement in the positive direction (e.g. extending piston). Units: [cm2]. Valid value range: CylinderArea1 > 0.*)
		CylinderArea2 : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Cylinder piston area whose pressurization induces a movement in the negative direction (e.g. retracting piston). Units: [cm2]. Valid value range: CylinderArea2 > 0.*)
		ValveNominalVolumeFlowPA : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Nominal valve volume flow, which, together with CylinderArea1 results in a movement in the positive direction (e.g. extending piston). Units: [l/min]. Vali valuerange: ValveNomVolumeFlowPA > 0.*)
		ValveNominalVolumeFlowPB : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Nominal valve volume flow, which, together with CylinderArea2 results in a movement in the negative direction (e.g. retracting piston). Units: [l/min]. Valid value range: ValveNomVolumeFlowPB > 0.*)
		ValveNominalPressureDrop : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON).Nominal pressure drop at valve edge. Units: [bar]. Valid value range: ValveNomPressureDrop > 0.*)
		CylinderStroke : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). CylinderStroke. Valid value range: CylinderStroke > 0. Units: [mm]*)
		BulkModulus : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). BulkModulus. Valid value range: BulkModulus > 0. Units: [bar]*)
		DeadVolume1 : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). DeadVolume1 connectionside 1. Valid value range: DeadVolume1 >= 0. Units: [m^3]*)
		CoordinateSystem : {REDUND_UNREPLICABLE} MTHydValveCoordinateSystemEnum; (*EnumerationType to constitute the positive direction.*)
		ValveCylinderConnection : {REDUND_UNREPLICABLE} MTHydValveValveCylConnectionEnum; (*EnumerationType to constitute the connection between valve and cylinder.*)
		DeadVolume2 : {REDUND_UNREPLICABLE} REAL; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). DeadVolume2 connectionside 2. Valid value range: DeadVolume2 >= 0. Units: [m^3]*)
	END_STRUCT;
	MTHydValveForceConParType : {REDUND_UNREPLICABLE} 	STRUCT  (*Parameter structure of MTHydValveForceController*)
		GainFeedforwardVelocity : {REDUND_UNREPLICABLE} REAL := 1; (*Factor to feed forward the velocity. Valid value range: 0<= GainFeedForwardVelocity <= 1.*)
		PID : {REDUND_UNREPLICABLE} MTHydValveForceConPIDParType; (*PID parameter structure*)
		MachineData : {REDUND_UNREPLICABLE} MTHydValveForceConMachDataType; (*Machinedata structure*)
		GainFeedforwardForce : {REDUND_UNREPLICABLE} REAL := 1; (*Factor to feed forward the force. Valid value range: 0<= GainFeedForwardForce <= 1.*)
	END_STRUCT;
	MTHydValveForceConPIDParType : {REDUND_UNREPLICABLE} 	STRUCT  (*PID parameters of the hydraulic force controller.*)
		Gain : {REDUND_UNREPLICABLE} REAL; (*Proportional gain. Valid value range: Gain >= 0.*)
		IntegrationTime : {REDUND_UNREPLICABLE} REAL; (*Integral time constant (integral action time) for the integral component. Unit: [s]. Valid value range: IntegrationTimePositive = 0.  IntegrationTimePositive = 0 turns off the integral component.*)
		DerivativeTime : {REDUND_UNREPLICABLE} REAL; (*Differential time constant (derivative time) for the derivative component. Unit: [s]. Valid value range: DerivativeTime = 0. DerivativeTime = 0 turns off the derivative component.*)
		FilterTime : {REDUND_UNREPLICABLE} REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime >= 0. FilterTime < CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MaxForce : {REDUND_UNREPLICABLE} REAL; (*Only for usage without servo correction! Maximum Force for scaling the controller Parameters.*)
	END_STRUCT;
	MTHydValveForceParameterIntType : {REDUND_UNREPLICABLE} 	STRUCT  (*Internal parameter substructure of MTHydValveForceController*)
		GainFeedforwardVelocity : {REDUND_UNREPLICABLE} REAL := 1; (*Factor to feed forward the velocity. Valid value range:  0 <= GainFeedForwardVelocity <= 1.*)
		MachineData : {REDUND_UNREPLICABLE} MTHydValveForceConMachDataType; (*Only for servo correction! (ServoCorrectionMode = mtHYDVALVE_SERVO_CORRECTION_ON). MachineDataStructure *)
		GainFeedforwardForce : {REDUND_UNREPLICABLE} REAL := 1; (*Factor to feed forward the force. Valid value range: 0<= GainFeedForwardForce <= 1.*)
	END_STRUCT;
END_TYPE

(*Types of MTHydValveIdentification*)

TYPE
	MTHydValveIdentBinarySearchType : {REDUND_UNREPLICABLE} 	STRUCT 
		Step : {REDUND_UNREPLICABLE} USINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		Counter : {REDUND_UNREPLICABLE} USINT;
		Timer : {REDUND_UNREPLICABLE} LREAL;
		MaxCycles : {REDUND_UNREPLICABLE} USINT;
		StartPosition : {REDUND_UNREPLICABLE} LREAL;
		EndPosition : {REDUND_UNREPLICABLE} LREAL;
		ActCylinderVelocity : {REDUND_UNREPLICABLE} LREAL;
		SetCylinderVelocity : {REDUND_UNREPLICABLE} LREAL;
		ActMaxValveTime : {REDUND_UNREPLICABLE} LREAL;
		SetMaxValveTime : {REDUND_UNREPLICABLE} LREAL;
		NegativeVelocityScan : {REDUND_UNREPLICABLE} BOOL;
		ValveSignalLowerZeroPoint : {REDUND_UNREPLICABLE} BOOL;
		ValveSignal : {REDUND_UNREPLICABLE} LREAL;
		ValveSignalLowLimit : {REDUND_UNREPLICABLE} LREAL;
		ValveSignalHighLimit : {REDUND_UNREPLICABLE} LREAL;
		StopDistance : {REDUND_UNREPLICABLE} LREAL;
		CounterBrakes : {REDUND_UNREPLICABLE} USINT;
	END_STRUCT;
	MTHydValveIdentCharPointType : {REDUND_UNREPLICABLE} 	STRUCT 
		MinMeasValveSignal : {REDUND_UNREPLICABLE} LREAL;
		MinMeasCylinderVelocity : {REDUND_UNREPLICABLE} LREAL;
		MaxMeasValveSignal : {REDUND_UNREPLICABLE} LREAL;
		MaxMeasCylinderVelocity : {REDUND_UNREPLICABLE} LREAL;
	END_STRUCT;
	MTHydValveIdentCommonType : {REDUND_UNREPLICABLE} 	STRUCT 
		Inverted : {REDUND_UNREPLICABLE} BOOL;
		NegativeVelocityScanFirst : {REDUND_UNREPLICABLE} BOOL;
		FilterTimeVelocity : {REDUND_UNREPLICABLE} LREAL;
		SlewRateFall : {REDUND_UNREPLICABLE} LREAL;
		SlewRateRise : {REDUND_UNREPLICABLE} LREAL;
		CycleTime : {REDUND_UNREPLICABLE} LREAL;
		ZeroPointCylinderVelocity : {REDUND_UNREPLICABLE} LREAL;
		MoveBackValveSignalPos : {REDUND_UNREPLICABLE} LREAL;
		MoveBackValveSignalNeg : {REDUND_UNREPLICABLE} LREAL;
		CharPointsNeg : {REDUND_UNREPLICABLE} MTHydValveIdentCharPointType;
		CharPointsPos : {REDUND_UNREPLICABLE} MTHydValveIdentCharPointType;
		Apos : {REDUND_UNREPLICABLE} LREAL;
		Aneg : {REDUND_UNREPLICABLE} LREAL;
		ResolveLeakage : {REDUND_UNREPLICABLE} BOOL;
	END_STRUCT;
	MTHydValveIdentAccuracyType : {REDUND_UNREPLICABLE} 	STRUCT  (*Additional settings for the identification.*)
		SettlingTime : {REDUND_UNREPLICABLE} REAL := 0.5; (*Waiting time (after a signal valve modification) before MeasureTime will start. Unit: [s]. Valid value range: SettlingTime >= 0.*)
		MeasureTime : {REDUND_UNREPLICABLE} REAL := 1.0; (*Duration for averaging the measuring signals (velocity, pressure, ...). Unit: [s]. Valid value range: MeasureTime > 0.*)
		WaitingTime : {REDUND_UNREPLICABLE} REAL := 0.5; (*Time for waiting after movement. Unit: [s]. Valid value range: WaitingTime >= 0.*)
		PressureBuildWaitingTime : {REDUND_UNREPLICABLE} REAL := 2.5; (*Time for waiting after movement. Unit: [s]. Valid value range: PressureBuildWaitingTime>= 0.*)
		PositionDriftWaitingTime : {REDUND_UNREPLICABLE} REAL := 10.0; (*Time for waiting during position drift check. Unit: [s]. Valid value range: PositionDriftWaitingTime>= 0.*)
		AllowedPositionDrift : {REDUND_UNREPLICABLE} REAL := 3.0; (*Maximum allowed position drift during waiting time at valve signal zero point. Unit: [mm]. Valid value range: AllowedPositionDrift > 0.*)
		SlewRateRiseTime : {REDUND_UNREPLICABLE} REAL := 5.0; (*Slew rate time for increasing the valve signal (valve signal SlewRateRise = (MaxValveSignal-MinValveSignal)/TimeSlewRateRise). Unit: [s]. Valid value range: TimeSlewRateRise > 0.*)
		SlewRateFallTime : {REDUND_UNREPLICABLE} REAL := 1.0; (*Slew rate time for stopping (valve signal SlewRateFall = (MaxValveSignal-MinValveSignal)/TimeSlewRateFall). Unit: [s]. Valid value range: TimeSlewRateFall > 0.*)
	END_STRUCT;
	MTHydValveIdentDirectionParType : {REDUND_UNREPLICABLE} 	STRUCT  (*Identification parameters for the specific movement direction.*)
		Mode : {REDUND_UNREPLICABLE} MTHydValveIdentModeEnum := mtHYDVALVE_IDENT_AUTOMATIC; (*Method for identification.*)
		NumPoints : {REDUND_UNREPLICABLE} USINT := 5; (*Number of points for the valve curve of this range (without the zero point). Valid value range: 3 <= NumPoints <= 24.*)
		MinMeasMode : {REDUND_UNREPLICABLE} MTHydValveIdentMinMeasModeEnum := mtHYDVALVE_MINMEAS_VELOCITY; (*Specifying a cylinder velocity or a valve signal for the MinMeasPoint.*)
		MinMeasValveSignal : {REDUND_UNREPLICABLE} REAL; (*Value of the valve signal at the lowest measureable point. Unit: [units] (e.g. V, mV, digits, ...).*)
		MinMeasCylinderVelocity : {REDUND_UNREPLICABLE} REAL := 1.0; (*Value of the cylinder velocity at the lowest measureable point. Unit: [mm/s]. Valid value range: OverlapPointCylinderVelocity > 0. *)
		ValveSignals : {REDUND_UNREPLICABLE} ARRAY[0..22]OF REAL; (*Use the defined ValveSignals for identification. These parameters are only used at Mode=mtHYDVALVE_IDENT_FIX_VALVESIGNAL. Unit: [Units]. ValveSignals must be in decreasing or increasing order.*)
		CylinderVelocities : {REDUND_UNREPLICABLE} ARRAY[0..22]OF REAL; (*Use the defined CylinderVelocities for identification. These parameters are only used at Mode=mtHYDVALVE_IDENT_CYL_VELOCITIES. Unit: [mm/s]. CylinderVelocities must be in decreasing or increasing order. Valid value range: CylinderVelocities > 0.*)
		MoveBackCylinderVelocity : {REDUND_UNREPLICABLE} REAL := 30.0; (*Cylinder velocity for moving back to start position for the next identification. Unit: [mm/s]. Valid value range: MoveBackCylinderVelocity > 0.*)
	END_STRUCT;
	MTHydValveIdentFineScanType : {REDUND_UNREPLICABLE} 	STRUCT 
		Step : {REDUND_UNREPLICABLE} USINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		Error : {REDUND_UNREPLICABLE} BOOL;
		Warning : {REDUND_UNREPLICABLE} BOOL;
		StatusID : {REDUND_UNREPLICABLE} DINT;
		Timer : {REDUND_UNREPLICABLE} LREAL;
		NumPoints : {REDUND_UNREPLICABLE} USINT;
		Counter : {REDUND_UNREPLICABLE} USINT;
		StartPosition : {REDUND_UNREPLICABLE} LREAL;
		EndPosition : {REDUND_UNREPLICABLE} LREAL;
		MeasResults : {REDUND_UNREPLICABLE} ARRAY[0..22]OF MTHydValveIdentMeasResultsType;
		CounterBrakes : {REDUND_UNREPLICABLE} USINT;
		StopDistance : {REDUND_UNREPLICABLE} LREAL;
	END_STRUCT;
	MTHydValveIdentInfoType : {REDUND_UNREPLICABLE} 	STRUCT  (*Additional information of the identification.*)
		CylinderVelocities : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Cylinder velocities array. Unit: [mm/s].*)
		ValveNominalVolumeFlow : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Valve nominal volume flow array. Only available in ValveCurveMode=mtHYDVALVE_NOMINAL_CURVE. Unit: [1]. (Positive values: nominal volume flow P->A Negative values: nominal volume flow P->B).*)
		PumpPressure : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Average pump pressure. Unit: [bar].*)
		PumpSpeed : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Average pump speed. Unit: [rpm].*)
		CylinderPressure1 : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Average cylinder pressure in chamber 1. Unit: [bar].*)
		CylinderPressure2 : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Average cylinder pressure in chamber 2. Unit: [bar].*)
	END_STRUCT;
	MTHydValveIdentInternalType : {REDUND_UNREPLICABLE} 	STRUCT  (*Data for internal use.*)
		ParametersValid : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		UpdateOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		EnableOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		CycleTime : {REDUND_UNREPLICABLE} LREAL; (*Data for internal use.*)
		Parameters : {REDUND_UNREPLICABLE} MTHydValveIdentParType; (*Data for internal use.*)
		StepMainState : {REDUND_UNREPLICABLE} MTHydValveIdentMainStates; (*Data for internal use.*)
		IO : {REDUND_UNREPLICABLE} MTHydValveIdentIOType;
		Common : {REDUND_UNREPLICABLE} MTHydValveIdentCommonType;
		InternalReset : {REDUND_UNREPLICABLE} BOOL;
		Timer : {REDUND_UNREPLICABLE} LREAL;
		StartOld : {REDUND_UNREPLICABLE} BOOL;
		StopOld : {REDUND_UNREPLICABLE} BOOL;
		StartUp : {REDUND_UNREPLICABLE} MTHydValveIdentStartUpType;
		MovePosition : {REDUND_UNREPLICABLE} MTHydValveIdentMovePositionType;
		MeasureOp : {REDUND_UNREPLICABLE} MTHydValveIdentMeasureOpType;
		RoughScan : {REDUND_UNREPLICABLE} MTHydValveIdentRoughScanType;
		BinarySearch : {REDUND_UNREPLICABLE} MTHydValveIdentBinarySearchType;
		FineScan : {REDUND_UNREPLICABLE} MTHydValveIdentFineScanType;
		MeasResultsPos : {REDUND_UNREPLICABLE} ARRAY[0..22]OF MTHydValveIdentMeasResultsType;
		NumPointsPos : {REDUND_UNREPLICABLE} USINT;
		MeasResultsNeg : {REDUND_UNREPLICABLE} ARRAY[0..22]OF MTHydValveIdentMeasResultsType;
		NumPointsNeg : {REDUND_UNREPLICABLE} USINT;
		ValveCurve : {REDUND_UNREPLICABLE} MTHydValveIdentInternResultsType;
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
	MTHydValveIdentInternResultsType : {REDUND_UNREPLICABLE} 	STRUCT 
		ValveSignalValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF LREAL; (*Valve signals array. Unit: [units].*)
		ValveOpeningValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF LREAL; (*Valve opening array. Unit: [1]. (Positive values: valve opening P->A. Negative values: valve opening P->B.).*)
		ValveVolumeFlow : {REDUND_UNREPLICABLE} ARRAY[0..49]OF LREAL;
		CylinderVelocityValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF LREAL;
		PumpPressureValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF LREAL;
		PumpSpeedValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF LREAL;
		CylinderPressure1Values : {REDUND_UNREPLICABLE} ARRAY[0..49]OF LREAL;
		CylinderPressure2Values : {REDUND_UNREPLICABLE} ARRAY[0..49]OF LREAL;
		NumberOfPoints : {REDUND_UNREPLICABLE} USINT; (*Number of identified points. *)
		ZeroPointIndex : {REDUND_UNREPLICABLE} USINT; (*Index of the zero point.*)
		QnomPA : {REDUND_UNREPLICABLE} LREAL;
		QnomPB : {REDUND_UNREPLICABLE} LREAL;
		Plausible : {REDUND_UNREPLICABLE} BOOL;
		PressureDrop : {REDUND_UNREPLICABLE} BOOL;
	END_STRUCT;
	MTHydValveIdentIOType : {REDUND_UNREPLICABLE} 	STRUCT 
		ActCylinderPosition : {REDUND_UNREPLICABLE} LREAL;
		ActCylinderVelocity : {REDUND_UNREPLICABLE} LREAL;
		ActCylinderPressure1 : {REDUND_UNREPLICABLE} LREAL;
		ActCylinderPressure2 : {REDUND_UNREPLICABLE} LREAL;
		ActPumpPressure : {REDUND_UNREPLICABLE} LREAL;
		ActPumpSpeed : {REDUND_UNREPLICABLE} LREAL;
		ValveSignal : {REDUND_UNREPLICABLE} LREAL;
		SetPumpPressure : {REDUND_UNREPLICABLE} LREAL;
		SetPumpSpeed : {REDUND_UNREPLICABLE} LREAL;
	END_STRUCT;
	MTHydValveIdentLimitsParType : {REDUND_UNREPLICABLE} 	STRUCT  (*Limitations for the valve identification block.*)
		MinAllowedCylinderPosition : {REDUND_UNREPLICABLE} REAL := 100.0; (*Minimum cylinder position allowed for identification. Unit: [mm]. Valid value range: MinAllowedCylinderPosition < MaxAllowedCylinderPosition.*)
		MaxAllowedCylinderPosition : {REDUND_UNREPLICABLE} REAL := 600.0; (*Maximum cylinder position allowed for identification. Unit: [mm]. Valid value range: MinAllowedCylinderPosition < MaxAllowedCylinderPosition.*)
	END_STRUCT;
	MTHydValveIdentMachDataType : {REDUND_UNREPLICABLE} 	STRUCT  (*MachineData structure of valve identification.*)
		CylinderArea1 : {REDUND_UNREPLICABLE} REAL; (*Cylinder piston area of chamber 1. Units: [cm2]. Valid value range: CylinderArea1 > 0.*)
		CylinderArea2 : {REDUND_UNREPLICABLE} REAL; (*Cylinder piston area of chamber 1. Units: [cm2]. Valid value range:CylinderArea1 >= CylinderArea2 > 0.*)
		MinValveSignalValue : {REDUND_UNREPLICABLE} REAL; (*Minimum valve signal value. Unit: [units] (e.g. V, mV, digits, ...). Valid value range: MinValveSignalValue < ValveSignalZeroPoint.*)
		ValveSignalZeroPoint : {REDUND_UNREPLICABLE} REAL; (*Valve signal value of the zero point. There is no movement at this point. Unit: [units] (e.g. V, mV, digits, ...).*)
		MaxValveSignalValue : {REDUND_UNREPLICABLE} REAL; (*Maximum valve signal value. Unit: [units] (e.g. V, mV, digits, ...). Valid value range: ValveSignalZeroPoint < MaxValveSignalValue.*)
		ValveNominalPressureDrop : {REDUND_UNREPLICABLE} REAL := 5.0; (*Nominal pressure drop at valve edge. Units: [bar]. Valid value range: ValveNomPressureDrop > 0.*)
		ValveCylinderConnection : {REDUND_UNREPLICABLE} MTHydValveValveCylConnectionEnum := mtHYDVALVE_PORT_A_TO_CYLCHAMBER1; (*Connection between valve and cylinder.*)
		CoordinateSystem : {REDUND_UNREPLICABLE} MTHydValveCoordinateSystemEnum := mtHYDVALVE_CYLCHAMBER1_POSDIR; (*Coordinate system to set in which direction is the positive and negative movement.*)
	END_STRUCT;
	MTHydValveIdentMeasureOpType : {REDUND_UNREPLICABLE} 	STRUCT 
		Step : {REDUND_UNREPLICABLE} USINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		Timer : {REDUND_UNREPLICABLE} LREAL;
		Counter : {REDUND_UNREPLICABLE} DINT;
		ActCylinderPositionOld : {REDUND_UNREPLICABLE} LREAL;
		SumPumpPressure : {REDUND_UNREPLICABLE} LREAL;
		AvgPumpPressure : {REDUND_UNREPLICABLE} LREAL;
		SumCylinderPressure1 : {REDUND_UNREPLICABLE} LREAL;
		AvgCylinderPressure1 : {REDUND_UNREPLICABLE} LREAL;
		SumCylinderPressure2 : {REDUND_UNREPLICABLE} LREAL;
		AvgCylinderPressure2 : {REDUND_UNREPLICABLE} LREAL;
		SumPumpSpeed : {REDUND_UNREPLICABLE} LREAL;
		AvgPumpSpeed : {REDUND_UNREPLICABLE} LREAL;
		CylinderVelocity : {REDUND_UNREPLICABLE} LREAL;
	END_STRUCT;
	MTHydValveIdentMeasResultsType : {REDUND_UNREPLICABLE} 	STRUCT 
		ValveSignal : {REDUND_UNREPLICABLE} LREAL;
		CylinderVelocity : {REDUND_UNREPLICABLE} LREAL;
		AvgPumpPressure : {REDUND_UNREPLICABLE} LREAL;
		AvgCylinderPressure1 : {REDUND_UNREPLICABLE} LREAL;
		AvgCylinderPressure2 : {REDUND_UNREPLICABLE} LREAL;
		AvgPumpSpeed : {REDUND_UNREPLICABLE} LREAL;
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
	MTHydValveIdentMovePositionType : {REDUND_UNREPLICABLE} 	STRUCT 
		Step : {REDUND_UNREPLICABLE} USINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		CmdStop : {REDUND_UNREPLICABLE} BOOL;
		Timer : {REDUND_UNREPLICABLE} LREAL;
		ValveSignal : {REDUND_UNREPLICABLE} LREAL;
		PositiveMovement : {REDUND_UNREPLICABLE} BOOL;
		ValveSignalAtStopping : {REDUND_UNREPLICABLE} LREAL;
		StopDistance : {REDUND_UNREPLICABLE} LREAL;
		BrakeDistance : {REDUND_UNREPLICABLE} LREAL;
		MaxValveDistance : {REDUND_UNREPLICABLE} LREAL;
		MaxValveVelocity : {REDUND_UNREPLICABLE} LREAL;
		MaxValveTime : {REDUND_UNREPLICABLE} LREAL;
		SafetyDistance : {REDUND_UNREPLICABLE} LREAL;
		ActCylinderPositionMaxValve : {REDUND_UNREPLICABLE} LREAL;
		MaxValveReached : {REDUND_UNREPLICABLE} BOOL;
		ActCylinderPositionStopping : {REDUND_UNREPLICABLE} LREAL;
		ActCylinderPositionStopped : {REDUND_UNREPLICABLE} LREAL;
		ZeroPointReached : {REDUND_UNREPLICABLE} BOOL;
		ZeroPointDriftVelocity : {REDUND_UNREPLICABLE} LREAL;
	END_STRUCT;
	MTHydValveIdentParType : {REDUND_UNREPLICABLE} 	STRUCT  (*Identification parameters.*)
		ValveCurveMode : {REDUND_UNREPLICABLE} MTHydValveCurveEnum; (*Mode for valve characteristics curve.*)
		MachineData : {REDUND_UNREPLICABLE} MTHydValveIdentMachDataType; (*Machine data parameters.*)
		PressureSupply : {REDUND_UNREPLICABLE} MTHydValveIdentSupplyParType; (*Pressure source parameters.*)
		Limits : {REDUND_UNREPLICABLE} MTHydValveIdentLimitsParType; (*Limitations. E.g. working area for identification.*)
		PositiveDirection : {REDUND_UNREPLICABLE} MTHydValveIdentDirectionParType; (*Identification parameters for a positive movement direction.*)
		NegativeDirection : {REDUND_UNREPLICABLE} MTHydValveIdentDirectionParType; (*Identification parameters for a negative movement direction.*)
		AccuracySettings : {REDUND_UNREPLICABLE} MTHydValveIdentAccuracyType; (*Additional settings for the identification.*)
	END_STRUCT;
	MTHydValveIdentResultsType : {REDUND_UNREPLICABLE} 	STRUCT  (*Results of the identification.*)
		ValveSignalValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Valve signals array. Unit: [units].*)
		ValveOpeningValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Valve opening array. Unit: [1]. (Positive values: valve opening P->A. Negative values: valve opening P->B.).*)
		NumberOfPoints : {REDUND_UNREPLICABLE} USINT; (*Number of identified points. *)
		ZeroPointIndex : {REDUND_UNREPLICABLE} USINT; (*Index of the zero point.*)
		ValveNominalVolumeFlowPA : {REDUND_UNREPLICABLE} REAL; (*Identified nominal valve volume flow from the port P to A of the valve.*)
		ValveNominalVolumeFlowPB : {REDUND_UNREPLICABLE} REAL; (*Identified nominal valve volume flow from the port P to B of the valve.*)
	END_STRUCT;
	MTHydValveIdentRoughScanType : {REDUND_UNREPLICABLE} 	STRUCT 
		Step : {REDUND_UNREPLICABLE} USINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		Error : {REDUND_UNREPLICABLE} BOOL;
		StatusID : {REDUND_UNREPLICABLE} DINT;
		Timer : {REDUND_UNREPLICABLE} LREAL;
		ValveSignalLowerZeroPoint : {REDUND_UNREPLICABLE} BOOL;
		StartPosition : {REDUND_UNREPLICABLE} LREAL;
		EndPosition : {REDUND_UNREPLICABLE} LREAL;
	END_STRUCT;
	MTHydValveIdentStartUpType : {REDUND_UNREPLICABLE} 	STRUCT 
		Step : {REDUND_UNREPLICABLE} USINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		Error : {REDUND_UNREPLICABLE} BOOL;
		StatusID : {REDUND_UNREPLICABLE} DINT;
		Timer : {REDUND_UNREPLICABLE} LREAL;
		Counter : {REDUND_UNREPLICABLE} USINT;
		CheckDirectionDone : {REDUND_UNREPLICABLE} BOOL;
		PositionDrift : {REDUND_UNREPLICABLE} LREAL;
		ActCylinderPositionOld : {REDUND_UNREPLICABLE} LREAL;
		StartPosition : {REDUND_UNREPLICABLE} LREAL;
		EndPosition : {REDUND_UNREPLICABLE} LREAL;
		SlewRate : {REDUND_UNREPLICABLE} LREAL;
		MaxAbsValveSignalDuringCheck : {REDUND_UNREPLICABLE} LREAL;
		DistanceToStart : {REDUND_UNREPLICABLE} LREAL;
		DistanceToEnd : {REDUND_UNREPLICABLE} LREAL;
		NearStart : {REDUND_UNREPLICABLE} BOOL;
		MoveBackDone : {REDUND_UNREPLICABLE} BOOL;
		MinMeasDone : {REDUND_UNREPLICABLE} BOOL;
		GetCharPointsDone : {REDUND_UNREPLICABLE} BOOL;
	END_STRUCT;
	MTHydValveIdentSupplyParType : {REDUND_UNREPLICABLE} 	STRUCT  (*Pump parameters for valve identification.*)
		PressureSource : {REDUND_UNREPLICABLE} MTHydValvePressureSourceEnum := mtHYDVALVE_CONST_PRESSURE_SOURCE; (*Choose the pressure supply source.*)
		SetPumpSpeed : {REDUND_UNREPLICABLE} REAL := 200.0; (*Only for servo pump! (PressureSource = mtHYDVALVE_SERVO_PUMP). Set pump speed for identification. Unit: [rpm]. Valid value range: SetPumpSpeed > 0.*)
		SetPumpPressure : {REDUND_UNREPLICABLE} REAL := 2000.0; (*Only for servo pump! (PressureSource = mtHYDVALVE_SERVO_PUMP). Set pump pressure for identification. Unit: [bar]. Valid value range: SetPumpPressure > 0.*)
		MaxAllowedPumpPressureDrop : {REDUND_UNREPLICABLE} REAL := 50.0; (*Only for servo pump! (PressureSource = mtHYDVALVE_SERVO_PUMP). Maximum allowed pump pressure drop during identification. Unit: [bar]. Valid value range: MaxAllowedPumpPressureDrop > 0.*)
	END_STRUCT;
	MTHydValveIntegrationModeEnum : 
		( (*Enumeration type for integration modes.*)
		mtHYDVALVE_INTEGRATION_MODE_OFF := 0, (*The integrator is switched off. *)
		mtHYDVALVE_INTEGRATION_MODE_1 := 1, (*The integrator is turned on and integrates Yi with the integral action time PIDParameter.IntegrationTime (MovingDirection = 1, 'positive' direction) and PIDParameter.IntegrationTime  (MovingDirection = -1, 'negative' direction). When integration is turned off (PIDParameter.IntegrationMode = mtHYDVALVE_INTEGRATIONMODE_OFF), the last value of Yi is discarded and Yi is set to 0. When you turn integration back on (PIDParameter.IntegrationMode = mtHYDVALVE_INTEGRATIONMODE_1) it begins at Yi = 0.*)
		mtHYDVALVE_INTEGRATION_MODE_2 := 2 (*The integrator is turned on and integrates Yi with the integral action time PIDParameter.IntegrationTime (MovingDirection = 1, 'positive' direction) and PIDParameter.IntegrationTime (MovingDirection = -1, 'negative' direction). When integration is turned off (PIDParameter.IntegrationMode = mtHYDVALVE_INTEGRATIONMODE_OFF), the last value of Yi is saved and continues to be the setting for Yi. When you turn integration back on (PIDParameter.IntegrationMode = mtHYDVALVE_INTEGRATIONMODE_2) it begins at the last saved value of Yi.*)
		);
	MTHydValveInternalPIDParaType : {REDUND_UNREPLICABLE} 	STRUCT  (*PID parameters of the position controller.*)
		Gain : {REDUND_UNREPLICABLE} REAL; (*Proportional gain. Valid value range: Gain &gt 0.*)
		IntegrationTimePositive : {REDUND_UNREPLICABLE} REAL; (*Integral time constant (integral action time) for the integral component in positive direction. Unit: [s]. Valid value range: IntegrationTimePositive = 0. IntegrationTimePositive = 0 turns off the integral component for positive direction.*)
		IntegrationTimeNegative : {REDUND_UNREPLICABLE} REAL; (*Integral time constant (integral action time) for the integral component in negative direction. Unit: [s]. Valid value range: IntegrationTimeNegative = 0. IntegrationTimeNegative = 0 turns off the integral component for negative direction.*)
		DerivativeTime : {REDUND_UNREPLICABLE} REAL; (*Differential time constant (derivative time) for the derivative component. Unit: [s]. Valid value range: DerivativeTime = 0. DerivativeTime = 0 turns off the derivative component.*)
		FilterTime : {REDUND_UNREPLICABLE} REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MinIntegrationPartValue : {REDUND_UNREPLICABLE} REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MaxIntegrationPartValue : {REDUND_UNREPLICABLE} REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MinOut : {REDUND_UNREPLICABLE} REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MaxOut : {REDUND_UNREPLICABLE} REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime = 0. FilterTime &lt CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
		MaxForce : {REDUND_UNREPLICABLE} REAL; (*Only for usage without servo correction! Maximum Force for scaling the controller Parameters.*)
	END_STRUCT;
END_TYPE

(*Types of MTHydValveLinearization*)

TYPE
	MTHydValveLinInternalType : {REDUND_UNREPLICABLE} 	STRUCT  (*Data for internal use.*)
		ParametersValid : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		UpdateOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		EnableOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		CycleTime : {REDUND_UNREPLICABLE} REAL; (*Task cycle time. Unit: [s].*)
		CoordinateOrder : {REDUND_UNREPLICABLE} SINT; (*Data for internal use.*)
		NodeVectorX : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Data for internal use.*)
		FcnValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL; (*Data for internal use.*)
		NumberOfNodes : {REDUND_UNREPLICABLE} USINT; (*Data for internal use.*)
		Nodes : {REDUND_UNREPLICABLE} ARRAY[0..49]OF MTHydValveLookUpNodeType; (*Data for internal use.*)
		Mode : {REDUND_UNREPLICABLE} MTHydValveLookUpModeEnum; (*Data for internal use.*)
		DisMode : {REDUND_UNREPLICABLE} SINT; (*Data for internal use.*)
		ValveOpeningOld : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
	END_STRUCT;
	MTHydValveLookUpModeEnum : 
		( (*Data for internal use.*)
		mt_LOOKUP_CONST_END_VALUE := 0, (*Data for internal use.*)
		mt_LOOKUP_LIN_EXTRAPOLATION := 1 (*Data for internal use.*)
		);
	MTHydValveLookUpNodeType : {REDUND_UNREPLICABLE} 	STRUCT  (*Data for internal use.*)
		XValues : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		FcnValues : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		k : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		d : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
	END_STRUCT;
	MTHydValvePIDOutputType : {REDUND_UNREPLICABLE} 	STRUCT  (*Output of the internal used PID function.*)
		ProportionalPart : {REDUND_UNREPLICABLE} REAL; (*Proportional part.*)
		IntegrationPart : {REDUND_UNREPLICABLE} REAL; (*Integration part.*)
		DerivativePart : {REDUND_UNREPLICABLE} REAL; (*Derivative part.*)
		PIDOut : {REDUND_UNREPLICABLE} REAL; (*Total PID output.*)
	END_STRUCT;
	MTHydValvePosConMachDataType : {REDUND_UNREPLICABLE} 	STRUCT  (*MachineData structure of position controller*)
		MaxPumpPressure : {REDUND_UNREPLICABLE} REAL; (*Maximum system pressure (supply pressure). Units: [bar]. Valid value range: MaxPumpPressure &gt= 0.*)
		CylinderArea1 : {REDUND_UNREPLICABLE} REAL; (*Cylinder piston area whose pressurization induces a movement in the positive direction (e.g. extending piston). Units: [cm2]. Valid value range: CylinderArea1 &gt 0.*)
		CylinderArea2 : {REDUND_UNREPLICABLE} REAL; (*Cylinder piston area whose pressurization induces a movement in the negative direction (e.g. retracting piston). Units: [cm2]. Valid value range: CylinderArea2 &gt 0.*)
		ValveNominalVolumeFlowPA : {REDUND_UNREPLICABLE} REAL; (*Nominal valve volume flow from the port P to A of the valve. *)
		ValveNominalVolumeFlowPB : {REDUND_UNREPLICABLE} REAL; (*Nominal valve volume flow from the port P to B of the valve. *)
		ValveNominalPressureDrop : {REDUND_UNREPLICABLE} REAL; (*Nominal pressure drop at valve edge. Units: [bar]. Valid value range: ValveNomPressureDrop &gt 0.*)
		ValveCylinderConnection : {REDUND_UNREPLICABLE} MTHydValveValveCylConnectionEnum; (*Connection between valve and cylinder.*)
		CoordinateSystem : {REDUND_UNREPLICABLE} MTHydValveCoordinateSystemEnum; (*Coordinate system to set in which direction is the positive and negative movement.*)
	END_STRUCT;
	MTHydValvePosConParType : {REDUND_UNREPLICABLE} 	STRUCT 
		PID : {REDUND_UNREPLICABLE} MTHydValvePosConPIDParType; (*PID Parameters for position controller.*)
		MachineData : {REDUND_UNREPLICABLE} MTHydValvePosConMachDataType; (*Machine data used für servo correction of position controller.*)
		GainSetCylinderVelocity : {REDUND_UNREPLICABLE} REAL := 1.0; (*Factor to manipulate the set velocity for the servo correction. Valid value range:  0 <= GainSetCylinderVelocity <=2.*)
	END_STRUCT;
	MTHydValvePosConPIDParType : {REDUND_UNREPLICABLE} 	STRUCT  (*PID parameters of the position controller.*)
		Gain : {REDUND_UNREPLICABLE} REAL; (*Proportional gain. Valid value range: Gain >= 0.*)
		IntegrationTimePositive : {REDUND_UNREPLICABLE} REAL; (*Integral time constant (integral action time) for the integral component in positive direction. Unit: [s]. Valid value range: IntegrationTimePositive = 0.  IntegrationTimePositive = 0 turns off the integral component for positive direction.*)
		IntegrationTimeNegative : {REDUND_UNREPLICABLE} REAL; (*Integral time constant (integral action time) for the integral component in negative direction. Unit: [s]. Valid value range: IntegrationTimeNegative = 0. IntegrationTimeNegative = 0 turns off the integral component for negative direction.*)
		DerivativeTime : {REDUND_UNREPLICABLE} REAL; (*Differential time constant (derivative time) for the derivative component. Unit: [s]. Valid value range: DerivativeTime = 0. DerivativeTime = 0 turns off the derivative component.*)
		FilterTime : {REDUND_UNREPLICABLE} REAL; (*Filter time constant for the derivative component. Unit: [s]. Valid value range: FilterTime >= 0. FilterTime < CycleTime turns off the derivative component. A good starting value is FilterTime = DerivativeTime / 10.*)
	END_STRUCT;
	MTHydValvePosContInternalType : {REDUND_UNREPLICABLE} 	STRUCT  (*Data for internal use.*)
		ParametersValid : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		UpdateOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		EnableOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		CycleTime : {REDUND_UNREPLICABLE} REAL; (*Task cycle time. Unit: [s].*)
		Parameters : {REDUND_UNREPLICABLE} MTHydValvePosConParType; (*Data for internal use.*)
		EnableServoCorrection : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		Qnom_pos : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		Qnom_neg : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		Apos : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		Aneg : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		pPos : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		pNeg : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		ControlError : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		ControlErrorOld : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		LastIntegrationPartNegative : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		LastIntegrationPartPositive : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		ValveOpeningServoCorrection : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		PIDOutput : {REDUND_UNREPLICABLE} MTHydValvePIDOutputType; (*Data for internal use.*)
		s_set_old : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		s_act_old : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		vCyl_rel : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		PIDAdvStatusID : {REDUND_UNREPLICABLE} DINT; (*Data for internal use.*)
		vyServoStatusID : {REDUND_UNREPLICABLE} DINT; (*Data for internal use.*)
		EnableIntegrationPartOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		MovingDirection : {REDUND_UNREPLICABLE} SINT; (*Data for internal use.*)
		MovingDirectionOld : {REDUND_UNREPLICABLE} SINT; (*Data for internal use.*)
		MaxCylVelNegDir : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		MaxCylVelPosDir : {REDUND_UNREPLICABLE} REAL; (*Data for internal use.*)
		ResetIntegrationPartOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		CyclicError : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		IntegrationStatus : {REDUND_UNREPLICABLE} MTPIDIntegrationEnum; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*Types of MTHydValvePressureObserver*)

TYPE
	MTHydValvePressObsInternalType : {REDUND_UNREPLICABLE} 	STRUCT  (*Data for internal use.*)
		ParametersValid : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		UpdateOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		EnableOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		CycleTime : {REDUND_UNREPLICABLE} REAL; (*Task cycle time. Unit: [s].*)
		MachineData : {REDUND_UNREPLICABLE} MTHydValvePosConMachDataType;
		QnomA : {REDUND_UNREPLICABLE} REAL;
		QnomB : {REDUND_UNREPLICABLE} REAL;
		A1 : {REDUND_UNREPLICABLE} REAL;
		A2 : {REDUND_UNREPLICABLE} REAL;
		pDenom : {REDUND_UNREPLICABLE} REAL;
		PumpPressure : {REDUND_UNREPLICABLE} REAL;
		FrictionForceNeg : {REDUND_UNREPLICABLE} REAL;
		FrictionForcePos : {REDUND_UNREPLICABLE} REAL;
		flagLowPrioWarning : {REDUND_UNREPLICABLE} BOOL;
		flagHighPrioWarning : {REDUND_UNREPLICABLE} BOOL;
	END_STRUCT;
	MTHydValvePressureSourceEnum : 
		( (*Enum for pressure supply.*)
		mtHYDVALVE_CONST_PRESSURE_SOURCE := 0, (*Constant pressure supply source.*)
		mtHYDVALVE_SERVO_PUMP := 1 (*Servo pump.*)
		);
	MTHydValveSimCylinderParType : {REDUND_UNREPLICABLE} 	STRUCT  (*CylinderParameter of SimulationModel*)
		Mass : {REDUND_UNREPLICABLE} REAL := 100; (*Moving mass of cylinder. Units: [kg].*)
		CylinderArea1 : {REDUND_UNREPLICABLE} REAL := 165; (*Area 1 of cylinder. Units:[cm2].*)
		CylinderArea2 : {REDUND_UNREPLICABLE} REAL := 86; (*Area 2 of cylinder. Units:[cm2].*)
		CylinderStroke : {REDUND_UNREPLICABLE} REAL := 500; (*Stroke. Units: [mm]*)
		DeadVolume1 : {REDUND_UNREPLICABLE} REAL := 2.5; (*Dead volume in cylinder chamber 1. Units: [l]*)
		DeadVolume2 : {REDUND_UNREPLICABLE} REAL := 4; (*Dead volume in cylinder chamber 2. Units: [l]*)
		VelPropFrictionFactor : {REDUND_UNREPLICABLE} REAL := 400; (*Velocity proportional fricton factor. Units: [kg/s]*)
		SlideFrictionForce : {REDUND_UNREPLICABLE} REAL := 100; (*Slide Friction Force. Units: [N].*)
		StickFrictionForce : {REDUND_UNREPLICABLE} REAL := 300; (*Stick Friction Force. Units: [N].*)
	END_STRUCT;
	MTHydValveSimModelInternalType : {REDUND_UNREPLICABLE} 	STRUCT  (*Data for internal use.*)
		CycleTime : {REDUND_UNREPLICABLE} LREAL; (*Task cycle time. Unit: [s].*)
		CylinderParameters : {REDUND_UNREPLICABLE} MTHydValveSimCylinderParType;
		ValveParameters : {REDUND_UNREPLICABLE} MTHydValveSimValveParType;
		SystemParameters : {REDUND_UNREPLICABLE} MTHydValveSimSystemParType;
		EnableParameter : {REDUND_UNREPLICABLE} REAL;
		InhibitUpdate : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		ParametersValid : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		UpdateOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		EnableOld : {REDUND_UNREPLICABLE} BOOL; (*Data for internal use.*)
		QA_lmin : {REDUND_UNREPLICABLE} REAL;
		QB_lmin : {REDUND_UNREPLICABLE} REAL;
		QA : {REDUND_UNREPLICABLE} REAL;
		QB : {REDUND_UNREPLICABLE} REAL;
		pB_bar : {REDUND_UNREPLICABLE} REAL;
		pA_bar : {REDUND_UNREPLICABLE} REAL;
		x_ode_old : {REDUND_UNREPLICABLE} REAL;
		v_ode_old : {REDUND_UNREPLICABLE} REAL;
		pB_ode_old : {REDUND_UNREPLICABLE} REAL;
		pA_ode_old : {REDUND_UNREPLICABLE} REAL;
		x_ode : {REDUND_UNREPLICABLE} REAL;
		a_ode : {REDUND_UNREPLICABLE} REAL;
		v_ode : {REDUND_UNREPLICABLE} REAL;
		pB_ode : {REDUND_UNREPLICABLE} REAL;
		pA_ode : {REDUND_UNREPLICABLE} REAL;
		par_v : {REDUND_UNREPLICABLE} ARRAY[0..6]OF REAL;
		par_pA : {REDUND_UNREPLICABLE} ARRAY[0..6]OF REAL;
		par_pB : {REDUND_UNREPLICABLE} ARRAY[0..6]OF REAL;
		par_x : {REDUND_UNREPLICABLE} ARRAY[0..6]OF REAL;
		fcn_ptr_pB : {REDUND_UNREPLICABLE} REAL;
		fcn_ptr_x : {REDUND_UNREPLICABLE} REAL;
		fcn_ptr_v : {REDUND_UNREPLICABLE} REAL;
		fcn_ptr_pA : {REDUND_UNREPLICABLE} REAL;
		d1 : {REDUND_UNREPLICABLE} REAL;
		ValveSignal : {REDUND_UNREPLICABLE} REAL;
		ValveOpening : {REDUND_UNREPLICABLE} REAL;
		ActPumpPressure : {REDUND_UNREPLICABLE} REAL;
		ProcessForce : {REDUND_UNREPLICABLE} REAL;
		GravitationForce : {REDUND_UNREPLICABLE} REAL;
		FrictionForce : {REDUND_UNREPLICABLE} REAL;
		FrictionState : {REDUND_UNREPLICABLE} USINT;
		PistonForce : {REDUND_UNREPLICABLE} REAL;
		CoordinateOrder : {REDUND_UNREPLICABLE} INT;
		HydraulicForce : {REDUND_UNREPLICABLE} REAL;
		ValveNodes : {REDUND_UNREPLICABLE} ARRAY[0..49]OF NodeType;
		ValveDisMode : {REDUND_UNREPLICABLE} SINT;
		pNeg : {REDUND_UNREPLICABLE} REAL;
		pPos : {REDUND_UNREPLICABLE} REAL;
	END_STRUCT;
	MTHydValveSimSystemParType : {REDUND_UNREPLICABLE} 	STRUCT  (*SystemParameters of SimulationModel*)
		TankPressure : {REDUND_UNREPLICABLE} REAL := 1; (*Tank pressure. Units: [bar].*)
		BulkModulus : {REDUND_UNREPLICABLE} REAL := 14000; (*Oil Elasticity. Units: [bar].*)
		Gravity : {REDUND_UNREPLICABLE} REAL := 0; (*Gravity. Units:[m/s^2].*)
		CoordinateSystem : {REDUND_UNREPLICABLE} MTHydValveCoordinateSystemEnum := mtHYDVALVE_CYLCHAMBER1_POSDIR; (*EnumerationType to constitute the positive direction.*)
		ValveCylinderConnection : {REDUND_UNREPLICABLE} MTHydValveValveCylConnectionEnum := mtHYDVALVE_PORT_A_TO_CYLCHAMBER1; (*EnumerationType to constitute the connection between valve and cylinder.*)
		MinCylinderPressure1 : {REDUND_UNREPLICABLE} REAL := 1; (*Minimum pressure in cylinderchamber 1. Units: [bar].*)
		MaxCylinderPressure1 : {REDUND_UNREPLICABLE} REAL := 300; (*Maximum pressure in cylinderchamber 1. Units: [bar].*)
		MinCylinderPressure2 : {REDUND_UNREPLICABLE} REAL := 1; (*Minimum pressure in cylinderchamber 2. Units: [bar].*)
		MaxCylinderPressure2 : {REDUND_UNREPLICABLE} REAL := 300; (*Maximum pressure in cylinderchamber 2. Units: [bar].*)
		InitialCylinderPressure1 : {REDUND_UNREPLICABLE} REAL := 1; (*Initial pressure in cylinderchamber 1. Units: [bar].*)
		InitialCylinderPressure2 : {REDUND_UNREPLICABLE} REAL := 1.9; (*Initial pressure in cylinderchamber 2. Units: [bar].*)
		InitialCylinderPosition : {REDUND_UNREPLICABLE} REAL := 100; (*Iniital position of cylinder. Units: [mm].*)
		InitialCylinderVelocity : {REDUND_UNREPLICABLE} REAL := 0; (*Initial velocity of cylinder. Units: [mm/s].*)
	END_STRUCT;
	MTHydValveSimValveParType : {REDUND_UNREPLICABLE} 	STRUCT  (*ValveParameters of SimulationModel*)
		ValveNominalVolumeFlowPA : {REDUND_UNREPLICABLE} REAL := 100; (*Nominal volume flow A. Units: [l/min].*)
		ValveNominalVolumeFlowPB : {REDUND_UNREPLICABLE} REAL := 100; (*Nominal volume flow B. Units: [l/min].*)
		ValveNominalPressureDrop : {REDUND_UNREPLICABLE} REAL := 5; (*Nominal pressure drop at valve edge. Units: [bar]. *)
		ValveLeakageFactor : {REDUND_UNREPLICABLE} REAL := 0.001; (*Valve leakage coefficient. Units: [l/min/bar].*)
		ValveOpeningValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL := [-1,-0.4,0,0.4,1,45(0)]; (*Valve opening values of valve characteristics curve. Units: [%]. Range [-1 .. 1].*)
		ValveSignalValues : {REDUND_UNREPLICABLE} ARRAY[0..49]OF REAL := [-1,-0.1,0,0.1,1,45(0)]; (*Valve signal values of valve characteristics curve. Units: [%]. Range [-1 .. 1].*)
		NumNodesValveCurve : {REDUND_UNREPLICABLE} USINT := 5; (*Number of implemented points of valve characterics curve. Units: [1].*)
	END_STRUCT;
	MTHydValveValveCylConnectionEnum : 
		( (*Enumeration for connection between valve and cylinder.*)
		mtHYDVALVE_PORT_A_TO_CYLCHAMBER1 := 0, (*Port A of the valve is connected to the cylinder chamber 1.*)
		mtHYDVALVE_PORT_A_TO_CYLCHAMBER2 := 1 (*Port A of the valve is connected to the cylinder chamber 2.*)
		);
END_TYPE

(*Types of MTHydValveSimulationModel*)

TYPE
	NodeType : {REDUND_UNREPLICABLE} 	STRUCT  (*Node type of valve characteristics curve.*)
		d : {REDUND_UNREPLICABLE} REAL;
		k : {REDUND_UNREPLICABLE} REAL;
		FcnValues : {REDUND_UNREPLICABLE} REAL;
		XValues : {REDUND_UNREPLICABLE} REAL;
	END_STRUCT;
END_TYPE
