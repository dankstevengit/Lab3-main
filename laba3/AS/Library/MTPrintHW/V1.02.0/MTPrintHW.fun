(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTPrintHW
 * File: MTPrintHW.fun
 * Author: B&R
 ********************************************************************
 * Functions and function blocks of library MTPrintHW
 ********************************************************************)

FUNCTION_BLOCK MTPrintHWRegMarkCapture (*Registration mark detection.*)
	VAR_INPUT
		Axis : UDINT; (*Axis reference for the axis on which registration mark detection is running.*)
		Enable : BOOL; (*Enable function block.*)
		Parameter : MTPrintHWRegMarkCaptureParaType; (*Registration mark parameters.*)
		MovingWindowLength : USINT; (*Number of values used to generate the average position error.*)
		Update : BOOL; (*Parameter update trigger.*)
		EdgeDetectSlavetime : DINT; (*Net time of slave (first) edge.*)
		EdgeDetectMastertime : DINT; (*Net time of master (last) edge.*)
		SearchRegMark : BOOL; (*Search for any registration mark with correct size.*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*)
		Error : BOOL; (*Indicates an error.*)
		StatusID : DINT; (*Status information.*)
		UpdateDone : BOOL; (*Update done.*)
		ActRegMarkPosition : REAL; (*Currently measured position of the registration mark within one revolution.*)
		ActRegMarkPositionError : REAL; (*Absolute deviation between expected position ("RegMarkPosition") and measured position of the registration mark ("ActPosition") within one revolution.*)
		ActRegMarkSize : REAL; (*Actual size of detected registration mark.*)
		ValidRegMarks : UDINT; (*The number of valid trigger signals.*)
		MissedRegMarks : UDINT; (*The number of "missed" triggers (set to 0, after a valid trigger signal was detected again).*)
		AverageRegMarkPositionError : REAL; (*Average value of the last measured position errors.*)
	END_VAR
	VAR
		Internal : MTPrintHWRegMarkCaptInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTPrintHWGetAxisValues (*TODO: Add your comment here*) (*$GROUP=User*)
	VAR_INPUT
		Axis : UDINT; (*Axis reference.*)
		Enable : BOOL; (*Enable function block.*)
	END_VAR
	VAR_OUTPUT
		Active : USINT; (*Function block is active.*)
		Busy : USINT; (*Function block is*)
		Error : USINT; (*Indicates an error.*)
		StatusID : DINT; (*Status information.*)
		AxisNettime : UDINT; (*Axis nettime.*)
		AxisPosition : DINT; (*Axis position.*)
		AxisVelocity : REAL; (*Axus Velocity.*)
	END_VAR
	VAR
		Internal : MTPrintHWGetAxisValInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTPrintHWCalcTrigger
	VAR_INPUT
		Enable : BOOL; (*Enable function block.*)
		ImageLength : DINT; (*Length of Image.*)
		ImageOffset : DINT; (*Trigger position.*)
		Update : BOOL; (*Parameter update.*)
		AxisNettime : UDINT; (*Axis nettime.*)
		AxisPosition : DINT; (*Axis position.*)
		AxisVelocity : REAL; (*Axus Velocity.*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*)
		Error : BOOL; (*Indicates an error.*)
		StatusID : DINT; (*Status information.*)
		UpdateDone : BOOL; (*Update done.*)
		TriggerTime : UDINT; (*Nettime for trigger.*)
		TriggerPosition : DINT; (*Position of trigger.*)
		LastTriggerTime : UDINT; (*Nettime of the last trigger.*)
	END_VAR
	VAR
		Internal : MTPrintHWCalcTriggerInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MTPrintHWTimeToPosition
	VAR_INPUT
		Enable : BOOL; (*Enable function block.*)
		ActivatedEdge : ARRAY[0..39] OF BOOL; (*Activated edge for position calculation.*)
		Update : BOOL; (*Parameter update.*)
		EdgeTime : ARRAY[0..39] OF UDINT; (*Time for position calculation.*)
		AxisNettime : UDINT; (*Time.*)
		AxisPosition : DINT; (*Position.*)
		StartRecord : BOOL; (*Start Record Time and Position.*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active.*)
		Error : BOOL; (*Indicates an error.*)
		StatusID : DINT; (*Status information.*)
		UpdateDone : BOOL; (*Update done.*)
		EdgePosition : ARRAY[0..39] OF DINT; (*Calculated position.*)
		NewPosition : BOOL; (*New position.*)
	END_VAR
	VAR
		Internal : MTPrintHWTimeToPosInternalType; (*Data for internal use.*)
	END_VAR
END_FUNCTION_BLOCK
