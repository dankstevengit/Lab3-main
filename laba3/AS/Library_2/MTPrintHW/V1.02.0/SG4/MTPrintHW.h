/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _MTPRINTHW_
#define _MTPRINTHW_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <acp10_mc.h>
#include <brsystem.h>
#include <sys_lib.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define mtPRN_WRN_SENSOR_DELAY (-2131748003)
 #define mtPRN_WRN_BUFFER_FULL (-2131748004)
 #define mtPRN_WRN_WINDOW_INVALID (-2131748005)
 #define mtPRN_WRN_WIDTH_INVALID (-2131748006)
 #define mtPRN_WRN_IMAGE_OFFSET (-2131748007)
 #define mtPRN_WRN_IMAGE_LENGTH (-2131748008)
 #define mtPRN_ERR_SENSOR_DELAY (-1058006175)
 #define mtPRN_ERR_NO_PERIOD (-1058006176)
 #define mtPRN_ERR_WINDOW_INVALID (-1058006177)
 #define mtPRN_ERR_WIDTH_INVALID (-1058006178)
 #define mtPRN_ERR_PARAMETER_INVALID (-1058006179)
 #define mtPRN_ERR_LESS_POSITION (-1058006180)
 #define mtPRN_ERR_IMAGE_OFFSET (-1058006181)
 #define mtPRN_ERR_IMAGE_LENGTH (-1058006182)
 #define mtPRN_ERR_MEMORY (-1058006183)
 #define mtPRN_ERR_CYCLIC_READ (-1058006184)
#else
 _IEC_CONST signed long mtPRN_WRN_SENSOR_DELAY = -2131748003;
 _IEC_CONST signed long mtPRN_WRN_BUFFER_FULL = -2131748004;
 _IEC_CONST signed long mtPRN_WRN_WINDOW_INVALID = -2131748005;
 _IEC_CONST signed long mtPRN_WRN_WIDTH_INVALID = -2131748006;
 _IEC_CONST signed long mtPRN_WRN_IMAGE_OFFSET = -2131748007;
 _IEC_CONST signed long mtPRN_WRN_IMAGE_LENGTH = -2131748008;
 _IEC_CONST signed long mtPRN_ERR_SENSOR_DELAY = -1058006175;
 _IEC_CONST signed long mtPRN_ERR_NO_PERIOD = -1058006176;
 _IEC_CONST signed long mtPRN_ERR_WINDOW_INVALID = -1058006177;
 _IEC_CONST signed long mtPRN_ERR_WIDTH_INVALID = -1058006178;
 _IEC_CONST signed long mtPRN_ERR_PARAMETER_INVALID = -1058006179;
 _IEC_CONST signed long mtPRN_ERR_LESS_POSITION = -1058006180;
 _IEC_CONST signed long mtPRN_ERR_IMAGE_OFFSET = -1058006181;
 _IEC_CONST signed long mtPRN_ERR_IMAGE_LENGTH = -1058006182;
 _IEC_CONST signed long mtPRN_ERR_MEMORY = -1058006183;
 _IEC_CONST signed long mtPRN_ERR_CYCLIC_READ = -1058006184;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct MTPrintHWRegMarkCaptureParaType
{	unsigned char PositionSource;
	unsigned char MeassuredEdge;
	float MinRegMarkWidth;
	float MaxRegMarkWidth;
	float ExpectionWindowWidth;
	float SetRegMarkPosition;
	signed long SensorDelayTime;
} MTPrintHWRegMarkCaptureParaType;

typedef struct movAvg_internal_typ
{	plcstring statusTxt[101];
	float Ts;
	plcbit paraValid;
	plcbit update;
	unsigned short n;
	double sum;
	float buffer[128];
	unsigned long pBuffer;
	unsigned short i_act;
	unsigned short i_old;
	unsigned short base;
	unsigned short bufferLength;
	plcbit bufferFull;
	plcbit memAllocated;
	plcbit update_old;
	plcbit enable_old;
	unsigned long Bootkey;
} movAvg_internal_typ;

typedef struct movAvg_typ
{	plcbit enable;
	unsigned short window;
	plcbit update;
	float u;
	unsigned short status;
	float y;
	struct movAvg_internal_typ internal;
} movAvg_typ;

typedef struct MTPrintHWRegMarkCaptInternalType
{	float Ts;
	signed long AxisModuloPosition;
	float EdgeDetectMastertimePosition;
	float EdgeDetectSlavetimePosition;
	plcbit ParameterValid;
	unsigned long* AxisReference;
	struct MTPrintHWRegMarkCaptureParaType Parameter;
	unsigned char State;
	signed long AxisFactor;
	signed long AxisPeriod;
	signed long MaxExpectionPosition;
	signed long MinExpectionPosition;
	unsigned short ActBufferIndex;
	unsigned long PositionBufferPointer;
	unsigned long TimeBufferPointer;
	float AxisSpeed;
	unsigned long AxisSystemTime;
	unsigned long AxisUpdateTime;
	unsigned long NumberOfOccuredWindows;
	signed long EdgeDetectMastertimeOld;
	signed long LastSavedPosition;
	plcbit InExpectionWindow;
	plcbit InExpectionWindowOld;
	struct MC_BR_ReadCyclicPosition FunctionBlockReadCyclicPosition;
	struct MC_BR_CyclicReadDataInfo FunctionBlockCyclicDataInfo;
	struct MC_BR_CyclicRead FunctionBlockCyclicRead[2];
	struct MC_ReadParameter FunctionBlockReadParameter[2];
	struct movAvg_typ FunctionBlockMovingAverage;
	float ActRegMarkPositionErrorOld;
	plcbit Update;
	plcbit UpdateOld;
	plcbit EnableOld;
	unsigned long Bootkey;
	unsigned long SystemTimeOld;
	signed long ModuloPositionOld;
} MTPrintHWRegMarkCaptInternalType;

typedef struct MTPrintHWGetAxisValInternalType
{	float CycleTime;
	unsigned long Axis;
	unsigned char FubState;
	plcbit EnableOld;
	unsigned long AxisNettime;
	signed long AxisPosition;
	float AxisVelocity;
	struct MC_BR_CyclicRead MC_BR_CyclicRead_Time;
	struct MC_BR_CyclicRead MC_BR_CyclicRead_Pos;
	struct MC_BR_CyclicRead MC_BR_CyclicRead_Vel;
} MTPrintHWGetAxisValInternalType;

typedef struct MTPrintHWCalcTriggerInternalType
{	float CycleTime;
	plcbit ParameterValid;
	signed long ImageLength;
	signed long ImageOffset;
	plcbit EnableOld;
	plcbit UpdateOld;
	unsigned long AxisNettime;
	signed long AxisPosition;
	float AxisVelocity;
	float AxisAcc;
	signed long TriggerPosition;
	unsigned long TriggerTime;
	unsigned long LastTriggerTime;
	signed long DeltaPosition;
	float DeltaTime;
} MTPrintHWCalcTriggerInternalType;

typedef struct MTPrintHWTimeToPosInternalType
{	float CycleTime;
	plcbit ParameterValid;
	plcbit ActivatedEdge[40];
	plcbit EnableOld;
	plcbit UpdateOld;
	plcbit Record;
	plcbit StartRecordOld;
	unsigned long AxisNettime;
	signed long AxisPosition;
	signed long AxisPositionOld;
	unsigned short PositionCounter;
	unsigned long Time;
	signed long Position;
	unsigned long* pTime;
	signed long* pPosition;
} MTPrintHWTimeToPosInternalType;

typedef struct MTPrintHWRegMarkCapture
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	struct MTPrintHWRegMarkCaptureParaType Parameter;
	unsigned char MovingWindowLength;
	signed long EdgeDetectSlavetime;
	signed long EdgeDetectMastertime;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	float ActRegMarkPosition;
	float ActRegMarkPositionError;
	float ActRegMarkSize;
	unsigned long ValidRegMarks;
	unsigned long MissedRegMarks;
	float AverageRegMarkPositionError;
	/* VAR (analog) */
	struct MTPrintHWRegMarkCaptInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	plcbit SearchRegMark;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTPrintHWRegMarkCapture_typ;

typedef struct MTPrintHWGetAxisValues
{
	/* VAR_INPUT (analog) */
	unsigned long Axis;
	/* VAR_OUTPUT (analog) */
	unsigned char Active;
	unsigned char Busy;
	unsigned char Error;
	signed long StatusID;
	unsigned long AxisNettime;
	signed long AxisPosition;
	float AxisVelocity;
	/* VAR (analog) */
	struct MTPrintHWGetAxisValInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
} MTPrintHWGetAxisValues_typ;

typedef struct MTPrintHWCalcTrigger
{
	/* VAR_INPUT (analog) */
	signed long ImageLength;
	signed long ImageOffset;
	unsigned long AxisNettime;
	signed long AxisPosition;
	float AxisVelocity;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	unsigned long TriggerTime;
	signed long TriggerPosition;
	unsigned long LastTriggerTime;
	/* VAR (analog) */
	struct MTPrintHWCalcTriggerInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit Update;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
} MTPrintHWCalcTrigger_typ;

typedef struct MTPrintHWTimeToPosition
{
	/* VAR_INPUT (analog) */
	unsigned long EdgeTime[40];
	unsigned long AxisNettime;
	signed long AxisPosition;
	/* VAR_OUTPUT (analog) */
	signed long StatusID;
	signed long EdgePosition[40];
	/* VAR (analog) */
	struct MTPrintHWTimeToPosInternalType Internal;
	/* VAR_INPUT (digital) */
	plcbit Enable;
	plcbit ActivatedEdge[40];
	plcbit Update;
	plcbit StartRecord;
	/* VAR_OUTPUT (digital) */
	plcbit Active;
	plcbit Error;
	plcbit UpdateDone;
	plcbit NewPosition;
} MTPrintHWTimeToPosition_typ;



/* Prototyping of functions and function blocks */
void MTPrintHWRegMarkCapture(struct MTPrintHWRegMarkCapture* inst);
void MTPrintHWGetAxisValues(struct MTPrintHWGetAxisValues* inst);
void MTPrintHWCalcTrigger(struct MTPrintHWCalcTrigger* inst);
void MTPrintHWTimeToPosition(struct MTPrintHWTimeToPosition* inst);


#ifdef __cplusplus
};
#endif
#endif /* _MTPRINTHW_ */

