
{REDUND_OK} FUNCTION_BLOCK MTHydPumpSimulationModel (*Simulation model of a hydraulic servo pump system with sero pump, switching valve and hydraulic cylinder.*) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Enable : BOOL := FALSE; (*Enables/Disables the function block.*)
		StartCylinderPosition : LREAL := 50; (*Start position of the cylinder. Unit: [mm]*)
		CylinderParameters : MTHydPumpSimCylinderParType; (*Cylinder parameters.*)
		ValveParameters : MTHydPumpSimValveParType; (*Valve parameters.*)
		PumpParameters : MTHydPumpSimPumpParType; (*Pump parameters.*)
		SystemParameters : MTHydPumpSimSystemParType; (*System parameters.*)
		ValveSignal : SINT; (*Valve signal of switching valve. Permitted range of values: [-1,0,1]*)
		PumpSpeed : REAL; (*Current speed of the pump. Unit: [rpm].*)
		ProcessForce : REAL; (*Process force. Unit: [N]*)
	END_VAR
	VAR_OUTPUT
		Busy : BOOL := FALSE; (*The function block is not yet completed.*)
		Active : BOOL := FALSE; (*The function block is active.*)
		Error : BOOL := FALSE; (*An error has occurred.*)
		StatusID : DINT; (*Status information.*)
		CylinderPosition : REAL; (*Current cylinder position. Unit: [mm].*)
		CylinderVelocity : REAL; (*Current cylinder velocity. Unit: [mm/s].*)
		PumpPressure : REAL; (*Current pump pressure. Unit: [bar].*)
		CylinderPressure1 : REAL; (*Pressure in cylinder chamber 1. Unit: [bar].*)
		CylinderPressure2 : REAL; (*Pressure in cylinder chamber 2. Unit: [bar].*)
	END_VAR
	VAR
		Internal : MTHydPumpSimulationInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK MTHydPumpController (*Pressure and speed controller function block for controlling a hydraulic servo pump system.*) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Axis : UDINT; (*Axis reference.*) (* *) (*#PAR#*)
		MasterAxis : UDINT; (*Axis reference of the master axis.
Only needed for ControllerMode = mtPUMP_SLAVE_MODE.*) (* *) (*#PAR##OPT#*)
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		Configuration : MTHydPumpControllerConfigType; (*Configuration parameters for the function block.*) (* *) (*#PAR#*)
		Parameters : MTHydPumpControllerParType; (*General parameters for the function block.*) (* *) (*#PAR#*)
		SwitchoverParameters : MTHydPumpSwitchoverParType; (*Changeable switchover parameter type.*) (* *) (*#PAR#*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*) (* *) (*#PAR#*)
		SetPumpPressure : REAL; (*Pressure setpoint for pump. Unit: [bar].
Limitation: Configuration.MinPressureLimit = SetPumpPressure = Configuration.MaxPressureLimit*) (* *) (*#CYC#*)
		SetPumpSpeed : REAL; (*Speed setpoint for pump. Unit: [rpm].
Limitation: 0 = SetPumpSpeed = Configuration.MaxPumpSpeed
If Parameters.NegSetPumpSpeedAllowed =TRUE, then the following limitation applies:
Parameters.ControllerParameterSet[SelectControllerParSet].MaxReversePumpSpeed = SetPumpSpeed = Configuration.MaxPumpSpeed
Important! Improper use can result in cavitation!*) (* *) (*#CYC#*)
		ControllerMode : MTHydPumpControllerModeEnum; (*The following modes are possible:
mtPUMP_SPEED_CONTROL ... speed control
mtPUMP_PRESSURE_SPEED_CONTROL ... pressure and speed control
mtPUMP_SLAVE_MODE ... motor follows a master movement. SetPumpSpeed = SlaveGearRatio * MasterSpeed
mtPUMP_STOP ... Speed = 0 is output.*) (* *) (*#CYC#*)
		SelectControllerParSet : USINT; (*It is possible to select between 10 control parameter sets with the type MTHydPumpCtrlParSetType.
Parameters.ControllerParameterSet[SelectControllerParSet] is selected.
Permitted range of values: SelectControllerParSet < 10.*) (* *) (*#CMD##OPT#*)
		EnableSwitchover : BOOL; (*Enable of switchover functionality. With disable all outputs of SwitchoverInfo are reset.*)
		ForceSwitchover : BOOL; (*If switchover functionality is enabled, with force immediately the switch over will start.*)
	END_VAR
	VAR_OUTPUT
		Busy : BOOL; (*The function block is not yet completed.*) (* *) (*#PAR#*)
		Active : BOOL; (*The function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*An error has occurred.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update completed.*) (* *) (*#PAR#*)
		ActPumpPressure : REAL; (*Current pump pressure. Unit: [bar].*) (* *) (*#CYC#*)
		ActPumpSpeed : REAL; (*Current pump speed. Unit: [rpm].*) (* *) (*#CYC#*)
		SelectedControllerParSet : USINT; (*The control parameter set SelectedControllerParSet is used.*) (* *) (*#CMD##OPT#*)
		InPressureControl : BOOL; (*The function block is in the pressure control state.*) (* *) (*#CMD##OPT#*)
		InSpeedControl : BOOL; (*The function block is in the speed control state.*) (* *) (*#CMD##OPT#*)
		InMinimumPressureControl : BOOL; (*The function block is in the minimum pressure control state.*) (* *) (*#CMD##OPT#*)
		BiQuadFilterActive : BOOL; (*The BiQuad filer is active.*) (* *) (*#CMD##OPT#*)
		SwitchoverInfo : MTHydPumpSwitchoverInfoType; (*Information of switchover functionality.*)
	END_VAR
	VAR
		Internal : MTHydPumpControllerInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK MTHydPumpDriveProtection (*Pump and drive protection function block.*) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Axis : UDINT; (*Axis reference.*) (* *) (*#PAR#*)
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		LoadMotorModel : REFERENCE TO REAL; (*The variable connected here must be declared as a RETAIN variable. The load from the motor temperature model (ParID 342) is saved here. Required for the initialization of the temperature model on the ACOPOS drive.*) (* *) (*#PAR##OPT#*)
		MotorTemperature : REFERENCE TO REAL; (*The variable connected here must be declared as a RETAIN variable. The motor temperature (ParID 381) is saved here. Required for the initialization of the temperature model on the ACOPOS drive.*) (* *) (*#PAR##OPT#*)
		PumpProtection : MTHydPumpPumpProtectionEnum; (*Only for pump protection (PumpProtection > 0)! Pump type. Only Dorninger Hytronics pumps are supported (DHPH and DHPC series). If the pump type is set to "mtPUMP_UNKNOWN_TYPE", then the pump with the worst thermal properties will automatically be used. "PumpProtection = 0" disables pump protection.*) (* *) (*#PAR##OPT#*)
		AdvancedParameters : MTHydPumpProtectionAdvParType; (*Advanced parameters for adjusting the drive and pump load and cutoff limits. Enabling use without a hydraulic drive is also possible.*) (* *) (*#PAR##OPT#*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*) (* *) (*#PAR##OPT#*)
		ActPumpPressure : REAL; (*Only for pump protection (PumpProtection > 0)! Current pump pressure [bar]. Can be linked to output "ActPumpPressure" of function block "MTHydPumpController".*) (* *) (*#CYC##OPT#*)
		ActPumpSpeed : REAL; (*Only for pump protection (PumpProtection > 0)! Current pump speed [rpm]. Can be linked to output "ActPumpSpeed" of function block "MTHydPumpController".*) (* *) (*#CYC##OPT#*)
		PumpFlushingActivated : BOOL; (*Only for pump protection (PumpProtection > 0)! If the input = TRUE, the function block detects pump flushing and disables torque limitation. After the pump has been flushed, this input must be reset!*) (* *) (*#CMD##OPT#*)
	END_VAR
	VAR_OUTPUT
		Busy : BOOL; (*The function block is not yet completed.*) (* *) (*#PAR#*)
		Active : BOOL; (*The function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*An error has occurred.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update completed.*) (* *) (*#PAR##OPT#*)
		ActMaxLoad : MTHydPumpMaxLoadEnum; (*Indicates what is currently causing the highest load (heat sink temperature, peak current, etc.)*) (* *) (*#CYC#*)
		ActMaxLoadPercent : REAL; (*The current maximum load on the ACOPOS or motor [%].*) (* *) (*#CYC#*)
		ActTorqueLimit : REAL; (*Current torque limitation [Nm].*) (* *) (*#CYC#*)
		ActSpeedLimit : REAL; (*Current speed limitation [rpm].*) (* *) (*#CYC#*)
		ActPumpLoad : REAL; (*Current thermal load on pump [%].*) (* *) (*#CYC##OPT#*)
		InProtection : BOOL; (*Indicates that the drive is being limited.*) (* *) (*#CYC#*)
		PumpFlushingRequired : BOOL; (*Indicates the pump needs to be flushed. Is set when ActPumpLoad >= 90% + OffsetPumpTorqueLimit. Is reset when ActPumpLoad < 90% + OffsetPumpTorqueLimit - HysteresisPumpFlushing.*) (* *) (*#CMD##OPT#*)
		MinPumpFlushingSpeed : REAL; (*Minimum speed for flushing the pump when "PumpFlushingRequired" = TRUE.*) (* *) (*#CMD##OPT#*)
		TempModelInitialized : BOOL; (*Is TRUE, when the motor temperature model on the ACOPOS drive has been successfully initialized.*) (* *) (*#CYC##OPT#*)
	END_VAR
	VAR
		Internal : MTHydPumpDriveProtectIntType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTHydPumpPowerMeter (*Power Measurement*)
	VAR_INPUT
		Axis : {REDUND_UNREPLICABLE} UDINT; (*Axis reference.*) (* *) (*#PAR#*)
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		Parameters : MTHydPumpPowerMeterParType; (*General parameters for the function block.*) (* *) (*#PAR##OPT#*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*) (* *) (*#PAR##OPT#*)
		ActPumpPressure : REAL; (*Current pump speed. Unit [rpm].*) (* *) (*#CYC##OPT#*)
		ActPumpSpeed : REAL; (*Current pump pressure. Unit [bar].*) (* *) (*#CYC##OPT#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*The function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*An error has occurred.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update completed.*) (* *) (*#PAR##OPT#*)
		ElectricalPower : REAL; (*Current electrical power. Unit: [W]*) (* *) (*#CYC#*)
		MechanicalPower : REAL; (*Current mechanical power. Unit: [W]*) (* *) (*#CYC#*)
		HydraulicPower : REAL; (*Current hydraulic power. Unit: [W]*) (* *) (*#CYC##OPT#*)
	END_VAR
	VAR
		Internal : MTHydPumpPowerMeterInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTHydPumpPressureTuning (*Pressure controller tuning function block.*)
	VAR_INPUT
		Enable : BOOL; (*The function block is active as long as this input is set.*) (* *) (*#PAR#*)
		TuningConfiguration : MTHydPumpTuningConfigType; (*Configuration for identification.*) (* *) (*#PAR#*)
		Update : BOOL; (*Updates the configuration parameters on a rising edge of the input.*) (* *) (*#PAR#*)
		ActPumpPressure : REAL; (*Current pump pressure. Unit: [bar].*) (* *) (* #CYC#*)
		ActPumpSpeed : REAL; (*Current pump speed. Unit: [rpm].*) (* *) (* #CYC#*)
		StartTuning : BOOL; (*Starts pressure controller tuning on a rising edge.*) (* *) (* #CMD#*)
		ControllerConfiguration : MTHydPumpTuningCtrlConfigType; (*Configuration for fine-tuning the controller.*) (* *) (* #CMD#*)
		StartControllerCalculation : BOOL; (*Starts the calculation of the controller parameters on a rising edge.*) (* *) (* #CMD#*)
		TestSignal : MTHydPumpTuningTestType; (*Parameters for setting the test pressure jumps.*) (* *) (* #CMD#*)
		StartTest : BOOL; (*Starts a test cycle for controller verification on a rising edge.*) (* *) (* #CMD#*)
		Abort : BOOL; (*Aborts tuning or controller verification on a rising edge.*) (* *) (* #CMD#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*The function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*Execution error*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Parameter update completed*) (* *) (*#PAR#*)
		SetPumpPressure : REAL; (*Pressure setpoint for pump. Unit: [bar].*) (* *) (* #CYC#*)
		SetPumpSpeed : REAL; (*Speed setpoint for pump. Unit: [rpm].*) (* *) (* #CYC#*)
		TuningDone : BOOL; (*Identification of controlled system completed.*) (* *) (* #CMD#*)
		ControllerCalculationDone : BOOL; (*Controller calculation completed.*) (* *) (* #CMD#*)
		TestDone : BOOL; (*Controller verification completed.*) (* *) (* #CMD#*)
		Controller : MTPIDParametersType; (*Parameters for the compensation filter.*) (* *) (* #CMD#*)
		CompensationFilter : MTHydPumpBiQuadFilterType; (*Parameters for the compensation filter.*) (* *) (* #CMD#*)
		FilterRecommended : BOOL; (*Indicates whether the compensation filter should be used.*) (* *) (* #CMD#*)
		TuningState : MTHydPumpTuningStateEnum; (*Current state of the controller tuning.*) (* *) (* #CMD#*)
	END_VAR
	VAR
		Internal : MTHydPumpTuningInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK
