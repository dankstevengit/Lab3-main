
 FUNCTION_BLOCK MTHydValvePositionController (*Hydraulic position controller.*) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		Parameters : MTHydValvePosConParType; (*Parameter structure.*) (* *) (*#PAR#*)
		EnableServoCorrection : BOOL; (*Enables the v-y-servo correction*) (* *) (*#PAR#OPT#*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*) (* *) (*#PAR#*)
		SetCylinderPosition : REAL; (*Set position. Units: [mm].*) (* *) (*#CYC#*)
		ActCylinderPosition : REAL; (*Actual position. Units: [mm].*) (* *) (*#CYC#*)
		ActPumpPressure : REAL; (*Actual pump pressure. Units: [bar].*) (* *) (*#CYC#OPT#*)
		ActCylinderPressure1 : REAL; (*Actual cylinder pressure in chamber 1. Units: [bar].*) (* *) (*#CYC#OPT#*)
		ActCylinderPressure2 : REAL; (*Actual cylinder pressure in chamber 2. Units: [bar].*) (* *) (*#CYC#OPT#*)
		SetCylinderVelocity : REAL; (*Set cylinder velocity as feed forward for v-y-servo correction. Units: [mm/s].*) (* *) (*#CYC#OPT#*)
		EnableIntegrationPart : BOOL; (*Enables the integration part.*) (* *) (*#CMD#*)
		ResetIntegrationPart : BOOL; (*Resets the integration part.*) (* *) (*#CMD#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active. *) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (* Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update done.*) (* *) (*#PAR#*)
		ValveOpening : REAL; (*Valve opening. Units: [1]. *) (* *) (*#CYC#*)
		LastIntegrationPartPosDir : REAL; (*Last saved integration part of positive movement direction. *) (* *) (*#CYC#OPT#*)
		LastIntegrationPartNegDir : REAL; (*Last saved integration part of negative  movement direction. *) (* *) (*#CYC#OPT#*)
	END_VAR
	VAR
		Internal : MTHydValvePosContInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTHydValveForceController (*Hydraulic position controller.*) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		Parameters : MTHydValveForceConParType; (*Configuration parameters.*) (* *) (*#PAR#*)
		EnableServoCorrection : BOOL; (*Enables the integration part.*) (* *) (*#CMD#OPT#*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*) (* *) (*#PAR#*)
		SetForce : REAL; (*Set force. Unit: [N]*) (* *) (*#CYC#*)
		ActForce : REAL; (*Actual force. Unit: [N]*) (* *) (*#CYC#*)
		ActPumpPressure : REAL; (*Actual pump pressure. Units: [bar].*) (* *) (*#CYC#OPT#*)
		ActCylinderPressure1 : REAL; (*Chamber pressure for movement in the 'positive' direction. Units: [bar]. Valid value range: 0 &lt= ActCylinderPressure1*) (* *) (*#CYC#OPT#*)
		ActCylinderPressure2 : REAL; (*Chamber pressure for movement in the 'negative' direction. Units: [bar]. Valid value range: 0 &lt= ActCylinderPressure2 *) (* *) (*#CYC#OPT#*)
		SetForceRate : REAL; (*Set force rate. Unit: [N/s]*) (* *) (*#CYC#OPT#*)
		ActCylinderPosition : REAL; (*Actual position. Units: [mm].*) (* *) (*#CYC#OPT#*)
		ActCylinderVelocity : REAL; (*Actual cylinder speed. Unit: [mm/s].*) (* *) (*#CYC#OPT#*)
		FeedForwardVelocity : REAL; (*Feed forward velocity Units: [mm/s].*) (* *) (*#CYC#OPT#*)
		EnableIntegrationPart : BOOL; (*Enables the integration part.*) (* *) (*#CMD#OPT#*)
		ResetIntegrationPart : BOOL; (*Resets the integration part.*) (* *) (*#CMD#OPT#*)
		ValveOpeningPositionController : REAL; (*Valve opening from position controller. Used for alternating position/force control. Unit: [1]*) (* *) (*#CYC#OPT#*)
		EnablePositionForceControl : BOOL; (*Enables the alternating position/force control*) (* *) (*#CMD#OPT#*)
	END_VAR
	VAR_OUTPUT
		ValveOpening : REAL; (*Valve opening. Units: [1]. *) (* *) (*#CYC#*)
		Active : BOOL; (*Function block is active. *) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update done.*) (* *) (*#PAR#*)
		InForceControl : BOOL; (*Function block is in force control mode.*) (* *) (*#PAR#*)
		InPositionControl : BOOL; (*Function block is in position control mode.*) (* *) (*#PAR#*)
	END_VAR
	VAR
		Internal : MTHydValveForceConInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTHydValvePressureObserver (*Chamber pressure observer.*) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		MachineData : MTHydValvePosConMachDataType; (*Parameter structure.*) (* *) (*#PAR#*)
		Update : BOOL; (*Updates the parameters listet above on a rising edge.*) (* *) (*#PAR#*)
		PumpPressure : REAL; (*Actual pump pressure. Units: [bar].*) (* *) (*#CYC#*)
		ProcessForce : REAL; (*Actual force acting on the cylinder in negative direction. Units: [N]*) (* *) (*#CYC#*)
		FrictionForce : REAL; (*Friction force acting on the cylinder opposite to the moving direction. Units: [N]. Valid value range: 0 &lt= FrictionForce.*) (* *) (*#CYC#*)
		ValveOpening : REAL; (*Valve opening. Unit: [1]. This value is only used to determine the direction of the movement.*) (* *) (*#CYC#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active. *) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update done.*) (* *) (*#PAR#*)
		CylinderPressure1 : REAL; (*Calculated cylinder pressure in chamber 1. Units: [bar].*) (* *) (*#CYC#*)
		CylinderPressure2 : REAL; (*Calculated cylinder pressure in chamber 2. Units: [bar].*) (* *) (*#CYC#*)
	END_VAR
	VAR
		Internal : MTHydValvePressObsInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTHydValveSimulationModel (*Valve simulation model.*) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		CylinderParameters : MTHydValveSimCylinderParType; (*Parameter structure.*) (* *) (*#PAR#*)
		ValveParameters : MTHydValveSimValveParType; (*Parameter structure.*) (* *) (*#PAR#*)
		SystemParameters : MTHydValveSimSystemParType; (*Parameter structure.*) (* *) (*#PAR#*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*) (* *) (*#PAR#*)
		ValveSignal : REAL; (*Set position. Units: [mm].*) (* *) (*#CYC#*)
		ActPumpPressure : REAL; (*Actual pump pressure. Units: [bar].*) (* *) (*#CYC#OPT#*)
		ProcessForce :  REAL; (*Actual cylinder pressure in chamber 1. Units: [bar].*) (* *) (*#CYC#OPT#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active. *) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (* Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update done.*) (* *) (*#PAR#*)
		ActCylinderPosition : REAL; (*Actual cylinder position. Units: [mm]*) (* *) (*#CYC#OPT#*)
		ActCylinderVelocity : REAL; (*Actual cylinder pressure in Actual cylinder velocity. Units: [mm/s].*) (* *) (*#CYC#OPT#*)
		ActCylinderAcceleration : REAL; (*Actual cylinder acceleration. Units: [mm/s^2]*) (* *) (*#CYC#OPT#*)
		ActCylinderPressure1 : REAL; (*Actual cylinder pressure in chamber 1. Units: [bar].*) (* *) (*#CYC#OPT#*)
		ActCylinderPressure2 : REAL; (*Actual cylinder pressure in chamber 2. Units: [bar].*) (* *) (*#CYC#OPT#*)
		ValveOpening : REAL; (*ValveOpening in %.*) (* *) (*#CYC#OPT#*)
	END_VAR
	VAR
		Internal : MTHydValveSimModelInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTHydValveLinearization (*Valve linearization. *) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		ValveSignalValues : ARRAY[0..49] OF REAL; (*Node vector of the valve signal of the valve characteristic. Unit: [Units]. Maximum number of entries: 50.*) (* *) (*#PAR#*)
		ValveOpeningValues : ARRAY[0..49] OF REAL; (*Valve opening functional values for the node vector of the valve characteristic. Unit: [1]. Maximum number of entries: 50. These values must be sorted in ascending or descending order.The number of ValveOpeningValues must correspond to the number of NodeVectorValveSignal.*) (* *) (*#PAR#*)
		NumberOfPoints : USINT; (*Number of points. Valid value range: 2 &lt= NumberOfPoints &lt= 50.*) (* *) (*#PAR#*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*) (* *) (*#PAR#*)
		ValveOpening : REAL; (*Valve opening. Unit: [1].*) (* *) (*#CYC#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (* Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update is done.*) (* *) (*#PAR#*)
		ValveSignal : REAL; (*Valve signal. Unit: [Units].*) (* *) (*#CYC#*)
	END_VAR
	VAR
		Internal : MTHydValveLinInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTHydValveIdentification (*Valve characteristics identification.*) (*$GROUP=AdvControl,$CAT=Hydraulics,$GROUPICON=iconGroupX.png,$CATICON=iconCategoryX.png*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*) (* *) (*#PAR#*)
		Parameters : MTHydValveIdentParType; (*Parameter structure.*) (* *) (*#PAR#*)
		Update : BOOL; (*Updates the parameters listed above on a rising edge.*) (* *) (*#PAR#*)
		ActCylinderPosition : REAL; (*Actual cylinder position. Units: [mm]*) (* *) (*#CYC#*)
		ActCylinderPressure1 : REAL; (*Actual cylinder pressure in chamber 1. Units: [bar].*) (* *) (*#CYC#*)
		ActCylinderPressure2 : REAL; (*Actual cylinder pressure in chamber 2. Units: [bar].*) (* *) (*#CYC#*)
		ActPumpPressure : REAL; (*Actual pump pressure. Units: [bar].*) (* *) (*#CYC#*)
		ActPumpSpeed : REAL; (*Actual pump speed. Units: [rpm].*) (* *) (*#CYC#OPT#*)
		Start : BOOL; (*Start the idenfitication.*) (* *) (*#CMD#*)
		Stop : BOOL; (*Stop the idenfitication.*) (* *) (*#CMD#*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*) (* *) (*#PAR#*)
		Error : BOOL; (*Indicates an error.*) (* *) (*#PAR#*)
		StatusID : DINT; (*Status information.*) (* *) (*#PAR#*)
		UpdateDone : BOOL; (*Update done.*) (* *) (*#PAR#*)
		ValveSignal : REAL; (*Valve signal. Unit: [Units].*) (* *) (*#CYC#*)
		SetPumpPressure : REAL; (*Set value for servo pump pressure. Unit: [bar].*) (* *) (*#CYC#OPT#*)
		SetPumpSpeed : REAL; (*Set value for servo pump speed. Unit: [rpm].*) (* *) (*#CYC#OPT#*)
		IdentificationActive : BOOL; (*Identification is active.*) (* *) (*#CMD#*)
		IdentificationDone : BOOL; (*Identification done.*) (* *) (*#CMD#*)
		ValveCurve : MTHydValveIdentResultsType; (*Results of the identification.*) (* *) (*#CMD#*)
		IdentificationInfo : MTHydValveIdentInfoType; (*Detailed information of the identification results.*) (* *) (*#CMD#OPT#*)
	END_VAR
	VAR
		Internal : MTHydValveIdentInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK
