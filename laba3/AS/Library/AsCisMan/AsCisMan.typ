(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsCisMan
 * File: AsCisMan.typ
 * Author: B+R
 ********************************************************************
 * Data types of library AsCisMan
 ********************************************************************)
                                                                      
TYPE													
	vfAxisInfo_typ : STRUCT								(*statistics and internal information*)
		Device	: STRING[20] ;							(*interface device string*)
		Mode	: STRING[20] ;							(*interface mode string*)
		Typ	: UINT ;									(*device type*)
		IndexVf	: USINT ;								(*internal array index for axis structure*)
		IndexIf	: USINT ;								(*internal array index for interface structure*)
		VersionLib	: ARRAY[0..9] OF USINT ;			(*version of the AsCisMan.br library*)
		VersionDrv	: ARRAY[0..9] OF USINT ;			(*version of the driver task cis_vf.br or cis_ps.br*)
		VersionOsVf	: ARRAY[0..9] OF USINT ;			(*version of the cis_osvf operating system transferred to the VF*)
		VersionData	: ARRAY[0..9] OF USINT ;			(*data object version*)
		VfPNominal	: UINT ;							(*nominal power of the VF module in W (read from the VF EPROM)*)
		VfModuleID	: UINT ;							(*ID number of the VF module (read from the VF EPROM)*)
		VfSerialNr	: UDINT ;							(*serial number of the VF module (read from the VF EPROM)*)
		VfCurrentLSB	: UINT ;						(*current resolution of VF module in mA/Bit (read from the VF EPROM)*)
		CyclesPowerOn	: UINT ;						(*counter for the number of power ons*)
		HoursPowerOn	: UDINT ;						(*counter for the hours that voltage is applied to the VF module*)
		HoursMotorOn	: UDINT ;						(*counter for the hours the motor has power*)
		MinutesPowerOn	: USINT ;						(*counter minutes of VF module under voltage (incremented to 254 only once)*)
		MinutesMotorOn	: USINT ;						(*counter minutes of powered motor (incremented to 254 only once)*)
		HistoryMaxTempIGBT	: USINT ;					(*overall maximum IGBT temperature in degree celsius*)
		HistoryMaxTempMotor	: USINT ;					(*overall maximum motor temperature in degree celsius*)
		HistoryMaxTempCPU1	: USINT ;					(*overall maximum CPU temperature1 in degree celsius*)
		HistoryMaxTempCPU2	: USINT ;					(*overall maximum CPU temperature2 in degree celsius*)
		HistoryMaxCurrent	: UINT ;					(*overall maximum DC bus current in mA*)
		HistoryMaxUDCLink	: UINT ;					(*overall maximum DC bus voltage in VCD*)
		HistoryChangedSlot	: USINT ;					(*counter VF module inserted in different slot than at the last power on*)
		HistoryChangedPS	: USINT ;					(*counter VF module inserted in different CIS PS than at the last power on*)
		FactUDCLink	: REAL ;							(*DC bus voltage measurement correction factor (0.880-1.120)*)
		IdentXOpen	: UDINT ;							(*internal use*)
		StatusXOpen	: UINT ;							(*internal use*)
		IdentData	: UDINT ;							(*internal use*)
		pData	: UDINT ;								(*internal use*)
		lenData	: UDINT ;								(*internal use*)
		StatusData	: UINT ;							(*internal use*)
	END_STRUCT;
	vfAxisNetwork_typ : STRUCT							(*network and individual parameter operations*)
		Init	: USINT ;								(*initializes the connection (FU responds to the driver)*)
		ParIDRequest	: USINT ;						(*sets/reads FI parameters: requested ID*)
		ParIDResponse	: USINT ;						(*sets/reads individual parameters: response from read/write ID*)
		ParData	: UINT ;								(*sets/reads individual parameters depending on the parameter: data*)
		EPromAdrRequest	: USINT ;						(*sets/reads byte at EEPROM: requested address ($00…$7F reserved for OS)*)
		EPromAdrResponse	: USINT ;					(*sets/reads EEPROM bytes: response from read/write address*)
		EPromData	: USINT ;							(*sets/reads EEPROM : Data*)
	END_STRUCT;
	vfAxisParaVf_typ : STRUCT							(*parameter*)
		UDCNominal	: UINT ;							(*nominal DC bus voltage*)
		VfCurveV	: ARRAY[0..7] OF UINT ;				(*v/f curve array (voltage point 0-7)*)
		VfCurveF	: ARRAY[0..7] OF UINT ;				(*v/f curve array (frequency point 0-7)*)
		FreqMax	: UINT ;								(*maximum frequency*)
		MaxCurrent	: UINT ;							(*DC bus current limit*)
		IntAccRamp	: UINT ;							(*internal acceleration ramp (corresponds to about 5 ms/step)*)
		IntDecRamp	: UINT ;							(*internal deceleration ramp (corresponds to about 5 ms/step)*)
		TimeStopped	: UINT ;							(*time between the motor's stopping and status, stopped = 1*)
		ModeStopped	: USINT ;							(*ModeStopped=0..speed takes effect immediately, ModeStopped=1..speed takes effect only when status*)
		Pwm	: USINT ;									(*frequency for pulse width modulation (currently fixed at 5 kHz)*)
		TorqueCtrl	: USINT ;							(*enable VF torque check*)
		TempMotorMax	: USINT ;						(*maximum motor temperature*)
		CurErrorAutoAck	: USINT ;						(*enables automatic acknowledgement of overcurrent errors*)
		spare1	: USINT ;								(*free*)
		UDCMax	: UINT ;								(*maximum permissible DC bus voltage: 0...default value 760VDC is used*)
	END_STRUCT;						
	vfAxisParaTemp_typ : STRUCT							(*parameter*)
		R0	: UINT ;									(*resistance for T[0]*)
		R7	: UINT ;									(*resistance for T[7]*)
		T	: ARRAY[0..7] OF SINT ;						(*field for temperature*)
	END_STRUCT;				
	vfAxisPara_typ : STRUCT								(*parameter*)
		Vf	: vfAxisParaVf_typ ;						(*CIS FU parameters*)
		Temp	: vfAxisParaTemp_typ ;					(*motor temperature sensor parameter*)
	END_STRUCT;
	vfAxisMove_typ : STRUCT								(*motion*)
		Speed	: DINT ;								(*target speed [0.01Hz] (-600.00…600.00Hz)*)
		CurrLimit	: UINT ;							(*DC bus current limit (0…65000mA)*)
		UDCInject	: UINT ;							(*DC brake voltage (for StopMode=2 only)*)
		StopMode	: USINT ;							(*is given es a target speed, e.g. 0...motor loses current immediately and spins out*)
		AccPos	: UDINT ;								(*acceleration in a positive direction [0.01Hz/s] (0.01…1000.00Hz/s)*)
		AccNeg	: UDINT ;								(*acceleration in a negative direction [0.01Hz/s] (0.01…1000.00Hz/s)*)
		DecPos	: UDINT ;								(*deceleration in a positive direction [0.01Hz/s] (0.01…1000.00Hz/s)*)
		DecNeg	: UDINT ;								(*deceleration in a negative direction [0.01Hz/s] (0.01…1000.00Hz/s)*)
	END_STRUCT;
	vfAxisStatus_typ : STRUCT							(*status*)
		SpeedRamped	: DINT ;							(*current ramp speed being sent to the FC (unit = 0.01Hz)*)
		UDCInject	: UINT ;							(*currently induced braking voltage in V*)
		ActTempIGBT	: USINT ;							(*current FC-IGBT temperature in degree celsius*)
		MaxTempIGBT	: USINT ;							(*maximum FC-IGBT temperature in degree celsius*)
		ActTempMotor	: USINT ;						(*current FC motor temperature in degree celsius*)
		MaxTempMotor	: USINT ;						(*maximum FC motor temperature in degree celsius*)
		ActTempRect	: USINT ;							(*current bridge rectifier temperature in degree celsius*)
		MaxTempRect	: USINT ;							(*maximum bridge rectifier temperature in degree celsius*)
		ActTempPS	: USINT ;							(*current internal temperature in degree celsius*)
		MaxTempPS	: USINT ;							(*maximum internal temperature in degree celsius*)
		ActTempCPU1	: USINT ;							(*current internal CIS CPU temperature 1 in degree celsius (up to 80degree OK)*)
		MaxTempCPU1	: USINT ;							(*maximum internal CIS CPU temperature 1 in degree celsius*)
		ActTempCPU2	: USINT ;							(*current internal CIS CPU temperature 2 in degree celsius (up to 80degree OK)*)
		MaxTempCPU2	: USINT ;							(*maximum internal CIS CPU temperature 2 in degree celsius*)
		ActCurrent	: UINT ;							(*current IGBT DC bus current in mA*)
		MaxCurrent	: UINT ;							(*maximum IGBT DC bus current in mA*)
		ActUDCLink	: UINT ;							(*current FC DC bus voltage in VDC*)
		MaxUDCLink	: UINT ;							(*maximum FC DC bus voltage in VDC*)
		CPU	: UINT ;									(*statusBits CPU*)
		CISPS1	: USINT ;								(*statusBits1 FC basis board*)
		CISPS2	: USINT ;								(*statusBits2 FC basis board*)
		Stopped	: USINT ;								(*Motor stopped (current rotor speed = 0 detected)*)
		Active	: USINT ;								(*FC active (cyclic speed assignment to CIS FC is active)*)
		ParaInit	: USINT ;							(*Parameter initialized*)
		PowerOk	: USINT ;								(*DC bus voltage OK*)
	END_STRUCT;							
	vfAxisError_typ : STRUCT							(*error*)
		Active	: USINT ;								(*cumulative error: at least one error is active*)
		Current	: USINT ;								(*DC bus current over current limit (warning)*)
		CurrentOff	: USINT ;							(*DC bus current too high - FC stopped, error must be acknowledged*)
		TempIGBT	: USINT ;							(*IGBT temperature warning*)
		TempIGBTOff	: USINT ;							(*IGBT temperature too high - FC stopped, error must be acknowledged*)
		TempMotor	: USINT ;							(*motor temperature warning*)
		TempMotorOff	: USINT ;						(*motor temperature too high - FC stopped, error must be acknowledged*)
		TempMotorBreak	: USINT ;						(*motor temperature sensor wire break*)
		TempMotorShort	: USINT ;						(*motor temperature sensor short circuit*)
		VoltageHigh	: USINT ;							(*DC bus voltage too high*)
		Amplifier	: USINT ;							(*IGBT control internal error*)
		cntComTimeOff	: UDINT ;						(*counter: milliseconds that have passed since the last valid response from the FC*)
		cntCom	: UINT ;								(*counter communication error: communication timeout*)
		cntCommand	: UINT ;							(*counter communication error: illegal command*)
		cntParameter	: UINT ;						(*counter communication error: parameter outside of the permitted range*)
		cntService	: UINT ;							(*counter communication error: illegal service command*)
		cntAcknowledge	: UINT ;						(*counter communication error: could not acknowledge error - error still active*)
		cntCheckSumVFD	: UINT ;						(*counter checksum error (illegal checksum in FC data)*)
		cntEpromLock	: UINT ;						(*counter communication error: EPROM access blocked*)
		cntAmplitudeDelta	: UINT ;					(*counter error in VF curve parameters (voltage amplitude not climbing monotonously)*)
		cntFrequencyDelta	: UINT ;					(*counter error in VF curve parameters (frequency not climbing monotonously)*)
		cntLifeSignal	: UINT ;						(*counter: FC didn't receive any valid data for 200 ms*)
		cntCheckSumCPU	: UINT ;						(*counter checksum error (illegal checksum in FC data)*)
		cntResponsePara	: UINT ;						(*counter communication error (illegal data in response telegram)*)
		cntResponseSpd	: UINT ;						(*counter communication error (illegal data in response telegram)*)
		cntResponseError	: UINT ;					(*counter communication error (illegal data in response telegram)*)
	END_STRUCT;
	vfAxisInterntOut_typ : STRUCT						(*internal use*)
		IN	: BOOL ;									
		PT	: UDINT ;								
		Q	: BOOL ;									
		ET	: UDINT ;									
		StartTime	: UDINT ;							
		M	: BOOL ;									
	END_STRUCT;			
	vfAxisInternal_typ : STRUCT							(*internal use*)
		cmdSubject	: UINT ;							(*handshake for the vfaction() function: command subject*)
		cmdAction	: UINT ;							(*handshake for the vfaction() function: command action*)
		cmdPara	: USINT ;								(*handshake for the vfaction() function: command related parameterID*)
		cmdData	: UINT ;								(*handshake for the vfaction() function: command related data*)
		cntStep	: USINT ;								(*internal step*)
		Write	: USINT ;								(*0..process command, 1..send frame, 2..wait for response*)
		BufWrite	: ARRAY[0..5] OF USINT ;			(*buffer for the sent frame*)
		BufRead	: ARRAY[0..5] OF USINT ;				(*buffer for the received frame*)
		Sequence	: USINT ;							(*indicates the class of parameter ID*)
		cntInitEpromRead	: USINT ;					(*counter for read EPROM data during initialization*)
		cntInitUfCurveSet	: USINT ;					(*counter for sent U/f data*)
		tOut	: vfAxisInterntOut_typ ;				(*receive timeout*)
		ActTempMotorR	: UINT ;						(*measured resistance of the motor temperature sensor*)
		MaxTempMotorR	: UINT ;						(*measured resistance of the motor temperature sensor*)
		TempMotorRFilter	: ARRAY[0..9] OF UINT ;		(*filter buffer for motor temperature filters*)
		cntTempMotorRFilter	: UINT ;					(*filter counter for motor temperature filters*)
		OldUDCInject	: UINT ;						(*UDCInject edge*)
		SpeedRamped	: REAL ;							(*output of the speed ramp in REAL*)
		TestFan	: USINT ;								(*=1 for manually testing the internal fans*)
		cntInfoWrite	: USINT ;						(*counter*)
		CyclesPowerOnCheck	: UINT ;					(*EPROM: backup copy of Info.CyclesPowerOn*)
		HoursPowerOnCheck	: UDINT ;					(*EPROM: backup copy of Info.HoursPowerOn*)
		HoursMotorOnCheck	: UDINT ;					(*EPROM: backup copy of Info.HoursMotorOn*)
		HistoryBufferAdr	: ARRAY[0..15] OF USINT ;	(*history address storage*)
		HistoryBufferData	: ARRAY[0..15] OF USINT ;	(*history data storage*)
		HistoryBufferCnt	: USINT ;					(*counter for pending historical data*)
		HistorySlot	: USINT ;							(*EPROM: VF inserted in slot number*)
		HistoryMacId	: ARRAY[0..2] OF USINT ;		(*EPROM: MacID of the CIS-PS*)
		HistoryMacIdChecksum	: USINT ;				(*EPROM: MacID checksum*)
		FactUDCLink	: REAL ;							(*EPROM: DC bus voltage measurement correction factor*)
	END_STRUCT;			
	vfAXIS_typ : STRUCT									(*AXIS information*)
		Info	: vfAxisInfo_typ ;						(*statistics and internal information*)
		Network	: vfAxisNetwork_typ ;					(*network and individual parameter operations*)
		Para	: vfAxisPara_typ ;						(*parameter*)
		Move	: vfAxisMove_typ ;						(*motion*)
		Status	: vfAxisStatus_typ ;					(*status*)
		Error	: vfAxisError_typ ;						(*error*)
		Internal	: vfAxisInternal_typ ;				(*internal use*)
	END_STRUCT;					
	vfInterfaceBuf_typ : STRUCT							(*internal use*)
		Byte0	: USINT ;								
		Command	: USINT ;								
		ByteHI	: USINT ;								
		ByteLO	: USINT ;								
		CheckSum	: USINT ;							
		spare0	: USINT ;								
	END_STRUCT;				
	vfInterface_typ : STRUCT							(*internal use*)	
		Ident	: UDINT ;								
		cntFrame	: USINT ;							
		oldFrame	: USINT ;							
		cntBufWrite	: USINT ;							
		cntBufRead	: USINT ;							
		cntFrameWrite	: USINT ;						
		cntFrameRead	: USINT ;						
		FrameRead	: ARRAY[0..7] OF USINT ;			
		cntFrameRead85	: USINT ;						
		FrameRead85	: ARRAY[0..1] OF USINT ;			
		BufWrite	: ARRAY[0..7] OF vfInterfaceBuf_typ ;	
		BufRead	: ARRAY[0..7] OF vfInterfaceBuf_typ ;	
	END_STRUCT;	
	vfDebug_typ : STRUCT								(*internal use*)
		Time	: UDINT ;								
		UDC	: UINT ;									
		Current	: UINT ;								
		Temp	: USINT ;								
		BufferSend	: ARRAY[0..4] OF USINT ;			
		BufferRecv	: ARRAY[0..11] OF USINT ;			
		BufferRecvNb	: USINT ;						
		ErrorCom	: USINT ;							
		ErrorCheckFU	: USINT ;						
		ErrorCheckCPU	: USINT ;						
		ErrorCommand	: USINT ;						
		ErrorParameter	: USINT ;						
		ErrorService	: USINT ;						
		ErrorResponse	: USINT ;						
		ErrorAcknowledge	: USINT ;					
		ErrorEpromLock	: USINT ;					
		ErrorAmplitudeDelta	: USINT ;					
		ErrorFrequencyDelta	: USINT ;					
		ErrorLifeSignal	: USINT ;						
	END_STRUCT;				
	vfDebugResponse_typ : STRUCT						(*internal use*)
		Write	: ARRAY[0..5] OF USINT ;				
		Read	: ARRAY[0..5] OF USINT ;				
	END_STRUCT;			
	vfErrorTrace_typ : STRUCT							(*internal use*)
		Fu	: USINT ;									
		Error	: USINT ;							
		Time	: UDINT ;								
	END_STRUCT;		
END_TYPE		