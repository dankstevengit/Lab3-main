/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASCISMAN_
#define _ASCISMAN_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <AsARCfg.h>
#include <brsystem.h>
#include <DataObj.h>
#include <runtime.h>
#include <sys_lib.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define vfOK 0U
 #define vfSET 264U
 #define vfDATA 1024U
 #define vfINIT 512U
 #define vfLOAD 0U
 #define vfMOVE 3U
 #define vfREAD 265U
 #define vfSAVE 341U
 #define vfSTOP 261U
 #define vfBASIS 10U
 #define vfEPROM 2U
 #define vfERROR 1U
 #define vfSTART 260U
 #define vfACTIVE 65535U
 #define vfGLOBAL 4U
 #define vfHOMING 106U
 #define vfPAR_PWM 1U
 #define vfSERVICE 165U
 #define vfABS_MOVE 132U
 #define vfINTERNAL 4U
 #define vfPAR_F_RT 3U
 #define vfREL_MOVE 131U
 #define vfTRANSFER 1U
 #define vfPAR_BRAKE 23U
 #define vfPAR_F_MAX 4U
 #define vfERR_OSDATA 31155U
 #define vfSPEED_MOVE 134U
 #define vfACKNOWLEDGE 257U
 #define vfERR_IFTABLE 31148U
 #define vfPAR_AMP_LIM 8U
 #define vfCURRENT_MOVE 135U
 #define vfERR_INITDATA 31149U
 #define vfPAR_ACK_TEMP 19U
 #define vfPAR_UP_VALUE 9U
 #define vfERR_AXISTABLE 31147U
 #define vfPAR_ACK_OC_QS 18U
 #define vfPAR_CUR_VALUE 7U
 #define vfPAR_MOD_CURVE 11U
 #define vfPAR_OSVERSION 201U
 #define vfPAR_SET_SPEED 200U
 #define vfPAR_TEMP_MODE 6U
 #define vfPAR_BOOST_MODE 2U
 #define vfPAR_DOWN_VALUE 10U
 #define vfPAR_EPROM_READ 40U
 #define vfPAR_READ_TEMP1 1U
 #define vfPAR_READ_TEMP2 2U
 #define vfPAR_UFCURVE_F0 60U
 #define vfPAR_UFCURVE_F1 61U
 #define vfPAR_UFCURVE_F2 62U
 #define vfPAR_UFCURVE_F3 63U
 #define vfPAR_UFCURVE_F4 64U
 #define vfPAR_UFCURVE_F5 65U
 #define vfPAR_UFCURVE_F6 66U
 #define vfPAR_UFCURVE_F7 67U
 #define vfPAR_UFCURVE_U0 50U
 #define vfPAR_UFCURVE_U1 51U
 #define vfPAR_UFCURVE_U2 52U
 #define vfPAR_UFCURVE_U3 53U
 #define vfPAR_UFCURVE_U4 54U
 #define vfPAR_UFCURVE_U5 55U
 #define vfPAR_UFCURVE_U6 56U
 #define vfPAR_UFCURVE_U7 57U
 #define vfPAR_BOOST_VALUE 5U
 #define vfPAR_EPROM_WRITE 41U
 #define vfPAR_READ_STATUS 5U
 #define vfPAR_READ_UDC350 3U
 #define vfPAR_READ_UDC600 4U
 #define vfPAR_TORQUE_CTRL 30U
 #define vfERR_INITDATA_LEN 31154U
 #define vfPAR_EPROM_UNLOCK 42U
 #define vfPAR_MODE_STOPPED 21U
 #define vfPAR_TIME_STOPPED 20U
 #define vfPAR_ACK_AMPLIFIER 18U
 #define vfPAR_ACK_TEMP_IGBT 19U
 #define vfPAR_CUR_ERROR_ACK 25U
 #define vfERR_INVALID_OBJECT 31140U
 #define vfPAR_ACK_TEMP_MOTOR 20U
 #define vfERR_INVALID_COMMAND 31142U
 #define vfERR_OSDATA_ILLOBJECT 31156U
 #define vfERR_INVALID_INTERFACE 31141U
 #define vfERR_OSDATA_ILLOBJTYPE 31157U
 #define vfERR_UART_OPENED_TWICE 31145U
 #define vfERR_INITDATA_ILLOBJECT 31150U
 #define vfERR_INITDATA_ILLOBJTYPE 31151U
 #define vfERR_OSDATA_ILLPARAMETER 31158U
 #define vfERR_INITDATA_ILLPARAMETER 31152U
 #define vfERR_OSDATA_MODULENOTFOUND 31159U
 #define vfERR_VERSION_CISPS_INVALID 31162U
 #define vfERR_VERSION_CISVF_INVALID 31160U
 #define vfERR_INITDATA_MODULENOTFOUND 31153U
 #define vfERR_INSUFFICIENT_TMP_MEMORY 31146U
 #define vfERR_VERSION_CISOSPS_INVALID 31163U
 #define vfERR_VERSION_CISOSVF_INVALID 31161U
 #define vfERR_MODULE_CISPS_NOTINSTALLED 31144U
 #define vfERR_MODULE_CISVF_NOTINSTALLED 31143U
#else
 _IEC_CONST unsigned short vfOK = 0U;
 _IEC_CONST unsigned short vfSET = 264U;
 _IEC_CONST unsigned short vfDATA = 1024U;
 _IEC_CONST unsigned short vfINIT = 512U;
 _IEC_CONST unsigned short vfLOAD = 0U;
 _IEC_CONST unsigned short vfMOVE = 3U;
 _IEC_CONST unsigned short vfREAD = 265U;
 _IEC_CONST unsigned short vfSAVE = 341U;
 _IEC_CONST unsigned short vfSTOP = 261U;
 _IEC_CONST unsigned short vfBASIS = 10U;
 _IEC_CONST unsigned short vfEPROM = 2U;
 _IEC_CONST unsigned short vfERROR = 1U;
 _IEC_CONST unsigned short vfSTART = 260U;
 _IEC_CONST unsigned short vfACTIVE = 65535U;
 _IEC_CONST unsigned short vfGLOBAL = 4U;
 _IEC_CONST unsigned short vfHOMING = 106U;
 _IEC_CONST unsigned char vfPAR_PWM = 1U;
 _IEC_CONST unsigned short vfSERVICE = 165U;
 _IEC_CONST unsigned short vfABS_MOVE = 132U;
 _IEC_CONST unsigned short vfINTERNAL = 4U;
 _IEC_CONST unsigned char vfPAR_F_RT = 3U;
 _IEC_CONST unsigned short vfREL_MOVE = 131U;
 _IEC_CONST unsigned short vfTRANSFER = 1U;
 _IEC_CONST unsigned char vfPAR_BRAKE = 23U;
 _IEC_CONST unsigned char vfPAR_F_MAX = 4U;
 _IEC_CONST unsigned short vfERR_OSDATA = 31155U;
 _IEC_CONST unsigned short vfSPEED_MOVE = 134U;
 _IEC_CONST unsigned short vfACKNOWLEDGE = 257U;
 _IEC_CONST unsigned short vfERR_IFTABLE = 31148U;
 _IEC_CONST unsigned char vfPAR_AMP_LIM = 8U;
 _IEC_CONST unsigned short vfCURRENT_MOVE = 135U;
 _IEC_CONST unsigned short vfERR_INITDATA = 31149U;
 _IEC_CONST unsigned char vfPAR_ACK_TEMP = 19U;
 _IEC_CONST unsigned char vfPAR_UP_VALUE = 9U;
 _IEC_CONST unsigned short vfERR_AXISTABLE = 31147U;
 _IEC_CONST unsigned char vfPAR_ACK_OC_QS = 18U;
 _IEC_CONST unsigned char vfPAR_CUR_VALUE = 7U;
 _IEC_CONST unsigned char vfPAR_MOD_CURVE = 11U;
 _IEC_CONST unsigned char vfPAR_OSVERSION = 201U;
 _IEC_CONST unsigned char vfPAR_SET_SPEED = 200U;
 _IEC_CONST unsigned char vfPAR_TEMP_MODE = 6U;
 _IEC_CONST unsigned char vfPAR_BOOST_MODE = 2U;
 _IEC_CONST unsigned char vfPAR_DOWN_VALUE = 10U;
 _IEC_CONST unsigned char vfPAR_EPROM_READ = 40U;
 _IEC_CONST unsigned char vfPAR_READ_TEMP1 = 1U;
 _IEC_CONST unsigned char vfPAR_READ_TEMP2 = 2U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_F0 = 60U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_F1 = 61U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_F2 = 62U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_F3 = 63U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_F4 = 64U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_F5 = 65U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_F6 = 66U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_F7 = 67U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_U0 = 50U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_U1 = 51U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_U2 = 52U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_U3 = 53U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_U4 = 54U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_U5 = 55U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_U6 = 56U;
 _IEC_CONST unsigned char vfPAR_UFCURVE_U7 = 57U;
 _IEC_CONST unsigned char vfPAR_BOOST_VALUE = 5U;
 _IEC_CONST unsigned char vfPAR_EPROM_WRITE = 41U;
 _IEC_CONST unsigned char vfPAR_READ_STATUS = 5U;
 _IEC_CONST unsigned char vfPAR_READ_UDC350 = 3U;
 _IEC_CONST unsigned char vfPAR_READ_UDC600 = 4U;
 _IEC_CONST unsigned char vfPAR_TORQUE_CTRL = 30U;
 _IEC_CONST unsigned short vfERR_INITDATA_LEN = 31154U;
 _IEC_CONST unsigned char vfPAR_EPROM_UNLOCK = 42U;
 _IEC_CONST unsigned char vfPAR_MODE_STOPPED = 21U;
 _IEC_CONST unsigned char vfPAR_TIME_STOPPED = 20U;
 _IEC_CONST unsigned char vfPAR_ACK_AMPLIFIER = 18U;
 _IEC_CONST unsigned char vfPAR_ACK_TEMP_IGBT = 19U;
 _IEC_CONST unsigned char vfPAR_CUR_ERROR_ACK = 25U;
 _IEC_CONST unsigned short vfERR_INVALID_OBJECT = 31140U;
 _IEC_CONST unsigned char vfPAR_ACK_TEMP_MOTOR = 20U;
 _IEC_CONST unsigned short vfERR_INVALID_COMMAND = 31142U;
 _IEC_CONST unsigned short vfERR_OSDATA_ILLOBJECT = 31156U;
 _IEC_CONST unsigned short vfERR_INVALID_INTERFACE = 31141U;
 _IEC_CONST unsigned short vfERR_OSDATA_ILLOBJTYPE = 31157U;
 _IEC_CONST unsigned short vfERR_UART_OPENED_TWICE = 31145U;
 _IEC_CONST unsigned short vfERR_INITDATA_ILLOBJECT = 31150U;
 _IEC_CONST unsigned short vfERR_INITDATA_ILLOBJTYPE = 31151U;
 _IEC_CONST unsigned short vfERR_OSDATA_ILLPARAMETER = 31158U;
 _IEC_CONST unsigned short vfERR_INITDATA_ILLPARAMETER = 31152U;
 _IEC_CONST unsigned short vfERR_OSDATA_MODULENOTFOUND = 31159U;
 _IEC_CONST unsigned short vfERR_VERSION_CISPS_INVALID = 31162U;
 _IEC_CONST unsigned short vfERR_VERSION_CISVF_INVALID = 31160U;
 _IEC_CONST unsigned short vfERR_INITDATA_MODULENOTFOUND = 31153U;
 _IEC_CONST unsigned short vfERR_INSUFFICIENT_TMP_MEMORY = 31146U;
 _IEC_CONST unsigned short vfERR_VERSION_CISOSPS_INVALID = 31163U;
 _IEC_CONST unsigned short vfERR_VERSION_CISOSVF_INVALID = 31161U;
 _IEC_CONST unsigned short vfERR_MODULE_CISPS_NOTINSTALLED = 31144U;
 _IEC_CONST unsigned short vfERR_MODULE_CISVF_NOTINSTALLED = 31143U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct vfAxisInfo_typ
{	plcstring Device[21];
	plcstring Mode[21];
	unsigned short Typ;
	unsigned char IndexVf;
	unsigned char IndexIf;
	unsigned char VersionLib[10];
	unsigned char VersionDrv[10];
	unsigned char VersionOsVf[10];
	unsigned char VersionData[10];
	unsigned short VfPNominal;
	unsigned short VfModuleID;
	unsigned long VfSerialNr;
	unsigned short VfCurrentLSB;
	unsigned short CyclesPowerOn;
	unsigned long HoursPowerOn;
	unsigned long HoursMotorOn;
	unsigned char MinutesPowerOn;
	unsigned char MinutesMotorOn;
	unsigned char HistoryMaxTempIGBT;
	unsigned char HistoryMaxTempMotor;
	unsigned char HistoryMaxTempCPU1;
	unsigned char HistoryMaxTempCPU2;
	unsigned short HistoryMaxCurrent;
	unsigned short HistoryMaxUDCLink;
	unsigned char HistoryChangedSlot;
	unsigned char HistoryChangedPS;
	float FactUDCLink;
	unsigned long IdentXOpen;
	unsigned short StatusXOpen;
	unsigned long IdentData;
	unsigned long pData;
	unsigned long lenData;
	unsigned short StatusData;
} vfAxisInfo_typ;

typedef struct vfAxisNetwork_typ
{	unsigned char Init;
	unsigned char ParIDRequest;
	unsigned char ParIDResponse;
	unsigned short ParData;
	unsigned char EPromAdrRequest;
	unsigned char EPromAdrResponse;
	unsigned char EPromData;
} vfAxisNetwork_typ;

typedef struct vfAxisParaVf_typ
{	unsigned short UDCNominal;
	unsigned short VfCurveV[8];
	unsigned short VfCurveF[8];
	unsigned short FreqMax;
	unsigned short MaxCurrent;
	unsigned short IntAccRamp;
	unsigned short IntDecRamp;
	unsigned short TimeStopped;
	unsigned char ModeStopped;
	unsigned char Pwm;
	unsigned char TorqueCtrl;
	unsigned char TempMotorMax;
	unsigned char CurErrorAutoAck;
	unsigned char spare1;
	unsigned short UDCMax;
} vfAxisParaVf_typ;

typedef struct vfAxisParaTemp_typ
{	unsigned short R0;
	unsigned short R7;
	signed char T[8];
} vfAxisParaTemp_typ;

typedef struct vfAxisPara_typ
{	struct vfAxisParaVf_typ Vf;
	struct vfAxisParaTemp_typ Temp;
} vfAxisPara_typ;

