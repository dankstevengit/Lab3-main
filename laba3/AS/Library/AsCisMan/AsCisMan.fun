(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsCisMan
 * File: AsCisMan.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library AsCisMan
 ********************************************************************)
                                                                      
FUNCTION_BLOCK initps05								(*boots and allocates a CIS base unit 80CIS.PS0-5 (7 slot, 6.5 kW)*)
	VAR_INPUT
		Enable	:BOOL;								(*enables execution*)
		ParaVF1	:STRING[8];							(*name of the slot1 initialization parameter data object*)
		ParaVF2	:STRING[8];							(*name of the slot2 initialization parameter data object*)
		ParaVF3	:STRING[8];							(*name of the slot3 initialization parameter data object*)
		ParaVF4	:STRING[8];							(*name of the slot4 initialization parameter data object*)
		ParaVF5	:STRING[8];							(*name of the slot5 initialization parameter data object*)
		ParaVF6	:STRING[8];							(*name of the slot6 initialization parameter data object*)
		ParaVF7	:STRING[8];							(*name of the slot7 initialization parameter data object*)
	END_VAR
	VAR_OUTPUT
		Status	:UINT;								(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		IdentCPU	:UDINT;							(*identifier for the CPU data (for use with run_cpu)*)
		IdentVF1	:UDINT;							(*identifier for the VF slot 1 (for use with run_vfx)*)
		IdentVF2	:UDINT;							(*identifier for the VF slot 2 (for use with run_vfx)*)
		IdentVF3	:UDINT;							(*identifier for the VF slot 3 (for use with run_vfx)*)
		IdentVF4	:UDINT;							(*identifier for the VF slot 4 (for use with run_vfx)*)
		IdentVF5	:UDINT;							(*identifier for the VF slot 5 (for use with run_vfx)*)
		IdentVF6	:UDINT;							(*identifier for the VF slot 6 (for use with run_vfx)*)
		IdentVF7	:UDINT;							(*identifier for the VF slot 7 (for use with run_vfx)*)
		BootOkBitsVF	:USINT;						(*bit-coded status: bit=0...boot failed, bit=1...boot successful*)
	END_VAR
	VAR
		Object	:ARRAY[0..8] OF UDINT;				(*internal variable*)
		StatusAlloc	:ARRAY[0..8] OF UINT;			(*internal variable*)
			vf_bsl_00	:vf_bsl;					(*internal variable*)
			vf_bsl_01	:vf_bsl;					(*internal variable*)	
		vf_bsl_02	:vf_bsl;						(*internal variable*)
		vf_bsl_03	:vf_bsl;						(*internal variable*)
		vf_bsl_04	:vf_bsl;						(*internal variable*)
		vf_bsl_05	:vf_bsl;						(*internal variable*)
		vf_bsl_06	:vf_bsl;						(*internal variable*)
		vf_bsl_07	:vf_bsl;						(*internal variable*)
		vf_bsl_08	:vf_bsl;						(*internal variable*)
		zzvfalloc00000	:vfalloc;					(*internal variable*)
		zzvfalloc00001	:vfalloc;					(*internal variable*)
		zzvfalloc00002	:vfalloc;					(*internal variable*)
		zzvfalloc00003	:vfalloc;					(*internal variable*)
		zzvfalloc00004	:vfalloc;					(*internal variable*)
		zzvfalloc00005	:vfalloc;					(*internal variable*)
		zzvfalloc00006	:vfalloc;					(*internal variable*)
		zzvfalloc00007	:vfalloc;					(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK

FUNCTION_BLOCK initps04								(*boots and allocates a CIS base unit 80CIS.PS0-4 (4 slot, 16 kW)*)
	VAR_INPUT
		Enable	:BOOL;								(*enables execution*)
		ParaVF1	:STRING[8];							(*name of the slot1 initialization parameter data object*)
		ParaVF2	:STRING[8];							(*name of the slot2 initialization parameter data object*)
		ParaVF3	:STRING[8];							(*name of the slot3 initialization parameter data object*)
		ParaVF4	:STRING[8];							(*name of the slot4 initialization parameter data object*)
	END_VAR
	VAR_OUTPUT
		Status	:UINT;								(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		IdentCPU	:UDINT;							(*identifier for the CPU data (for use with run_cpu)*)
		IdentVF1	:UDINT;							(*identifier for the VF slot 1 (for use with run_vfx)*)
		IdentVF2	:UDINT;							(*identifier for the VF slot 2 (for use with run_vfx)*)
		IdentVF3	:UDINT;							(*identifier for the VF slot 3 (for use with run_vfx)*)
		IdentVF4	:UDINT;							(*identifier for the VF slot 4 (for use with run_vfx)*)
		BootOkBitsVF	:USINT;						(*bit-coded status: bit=0...boot failed, bit=1...boot successful*)
	END_VAR		
	VAR
		Object	:ARRAY[0..8] OF UDINT;				(*internal variable*)
		StatusAlloc	:ARRAY[0..8] OF UINT;			(*internal variable*)
		vf_bsl_00	:vf_bsl;						(*internal variable*)
		vf_bsl_01	:vf_bsl;						(*internal variable*)
		vf_bsl_02	:vf_bsl;						(*internal variable*)
		vf_bsl_03	:vf_bsl;						(*internal variable*)
		vf_bsl_08	:vf_bsl;						(*internal variable*)
		zzvfalloc00000	:vfalloc;					(*internal variable*)
		zzvfalloc00001	:vfalloc;					(*internal variable*)
		zzvfalloc00002	:vfalloc;					(*internal variable*)
		zzvfalloc00003	:vfalloc;					(*internal variable*)
		zzvfalloc00004	:vfalloc;					(*internal variable*)
	END_VAR		
END_FUNCTION_BLOCK

FUNCTION_BLOCK initps03								(*boots and allocates a CIS base unit 80CIS.PS0-3 (8 slot, 16 kW)*)
	VAR_INPUT
		Enable	:BOOL;								(*enables execution*)
		ParaVF1	:STRING[8];							(*name of the slot1 initialization parameter data object*)
		ParaVF2	:STRING[8];							(*name of the slot2 initialization parameter data object*)
		ParaVF3	:STRING[8];							(*name of the slot3 initialization parameter data object*)
		ParaVF4	:STRING[8];							(*name of the slot4 initialization parameter data object*)
		ParaVF5	:STRING[8];							(*name of the slot5 initialization parameter data object*)
		ParaVF6	:STRING[8];							(*name of the slot6 initialization parameter data object*)
		ParaVF7	:STRING[8];							(*name of the slot7 initialization parameter data object*)
		ParaVF8	:STRING[8];							(*name of the slot8 initialization parameter data object*)
	END_VAR
	VAR_OUTPUT
		Status	:UINT;								(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		IdentCPU	:UDINT;							(*identifier for the CPU data (for use with run_cpu)*)
		IdentVF1	:UDINT;							(*identifier for the VF slot 1 (for use with run_vfx)*)
		IdentVF2	:UDINT;							(*identifier for the VF slot 2 (for use with run_vfx)*)
		IdentVF3	:UDINT;							(*identifier for the VF slot 3 (for use with run_vfx)*)
		IdentVF4	:UDINT;							(*identifier for the VF slot 4 (for use with run_vfx)*)
		IdentVF5	:UDINT;							(*identifier for the VF slot 5 (for use with run_vfx)*)
		IdentVF6	:UDINT;							(*identifier for the VF slot 6 (for use with run_vfx)*)
		IdentVF7	:UDINT;							(*identifier for the VF slot 7 (for use with run_vfx)*)
		IdentVF8	:UDINT;							(*identifier for the VF slot 8 (for use with run_vfx)*)
		BootOkBitsVF	:USINT;						(*bit-coded status: bit=0...boot failed, bit=1...boot successful*)
	END_VAR		
	VAR
		Object	:ARRAY[0..8] OF UDINT;				(*internal variable*)
		StatusAlloc	:ARRAY[0..8] OF UINT;			(*internal variable*)
		vf_bsl_00	:vf_bsl;						(*internal variable*)
		vf_bsl_01	:vf_bsl;						(*internal variable*)
		vf_bsl_02	:vf_bsl;						(*internal variable*)
		vf_bsl_03	:vf_bsl;						(*internal variable*)
		vf_bsl_04	:vf_bsl;						(*internal variable*)
		vf_bsl_05	:vf_bsl;						(*internal variable*)
		vf_bsl_06	:vf_bsl;						(*internal variable*)
		vf_bsl_07	:vf_bsl;						(*internal variable*)
		vf_bsl_08	:vf_bsl;						(*internal variable*)
		zzvfalloc00000	:vfalloc;					(*internal variable*)
		zzvfalloc00001	:vfalloc;					(*internal variable*)
		zzvfalloc00002	:vfalloc;					(*internal variable*)
		zzvfalloc00003	:vfalloc;					(*internal variable*)
		zzvfalloc00004	:vfalloc;					(*internal variable*)
		zzvfalloc00005	:vfalloc;					(*internal variable*)
		zzvfalloc00006	:vfalloc;					(*internal variable*)
		zzvfalloc00007	:vfalloc;					(*internal variable*)
		zzvfalloc00008	:vfalloc;					(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK

FUNCTION_BLOCK initps02								(*boots and allocates a CIS base unit 80CIS.PS0-2 (8 slot, 8 kW)*)
	VAR_INPUT
		Enable	:BOOL;								(*enables execution*)
		ParaVF1	:STRING[8];							(*name of the slot1 initialization parameter data object*)
		ParaVF2	:STRING[8];							(*name of the slot2 initialization parameter data object*)
		ParaVF3	:STRING[8];							(*name of the slot3 initialization parameter data object*)
		ParaVF4	:STRING[8];							(*name of the slot4 initialization parameter data object*)
		ParaVF5	:STRING[8];							(*name of the slot5 initialization parameter data object*)
		ParaVF6	:STRING[8];							(*name of the slot6 initialization parameter data object*)
		ParaVF7	:STRING[8];							(*name of the slot7 initialization parameter data object*)
		ParaVF8	:STRING[8];							(*name of the slot8 initialization parameter data object*)
	END_VAR			
	VAR_OUTPUT
		Status	:UINT;								(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		IdentCPU	:UDINT;							(*identifier for the CPU data (for use with run_cpu)*)
		IdentVF1	:UDINT;							(*identifier for the VF slot 1 (for use with run_vfx)*)
		IdentVF2	:UDINT;							(*identifier for the VF slot 2 (for use with run_vfx)*)
		IdentVF3	:UDINT;							(*identifier for the VF slot 3 (for use with run_vfx)*)
		IdentVF4	:UDINT;							(*identifier for the VF slot 4 (for use with run_vfx)*)
		IdentVF5	:UDINT;							(*identifier for the VF slot 5 (for use with run_vfx)*)
		IdentVF6	:UDINT;							(*identifier for the VF slot 6 (for use with run_vfx)*)
		IdentVF7	:UDINT;							(*identifier for the VF slot 7 (for use with run_vfx)*)
		IdentVF8	:UDINT;							(*identifier for the VF slot 8 (for use with run_vfx)*)
		BootOkBitsVF	:USINT;						(*bit-coded status: bit=0...boot failed, bit=1...boot successful*)
	END_VAR	
	VAR
		Object	:ARRAY[0..8] OF UDINT;				(*internal variable*)
		StatusAlloc	:ARRAY[0..8] OF UINT;			(*internal variable*)
		vf_bsl_00	:vf_bsl;						(*internal variable*)
		vf_bsl_01	:vf_bsl;						(*internal variable*)
		vf_bsl_02	:vf_bsl;						(*internal variable*)
		vf_bsl_03	:vf_bsl;						(*internal variable*)
		vf_bsl_04	:vf_bsl;						(*internal variable*)
		vf_bsl_05	:vf_bsl;						(*internal variable*)
		vf_bsl_06	:vf_bsl;						(*internal variable*)
		vf_bsl_07	:vf_bsl;						(*internal variable*)
		vf_bsl_08	:vf_bsl;						(*internal variable*)
		zzvfalloc00000	:vfalloc;					(*internal variable*)
		zzvfalloc00001	:vfalloc;					(*internal variable*)
		zzvfalloc00002	:vfalloc;					(*internal variable*)
		zzvfalloc00003	:vfalloc;					(*internal variable*)
		zzvfalloc00004	:vfalloc;					(*internal variable*)
		zzvfalloc00005	:vfalloc;					(*internal variable*)
		zzvfalloc00006	:vfalloc;					(*internal variable*)	
		zzvfalloc00007	:vfalloc;					(*internal variable*)
		zzvfalloc00008	:vfalloc;					(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK

FUNCTION_BLOCK run_cpu								(*communicates cyclic to the CPU*)
	VAR_INPUT
		Enable	:BOOL;								(*enables execution*)
		IdentCPU	:UDINT;							(*identifier for the CPU data (from initps0x)*)
	END_VAR		
	VAR_OUTPUT
		Status	:UINT;								(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		StatusBitsCPU	:UINT;						(*CPU register: bit 1: 0...24VDC OK, bit 1: 1...24V ERROR, bit 10: 1...DC*)
		ActUDCLink	:UINT;							(*current DC bus voltage measured in the CIS-PS*)
		ActTempCPU1	:USINT;							(*current CPU temperature 1*)
		ActTempCPU2	:USINT;							(*current CPU temperature 2*)
		ActTempRect	:USINT;							(*current bridge rectifier temperature*)
	END_VAR		
	VAR
		dAxis	:REFERENCE TO vfAXIS_typ;			(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK run_vfx								(*communicates cyclic to an individual FI*)
	VAR_INPUT
		Enable	:BOOL;								(*enables execution*)
		IdentVF	:UDINT;								(*identifier for the VF data (from initps0x)*)
		AccPos	:REAL;								(*acceleration in positive direction*)
		DecPos	:REAL;								(*deceleration in positive direction*)
		AccNeg	:REAL;								(*acceleration in negative direction*)
		DecNeg	:REAL;								(*deceleration in negative direction*)
		SetSpeed	:REAL;							(*target speed*)
		SetCurrent	:UINT;							(*DC bus current limit*)
		SetUDCInject	:UINT;						(*DC brake voltage (for StopMode=2 only)*)
		StopMode	:USINT;							(*e.g. StopMode=0...motor loses current immediately and spins out*)
		CmdErrorAck	:BOOL;							(*acknowledge error command (level-sensitive)*)
	END_VAR		
	VAR_OUTPUT
		Status	:UINT;								(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		ActSpeed	:REAL;							(*current ramp speed being sent to the FC*)
		ActCurrent	:UINT;							(*current IGBT DC bus current*)
		ActUDCInject	:UINT;						(*currently provided braking voltage*)
		ActTempIGBT	:USINT;							(*current FC-IGBT temperature*)
		ActTempMotor	:USINT;						(*current FC motor temperature*)
		ActUDCLink	:UINT;							(*current DC bus voltage measured in the VF*)
		Stopped	:BOOL;								(*motor stopped (current rotor speed = 0 detected)*)
		ParaInit	:BOOL;							(*parameter initialized*)
		ErrorActive	:BOOL;							(*cumulative error: at least one error is active*)
		ErrorCurrent	:BOOL;						(*DC bus current over current limit (warning)*)
		ErrorCurrentOff	:BOOL;						(*DC bus current too high*)
		ErrorTempIGBT	:BOOL;						(*IGBT temperature warning*)
		ErrorTempIGBTOff	:BOOL;					(*IGBT temperature too high*)
		ErrorTempMotor	:BOOL;						(*motor temperature warning*)
		ErrorTempMotorOff	:BOOL;					(*motor temperature too high*)
		ErrorTempMotorBreak	:BOOL;					(*motor temperature sensor wire break*)
		ErrorTempMotorShort	:BOOL;					(*motor temperature sensor short circuit*)
		ErrorVoltageHigh	:BOOL;					(*DC bus voltage too high*)
		ErrorAmplifier	:BOOL;						(*IGBT control internal error*)
		ErrorCntComTimeOff	:UDINT;					(*counter: milliseconds that have passed since the last valid response from the FC*)
	END_VAR	
	VAR
		step	:USINT;								(*internal variable*)
		StatusAction	:UINT;						(*internal variable*)
		dAxis	:REFERENCE TO vfAXIS_typ;			(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION vfinternal : UINT							(*internal use*)
	VAR_INPUT
		Data	:UDINT;								(*internal variable*)
	END_VAR
	VAR
		FubExtern	:REFERENCE TO ARRAY[0..19] OF UDINT;	(*internal variable*)
		SINT1	:SINT;								(*internal variable*)
		SINT2	:SINT;								(*internal variable*)
		UINT1	:UINT;								(*internal variable*)
		UINT2	:UINT;								(*internal variable*)
		UDINT1	:UDINT;								(*internal variable*)
		UDINT2	:UDINT;								(*internal variable*)
		zzRTInfo00000	:RTInfo;					(*internal variable*)
		UDINT_ETH1: UDINT;    						(*internal variable*)
		UDINT_ETH2: UDINT;    						(*internal variable*)
		UDINT_ETH3: UDINT;    						(*internal variable*)
	END_VAR
END_FUNCTION

FUNCTION_BLOCK vfalloc								(*allocates the FI object - used in initps02(), initps03(), initps04() and initps05()*)
	VAR_INPUT
		Interface	:UINT;							(*PLC bus ID*)
		Device	:UDINT;								(*device name given as a pointer*)
		Mode	:UDINT;								(*mode string given as a pointer*)
		Data	:UDINT;								(*data object string given as a pointer*) 
		Object	:REFERENCE TO UDINT;				(*pointer to the FI structure*)
	END_VAR
	VAR_OUTPUT
		vfalloc	:UINT;								(*error number*)
	END_VAR
	VAR
		i	:USINT;									(*internal variable*)
		dAxis	:REFERENCE TO vfAXIS_typ;			(*internal variable*)
		dAdrTableAxis	:REFERENCE TO UDINT;		(*internal variable*)
		pAdrTableAxis	:UDINT;						(*internal variable*)
		lenAdrTableAxis	:UDINT;						(*internal variable*)
		pAllocAxis	:UDINT;							(*internal variable*)
		dInterface	:REFERENCE TO vfInterface_typ;	(*internal variable*)
		dAdrTableIf	:REFERENCE TO UDINT;			(*internal variable*)
		pAdrTableIf	:UDINT;							(*internal variable*)
		lenAdrTableIf	:UDINT;						(*internal variable*)
		pAllocIf	:UDINT;							(*internal variable*)
		DatObjInfo_01	:DatObjInfo;				(*internal variable*)
		IndexIf	:USINT;								(*internal variable*)
		Ident	:UDINT;								(*internal variable*)
		DeviceString	:ARRAY[0..7] OF USINT;		(*internal variable*)
		MoVerStructLib	:MoVerStruc_typ;			(*internal variable*)
		MoVerStruct	:MoVerStruc_typ;				(*internal variable*)	
		pBufferVersionOs	:UDINT;					(*internal variable*)
		lenBufferVersionOs	:UDINT;					(*internal variable*)
		dBufferVersionOs	: REFERENCE TO ARRAY[0..7] OF STRING[10];	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION vfaction : UINT							(*calls an FI function (command to driver) - used in run_cpu() and run_vfx()*)
	VAR_INPUT
		Object	:UDINT;								(*FI object (from vfalloc())*)
		cmdSubject	:UINT;							(*subject to which the command is applied*)
		cmdAction	:UINT;							(*command to be executed*)
	END_VAR
	VAR
		dAxis	:REFERENCE TO vfAXIS_typ;			(*internal variable*)
	END_VAR
END_FUNCTION

FUNCTION_BLOCK vf_bsl								(*transfers operating system to the FIs - used in initps02(), initps03(), initps04() and initps05()*)
	VAR_INPUT
		Enable	:USINT;								(*enables execution*)
		Interface	:UINT;							(*PLC bus ID*)
		Device	:UDINT;								(*device name given as a pointer, e.g. "Uart0" for the FI in slot 1*)
		Mode	:UDINT;								(*pointer to the uart (fixed)*)
		Data	:UDINT;								(*pointer to the name of the operating system data object*)
	END_VAR
	VAR_OUTPUT
		TransferOk	:USINT;							(*bit-coded status: bit=0...boot failed, bit=1...boot successful*)
		Status	:UINT;								(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)	
	END_VAR
	VAR
		sTransfer	:UINT;							(*internal variable*)
		DatObjInfo_01	:DatObjInfo;				(*internal variable*)
		BufRead	:ARRAY[0..7] OF USINT;				(*internal variable*)
		BufWrite	:ARRAY[0..7] OF USINT;			(*internal variable*)
		DataHeader	:ARRAY[0..7] OF USINT;			(*internal variable*)
		DataOs	:ARRAY[0..99] OF USINT;				(*internal variable*)
		DataRead	:ARRAY[0..99] OF USINT;			(*internal variable*)
		DataTest	:USINT;							(*internal variable*)
		cntTimeOut	:UDINT;							(*internal variable*)
		pData	:UDINT;								(*internal variable*)	
		dData	:REFERENCE TO ARRAY[0..99] OF USINT;	(*internal variable*)
		i	:USINT;									(*internal variable*)
		UartIdent	:USINT;							(*internal variable*)
		DeviceString	:ARRAY[0..7] OF USINT;		(*internal variable*)
		pUartData	:ARRAY[0..7] OF UDINT;			(*internal variable*)
		dUartData	:REFERENCE TO UINT;				(*internal variable*)
		dUartStatusSend	:REFERENCE TO ARRAY[0..1] OF USINT;	(*internal variable*)
		dUartStatusRead	:REFERENCE TO ARRAY[0..1] OF USINT;	(*internal variable*)
		cntFrameWrite	:UDINT;						(*internal variable*)
		cntFrameRead	:UDINT;						(*internal variable*)
		cntUartData	:UINT;							(*internal variable*)						
		dUartFPGAControl	:REFERENCE TO UINT;		(*internal variable*)
		dUartSRAMData	:REFERENCE TO UINT;			(*internal variable*)
		dUartSRAMAddress	:REFERENCE TO UINT;		(*internal variable*)
		dUartBslControl	:REFERENCE TO UINT;			(*internal variable*)
		dUartBslStatus	:REFERENCE TO UINT;			(*internal variable*)
		UartBslStatus	:UINT;						(*internal variable*)
		UartData	:UINT;							(*internal variable*)
		StatusGetAdr	:UINT;						(*internal variable*)
		MoVerStruct	:MoVerStruc_typ;				(*internal variable*)
		pBufferVersionOs	:UDINT;					(*internal variable*)
		lenBufferVersionOs	:UDINT;					(*internal variable*)
		dBufferVersionOs	:REFERENCE TO ARRAY[0..7] OF STRING[10];	(*internal variable*)
		DelayStart	:UINT;							(*internal variable*)
		DelayEnd	:UINT;							(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK
