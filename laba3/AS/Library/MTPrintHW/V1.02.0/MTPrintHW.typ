(********************************************************************
* COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTPrintHW
 * File: MTPrintHW.typ
 * Author: B&R
 ********************************************************************
 * Data types of library MTPrintHW
 ********************************************************************)
(*Types for MTPringHWRegMarkCapture*)

TYPE
	MTPrintHWRegMarkCaptureParaType : 	STRUCT 
		PositionSource : USINT; (*Position, which should be latched on the drive.*)
		MeassuredEdge : USINT; (*Edge selection for the print mark trigger event.*)
		MinRegMarkWidth : REAL; (*Minimum width of a valid trigger event.*)
		MaxRegMarkWidth : REAL; (*Maximum width of a valid trigger event.*)
		ExpectionWindowWidth : REAL; (*Window in which the valid trigger signal can occur after/before the expected position. *)
		SetRegMarkPosition : REAL; (*Position where print mark is expected.*)
		SensorDelayTime : DINT; (*Registration mark sensor delay [µs].*)
	END_STRUCT;
	MTPrintHWRegMarkCaptInternalType : 	STRUCT 
		Ts : REAL; (*Task cycle time. Units: [s].*)
		AxisModuloPosition : DINT; (*Data for internal use.*)
		EdgeDetectMastertimePosition : REAL; (*Data for internal use.*)
		EdgeDetectSlavetimePosition : REAL; (*Data for internal use.*)
		ParameterValid : BOOL; (*Data for internal use.*)
		AxisReference : REFERENCE TO UDINT; (*Data for internal use.*)
		Parameter : MTPrintHWRegMarkCaptureParaType; (*Data for internal use.*)
		State : USINT; (*Data for internal use.*)
		AxisFactor : DINT; (*Data for internal use.*)
		AxisPeriod : DINT; (*Data for internal use.*)
		MaxExpectionPosition : DINT; (*Data for internal use.*)
		MinExpectionPosition : DINT; (*Data for internal use.*)
		ActBufferIndex : UINT; (*Data for internal use.*)
		PositionBufferPointer : UDINT; (*Data for internal use.*)
		TimeBufferPointer : UDINT; (*Data for internal use.*)
		AxisSpeed : REAL; (*Data for internal use.*)
		AxisSystemTime : UDINT; (*Data for internal use.*)
		AxisUpdateTime : UDINT; (*Data for internal use.*)
		NumberOfOccuredWindows : UDINT; (*Data for internal use.*)
		EdgeDetectMastertimeOld : DINT; (*Data for internal use.*)
		LastSavedPosition : DINT; (*Data for internal use.*)
		InExpectionWindow : BOOL; (*Data for internal use.*)
		InExpectionWindowOld : BOOL; (*Data for internal use.*)
		FunctionBlockReadCyclicPosition : MC_BR_ReadCyclicPosition; (*Data for internal use.*)
		FunctionBlockCyclicDataInfo : MC_BR_CyclicReadDataInfo; (*Data for internal use.*)
		FunctionBlockCyclicRead : ARRAY[0..1]OF MC_BR_CyclicRead; (*Data for internal use.*)
		FunctionBlockReadParameter : ARRAY[0..1]OF MC_ReadParameter; (*Data for internal use.*)
		FunctionBlockMovingAverage : movAvg_typ; (*Data for internal use.*)
		ActRegMarkPositionErrorOld : REAL; (*Data for internal use.*)
		Update : BOOL; (*Data for internal use.*)
		UpdateOld : BOOL; (*Data for internal use.*)
		EnableOld : BOOL; (*Data for internal use.*)
		Bootkey : UDINT; (*Data for internal use.*)
		SystemTimeOld : UDINT; (*Data for internal use.*)
		ModuloPositionOld : DINT; (*Data for internal use.*)
	END_STRUCT;
	movAvg_typ : 	STRUCT 
		enable : BOOL; (*Enable function block.*)
		window : UINT; (*Number of cycles used to generate the average value. Valid value range: base > 0.*)
		update : BOOL; (*Update parameters*)
		u : REAL; (*Input.*)
		status : UINT; (*Function block status message.*)
		y : REAL; (*Output value.*)
		internal : movAvg_internal_typ; (*Data for internal use.*)
	END_STRUCT;
	movAvg_internal_typ : 	STRUCT 
		statusTxt : STRING[100]; (*Function block status message as message text.*)
		Ts : REAL; (*Task cycle time. Units: [s].*)
		paraValid : BOOL; (*Data for internal use.*)
		update : BOOL; (*Data for internal use.*)
		n : UINT; (*Data for internal use.*)
		sum : LREAL; (*Data for internal use.*)
		buffer : ARRAY[0..127]OF REAL; (*Data for internal use.*)
		pBuffer : UDINT; (*Data for internal use.*)
		i_act : UINT; (*Data for internal use.*)
		i_old : UINT; (*Data for internal use.*)
		base : UINT; (*Data for internal use.*)
		bufferLength : UINT; (*Data for internal use.*)
		bufferFull : BOOL; (*Data for internal use.*)
		memAllocated : BOOL; (*Data for internal use.*)
		update_old : BOOL; (*Data for internal use.*)
		enable_old : BOOL; (*Data for internal use.*)
		Bootkey : UDINT; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*MTPrintHWGetAxisValues*)

TYPE
	MTPrintHWGetAxisValInternalType : 	STRUCT  (*Data for internal use.*)
		CycleTime : REAL; (*Data for internal use.*)
		Axis : UDINT; (*Data for internal use.*)
		FubState : USINT; (*Data for internal use.*)
		EnableOld : BOOL; (*Data for internal use.*)
		AxisNettime : UDINT; (*Data for internal use.*)
		AxisPosition : DINT; (*Data for internal use.*)
		AxisVelocity : REAL; (*Data for internal use.*)
		MC_BR_CyclicRead_Time : MC_BR_CyclicRead; (*Data for internal use.*)
		MC_BR_CyclicRead_Pos : MC_BR_CyclicRead; (*Data for internal use.*)
		MC_BR_CyclicRead_Vel : MC_BR_CyclicRead; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*Types for MTPrintHWCalcTrigger*)

TYPE
	MTPrintHWCalcTriggerInternalType : 	STRUCT 
		CycleTime : REAL; (*Data for internal use.*)
		ParameterValid : BOOL; (*Data for internal use.*)
		ImageLength : DINT; (*Data for internal use.*)
		ImageOffset : DINT; (*Data for internal use.*)
		EnableOld : BOOL; (*Data for internal use.*)
		UpdateOld : BOOL; (*Data for internal use.*)
		AxisNettime : UDINT; (*Data for internal use.*)
		AxisPosition : DINT; (*Data for internal use.*)
		AxisVelocity : REAL; (*Data for internal use.*)
		AxisAcc : REAL; (*Data for internal use.*)
		TriggerPosition : DINT; (*Data for internal use.*)
		TriggerTime : UDINT; (*Data for internal use.*)
		LastTriggerTime : UDINT; (*Data for internal use.*)
		DeltaPosition : DINT; (*Data for internal use.*)
		DeltaTime : REAL; (*Data for internal use.*)
	END_STRUCT;
END_TYPE

(*Types for MTPrintHWTimeToPosition*)

TYPE
	MTPrintHWTimeToPosInternalType : 	STRUCT 
		CycleTime : REAL; (*Data for internal use.*)
		ParameterValid : BOOL; (*Data for internal use.*)
		ActivatedEdge : ARRAY[0..39]OF BOOL; (*Data for internal use.*)
		EnableOld : BOOL; (*Data for internal use.*)
		UpdateOld : BOOL; (*Data for internal use.*)
		Record : BOOL; (*Data for internal use.*)
		StartRecordOld : BOOL; (*Data for internal use.*)
		AxisNettime : UDINT; (*Data for internal use.*)
		AxisPosition : DINT; (*Data for internal use.*)
		AxisPositionOld : DINT; (*Data for internal use.*)
		PositionCounter : UINT; (*Data for internal use.*)
		Time : UDINT; (*Data for internal use.*)
		Position : DINT; (*Data for internal use.*)
		pTime : REFERENCE TO UDINT; (*Data for internal use.*)
		pPosition : REFERENCE TO DINT; (*Data for internal use.*)
	END_STRUCT;
END_TYPE