typedef struct vfAxisMove_typ
{	signed long Speed;
	unsigned short CurrLimit;
	unsigned short UDCInject;
	unsigned char StopMode;
	unsigned long AccPos;
	unsigned long AccNeg;
	unsigned long DecPos;
	unsigned long DecNeg;
} vfAxisMove_typ;

typedef struct vfAxisStatus_typ
{	signed long SpeedRamped;
	unsigned short UDCInject;
	unsigned char ActTempIGBT;
	unsigned char MaxTempIGBT;
	unsigned char ActTempMotor;
	unsigned char MaxTempMotor;
	unsigned char ActTempRect;
	unsigned char MaxTempRect;
	unsigned char ActTempPS;
	unsigned char MaxTempPS;
	unsigned char ActTempCPU1;
	unsigned char MaxTempCPU1;
	unsigned char ActTempCPU2;
	unsigned char MaxTempCPU2;
	unsigned short ActCurrent;
	unsigned short MaxCurrent;
	unsigned short ActUDCLink;
	unsigned short MaxUDCLink;
	unsigned short CPU;
	unsigned char CISPS1;
	unsigned char CISPS2;
	unsigned char Stopped;
	unsigned char Active;
	unsigned char ParaInit;
	unsigned char PowerOk;
} vfAxisStatus_typ;

typedef struct vfAxisError_typ
{	unsigned char Active;
	unsigned char Current;
	unsigned char CurrentOff;
	unsigned char TempIGBT;
	unsigned char TempIGBTOff;
	unsigned char TempMotor;
	unsigned char TempMotorOff;
	unsigned char TempMotorBreak;
	unsigned char TempMotorShort;
	unsigned char VoltageHigh;
	unsigned char Amplifier;
	unsigned long cntComTimeOff;
	unsigned short cntCom;
	unsigned short cntCommand;
	unsigned short cntParameter;
	unsigned short cntService;
	unsigned short cntAcknowledge;
	unsigned short cntCheckSumVFD;
	unsigned short cntEpromLock;
	unsigned short cntAmplitudeDelta;
	unsigned short cntFrequencyDelta;
	unsigned short cntLifeSignal;
	unsigned short cntCheckSumCPU;
	unsigned short cntResponsePara;
	unsigned short cntResponseSpd;
	unsigned short cntResponseError;
} vfAxisError_typ;

typedef struct vfAxisInterntOut_typ
{	plcbit IN;
	unsigned long PT;
	plcbit Q;
	unsigned long ET;
	unsigned long StartTime;
	plcbit M;
} vfAxisInterntOut_typ;

typedef struct vfAxisInternal_typ
{	unsigned short cmdSubject;
	unsigned short cmdAction;
	unsigned char cmdPara;
	unsigned short cmdData;
	unsigned char cntStep;
	unsigned char Write;
	unsigned char BufWrite[6];
	unsigned char BufRead[6];
	unsigned char Sequence;
	unsigned char cntInitEpromRead;
	unsigned char cntInitUfCurveSet;
	struct vfAxisInterntOut_typ tOut;
	unsigned short ActTempMotorR;
	unsigned short MaxTempMotorR;
	unsigned short TempMotorRFilter[10];
	unsigned short cntTempMotorRFilter;
	unsigned short OldUDCInject;
	float SpeedRamped;
	unsigned char TestFan;
	unsigned char cntInfoWrite;
	unsigned short CyclesPowerOnCheck;
	unsigned long HoursPowerOnCheck;
	unsigned long HoursMotorOnCheck;
	unsigned char HistoryBufferAdr[16];
	unsigned char HistoryBufferData[16];
	unsigned char HistoryBufferCnt;
	unsigned char HistorySlot;
	unsigned char HistoryMacId[3];
	unsigned char HistoryMacIdChecksum;
	float FactUDCLink;
} vfAxisInternal_typ;

typedef struct vfAXIS_typ
{	struct vfAxisInfo_typ Info;
	struct vfAxisNetwork_typ Network;
	struct vfAxisPara_typ Para;
	struct vfAxisMove_typ Move;
	struct vfAxisStatus_typ Status;
	struct vfAxisError_typ Error;
	struct vfAxisInternal_typ Internal;
} vfAXIS_typ;

typedef struct vfInterfaceBuf_typ
{	unsigned char Byte0;
	unsigned char Command;
	unsigned char ByteHI;
	unsigned char ByteLO;
	unsigned char CheckSum;
	unsigned char spare0;
} vfInterfaceBuf_typ;

typedef struct vfInterface_typ
{	unsigned long Ident;
	unsigned char cntFrame;
	unsigned char oldFrame;
	unsigned char cntBufWrite;
	unsigned char cntBufRead;
	unsigned char cntFrameWrite;
	unsigned char cntFrameRead;
	unsigned char FrameRead[8];
	unsigned char cntFrameRead85;
	unsigned char FrameRead85[2];
	struct vfInterfaceBuf_typ BufWrite[8];
	struct vfInterfaceBuf_typ BufRead[8];
} vfInterface_typ;

typedef struct vfDebug_typ
{	unsigned long Time;
	unsigned short UDC;
	unsigned short Current;
	unsigned char Temp;
	unsigned char BufferSend[5];
	unsigned char BufferRecv[12];
	unsigned char BufferRecvNb;
	unsigned char ErrorCom;
	unsigned char ErrorCheckFU;
	unsigned char ErrorCheckCPU;
	unsigned char ErrorCommand;
	unsigned char ErrorParameter;
	unsigned char ErrorService;
	unsigned char ErrorResponse;
	unsigned char ErrorAcknowledge;
	unsigned char ErrorEpromLock;
	unsigned char ErrorAmplitudeDelta;
	unsigned char ErrorFrequencyDelta;
	unsigned char ErrorLifeSignal;
} vfDebug_typ;

typedef struct vfDebugResponse_typ
{	unsigned char Write[6];
	unsigned char Read[6];
} vfDebugResponse_typ;

typedef struct vfErrorTrace_typ
{	unsigned char Fu;
	unsigned char Error;
	unsigned long Time;
} vfErrorTrace_typ;

typedef struct vf_bsl
{
	/* VAR_INPUT (analog) */
	unsigned char Enable;
	unsigned short Interface;
	unsigned long Device;
	unsigned long Mode;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned char TransferOk;
	unsigned short Status;
	/* VAR (analog) */
	unsigned short sTransfer;
	struct DatObjInfo DatObjInfo_01;
	unsigned char BufRead[8];
	unsigned char BufWrite[8];
	unsigned char DataHeader[8];
	unsigned char DataOs[100];
	unsigned char DataRead[100];
	unsigned char DataTest;
	unsigned long cntTimeOut;
	unsigned long pData;
	unsigned char (*dData)[100];
	unsigned char i;
	unsigned char UartIdent;
	unsigned char DeviceString[8];
	unsigned long pUartData[8];
	unsigned short* dUartData;
	unsigned char (*dUartStatusSend)[2];
	unsigned char (*dUartStatusRead)[2];
	unsigned long cntFrameWrite;
	unsigned long cntFrameRead;
	unsigned short cntUartData;
	unsigned short* dUartFPGAControl;
	unsigned short* dUartSRAMData;
	unsigned short* dUartSRAMAddress;
	unsigned short* dUartBslControl;
	unsigned short* dUartBslStatus;
	unsigned short UartBslStatus;
	unsigned short UartData;
	unsigned short StatusGetAdr;
	struct MoVerStruc_typ MoVerStruct;
	unsigned long pBufferVersionOs;
	unsigned long lenBufferVersionOs;
	plcstring (*dBufferVersionOs)[8];
	unsigned short DelayStart;
	unsigned short DelayEnd;
} vf_bsl_typ;

typedef struct vfalloc
{
	/* VAR_INPUT (analog) */
	unsigned short Interface;
	unsigned long Device;
	unsigned long Mode;
	unsigned long Data;
	unsigned long* Object;
	/* VAR_OUTPUT (analog) */
	unsigned short vfalloc;
	/* VAR (analog) */
	unsigned char i;
	struct vfAXIS_typ* dAxis;
	unsigned long* dAdrTableAxis;
	unsigned long pAdrTableAxis;
	unsigned long lenAdrTableAxis;
	unsigned long pAllocAxis;
	struct vfInterface_typ* dInterface;
	unsigned long* dAdrTableIf;
	unsigned long pAdrTableIf;
	unsigned long lenAdrTableIf;
	unsigned long pAllocIf;
	struct DatObjInfo DatObjInfo_01;
	unsigned char IndexIf;
	unsigned long Ident;
	unsigned char DeviceString[8];
	struct MoVerStruc_typ MoVerStructLib;
	struct MoVerStruc_typ MoVerStruct;
	unsigned long pBufferVersionOs;
	unsigned long lenBufferVersionOs;
	plcstring (*dBufferVersionOs)[8];
} vfalloc_typ;

typedef struct initps05
{
	/* VAR_INPUT (analog) */
	plcstring ParaVF1[9];
	plcstring ParaVF2[9];
	plcstring ParaVF3[9];
	plcstring ParaVF4[9];
	plcstring ParaVF5[9];
	plcstring ParaVF6[9];
	plcstring ParaVF7[9];
	/* VAR_OUTPUT (analog) */
	unsigned short Status;
	unsigned long IdentCPU;
	unsigned long IdentVF1;
	unsigned long IdentVF2;
	unsigned long IdentVF3;
	unsigned long IdentVF4;
	unsigned long IdentVF5;
	unsigned long IdentVF6;
	unsigned long IdentVF7;
	unsigned char BootOkBitsVF;
	/* VAR (analog) */
	unsigned long Object[9];
	unsigned short StatusAlloc[9];
	struct vf_bsl vf_bsl_00;
	struct vf_bsl vf_bsl_01;
	struct vf_bsl vf_bsl_02;
	struct vf_bsl vf_bsl_03;
	struct vf_bsl vf_bsl_04;
	struct vf_bsl vf_bsl_05;
	struct vf_bsl vf_bsl_06;
	struct vf_bsl vf_bsl_07;
	struct vf_bsl vf_bsl_08;
	struct vfalloc zzvfalloc00000;
	struct vfalloc zzvfalloc00001;
	struct vfalloc zzvfalloc00002;
	struct vfalloc zzvfalloc00003;
	struct vfalloc zzvfalloc00004;
	struct vfalloc zzvfalloc00005;
	struct vfalloc zzvfalloc00006;
	struct vfalloc zzvfalloc00007;
	/* VAR_INPUT (digital) */
	plcbit Enable;
} initps05_typ;

typedef struct initps04
{
	/* VAR_INPUT (analog) */
	plcstring ParaVF1[9];
	plcstring ParaVF2[9];
	plcstring ParaVF3[9];
	plcstring ParaVF4[9];
	/* VAR_OUTPUT (analog) */
	unsigned short Status;
	unsigned long IdentCPU;
	unsigned long IdentVF1;
	unsigned long IdentVF2;
	unsigned long IdentVF3;
	unsigned long IdentVF4;
	unsigned char BootOkBitsVF;
	/* VAR (analog) */
	unsigned long Object[9];
	unsigned short StatusAlloc[9];
	struct vf_bsl vf_bsl_00;
	struct vf_bsl vf_bsl_01;
	struct vf_bsl vf_bsl_02;
	struct vf_bsl vf_bsl_03;
	struct vf_bsl vf_bsl_08;
	struct vfalloc zzvfalloc00000;
	struct vfalloc zzvfalloc00001;
	struct vfalloc zzvfalloc00002;
	struct vfalloc zzvfalloc00003;
	struct vfalloc zzvfalloc00004;
	/* VAR_INPUT (digital) */
	plcbit Enable;
} initps04_typ;

typedef struct initps03
{
	/* VAR_INPUT (analog) */
	plcstring ParaVF1[9];
	plcstring ParaVF2[9];
	plcstring ParaVF3[9];
	plcstring ParaVF4[9];
	plcstring ParaVF5[9];
	plcstring ParaVF6[9];
	plcstring ParaVF7[9];
	plcstring ParaVF8[9];
	/* VAR_OUTPUT (analog) */
	unsigned short Status;
	unsigned long IdentCPU;
	unsigned long IdentVF1;
	unsigned long IdentVF2;
	unsigned long IdentVF3;
	unsigned long IdentVF4;
	unsigned long IdentVF5;
	unsigned long IdentVF6;
	unsigned long IdentVF7;
	unsigned long IdentVF8;
	unsigned char BootOkBitsVF;
	/* VAR (analog) */
	unsigned long Object[9];
	unsigned short StatusAlloc[9];
	struct vf_bsl vf_bsl_00;
	struct vf_bsl vf_bsl_01;
	struct vf_bsl vf_bsl_02;
	struct vf_bsl vf_bsl_03;
	struct vf_bsl vf_bsl_04;
	struct vf_bsl vf_bsl_05;
	struct vf_bsl vf_bsl_06;
	struct vf_bsl vf_bsl_07;
	struct vf_bsl vf_bsl_08;
	struct vfalloc zzvfalloc00000;
	struct vfalloc zzvfalloc00001;
	struct vfalloc zzvfalloc00002;
	struct vfalloc zzvfalloc00003;
	struct vfalloc zzvfalloc00004;
	struct vfalloc zzvfalloc00005;
	struct vfalloc zzvfalloc00006;
	struct vfalloc zzvfalloc00007;
	struct vfalloc zzvfalloc00008;
	/* VAR_INPUT (digital) */
	plcbit Enable;
} initps03_typ;

