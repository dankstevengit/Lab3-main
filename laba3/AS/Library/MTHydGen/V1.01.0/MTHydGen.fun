
FUNCTION_BLOCK MTHydGenVelocityGenerator (*Velocity generator*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		Parameters : MTHydGenVelGenParType; (*Parameters.*) (* *) (*#PAR#*)
		Update : BOOL; (*Updates the parameters listed above on rising edge.*) (* *) (*#PAR#*)
		ActPosition : REAL; (*Actual position. Unit: [mm].*) (* *) (*#CYC#*)
		ReferenceVelocity : REAL; (*ReferenceVelocity. The sign of this value defines the moving direction. Unit [mm/s]*) (* *) (*#CMD#*)
		SafePoints : ARRAY[0..9] OF MTHydGenVelGenSafePointType; (*Parameters for SafePoints.*) (* *) (*#CMD#OPT#*)
		TargetPoint : MTHydGenVelGenTargetPointType; (*Parameters for TargetPoint.*) (* *) (*#CMD#*)
		Start : BOOL; (*Starts a new movement with the defined parametes listed above on rising edge.*) (* *) (*#CMD#*)
		Stop : BOOL; (*Stops the current movement on rising edge. The velocity will be reduced to zero with the defined StopDeceleration in Parameters.*) (* *) (*#CMD#*)
		Abort : BOOL; (*Aborts the current movement on rising edge. Velocity, acceleration and jerk will be set immediately to zero.*) (* *) (*#CMD#*)
		InitVelocity : REAL; (*Initial velocity. Unit: [mm/s]*) (* *) (*#CMD#OPT#*)
		SetInitVelocity : BOOL; (*Set initial velocity.*) (* *) (*#CMD#OPT#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update completed.*) (* *) (*#PAR#*)
		Velocity : REAL; (*Velocity. Unit: [mm/s].*) (* *) (*#CYC#*)
		Acceleration : REAL; (*Acceleration. Unit: [mm/s^2].*) (* *) (*#CYC#*)
		Jerk : REAL; (*Jerk. Unit: [mm/s^3].*) (* *) (*#CYC#OPT#*)
		MovementState : MTHydGenVelGenMovementStateEnum; (*MovementState.*) (* *) (*#CMD#*)
		StartDone : BOOL; (*Start done.*) (* *) (*#CMD#*)
		StoppingActive : BOOL; (*Stopping movement is active.*) (* *) (*#CMD#*)
		SetInitVelocityDone : BOOL; (*SetInitVelcity done.*) (* *) (*#CMD#OPT#*)
		SafePointInfos : ARRAY[0..9] OF MTHydGenVelGenSPInfoType; (*Infostructure of the SafePoints.*) (* *) (*#CMD#OPT#*)
		TargetPointInfos : MTHydGenVelGenTPInfoType; (*Infostructure of the TargetPoints.*) (* *) (*#CMD#*)
	END_VAR
	VAR
		Internal : MTHydGenVelGenInternalType; (*For internal use only.*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTHydGenProfileIdentification (*Profile identification*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		Parameters : MTHydGenProfileIdentParType; (*Identification Parameters.*) (* *) (*#PAR#*)
		Mode : MTHydGenProfileIdentModeEnum; (*Identification mode. Either the cylinder stops with a defined ramp or with a jump to 0 rpm of the pump.*) (* *) (*#PAR#*)
		Update : BOOL; (*Updates the parameters listed above on rising edge.*) (* *) (*#PAR#*)
		ActCylinderPosition : REAL; (*Actual position. Unit: [mm].*) (* *) (*#CYC#*)
		ActCylinderVelocity : REAL; (*Actual cylinder veloctiy. Unit: [mm/s].*) (* *) (*#CYC#*)
		DeadTimeIdentification : MTHydGenProfileIdentDeadTimeType; (*Identification parameters for dead time.*) (* *) (*#CMD#*)
		StartIdentification : BOOL; (*A rising edge on "StartIdentification" starts the identification procedure.*) (* *) (*#CMD#*)
		StopIdentification : BOOL; (*A rising edge on "Stop Identification" stops the identification procedure.*) (* *) (*#CMD#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update completed.*) (* *) (*#PAR#*)
		SetCylinderVelocity : REAL; (*Set cylinder velocity. Unit: [mm/s].*) (* *) (*#CYC#*)
		MovePositive : BOOL; (*Movement in positive direction.*) (* *) (*#CYC#*)
		MoveNegative : BOOL; (*Movement in negative direction.*) (* *) (*#CYC#*)
		IdentifiedParameters : MTHydGenProfileIdentOutputType; (*Identified accelerations, decelerations and deadtimes.*) (* *) (*#CMD#*)
		Quality : MTHydGenProfieIdentQualityType; (*Quality of identified accelerations, decelerations and deadtimes.*) (* *) (*#CMD#OPT#*)
		IdentificationActive : BOOL; (*Identification is active.*) (* *) (*#CMD#*)
		IdentificationDone : BOOL; (*Identification is done.*) (* *) (*#CMD#*)
	END_VAR
	VAR
		Internal : MTHydGenProfileIdentInternalType; (*For internal use only.*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTHydGenAdaptivePosCorrection (*Adaptive position correction*)
	VAR_INPUT
		Enable : BOOL; (*Enable function block.*) (* *) (*#PAR#*)
		Parameters : MTHydGenAdaptCorrParType; (*Parameters used for adaptive position correction.*) (* *) (*#PAR#*)
		Update : BOOL; (*Parameters update trigger.*) (* *) (*#PAR#*)
		ActPosition : REAL; (*Actual position. Unit: [mm].*) (* *) (*#CYC#*)
		SetPosition : REAL; (*Set position. Unit: [mm].*) (* *) (*#CMD#*)
		MovementDone : BOOL; (*A rising edge on "MovementDone" starts the calcuation of the position correction.*) (* *) (*#CMD#*)
		ResetCorrection : BOOL; (*Resets the internal memory of the function block.*) (* *) (*#CMD#OPT#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update is sucessful.*) (* *) (*#PAR#*)
		PositionCorrection : REAL; (*Adaptive position correction. Unit: [mm].*) (* *) (*#CYC#*)
		CalculationDone : BOOL; (*The calculation of the position correction is done.*) (* *) (*#CMD#*)
	END_VAR
	VAR
		Internal : MTHydGenAdaptCorrInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK
