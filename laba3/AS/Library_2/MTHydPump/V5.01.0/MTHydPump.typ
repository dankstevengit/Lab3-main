(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTHydPump
 * File: MTHydPump.typ
 * Author: B&R
 * Created: July 2014
 ********************************************************************
 * Data types of library MTHydPump
 ********************************************************************)
(*MTHydPumpSimulationModel datatypes.*)

TYPE
	MTHydPumpSimValveParType : 	STRUCT  (*Valve parameters.*)
		NomVolumeFlowA : LREAL := 200; (*Nominal valve volumetric flow rate at valve connection side A. Unit: [l/min]. Permitted range of values: NomVolumeFlowA > 0. The value for NomVolumeFlowA can be taken from the valve data sheet.*)
		NomVolumeFlowB : LREAL := 200; (*Nominal valve volumetric flow rate at valve connection B. Permitted range of values: NomVolumeFlowB > 0. The value for NomVolumeFlowB can be taken from the valve data sheet.*)
		NomPressureDrop : LREAL := 5; (*Nominal pressure drop at valve edge. Unit: [bar]. Permitted range of values: NomPressureDrop > 0. Typical values are 5 or 35 bar. The actual value can also be taken from the valve data sheet.*)
		LeakageCoefficient : LREAL := 0.01; (*Valve leakage coefficient. Unit: [l/min/bar]. Permitted range of values: LeakageCoefficient = 0.*)
	END_STRUCT;
	MTHydPumpSimSystemParType : 	STRUCT  (*System parameters.*)
		TankPressure : LREAL := 0; (*Tank pressure. Unit: [bar]. Permitted range of values: TankPressure = 0.*)
		OilElasticity : LREAL := 14000; (*Elasticity module of the oil. Unit: [bar]. Permitted range of values: OilElasticity > 0.*)
		OilDamping : LREAL := 2000; (*Oil damping. Unit: [Ns/m]. Permitted range of values: OilDamping = 0.*)
		Gravity : LREAL := 0; (*Gravitational acceleration Units [m/s²]. Permitted range of values: [-9.81,0,9.81].
Effective direction of cylinder upwards: Gravity = -9.81
Effective direction of cylinder downwards: Gravity = 9.81
If cylinder horizontal: Gravity = 0*)
	END_STRUCT;
	MTHydPumpSimPumpParType : 	STRUCT  (*Pump parameters.*)
		MaxPressure : LREAL := 220; (*The maximum permitted pump pressure. Unit: [bar]. Permitted range of values: MaxPressure > 0.*)
		MaxSpeed : LREAL := 3000; (*The maximum permitted pump speed. Unit: [rpm]. Permitted range of values: MaxSpeed > 0.*)
		DisplacementVolume : LREAL := 160.3; (*Pump displacement volume (VPump). Unit: [cm³]. Permitted range of values: DisplacementVolume > 0.*)
		VolumetricEfficiency : LREAL := 0.95; (*Volumetric efficiency (?Vol). Unit: [1]. Permitted range of values: 0 < VolumetricEfficiency = 1.*)
		NumberTeeth : LREAL := 13; (*Number of teeth of the pump. Permitted range of values: Integer with NumberTeeth = 0. NumberTeeth and PulsationFactor > 0 allow pump pulsation to be included in modeling.*)
		PulsationFactor : LREAL := 0.001; (*Pulsation factor (aPulse). Permitted range of values: PulsationFactor = 0.*)
		LeakageCoefficient : LREAL := 0.1; (*Pump leakage coefficient. Unit: [l/min/bar]. Permitted range of values: LeakageCoefficient = 0.*)
	END_STRUCT;
	MTHydPumpSimCylinderParType : 	STRUCT  (*Cylinder parameters.*)
		Mass : LREAL := 1000; (*Cylinder mass Unit: [kg]. Permitted range of values: Mass > 0.*)
		Area1 : LREAL := 165.1; (*Cylinder piston surface area 1. Unit: [cm²]. Permitted range of values: Area1 = Area2 >0.*)
		Area2 : LREAL := 86.6; (*Cylinder piston surface area 2. Unit: [cm²]. Permitted range of values: Area2 > 0.*)
		Stroke : LREAL := 180; (*Cylinder stroke. Unit: [mm]. Permitted range of values: Stroke > 0.*)
		DeadVolume1 : LREAL := 2500; (*Dead volume with respect to cylinder chamber 1, with Area1 as the cylinder piston surface area. Unit: [cm³]. Permitted range of values: DeadVolume1 = 0.*)
		DeadVolume2 : LREAL := 4000; (*Dead volume with respect to cylinder chamber 2, with Area2 as cylinder piston surface area. Unit: [cm³]. Permitted range of values: DeadVolume2 = 0.*)
		LeakageCoefficient : LREAL := 0.001; (*Cylinder leakage coefficient. Unit: [l/min/bar]. Permitted range of values: LeakageCoefficient = 0.*)
		SlideFriction1 : LREAL := 200; (*Slide friction during movement when the pressure is applied to cylinder piston surface area Area1. Unit: [N].
Permitted range of values: SlideFriction1 = 0.*)
		SlideFriction2 : LREAL := 200; (*Slide friction during movement when the pressure is applied to cylinder piston surface area Area2. Unit: [N]. Permitted range of values: SlideFriction2 = 0.*)
		StickFriction : LREAL := 2000; (*Static friction. Unit: [N]. Permitted range of values: StickFriction = 0.*)
	END_STRUCT;
	MTHydPumpSimulationInternalType : 	STRUCT  (*Data for internal use.*)
		bur_BlockIO_ServoPumpModel : BlockIO_ServoPumpModel;
		bur_PrevZCSigStates_ServoPumpMo : PrevZCSigStates_ServoPumpModel;
		bur_ContinuousStates_ServoPumpM : ContinuousStates_ServoPumpModel;
		bur_D_Work_ServoPumpModel : D_Work_ServoPumpModel;
		bur_ServoPumpModel : tag_RTM_ServoPumpModel;
		bur_init : BOOL;
	END_STRUCT;
	Timing_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		clockTick0 : UDINT;
		clockTickH0 : UDINT;
		stepSize0 : LREAL;
		clockTick1 : UDINT;
		clockTickH1 : UDINT;
		firstInitCondFlag : BOOL;
		simTimeStep : INT;
		stopRequestedFlag : BOOL;
		t : REFERENCE TO LREAL;
		tArray : ARRAY[0..1]OF LREAL;
	END_STRUCT;
	tag_RTM_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		errorStatus : REFERENCE TO USINT;
		solverInfo : ARRAY[0..56]OF UDINT;
		ModelData : ModelData_ServoPumpModel;
		Sizes : Sizes_ServoPumpModel;
		Timing : Timing_ServoPumpModel;
	END_STRUCT;
	StateDisabled_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		IntegratorLimited4_CSTATE : BOOL;
		IntegratorLimited3_CSTATE : BOOL;
		IntegratorLimited1_CSTATE : BOOL;
		IntegratorLimited_CSTATE : BOOL;
		IntegratorLimited2_CSTATE : BOOL;
	END_STRUCT;
	StateDerivatives_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		IntegratorLimited4_CSTATE : LREAL;
		IntegratorLimited3_CSTATE : LREAL;
		IntegratorLimited1_CSTATE : LREAL;
		IntegratorLimited_CSTATE : LREAL;
		IntegratorLimited2_CSTATE : LREAL;
	END_STRUCT;
	Sizes_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		numContStates : DINT;
		numSampTimes : DINT;
	END_STRUCT;
	PrevZCSigStates_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		IntegratorLimited4_Reset_ZCE : USINT;
		HitCrossing_Input_ZCE : USINT;
		IntegratorLimited3_Reset_ZCE : USINT;
		IntegratorLimited1_Reset_ZCE : USINT;
		IntegratorLimited_Reset_ZCE : USINT;
		ResettableDelay_Reset_ZCE : USINT;
		IntegratorLimited2_Reset_ZCE : USINT;
	END_STRUCT;
	TaskCounters_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		TID : ARRAY[0..2]OF UINT;
	END_STRUCT;
	ContinuousStates_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		IntegratorLimited4_CSTATE : LREAL;
		IntegratorLimited3_CSTATE : LREAL;
		IntegratorLimited1_CSTATE : LREAL;
		IntegratorLimited_CSTATE : LREAL;
		IntegratorLimited2_CSTATE : LREAL;
	END_STRUCT;
	ModelData_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		blockIO : REFERENCE TO BlockIO_ServoPumpModel;
		prevZCSigState : REFERENCE TO PrevZCSigStates_ServoPumpModel;
		contStates : REFERENCE TO ContinuousStates_ServoPumpModel;
		derivs : REFERENCE TO LREAL;
		contStateDisabled : REFERENCE TO BOOL;
		zCCacheNeedsReset : BOOL;
		derivCacheNeedsReset : BOOL;
		blkStateChange : BOOL;
		odeY : ARRAY[0..4]OF LREAL;
		odeF : ARRAY[0..3,0..4]OF LREAL;
		intgData : ODE4_IntgData_ServoPumpModel;
		dwork : REFERENCE TO D_Work_ServoPumpModel;
	END_STRUCT;
	D_Work_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		ResettableDelay_DSTATE : LREAL;
		internal_error : LREAL;
		internal_ParametersValid : LREAL;
		internal_StatusID : LREAL;
		HitCrossing_MODE : DINT;
		DelayInput1_DSTATE : USINT;
		DelayInput1_DSTATE_n : USINT;
		ModelSubsystem_MODE : BOOL;
	END_STRUCT;
	BlockIO_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		PumpSpeed : LREAL;
		ProcessForce : LREAL;
		sCylm : LREAL;
		IntegratorLimited4_o2 : LREAL;
		sCyl_pms : LREAL;
		mmm : LREAL;
		p2Pa : LREAL;
		Pabar : LREAL;
		p1Pa : LREAL;
		DataTypeConversion7 : LREAL;
		Saturation : LREAL;
		ResettableDelay : LREAL;
		Clock : LREAL;
		Pabar_b : LREAL;
		DataTypeConversion5 : LREAL;
		IntegratorLimited2 : LREAL;
		mmm_b : LREAL;
		Saturation1 : LREAL;
		error : LREAL;
		statusID : LREAL;
		pA : LREAL;
		pB : LREAL;
		Q1 : LREAL;
		Q2 : LREAL;
		qA_lmin : LREAL;
		qB_lmin : LREAL;
		pPump_bar : LREAL;
		dpPump_dt : LREAL;
		QPump_lmin : LREAL;
		TmpSignalConversionAtSFunctionI : ARRAY[0..3]OF LREAL;
		dx : ARRAY[0..4]OF LREAL;
		Fsum : LREAL;
		Fhyd : LREAL;
		Input5 : REAL;
		Input6 : REAL;
		Switch9 : REAL;
		Switch10 : REAL;
		Switch2 : REAL;
		Switch3 : REAL;
		Switch5 : REAL;
		DataTypeConversion : REAL;
		DataTypeConversion1 : REAL;
		DataTypeConversion2 : REAL;
		DataTypeConversion3 : REAL;
		DataTypeConversion4 : REAL;
		Switch6 : DINT;
		DataTypeConversion22 : DINT;
		Input1 : SINT;
		Uk1 : USINT;
		FixPtRelationalOperator : USINT;
		Uk1_b : USINT;
		Compare : USINT;
		FixPtRelationalOperator_e : USINT;
		Input : BOOL;
		LogicalOperator : BOOL;
		Switch1 : BOOL;
		Switch8 : BOOL;
		HitCrossing : BOOL;
		LogicalOperator_o : BOOL;
		DataTypeConversion21 : BOOL;
	END_STRUCT;
	ODE4_IntgData_ServoPumpModel : 	STRUCT  (*Data for internal use.*)
		y : REFERENCE TO LREAL;
		f : ARRAY[0..3]OF UDINT;
	END_STRUCT;
END_TYPE

(*MTHydPumpController datatypes.*)

TYPE
	MTHydPumpControllerConfigType : 	STRUCT  (*Configuration parameters for the function block.*)
		PressureSensor : MTHydPumpSensorConfigType; (*Configures the pressure sensor.*)
		MinPressureLimit : REAL; (*Minimum value for pressure setpoint. Unit: [bar]. Permitted range of values: MaxPressureLimit > MinPressureLimit = PressureSensor.MinPressure.*)
		MaxPressureLimit : REAL; (*Maximum value of pressure setpoint. Unit: [bar]. Permitted range of values: PressureSensor.MaxPressure = MaxPressureLimit > MinPressureLimit.*)
		MaxPumpSpeed : REAL; (*Maximum speed of motor and pump. Unit: [rpm]. Permitted range of values: MaxPumpSpeed > 0.*)
		ReversePumpMotorSpeed : BOOL; (*Pump direction of rotation is reversed. Set ReversePumpMotorSpeed = TRUE if a positive pump speed setpoint (SetPumpSpeed) causes the pump to turn in the negative direction, preventing pressure from building up (ActPumpPressure).*)
		MaxPumpAcceleration : REAL; (*Limits the pump and motor acceleration. Unit: [rpm/s]. Permitted range of values: MaxPumpAcceleration = 0. Important: When MaxPumpAcceleration = 0, cavitation protection is not guaranteed.*)
		MaxPumpDeceleration : REAL; (*Limits the pump and motor deceleration. Unit: [rpm/s]. Permitted range of values: MaxPumpDeceleration = 0. *)
		SlaveGearRatio : REAL; (*Only for ControllerMode = mtPUMP_SLAVE_MODE. Gear ratio between slave and master pump. The speed of the slave pump is coupled to the master movement axis with SetPumpSpeedSlave= SlaveGearRatio * PumpSpeedMaster.
Permitted range of values: Configuration.SlaveGearRatio = 0.*)
	END_STRUCT;
	MTHydPumpControllerParType : 	STRUCT  (*General parameters for the function block.*)
		ActPressureFilterTime : REAL; (*Filter time constant for filtering actual pressure. Filter type: First-order low pass Unit: [s]. Permitted range of values: ActPressureFilterTime = 0.*)
		DisableMinPressureController : BOOL; (*Can be used to disable the minimum pressure controller.
DisableMinPressureController = FALSE: Minimum pressure controller active.
DisableMinPressureController = TRUE: Minimum pressure controller disabled.*)
		MinSetPressure : REAL; (*Minimum pressure setpoint. Unit: [bar]. Permitted range of values if DisableMinPressureController = FALSE: MinSetPressure =Configuration.MinPressureLimit.*)
		ControllerParameterSet : ARRAY[0..9]OF MTHydPumpCtrlParSetType; (*Controller parameter set. 10 parameter sets are saved on the ACOPOS drive via Update. SelectParameterSet can be used to switch between these sets in one cycle.*)
		NegSetPumpSpeedAllowed : BOOL; (*To disable limitation of the pump speed setpoint in the negative direction.
NegSetPumpSpeedAllowed = FALSE: 0 = SetPumpSpeed.
NegSetPumpSpeedAllowed = TRUE: Parameters.ControllerParameterSet[SelectControllerParSet].MaxReversePumpSpeed = SetPumpSpeed.*)
		LeakageCompensation : REAL; (*Leakage speed. Speed to maintain a pressure of 100 bar. This parameter allows the leakage to be taken into consideration in a linear relationship when controlling the pressure (doubled leakage speed at 200 bar). Unit: [rpm].
Permitted range of values: LeakageCompensation = 0.*)
	END_STRUCT;
	MTHydPumpCtrlParSetType : 	STRUCT  (*Controller parameter set.*)
		PressureController : MTPIDParametersType; (*Pressure controller.*)
		MinPressureController : MTPIDParametersType; (*Minimum pressure controller.*)
		BiQuadFilter : MTHydPumpBiQuadFilterType; (*Compensation filter.*)
		MaxReversePumpSpeed : REAL; (*Maximum speed in the negative direction. Unit: [rpm]. Permitted range of values: MaxReversePumpSpeed = 0.*)
		SetPressureFilterTimeNegDir : REAL; (*Filter time constant of a PT1 element to prefilter the pressure setpoint at a jump in the negative direction. Unit: [s]. Permitted range of values: SetPressureFilterTimeNegDir = 0. This can help prevent undershoots.*)
		SetPressureFilterTimePosDir : REAL; (*Filter time constant of a PT1 element to prefilter the pressure setpoint at a jump in the positive direction. Unit: [s]. Permitted range of values: SetPressureFilterTimePosDir = 0. This can help prevent overshoots.*)
	END_STRUCT;
	MTHydPumpBiQuadFilterType : 	STRUCT  (*Compensation filter.*)
		CenterFrequencyNum : REAL; (*Center frequency numerator. Unit: [Hz]. Permitted range of values: 0 = CenterFrequencyNum < sampling frequency/2 (=1250 Hz). 
Sampling frequency = 1/sampling time = 1/400 µs = 2500 Hz.
BiQuad filter is active when CenterFrequencyNum > 0 and CenterFrequencyDen > 0.*)
		DampingRatioNum : REAL; (*Damping numerator. Permitted range of values: 0 = DampingRatioNum = 1.*)
		CenterFrequencyDen : REAL; (*Center frequency denominator. Unit: [Hz]. Permitted range of values: 0 = CenterFrequencyDen < sampling frequency/2 (=1250 Hz). Sampling frequency = 1/sampling time = 1/400 µs = 2500 Hz.The BiQuad filter is active if CenterFrequencyNum > 0 and CenterFrequencyDen > 0.*)
		DampingRatioDen : REAL; (*Damping denominator. Permitted range of values: 0 = DampingRatioDen = 1.*)
	END_STRUCT;
	MTHydPumpSensorConfigType : 	STRUCT  (*Configures the pressure sensor.*)
		Source : UDINT; (*Configuring the signal source for the actual pressure.
The following are possible valid configurations:
a) ACOPOSmulti servo drive with onboard analog input and digital input filter (filter time = 50 µs):
Source = 300
b) ACOPOSmulti servo drive with plug-in card in slot 2:
Source = 221 ... Analog input 1
Source = 222 ... Analog input 2
Source = 223 ... Analog input 3
Source = 224 ... Analog input 4
c) ACOPOS servo drive with plug-in card in slot 2:
Source = 121 ... Analog input 1
Source = 122 ... Analog input 2
d) ACOPOS servo drive with plug-in card in slot 3:
Source = 131 ... Analog input 1
Source = 132 ... Analog input 2
d) ACOPOS servo drive with plug-in card in slot 4:
Source = 141 ... Analog input 1
Source = 142 ... Analog input 2
e) Any ACOPOS parameter ID of data type INT that contains information about the current pressure:
Source = parameter ID * 65536*)
		MinVoltage : REAL; (*Minimum input voltage. Unit: [V]. Permitted range of values: MaxVoltage > MinVoltage = 0.*)
		MaxVoltage : REAL; (*Maximum input voltage. Unit: [V]. Permitted range of values: 10 = MaxVoltage > MinVoltage.*)
		MinPressure : REAL; (*Pressure at MinVoltage. Unit: [bar]. Permitted range of values: MinPressure = 0.*)
		MaxPressure : REAL; (*Pressure at MaxVoltage. Unit: [bar]. Permitted range of values: MaxPressure > MinPressure.*)
	END_STRUCT;
	MTHydPumpControllerModeEnum : 
		( (*Controller mode.*)
		mtPUMP_SPEED_CONTROL := 0, (*Speed control.*)
		mtPUMP_PRESSURE_SPEED_CONTROL := 1, (*Pressure and speed control.*)
		mtPUMP_SLAVE_MODE := 2, (*Slave mode. The motor follows the speed of the master axis.*)
		mtPUMP_STOP := 3 (*Stop. Speed = 0.*)
		);
	MTHydPump_PreFilterType : 	STRUCT  (*Data for internal use.*)
		u : LREAL; (*Input of PreFilter*)
		Set_y : BOOL; (*Force output*)
		y_set : LREAL; (*Set value when forcing*)
		T1 : REAL; (*Time constant*)
		Ts : REAL; (*Taskclass Sample Time*)
		nCnt : USINT; (*internal calculation*)
		T1dec : REAL; (*internal calculation*)
		x : ARRAY[0..1]OF LREAL; (*internal calculation*)
		a : ARRAY[0..1]OF LREAL; (*internal calculation*)
		y : LREAL; (*PreFilter output*)
	END_STRUCT;
	MTHydPumpIntSwitchoverType : 	STRUCT  (*Data for internal use.*)
		CompensationTime_sec : REAL; (*Compensation time in s to reduce the sampling jitter of 400µs.*)
		HoldOnPressureDigits : UINT; (*Hold on pressure in digits.*)
		pActSwitchOver : REAL; (*Units: [bar] // changed by LO 17.11.2011*)
		readStep : UINT; (*step for asynchron reading of switch over outputs*)
		waitCnt : UDINT; (*µsec*)
		con1StatusOld : BOOL; (*Old status of condition 1*)
		con2StatusOld : BOOL; (*Old status of condition 2*)
		con3StatusOld : BOOL; (*Old status of condition 3*)
		forceStatusOld : BOOL; (*Old status of forceing*)
		enableOld : BOOL; (*Old status of enabled*)
		readFlag : BOOL; (*internal flag*)
		ExternalSignalThreshold : REAL; (*External signal threshold in REAL.*)
	END_STRUCT;
	MTHydPump_internal_async_typ : 	STRUCT  (*Data for internal use.*)
		aCrs : REAL; (*breakdownResFact * 1/sigma*)
		sigma : REAL; (*1- (mutualInduc *  mutualInduc)/(mutualInduc + rotorInduc)/(mutualInduc + statorInduc) *)
		statorInduc : REAL; (*Stator induction*)
		rotorInduc : REAL; (*Rotor induction*)
		mutualInduc : REAL; (*Mutual induction*)
		MotorCurrRated : REAL; (*Rated motor current*)
		MotorMagnetizingCurr : REAL; (*Magnetising current*)
		MotorSpeedRated : REAL; (*Rated speed*)
		camProfile : MC_CAMPROFILE_TYP; (*cam profile for magnetising current*)
		camData : MC_CAM_SECTIONS_TYP; (*cam profile for magnetising current*)
		MC_BR_ReadParID_0 : MC_BR_ReadParID; (*Instance of read par id fub*)
		MC_BR_ReadParID_1 : MC_BR_ReadParID; (*Instance of read par id fub*)
		MC_BR_ReadParID_2 : MC_BR_ReadParID; (*Instance of read par id fub*)
		MC_BR_CalcCamFromSections_0 : MC_BR_CalcCamFromSections; (*cam profile for magnetising current*)
		MC_BR_DownloadCamProfileData_0 : MC_BR_DownloadCamProfileData; (*Instance of download cam profile fub*)
	END_STRUCT;
	MTHydPumpSwitchoverInfoType : 	STRUCT  (*Information of switch over functionality.*)
		SwitchoverPressure : REAL; (*Unfiltered actual pressure at which the switchover was started. Units: [bar]*)
		SwitchoverExternalSignal : REAL; (*External value specified by ParID ExternalValueSource at which the switchover to hold-on pressure was started.*)
		CompensationTime : REAL; (*Compensation time in µs to reduce the sampling jitter of 400µs.*)
		SwitchoverCondition : MTHydPumpSwitchoverEnum; (*Condition, cause the switch over to hold-on pressure started.*)
	END_STRUCT;
	MTHydPumpSwitchoverParType : 	STRUCT  (*Parameters for switch over functionality.*)
		HoldOnPressure : REAL; (*Final value of the pressure ramp. Units: [bar]. 0.0 <= HoldOnPressure <= MaxPressureLimit.*)
		SwitchoverTime : REAL := 0.004; (*Within this time, the set pressure will be smoothly ramped to the hold-on pressure. Units: [s]. Permitted value range: SwitchoverTime >= 0.0.*)
		EnableSwitchoverByPressure : BOOL; (*Inverted condition for external signal-based switch over to hold-on pressure. The trigger occurs when value of ExternalSignalSource <= ExternalSignalThreshold.*)
		PressureThreshold : REAL; (*Threshold for pressure-based switch over to hold-on pressure in bar. 0.0 <= PressureTreshold  <= MaxPressureLimit.*)
		EnableSwitchoverByExtSignal : BOOL; (*External value-based switch over is active.*)
		ExternalSignalSource : UDINT; (*Signal source for external signal-based switch over to hold-on pressure. Input of input card, slot and ACOPOS type are configurable.*)
		ExternalSignalThreshold : INT; (*Threshold for external signal-based switch over to hold-on pressure. ExternalSignalThreshold >= 0.*)
		ExternalSignalInvert : BOOL; (*Inverted condition for external signal-based switch over to hold-on pressure. The trigger occurs when value of ExternalSignalSource <= ExternalSignalThreshold.*)
		EnableSwitchoverByTrigger : BOOL; (*External trigger-based switch over is active.*)
		TriggerSourceParID : UINT := 584; (*Trigger for external trigger-based switch over to hold-on pressure. Specified as an ACOPOS parameter ID. Switch over when value is unequal 0.*)
	END_STRUCT;
	MTHydPumpSwitchoverEnum : 
		(
		mtPUMP_NO_SWITCHOVER := 0,
		mtPUMP_SWITCHOVER_BY_PRESSURE := 1,
		mtPUMP_SWITCHOVER_BY_EXT_SIGNAL := 2,
		mtPUMP_SWITCHOVER_BY_TRIGGER := 3
		);
	MTHydPumpControllerInternalType : 	STRUCT  (*Data for internal use.*)
		CycleTime : UDINT; (*Task cycle time. Unit: [µs].*)
		CycleTime400 : UDINT; (*Task cycle time as a multiple of 400µs (rounded up).*)
		Configuration : MTHydPumpControllerConfigType;
		Parameters : MTHydPumpControllerParType;
		SwitchoverParameters : MTHydPumpSwitchoverParType;
		InductionMotor : BOOL; (*Data for internal use.*)
		ConfigSwitchOver : BOOL; (*Data for internal use.*)
		ParametersValid : BOOL; (*Data for internal use.*)
		UpdateOld : BOOL; (*Data for internal use.*)
		Update : BOOL; (*Data for internal use.*)
		Enable : BOOL; (*Data for internal use.*)
		EnableOld : BOOL; (*Data for internal use.*)
		UpdateDone : BOOL; (*Update done.*)
		Axis : ACP10AXIS_typ; (*Axis object.*)
		StepOld : UINT;
		Step : UINT;
		StepInit : UINT; (*step variable for creating async motor extra + spt FBKs+cyclic communication sequencer*)
		StepUpdate : UINT; (*step variable for sequencer for parameter update*)
		MaSlUpdate : UINT; (*step variable for sequencer initialize master slave communication*)
		configSwitchOver : BOOL; (*internal flag if ACOPOS FBKs for switch over should be created*)
		SensorOffset : REAL; (*Offset of the sensor characteristic curve. Unit [digits]*)
		SensorScal : REAL; (*Gradient of sensor characteristic curve. Unit [bar/digits]*)
		ControllerType : UDINT; (*Controller Type - Byte (contType)*)
		ControllerModeOld : MTHydPumpControllerModeEnum; (*Data for internal use.*)
		nSet : REAL; (*internal nSet, cyclic downloaded to drive*)
		SetPressure : REAL; (*internal SetPressure*)
		nFeedForward : REAL; (*internal FeedForwardSpeed*)
		pSetACP : INT; (*scaled SetPressure, cyclic downloaded to drive*)
		nActUnscaled : REAL; (*nAct Units/s*)
		Reverse : BOOL; (*if inst->parameter.reverse = 1 ==> this variable is 255, if 0 this variable is 0*)
		MasterAxisOld : UDINT; (*detect change of master axis*)
		SetPressureOld : REAL; (*edge detection of SetPressure*)
		NewParSetDownloaded : BOOL; (*new parameter set of parametersequence is activated after sequence download*)
		busyMaSlCom : BOOL; (*busy establish master slave communication*)
		BusyUpdate : BOOL; (*busy with paramter update and download*)
		actMotorType : USINT; (*type of motor is saved if pos. edge at enable, can not be changed with update*)
		MasterReceiveSlot : USINT; (*Read Slot of the master Position on the slave side*)
		MaSlIndex : UINT; (*Index of the Parameter Counter for InitParTab Downloads _1*)
		StepParSetsChange : UINT; (*Step of parameter table changing*)
		ParameterApply : UINT; (*internal*)
		parListTabMaSl : ARRAY[0..9]OF ACP10PRB06_typ; (*Parameter List Table for Master Slave*)
		parListMaSl : ACP10DATBL_typ; (*Parameter list for master slave*)
		ParIndex : USINT; (*Index of the Parameter Counter for InitParTab Downloads _0*)
		PrelimPqOutN : UINT; (*Par Id of the PQCONT N1 output*)
		parListTab : ARRAY[0..255]OF ACP10PRB06_typ; (*Parameter List Table*)
		parList : ACP10DATBL_typ; (*Parameter List*)
		parSeqI : UINT; (*counter for table index for controller parameter table download*)
		parI : UINT; (*counter for array index for controller parameter table download*)
		parSeqTab : ARRAY[0..13]OF ACP10PRB06_typ; (*controller parameter table download [number of parameters in table --> 13]*)
		parSeq : ACP10DATBL_typ; (*controller parameter table download*)
		MC_BR_InitParSequ_0 : MC_BR_InitParSequ; (*Instance of InitParSeq Fub*)
		MC_BR_DownloadParSequ_0 : MC_BR_DownloadParSequ; (*Instance of DownloaParSeq Fub*)
		MC_BR_InitParList_0 : MC_BR_InitParList; (*Instance of InitParList Fub*)
		MC_BR_InitParList_1 : MC_BR_InitParList; (*Instance of InitParList Fub*)
		MC_BR_WriteParID_0 : MC_BR_WriteParID; (*Instance of WriteParID fub*)
		MC_BR_InitCyclicRead_pAct : MC_BR_InitCyclicRead; (*Instance of CyclicRead Fub*)
		MC_BR_InitCyclicRead_nAct : MC_BR_InitCyclicRead; (*Instance of CyclicRead Fub*)
		MC_BR_InitCyclicRead_ContStatus : MC_BR_InitCyclicRead; (*Instance of CyclicRead Fub*)
		MC_BR_InitCyclicWrite_pSet : MC_BR_InitCyclicWrite; (*Instance of CyclicWrite Fub*)
		MC_BR_InitCyclicWrite_nSet : MC_BR_InitCyclicWrite; (*Instance of CyclicWrite Fub*)
		MC_BR_InitCyclicWrite_nFF : MC_BR_InitCyclicWrite; (*Instance of CyclicWrite Fub*)
		MC_BR_InitCyclicWrite_ContByte : MC_BR_InitCyclicWrite; (*Instance of CyclicWrite Fub*)
		MC_BR_InitMasterParIDTransfer_0 : MC_BR_InitMasterParIDTransfer; (*Instance of InitMasterParIDTransfer*)
		MC_BR_ReadParID_0 : MC_BR_ReadParID; (*Instance of ReadParID fub*)
		executeOld : ARRAY[0..18]OF BOOL; (*Old status of execue*)
		SwitchOver : MTHydPumpIntSwitchoverType; (*internally calculated values prepared for downloading to the spt wiring*)
		async : MTHydPump_internal_async_typ; (*parameter structure for Induction motors*)
		LeakageCompensationSpeed : REAL;
		ControllerMode : UINT;
		StatusID_Old : DINT; (*Old StatusID for saving.*)
		PreFilter : ARRAY[0..1]OF MTHydPump_PreFilterType;
		ParameterCheckDone : BOOL; (*Indicates, if parameters are checked.*)
		InitializationDone : BOOL; (*Indicates, if FB is initialized.*)
		UpdateCounter : UINT; (*Counter for Update.*)
		CheckParaSetCounter : UINT; (*Counter for controller parameter sets.*)
		InitCounter : UINT; (*Counter for Initialization.*)
		pQContStatus : UINT; (*State of CTRL-FB on Acopos.*)
		RTInfo_inst : RTInfo; (*Get cycle time.*)
		IsStandAlone : BOOL; (*this flag indicates if the library is used in the stand-alone servo pump solution*)
		StepDisable : UINT; (*Disable step.*)
		NewValidParameter : BOOL; (*Data for internal use.*)
		NotDisabled : BOOL; (*FB not disabled.*)
		ResetMC_BR_FB_Done : BOOL; (*All internal function blocks are disabled.*)
		Timer : REAL; (*Data for internal use.*)
		MaxReverseTime : REAL; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*MTHydPumpPowerMeter datatypes.*)

TYPE
	MTHydPumpPowerMeterParType : 	STRUCT  (*Pararmeters for MTHydPumpPowerMeter.*)
		VolumetricEfficiency : REAL := 0.0; (*Volumetric efficiency of the pump. Unit: [%]. Permitted range of values: 0 < VolumetricEfficiency < 1. Typical value: 0.95*)
		DisplacementVolume : REAL := 0.0; (*Pump displacement volume. Unit: [cm3]. Permitted range of values: 0 < DisplacementVolume*)
		WindowLengthMechanicalPower : UINT := 1; (*The length of the moving window can be used to smooth the mechanical power using a moving average filter. Unit: [1]. Permitted range of values: 1 = WinLengthMechanicalPower < 10000*)
		WindowLengthElectricalPower : UINT := 1; (*The length of the moving window can be used to smooth the electrical power using a moving average filter. Unit: [1]. Permitted range of values: 1 = WinLengthElectricalPower < 10000*)
	END_STRUCT;
	MTHydPumpPowerMeterInternalType : 	STRUCT  (*Data for internal use.*)
		CycleTime : UDINT; (*Task cycle time. Unit: [µs].*)
		VolumetricEfficiency : REAL; (*Volumetric Efficiency of pump [0..1]*)
		DisplacementVolume : REAL; (*Displacement Volume of pump in cm3*)
		UpdateOld : BOOL;
		EnableOld : BOOL;
		ParametersValid : BOOL;
		MC_BR_InitCyclicRead_MPow : MC_BR_InitCyclicRead; (*Instance of CyclicRead Fub*)
		MC_BR_InitCyclicRead_EPow : MC_BR_InitCyclicRead; (*Instance of CyclicRead Fub*)
		Step : UINT;
		StepOld : UINT;
		MechanicalPower : REAL;
		ElectricalPower : REAL;
		ExecuteOld : ARRAY[0..1]OF BOOL;
		StepDisable : UINT;
		NotDisabled : BOOL;
		ResetMC_BR_FB_Done : BOOL; (*All internal function blocks are disabled.*)
		InitializationDone : BOOL; (*Indicates, if FB is initialized.*)
		movAvgPmech : PowerMeterMovAvg_typ; (*Instance of average filter Fub for mechanical power*)
		movAvgPel : PowerMeterMovAvg_typ; (*Instance of average filter Fub for electrical power*)
		RTInfo_inst : RTInfo; (*Get cycle time.*)
	END_STRUCT;
	PowerMeterMovAvg_typ : 	STRUCT  (*Data for internal use.*)
		enable : BOOL; (*Enable function block.*)
		window : UINT; (*Number of cycles used to generate the average value. Valid value range: base > 0.*)
		update : BOOL; (*Update parameters*)
		u : REAL; (*Input.*)
		status : UINT; (*Function block status message.*)
		y : REAL; (*Output value.*)
		internal : PowerMeterMovAvg_internal_typ; (*Data for internal use.*)
	END_STRUCT;
	PowerMeterMovAvg_internal_typ : 	STRUCT  (*Data for internal use.*)
		statusTxt : STRING[100]; (*Function block status message as message text.*)
		Ts : REAL; (*Data for internal use.*)
		paraValid : BOOL; (*Data for internal use.*)
		update : BOOL; (*Data for internal use.*)
		n : UINT; (*Number of elements, which are calculating output.*)
		sum : LREAL; (*Data for internal use.*)
		buffer : ARRAY[0..127]OF REAL; (*Data for internal use.*)
		pBuffer : UDINT; (*Data for internal use.*)
		i_act : UINT; (*Data for internal use.*)
		i_old : UINT; (*Data for internal use.*)
		base : UINT; (*Data for internal use.*)
		bufferLength : UINT; (*Length of window.*)
		bufferFull : BOOL; (*Data for internal use.*)
		memAllocated : BOOL; (*Data for internal use.*)
		update_old : BOOL; (*Data for internal use.*)
		enable_old : BOOL; (*Data for internal use.*)
		Bootkey : UDINT; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*MTHydPumpDriveProtection datatypes.*)

TYPE
	MTHydPumpProtectionAdvParType : 	STRUCT  (*Advanced parameters for adjusting the drive and pump load and cutoff limits. Enabling use without a hydraulic drive is also possible.*)
		ModeStandalone : MTHydPumpStandaloneEnum; (*ModeStandalone = 0: Function block "MTHydPumpDriveProtection" is used together with "MTHydPumpController". The current speed limit is automatically passed on to function block "MTHydPumpController" on the ACOPOS drive. 
ModeStandalone = 1: No instance of function block "MTHydPumpController" required. The current speed limit is linked to the "MaxSpeedParID".*)
		MaxSpeedParID : UINT; (*Only for ModeStandalone = 1! (without MTHydPumpController). The current speed limit is written to this ParID.*)
		DriveParameters : MTHydPumpDriveParType; (*Advanced parameters for adjusting the drive's load and cutoff limits. In exceptional cases, additional optimizations can be made here. For more information, see the "Advanced cutoff protection" section.*)
		PumpParameters : MTHydPumpPumpParType; (*Only for pump protection (PumpProtection > 0)! Advanced parameters for adjusting the load limits of the pump. In exceptional cases, additional optimizations can be made here. For more information, see the "Advanced pump protection" section.*)
	END_STRUCT;
	MTHydPumpPumpParType : 	STRUCT  (*Only for pump protection (PumpProtection > 0)! Advanced parameters for adjusting the load limits of the pump. In exceptional cases, additional optimizations can be made here. For more information, see the "Advanced pump protection" section.*)
		HysteresisPumpFlushing : REAL; (*Hysteresis for reseting the RequiredPumpFlushing and MinPumpFlushingSpeed outputs in %. Reset load = 90% + OffsetPumpTorqueLimit - HysteresisPumpFlushing.*)
		OffsetPumpTorqueLimit : REAL; (*Can be used to offset the starting point of the torque limit for the pump protection. Unit: [%].
Permitted range of values: -90 = OffsetPumpTorqueLimit = 10
Torque limitation = OffsetPumpTorqueLimit + 90%.*)
		OffsetMinPumpSpeed : REAL; (*Can be used to adjust the speed limit for stall detection [rpm]. The pump needs more time to cool off when at a standstill. OffsetMinPumpSpeed can be used to adjust this limit. Unit: [rpm].
Permitted range of values: -4 = OffsetMinPumpSpeed = 10
Speed limit = OffsetMinPumpSpeed+ 5 rpm.*)
	END_STRUCT;
	MTHydPumpDriveParType : 	STRUCT  (*Advanced parameters for adjusting the drive's load and cutoff limits. In exceptional cases, additional optimizations can be made here. For more information, see the "Advanced cutoff protection" section.*)
		OffsetAmbientTemperature : REAL; (*Can be used to adjust the ambient temperature. Unit: [°C].
Ambient temperature = OffsetAmbientTemperature + 40.0°C*)
		OffsetSpeedLimit : REAL; (*Can be used to offset the starting point of the speed limit. Unit: [%].
Permitted range of values: -90 < OffsetSpeedLimit < 10
Load limit, speed = OffsetSpeedLimit + 90.0%*)
		OffsetTorqueLimit : REAL; (*Can be used to offset the starting point of the torque limit. Unit: [%].
Permitted range of values: -90 < OffsetTorqueLimit < 10
Load limit, torque = OffsetTorqueLimit + 90.0%.*)
		OffsetTorqueLimitJunction : REAL; (*Can be used to offset the starting point of the torque limit for the junction temperature (special case). Unit: [%].
Load limit torque = OffsetTorqueLimitJunction + calculated limit [%].*)
		NominalTorque : REAL; (*Can be used to configure the "nominal torque". This is the value that must permit operation at 100% load. Unit: [Nm].
Permitted range of values: NominalTorque = 0
If NominalTorque = 0.0, this parameter is not used but read by the ACOPOS drive and calculated automatically. A safety factor is also calculated in.*)
		NominalTorqueJunction : REAL; (*Can be used to configure the "nominal torque" for the junction temperature (special case). This is the value that must permit operation at 100% load. Unit: [Nm].
If this parameter is not used, the respective value is 0 Nm.*)
		MaxTorque : REAL; (*Can be used to adjust the torque limit. Unit: [Nm].
Permitted range of values: MaxTorque = 0
If MaxTorque = 0, this parameter is not used but read by the ACOPOS drive.*)
		NominalSpeed : REAL; (*Can be used to configure the nominal speed. This is the value that must permit operation at 100% load. Unit: [rpm].
Permitted range of values: NominalSpeed = 0
If NominalSpeed = 0, this parameter is not used but read by the ACOPOS drive.*)
		MaxSpeed : REAL; (*Can be used to adjust the speed limit. Unit: [rpm].
Permitted range of values: MaxSpeed = 0
If NominalSpeed = 0.0, this parameter is not used but read by the ACOPOS drive.*)
	END_STRUCT;
	MTHydPumpMaxLoadEnum : 
		( (*Indicates what is currently causing the highest load (heat sink temperature, peak current, etc.).*)
		mtPUMP_CONTINUOUS_CURRENT := 0, (*Continuous current.*)
		mtPUMP_PEAK_CURRENT := 1, (*Peak current.*)
		mtPUMP_POWER := 2, (*Continuous power.*)
		mtPUMP_HEAT_SINK_TEMPERATURE := 3, (*Heat sink temperature.*)
		mtPUMP_MOTOR_TEMPERATURE := 4, (*Motor temperature.*)
		mtPUMP_MOTOR_MODEL_TEMPERATURE := 5, (*Motor model temperature.*)
		mtPUMP_JUNCTION_TEMPERATURE := 6 (*Junction temperature.*)
		);
	MTHydPumpPumpProtectionEnum : 
		( (*Enum for supported pumps.*)
		mtPUMP_PROTECTION_OFF := 0, (*Pump protection is off.*)
		mtPUMP_PROTECTION_UNKNOWN_PUMP := 1000, (*Unknown pump type. The pump with the worst thermal properties will automatically be used.*)
		mtPUMP_PROTECTION_DHPH2_008 := 2008, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 2, Displacement volume = 8 ccm.*)
		mtPUMP_PROTECTION_DHPH2_013 := 2013, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 2, Displacement volume = 13 ccm.*)
		mtPUMP_PROTECTION_DHPH2_019 := 2019, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 2, Displacement volume = 19 ccm.*)
		mtPUMP_PROTECTION_DHPH2_022 := 2022, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 2, Displacement volume = 22 ccm.*)
		mtPUMP_PROTECTION_DHPH2_025 := 2025, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 2, Displacement volume = 25 ccm.*)
		mtPUMP_PROTECTION_DHPH3_032 := 3032, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 3, Displacement volume = 32 ccm.*)
		mtPUMP_PROTECTION_DHPH3_040 := 3040, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 3, Displacement volume = 40 ccm.*)
		mtPUMP_PROTECTION_DHPH3_050 := 3050, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 3, Displacement volume = 50 ccm.*)
		mtPUMP_PROTECTION_DHPH6_160 := 6160, (*Pump protection for following dorninger pump: Pump type = DHPH, Pump size = 6, Displacement volume = 160 ccm.*)
		mtPUMP_PROTECTION_DHPC5_064 := 15064, (*Pump protection for following dorninger pump: Pump type = DHPC, Pump size = 5, Displacement volume = 64 ccm.*)
		mtPUMP_PROTECTION_DHPC5_080 := 15080, (*Pump protection for following dorninger pump: Pump type = DHPC, Pump size = 5, Displacement volume = 80 ccm.*)
		mtPUMP_PROTECTION_DHPC5_100 := 15100, (*Pump protection for following dorninger pump: Pump type = DHPC, Pump size = 5, Displacement volume = 100 ccm.*)
		mtPUMP_PROTECTION_DHPC6_125 := 16125, (*Pump protection for following dorninger pump: Pump type = DHPC, Pump size = 6, Displacement volume = 125 ccm.*)
		mtPUMP_PROTECTION_EIPS2_011 := 22011 (*Pump protection for following dorninger pump: Pump type = EIPS, Pump size = 2, Displacement volume = 11 ccm.*)
		);
	MTHydPumpStandaloneEnum : 
		( (*Enum for usage possibilities of standalone mode.*)
		mtPUMP_WITH_PRESSURE_CONTROL := 0, (*Using MTHydPumpDriveProtection in combination with MTHydPumpController.*)
		mtPUMP_WITHOUT_PRESSURE_CONTROL := 1 (*Using MTHydPumpDriveProtection without MTHydPumpController (standalone).*)
		);
	MTHydPumpDriveProtectIntType : 	STRUCT  (*Data for internal use.*)
		CycleTime : REAL; (*Task cycle time. Unit: [s].*)
		ParametersValid : BOOL;
		UpdateOld : BOOL;
		EnableOld : BOOL;
		AdvancedPumpParameters : MTHydPumpPumpParType;
		AdvancedDriveParameters : MTHydPumpDriveParType;
		acp_transfer : MTHydPumpProtectionTransferType;
		acp_load : MTHydPumpProtectionLoadType;
		OffsetPeakCurrent : REAL;
		OffsetContinuousCurrent : REAL;
		OffsetPower : REAL;
		tlim_add_isq_parid : UDINT;
		tlim_add_isq_value : UINT;
		sctrl_add_isq_parid : UDINT;
		sctrl_add_isq_value : REAL;
		lim_parid_array : ARRAY[0..13]OF UDINT;
		lim_value_array : ARRAY[0..13]OF REAL;
		calc_pump_par : MTHydPumpCalcPumpParaType;
		torqueOverride : ARRAY[0..3]OF USINT;
		pumpMode : USINT;
		PumpProtection : UINT;
		standalone : BOOL;
		parTable : ARRAY[0..99]OF ACP10PRB06_typ;
		parTableAttributes : ACP10DATBL_typ;
		rawACPdata : UINT;
		step : UINT;
		stepInitAcopos : UINT;
		fubMC_BR_InitCyclicRead_0 : MC_BR_InitCyclicRead;
		fubMC_BR_InitParList_0 : MC_BR_InitParList;
		fubMC_BR_ReadParID_tlim_add : MC_BR_ReadParID;
		fubMC_BR_ReadParID_sctrl_add : MC_BR_ReadParID;
		fubMC_BR_ReadParID_TempMotor : MC_BR_ReadParID;
		fubMC_BR_ReadParID_LoadMM : MC_BR_ReadParID;
		fubMC_BR_ReadParID_MMMode : MC_BR_ReadParID;
		fubMC_BR_ReadParID_array : ARRAY[0..13]OF MC_BR_ReadParID;
		fubMC_BR_WriteParID_speed : MC_BR_WriteParID;
		fubMC_BR_WriteParID_torque : MC_BR_WriteParID;
		fubMC_BR_WriteParID_torqueOffset : MC_BR_WriteParID;
		fubMC_BR_WriteParID_TempMM : MC_BR_WriteParID;
		fubMC_BR_WriteParID_LoadMM : MC_BR_WriteParID;
		fubMC_ReadStatus_0 : MC_ReadStatus;
		init_done : BOOL;
		flagLimitSpeed : BOOL;
		flagLimitTorque : BOOL;
		pumpLoadCounter : REAL;
		torqueLimitOld : BOOL;
		TempModelInitialized : BOOL;
		MotorModelMode : UINT;
		MotorTemperatureOld : REAL;
		TempJunctionDeltaMaxPercent : REAL;
		TempDeviation : REAL;
		LoadMotorModelWrite : REAL;
		TempModelInitStep : USINT;
		MaxSpeedParID : UINT;
		AmbientTemperature : REAL := 40.0;
		DisableStep : UINT;
		ResetAllPLCOpenFubsDone : BOOL;
		Timer : REAL;
		RecoverTempModel : BOOL;
	END_STRUCT;
	MTHydPumpCalcPumpParaType : 	STRUCT 
		k1 : REAL; (*Calculated heating rates [%/s].*)
		k2 : REAL; (*Calculated heating rates [%/s].*)
		k3 : REAL; (*Calculated heating rates [%/s].*)
		k4 : REAL; (*Calculated heating rates [%/s].*)
		pBorder1 : REAL; (*Pressure borders to switch operating conditions [bar].*)
		pBorder2 : REAL; (*Pressure borders to switch operating conditions [bar].*)
		pBorder3 : REAL; (*Pressure borders to switch operating conditions [bar].*)
		pBorder4 : REAL; (*Pressure borders to switch operating conditions [bar].*)
		nBorder1 : REAL; (*Border Speed for detecting pressure hold [rpm].*)
		nBorder2 : REAL; (*Border Speed for detecting pressure hold [rpm].*)
		nBorder3 : REAL; (*Border Speed for detecting pressure hold [rpm].*)
		nBorder4 : REAL; (*Border Speed for detecting pressure hold [rpm].*)
		kS : REAL; (*Calculated cooling rate flush over volume [%/s].*)
		kSt : REAL; (*Calculated cooling rate flush over time [%/s].*)
		kA : REAL; (*Calculated cooling rate free cooling [%/s].*)
		nmin : REAL; (*Rotation speed border to detect standstill [rpm].*)
		nFlush : REAL; (*Rotation speed border to detect pump flush [rpm].*)
		nFlushMin : REAL; (*Rotation speed border to detect flush over time or volume [rpm].*)
	END_STRUCT;
	MTHydPumpProtectionLoadType : 	STRUCT 
		temp_headsink_lim : REAL; (*Maximum limit of ACP heatsink*)
		motor_wind_temp_max : REAL; (*Maximum winding temperatures*)
		temp_motor_model_lim : REAL; (*Maximum limit of motor modell*)
		temp_junction_lim : REAL; (*Maximum limit fo junction temperature*)
		motor_speed_rated : REAL; (*Rated motor speed*)
		motor_speed_max : REAL; (*Maximum motor speed*)
		motor_current_rated : REAL; (*Rated motor current*)
		acopos_current_rated : REAL; (*rated ACP current*)
		motor_torque_const : REAL; (*Motor torque constant*)
		lim_t1_pos : REAL; (*Limit of Time constant*)
		acopos_power_rated : REAL; (*Rated power of ACP*)
		motor_stator_resistance : REAL; (*Stator resistance motor*)
		temp_junction_delta_max : REAL; (*Maximum junction temperature change.*)
		f_switch : REAL; (*Switch frequency in Hz.*)
	END_STRUCT;
	MTHydPumpProtectionTransferType : 	STRUCT 
		load_border_speed : REAL; (*Load border for speed reduction.*)
		load_border_torque : REAL; (*Load border for torque reduction.*)
		load_border_torque_junction : REAL; (*Load border for torque reduction for junction temperature.*)
		max_speed : REAL; (*Maximum speed.*)
		max_torque : REAL; (*Maximum torque.*)
		nom_speed : REAL; (*Nominal speed.*)
		nom_torque : REAL; (*Nominal torque.*)
		nom_torque_junction : REAL; (*Nominal torque for junction temperature.*)
		sc_load_cont_curr : REAL; (*Scaled load continous current.*)
		sc_load_peak_curr : REAL; (*Scaled load peak current.*)
		sc_load_power : REAL; (*Scaled load power.*)
		sc_temp_headsink : REAL; (*Scaled heatsink temperature.*)
		sc_temp_junction : REAL; (*Scaled junction temperature.*)
		sc_temp_motor : REAL; (*Scaled motor temperature.*)
		sc_temp_motor_model : REAL; (*Scaled motor model temperature.*)
		temp_ambient : REAL; (*Ambient temperature.*)
	END_STRUCT;