typedef struct initps02
{
	/* VAR_INPUT (analog) */
	plcstring ParaVF1[9];
	plcstring ParaVF2[9];
	plcstring ParaVF3[9];
	plcstring ParaVF4[9];
	plcstring ParaVF5[9];
	plcstring ParaVF6[9];
	plcstring ParaVF7[9];
	plcstring ParaVF8[9];
	/* VAR_OUTPUT (analog) */
	unsigned short Status;
	unsigned long IdentCPU;
	unsigned long IdentVF1;
	unsigned long IdentVF2;
	unsigned long IdentVF3;
	unsigned long IdentVF4;
	unsigned long IdentVF5;
	unsigned long IdentVF6;
	unsigned long IdentVF7;
	unsigned long IdentVF8;
	unsigned char BootOkBitsVF;
	/* VAR (analog) */
	unsigned long Object[9];
	unsigned short StatusAlloc[9];
	struct vf_bsl vf_bsl_00;
	struct vf_bsl vf_bsl_01;
	struct vf_bsl vf_bsl_02;
	struct vf_bsl vf_bsl_03;
	struct vf_bsl vf_bsl_04;
	struct vf_bsl vf_bsl_05;
	struct vf_bsl vf_bsl_06;
	struct vf_bsl vf_bsl_07;
	struct vf_bsl vf_bsl_08;
	struct vfalloc zzvfalloc00000;
	struct vfalloc zzvfalloc00001;
	struct vfalloc zzvfalloc00002;
	struct vfalloc zzvfalloc00003;
	struct vfalloc zzvfalloc00004;
	struct vfalloc zzvfalloc00005;
	struct vfalloc zzvfalloc00006;
	struct vfalloc zzvfalloc00007;
	struct vfalloc zzvfalloc00008;
	/* VAR_INPUT (digital) */
	plcbit Enable;
} initps02_typ;

typedef struct run_cpu
{
	/* VAR_INPUT (analog) */
	unsigned long IdentCPU;
	/* VAR_OUTPUT (analog) */
	unsigned short Status;
	unsigned short StatusBitsCPU;
	unsigned short ActUDCLink;
	unsigned char ActTempCPU1;
	unsigned char ActTempCPU2;
	unsigned char ActTempRect;
	/* VAR (analog) */
	struct vfAXIS_typ* dAxis;
	/* VAR_INPUT (digital) */
	plcbit Enable;
} run_cpu_typ;

typedef struct run_vfx
{
	/* VAR_INPUT (analog) */
	unsigned long IdentVF;
	float AccPos;
	float DecPos;
	float AccNeg;
	float DecNeg;
	float SetSpeed;
	unsigned short SetCurrent;
	unsigned short SetUDCInject;
	unsigned char StopMode;
	/* VAR_OUTPUT (analog) */
	unsigned short Status;
	float ActSpeed;
	unsigned short ActCurrent;
	unsigned short ActUDCInject;
	unsigned char ActTempIGBT;
	unsigned char ActTempMotor;
	unsigned short ActUDCLink;
	unsigned long ErrorCntComTimeOff;
	/* VAR (analog) */
	unsigned char step;
	unsigned short StatusAction;
	struct vfAXIS_typ* dAxis;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit CmdErrorAck;
	/* VAR_OUTPUT (digital) */
	plcbit Stopped;
	plcbit ParaInit;
	plcbit ErrorActive;
	plcbit ErrorCurrent;
	plcbit ErrorCurrentOff;
	plcbit ErrorTempIGBT;
	plcbit ErrorTempIGBTOff;
	plcbit ErrorTempMotor;
	plcbit ErrorTempMotorOff;
	plcbit ErrorTempMotorBreak;
	plcbit ErrorTempMotorShort;
	plcbit ErrorVoltageHigh;
	plcbit ErrorAmplifier;
} run_vfx_typ;



/* Prototyping of functions and function blocks */
void initps05(struct initps05* inst);
void initps04(struct initps04* inst);
void initps03(struct initps03* inst);
void initps02(struct initps02* inst);
void run_cpu(struct run_cpu* inst);
void run_vfx(struct run_vfx* inst);
void vfalloc(struct vfalloc* inst);
void vf_bsl(struct vf_bsl* inst);
unsigned short vfinternal(unsigned long Data);
unsigned short vfaction(unsigned long Object, unsigned short cmdSubject, unsigned short cmdAction);


#ifdef __cplusplus
};
#endif
#endif /* _ASCISMAN_ */

                                                             