END_TYPE

(*MTHydPumpPressureTuning datatypes.*)

TYPE
	MTHydPumpTuningStateEnum : 
		( (*Current state of the controller tuning.*)
		mtPUMP_TUNING_IDLE := 0, (*Function block waits for command "StartTuning".*)
		mtPUMP_TUNING_WAIT := 1, (*Operating point speed "OperationPointSpeed" is applied to the system on "StartTuning". This results in pressurization in the system. The function block remains in this state until a stable pressure has been achieved or the maximum duration of tuning has been exceeded.*)
		mtPUMP_TUNING_IDENT_PHASE_1 := 2, (*Excitation 1.*)
		mtPUMP_TUNING_IDENT_PHASE_2 := 3, (*Excitation 2.*)
		mtPUMP_TUNING_IDENT_PHASE_3 := 4, (*Excitation 3. Identification is completed after this step.*)
		mtPUMP_TUNING_USER := 5, (*The controlled system was identified. The user has 3 options in this state: 1. StartTuning, 2. CalculateController, 3. StartTest*)
		mtPUMP_TUNING_TEST := 6 (*The controller can be verified using pressure setpoint jumps.*)
		);
	MTHydPumpTuningConfigType : 	STRUCT  (*Configuration for identification.*)
		MaxPumpPressure : REAL := 200; (*Maximum pump pressure. Unit: [bar]. Permitted range of values: MaxPumpPressure > 0.*)
		MaxPumpSpeed : REAL := 2500; (*Maximum speed of motor and pump. Unit: [rpm]. Permitted range of values: MaxPumpSpeed > 0.*)
		OperationPointSpeed : REAL := 100; (*Speed that brings the system into the desired operating pressure. Unit: [rpm]. Permitted range of values: 0 < OperationPointSpeed <= MaxPumpSpeed.*)
		Phase1ExcitationSpeed : REAL := 50; (*Excitation speed in phases 1 and 2 of identification. Unit: [rpm]. Permitted range of values: 0.0 < Phase1ExcitationSpeed <= MaxPumpSpeed - OperationPointSpeed.*)
		Phase1Time : REAL := 3; (*Duration of identification during the 1st and 2nd phases. Unit: [s]. Permitted range of values: 0.020 < Phase1Time < 10.0.*)
		WaitingTime : REAL := 0; (*Waiting time after 1st and 2nd phases of identification. Unit: [s]. Permitted range of values: 0.0 = WaitingTime < 10.0.*)
		Phase3ExcitationSpeed : REAL := 100; (*Excitation speed in phase 3 of identification. Unit: [rpm]. Permitted range of values: 0.0 < Phase3ExcitationSpeed <= MaxPumpSpeed - OperationPointSpeed.*)
		Phase3Time : REAL := 2; (*Duration of identification during the 3rd phase. Unit: [s]. Permitted range of values: 0.0032 < Phase3Time < 10.*)
	END_STRUCT;
	MTHydPumpTuningCtrlConfigType : 	STRUCT  (*Configuration for fine-tuning the controller.*)
		RiseTime : REAL := 0.05; (*Desired rise time of the pressure controller. Unit: [s]. Permitted range of values: 0.0016 < RiseTime < 1. The smaller the selected rise time, the more aggressive reaction by the controller.*)
		ControllerType : MTHydPumpControllerEnum := (0); (*ControllerType = mtPUMP_PI_CONTROLLER: Calculates a PI controller.
ControllerType = mtPUMP_PID_CONTROLLER: Calculates a PID controller.*)
		DerivativeTimeScale : REAL := 1.25; (*Parameter for setting the derivative component. Unit: [1].
Permitted range of values: 1 = DerivativeTimeScale = 2
DerivativeTimeScale = 1: Weak D component
DerivativeTimeScale = 2: Strong D component
Only valid for ControllerType = mtPUMP_PID_CONTROLLER.*)
		FilterTimeScale : REAL := 1; (*Parameter for setting the filter time of the derivative component. Unit: [1].
Permitted range of values: 0.5 = FilterTimeScale = 1.5
FilterTimeScale = 0.5: Weak filtering
FilterTimeScale = 1.5: Strong filtering
Only valid for ControllerType = mtPUMP_PID_CONTROLLER.*)
		ActivateCompensationFilter : BOOL; (*ActivateCompensationFilter = TRUE: Uses the compensation filter.
ActivateCompensationFilter = FALSE: Does NOT use the compensation filter.
If FilterRecommended = TRUE, the compensation filter should be used.*)
	END_STRUCT;
	MTHydPumpControllerEnum : 
		( (*ControllerType*)
		mtPUMP_PI_CONTROLLER := 0, (*PI controller.*)
		mtPUMP_PID_CONTROLLER := 1 (*PID controller.*)
		);
	MTHydPumpTuningTestType : 	STRUCT  (*Parameters for setting the test pressure jumps.*)
		SetSpeed : ARRAY[0..4]OF REAL := [2400,2400,2400,2400,2400]; (*Maximum speeds for the pressure jumps. Unit: [rpm].
Permitted range of values: 0 = SetSpeed = MaxPumpSpeed.*)
		SetPressure : ARRAY[0..4]OF REAL := [10,150,50,100,50]; (*Pressure setpoints for the pressure jumps. Unit: [bar]. 
Permitted range of values: 0 = SetPressure < MaxPumpPressure.*)
		DurationTime : ARRAY[0..4]OF REAL := [5(1)]; (*Duration of the pressure jumps. Unit: [s].
Permitted range of values: DurationTime = 0.*)
	END_STRUCT;
	MTHydPumpTuningPlantParType : 	STRUCT  (*Data for internal use.*)
		Par1 : REAL; (*bar/rpm*)
		Par2 : REAL; (*s*)
		Par3 : REAL; (*bar/rpm*)
		Par4 : REAL; (*s*)
		Par5 : REAL; (*Hz*)
		Par6 : REAL; (*Hz*)
		Par7 : REAL; (*Hz*)
	END_STRUCT;
	MTHydPumpTuningInternalType : 	STRUCT  (*Data for internal use.*)
		TuningConfiguration : MTHydPumpTuningConfigType;
		ControllerConfiguration : MTHydPumpTuningCtrlConfigType;
		PlantParameters : MTHydPumpTuningPlantParType;
		UpdateOld : BOOL;
		EnableOld : BOOL;
		StartTestOld : BOOL;
		StartTuningOld : BOOL;
		StartControllerCalculationOld : BOOL;
		AbortOld : BOOL;
		CycleTime : REAL;
		ParametersValid : BOOL;
		InOperationPoint : BOOL;
		PT1CalculationDownDone : BOOL;
		PT1CalculationDone : BOOL;
		ResonanceFreqCalcSuccessful : BOOL;
		ResonanceFreqCalcNotSuccessful : BOOL;
		ValidControllerParameters : BOOL;
		ValidControllerTestParameters : BOOL;
		ControllerTestDone : BOOL;
		StartTuningJustIdentified : BOOL;
		IdentificationWasOnceSuccessful : BOOL;
		WithTuningTest : BOOL;
		CalcControllerState : MTHydPumpTuningCalcContStateEnum;
		SineSweep : SineSweepInternalType;
		StepResponse : StepResponseInternalType;
		PressureSettling : PressureSettlingInternalType;
		TuningParametersInternal : TuningParametersInternalType;
		BodePT1 : MTSystemBode;
		TransferFcn4thOrderSysRef : MTTransferFcnType;
		SysReference4thOrder : UDINT;
		TransferFcnPT1 : MTSystemTransferFcn;
		TransferFcnDT1 : MTSystemTransferFcn;
		LSQInternalParameters : MTHydPumpLSQInternalParType;
		IdentIndexSweep : {REDUND_UNREPLICABLE} DINT;
		LSQ4thOrderParameters : MTHydPumpLSQParametersType;
		LSQPT1Parameters : MTHydPumpLSQParametersType;
		TuningParametersValid : BOOL;
		TuningTestParametersValid : BOOL;
		IdentificationTimer : UDINT;
		StatusLSQ : INT;
		EstimationDeviation : REAL;
		SampleTime : REAL;
		Denominator : ARRAY[0..5]OF REAL;
		Numerator : ARRAY[0..5]OF REAL;
		TaskIdentCtrlCalc : {REDUND_UNREPLICABLE} UDINT;
		TaskIdentBode : {REDUND_UNREPLICABLE} UDINT;
		TaskIdent : {REDUND_UNREPLICABLE} UDINT;
		asyncBode : {REDUND_UNREPLICABLE} asyncBodeType;
		SystemIdentStep : {REDUND_UNREPLICABLE} MTHydPumpTuningSystemIdentEnum;
		asyncCtrlCalc : {REDUND_UNREPLICABLE} asyncCtrlCalcType;
		asyncLSQ : {REDUND_UNREPLICABLE} asyncLSQType;
		TestSignal : MTHydPumpTuningTestType;
	END_STRUCT;
	MTHydPumpTuningCalcContStateEnum : 
		( (*Data for internal use.*)
		mtPUMP_TUNING_INIT := 0, (*State: Init.*)
		mtPUMP_TUNING_CHECK_PARA := 1, (*State: CheckParameters.*)
		mtPUMP_TUNING_INIT_CALC := 2, (*State: Initialize controller calculation.*)
		mtPUMP_TUNING_CALC := 3, (*State: Calculate controller parameters.*)
		mtPUMP_TUNING_CALC_DONE := 4 (*State: Calculate controller parameters done.*)
		);
	MTHydPumpLSQInternalParType : 	STRUCT  (*Data for internal use.*)
		PMatrix : ARRAY[0..99]OF LREAL;
		DataVector : ARRAY[0..9]OF LREAL;
		ParameterVector : ARRAY[0..9]OF LREAL;
		PlantOutputOffset : REAL;
		Samples : UINT;
		CntDownSampling : UINT;
		StartOld : BOOL;
	END_STRUCT;
	MTHydPumpLSQParametersType : 	STRUCT  (*Data for internal use.*)
		SystemOrder : USINT;
		NumberOfSamples : UINT;
		DownSampling : UINT;
		CycleTime : REAL;
		WeightingFactor : REAL;
		PlantInputOffset : REAL;
	END_STRUCT;
	MTHydPumpTuningAsyncEnum : 
		( (*Data for internal use.*)
		st_HYDPUMPTUNING_WAIT := 0,
		st_HYDPUMPTUNING_RESUME := 1,
		st_HYDPUMPTUNING_CREATE := 2,
		st_HYDPUMPTUNING_DELETE := 3,
		st_HYDPUMPTUNING_SUSPEND := 4,
		st_HYDPUMPTUNING_ERROR := 5
		);
	MTHydPumpTuningSystemIdentEnum : 
		( (*Data for internal use.*)
		st_SYSIDENTSTEP_Idle := 0,
		st_SYSIDENTSTEP_IdentLSQ := 1,
		st_SYSIDENTSTEP_Bode1 := 2,
		st_SYSIDENTSTEP_CalcResAres := 3,
		st_SYSIDENTSTEP_Bode2 := 4,
		st_SYSIDENTSTEP_Error := 99
		);
	TuningParametersInternalType : 	STRUCT  (*Data for internal use.*)
		PlantGainIntegrator : REAL;
		OvershootRequired : REAL := 0;
		DerivativeTime : REAL;
		FilterTime : REAL;
		MagnitudeMargin : REAL;
		TuningTestDurationTimer : UDINT;
		TuningTestDurationTime : REAL;
		TuningTestTime : REAL;
		TuningTestTimer : UDINT;
		ActMaxMinPumpPressure : REAL;
		PressureStepStart : ARRAY[0..4]OF REAL;
		PressureStepHeight : ARRAY[0..4]OF REAL;
		RiseTime : ARRAY[0..4]OF REAL;
		Overshoot : ARRAY[0..4]OF REAL;
		TestSignalsCounter : USINT;
	END_STRUCT;
	PressureSettlingInternalType : 	STRUCT  (*Data for internal use.*)
		MeanDuration : REAL := 1.0;
		NbOfElementsMean : INT;
		Counter : INT;
		MeanPressureOld : REAL;
		SettlingTime : REAL;
		MeanPressure : REAL;
	END_STRUCT;
	StepResponseInternalType : 	STRUCT  (*Data for internal use.*)
		StepResponseTimer : UDINT;
		NegStepDone : BOOL;
		PosStepDone : BOOL;
		StepResponseTime : REAL;
	END_STRUCT;
	asyncCtrlCalcType : 	STRUCT  (*Data for internal use.*)
		Status : {REDUND_UNREPLICABLE} UDINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		Step : {REDUND_UNREPLICABLE} MTHydPumpTuningAsyncEnum;
		Active : {REDUND_UNREPLICABLE} BOOL;
		LS_FB : {REDUND_UNREPLICABLE} MTAdvancedLoopShaping;
	END_STRUCT;
	asyncBodeType : 	STRUCT  (*Data for internal use.*)
		Status : {REDUND_UNREPLICABLE} UDINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		Step : {REDUND_UNREPLICABLE} MTHydPumpTuningAsyncEnum;
		Active : {REDUND_UNREPLICABLE} BOOL;
		BodeFB : {REDUND_UNREPLICABLE} MTSystemBode;
		SysReference4thOrder : {REDUND_UNREPLICABLE} UDINT;
	END_STRUCT;
	asyncLSQType : 	STRUCT  (*Data for internal use.*)
		NumberOfSavedValues : DINT;
		Input : ARRAY[0..10000]OF REAL;
		Output : {REDUND_UNREPLICABLE} ARRAY[0..10000]OF REAL;
		Status : {REDUND_UNREPLICABLE} UDINT;
		Done : {REDUND_UNREPLICABLE} BOOL;
		Step : {REDUND_UNREPLICABLE} MTHydPumpTuningAsyncEnum;
		Denominator : ARRAY[0..5]OF REAL;
		Numerator : ARRAY[0..5]OF REAL;
		StatusLSQ : {REDUND_UNREPLICABLE} UDINT;
		Active : {REDUND_UNREPLICABLE} BOOL;
		LSQInternalParameters : MTHydPumpLSQInternalParType;
		EstimationDeviation : REAL;
		SampleTime : REAL;
		LSQ4thOrderParameters : MTHydPumpLSQParametersType;
		i : {REDUND_UNREPLICABLE} DINT;
	END_STRUCT;
	SineSweepInternalType : 	STRUCT  (*Data for internal use.*)
		StartFrequency : REAL := 25;
		EndFrequency : REAL := 125;
		AntiResonanceMagnitude_dB : REAL;
		AntiResonanceMagnitude : REAL;
		ResonanceMagnitude_dB : REAL;
		ResonanceMagnitude : REAL;
		AntiResonanceIndex : INT;
		ResonanceIndex : INT;
		FrequencyNum : REAL;
		FrequencyDen : REAL;
		DampingNum : REAL;
		DampingDen : REAL;
		SweepTimer : UDINT;
		WaitingTime : REAL;
		Phase3Time : REAL;
		TimeFinished : BOOL;
	END_STRUCT;
END_TYPE
