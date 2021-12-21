/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASIOVIB_
#define _ASIOVIB_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <AsFltGen.h>
#include <brsystem.h>
#include <sys_lib.h>
#include <AsIOAcc.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define vbioERR_INT_MOD_CFG_UPLOAD_08 36233U
 #define vbioERR_INT_AI_CFG_02 36231U
 #define vbioERR_INT_AI_CFG_01 36230U
 #define vbioERR_INT_FLT_RECEIVE_BUF_01 36228U
 #define vbioERR_INT_MOD_CFG_UPLOAD_07 36227U
 #define vbioERR_INT_MOD_CFG_UPLOAD_06 36226U
 #define vbioERR_INT_MOD_CFG_UPLOAD_05 36225U
 #define vbioERR_INT_MOD_CFG_UPLOAD_04 36224U
 #define vbioERR_INT_MOD_CFG_UPLOAD_03 36223U
 #define vbioERR_INT_MOD_CFG_UPLOAD_02 36222U
 #define vbioERR_INT_MOD_CFG_UPLOAD_01 36221U
 #define vbioERR_INT_BUFFER_UPLOAD_01 36220U
 #define vbioERR_UPLOAD_BUFFER_NR1 36219U
 #define vbioERR_BUFFER_UPLOAD_ARRAYNR 36218U
 #define vbioERR_MODULE_OK 36216U
 #define vbioERR_POINTER_BUF_X_AXIS 36211U
 #define vbioERR_POINTER_BUF_Y_AXIS 36210U
 #define vbioERR_MODULE_PATH 36209U
 #define vbioERR_SENSOR_SENSITVITY 36208U
 #define vbioERR_BUFFER_UPLOAD_ARRAY 36207U
 #define vbioERR_UPLOAD_BUFFER_NR 36206U
 #define vbioERR_MOD_CFG_NOT_READ 36201U
 #define vbioERR_MOD_NOT_LOCKED 36200U
 #define vbioINT_FLTUP_BUF_MAX_INDEX 32U
#else
 _IEC_CONST unsigned short vbioERR_INT_MOD_CFG_UPLOAD_08 = 36233U;
 _IEC_CONST unsigned short vbioERR_INT_AI_CFG_02 = 36231U;
 _IEC_CONST unsigned short vbioERR_INT_AI_CFG_01 = 36230U;
 _IEC_CONST unsigned short vbioERR_INT_FLT_RECEIVE_BUF_01 = 36228U;
 _IEC_CONST unsigned short vbioERR_INT_MOD_CFG_UPLOAD_07 = 36227U;
 _IEC_CONST unsigned short vbioERR_INT_MOD_CFG_UPLOAD_06 = 36226U;
 _IEC_CONST unsigned short vbioERR_INT_MOD_CFG_UPLOAD_05 = 36225U;
 _IEC_CONST unsigned short vbioERR_INT_MOD_CFG_UPLOAD_04 = 36224U;
 _IEC_CONST unsigned short vbioERR_INT_MOD_CFG_UPLOAD_03 = 36223U;
 _IEC_CONST unsigned short vbioERR_INT_MOD_CFG_UPLOAD_02 = 36222U;
 _IEC_CONST unsigned short vbioERR_INT_MOD_CFG_UPLOAD_01 = 36221U;
 _IEC_CONST unsigned short vbioERR_INT_BUFFER_UPLOAD_01 = 36220U;
 _IEC_CONST unsigned short vbioERR_UPLOAD_BUFFER_NR1 = 36219U;
 _IEC_CONST unsigned short vbioERR_BUFFER_UPLOAD_ARRAYNR = 36218U;
 _IEC_CONST unsigned short vbioERR_MODULE_OK = 36216U;
 _IEC_CONST unsigned short vbioERR_POINTER_BUF_X_AXIS = 36211U;
 _IEC_CONST unsigned short vbioERR_POINTER_BUF_Y_AXIS = 36210U;
 _IEC_CONST unsigned short vbioERR_MODULE_PATH = 36209U;
 _IEC_CONST unsigned short vbioERR_SENSOR_SENSITVITY = 36208U;
 _IEC_CONST unsigned short vbioERR_BUFFER_UPLOAD_ARRAY = 36207U;
 _IEC_CONST unsigned short vbioERR_UPLOAD_BUFFER_NR = 36206U;
 _IEC_CONST unsigned short vbioERR_MOD_CFG_NOT_READ = 36201U;
 _IEC_CONST unsigned short vbioERR_MOD_NOT_LOCKED = 36200U;
 _IEC_CONST unsigned short vbioINT_FLTUP_BUF_MAX_INDEX = 32U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct vbioIoMapping_t
{	plcbit RequestBufferLock01;
	plcbit BufferLockValid01;
	unsigned char BufferInputSequence01;
	unsigned char BufferRxByte01;
	unsigned char BufferRxByte02;
	unsigned char BufferRxByte03;
	unsigned char BufferRxByte04;
	unsigned char BufferRxByte05;
	unsigned char BufferOutputSequence01;
	unsigned char BufferTxByte01;
	unsigned char BufferTxByte02;
	unsigned char BufferTxByte03;
	unsigned char BufferTxByte04;
} vbioIoMapping_t;

typedef struct vbioParamMain_t
{	unsigned long pModulePath;
	float sensitivitySensor01;
	float sensitivitySensor02;
	float sensitivitySensor03;
	float sensitivitySensor04;
} vbioParamMain_t;

typedef struct vbioParamBufferUpload_t
{	unsigned short moduleBuffer;
	unsigned long nrArrayElements;
	float* pArrayXaxis;
	float* pArrayYaxis;
} vbioParamBufferUpload_t;

typedef struct vbioChannelCfg_t
{	float analogInputScaling;
	plcbit analogInputCalculationEnabled;
	unsigned char analogInputMode;
	unsigned char analogInputSignalSource;
	unsigned short analogInputSamples;
	plcbit analogInputTriggered;
	plcbit isVelocitySignalEnabled;
	float maxFrequencyRaw;
	float minFrequencyRaw;
	float frequencyResolutionSpectrumRaw;
	float totalBufferTimeRaw;
	float sampleTimeRaw;
	float maxFrequencyEnv;
	float minFrequencyEnv;
	float frequencyResolutionSpectrumEnv;
	float totalBufferTimeEnv;
	float sampleTimeEnv;
	plcbit isCurrentSupplyActive;
} vbioChannelCfg_t;

typedef struct vbioFrequencyBandCfg_t
{	plcbit isRmsValue;
	plcbit isNoise;
	unsigned char noiseQuadrantNr;
	unsigned char channelNr;
	plcbit isCoupled;
	unsigned char actSpeedNr;
	plcbit useHarmonics;
	plcbit isEnvelope;
	plcbit isVelocity;
	float normalizedDamageFrequency;
	float toleranceBand;
	float minFrequency;
	float maxFrequency;
} vbioFrequencyBandCfg_t;

typedef struct vbioModuleCfg_t
{	float highFrequencyConfig;
	struct vbioChannelCfg_t channel01;
	struct vbioChannelCfg_t channel02;
	struct vbioChannelCfg_t channel03;
	struct vbioChannelCfg_t channel04;
	struct vbioFrequencyBandCfg_t frequencyBand01;
	struct vbioFrequencyBandCfg_t frequencyBand02;
	struct vbioFrequencyBandCfg_t frequencyBand03;
	struct vbioFrequencyBandCfg_t frequencyBand04;
	struct vbioFrequencyBandCfg_t frequencyBand05;
	struct vbioFrequencyBandCfg_t frequencyBand06;
	struct vbioFrequencyBandCfg_t frequencyBand07;
	struct vbioFrequencyBandCfg_t frequencyBand08;
	struct vbioFrequencyBandCfg_t frequencyBand09;
	struct vbioFrequencyBandCfg_t frequencyBand10;
	struct vbioFrequencyBandCfg_t frequencyBand11;
	struct vbioFrequencyBandCfg_t frequencyBand12;
	struct vbioFrequencyBandCfg_t frequencyBand13;
	struct vbioFrequencyBandCfg_t frequencyBand14;
	struct vbioFrequencyBandCfg_t frequencyBand15;
	struct vbioFrequencyBandCfg_t frequencyBand16;
	struct vbioFrequencyBandCfg_t frequencyBand17;
	struct vbioFrequencyBandCfg_t frequencyBand18;
	struct vbioFrequencyBandCfg_t frequencyBand19;
	struct vbioFrequencyBandCfg_t frequencyBand20;
	struct vbioFrequencyBandCfg_t frequencyBand21;
	struct vbioFrequencyBandCfg_t frequencyBand22;
	struct vbioFrequencyBandCfg_t frequencyBand23;
	struct vbioFrequencyBandCfg_t frequencyBand24;
	struct vbioFrequencyBandCfg_t frequencyBand25;
	struct vbioFrequencyBandCfg_t frequencyBand26;
	struct vbioFrequencyBandCfg_t frequencyBand27;
	struct vbioFrequencyBandCfg_t frequencyBand28;
	struct vbioFrequencyBandCfg_t frequencyBand29;
	struct vbioFrequencyBandCfg_t frequencyBand30;
	struct vbioFrequencyBandCfg_t frequencyBand31;
	struct vbioFrequencyBandCfg_t frequencyBand32;
} vbioModuleCfg_t;

typedef struct vbioModuleCfgEx_t
{	float highFrequencyConfig;
	plcbit is64kUploadBuffer;
	struct vbioChannelCfg_t channel01;
	struct vbioChannelCfg_t channel02;
	struct vbioChannelCfg_t channel03;
	struct vbioChannelCfg_t channel04;
	struct vbioFrequencyBandCfg_t frequencyBand01;
	struct vbioFrequencyBandCfg_t frequencyBand02;
	struct vbioFrequencyBandCfg_t frequencyBand03;
	struct vbioFrequencyBandCfg_t frequencyBand04;
	struct vbioFrequencyBandCfg_t frequencyBand05;
	struct vbioFrequencyBandCfg_t frequencyBand06;
	struct vbioFrequencyBandCfg_t frequencyBand07;
	struct vbioFrequencyBandCfg_t frequencyBand08;
	struct vbioFrequencyBandCfg_t frequencyBand09;
	struct vbioFrequencyBandCfg_t frequencyBand10;
	struct vbioFrequencyBandCfg_t frequencyBand11;
	struct vbioFrequencyBandCfg_t frequencyBand12;
	struct vbioFrequencyBandCfg_t frequencyBand13;
	struct vbioFrequencyBandCfg_t frequencyBand14;
	struct vbioFrequencyBandCfg_t frequencyBand15;
	struct vbioFrequencyBandCfg_t frequencyBand16;
	struct vbioFrequencyBandCfg_t frequencyBand17;
	struct vbioFrequencyBandCfg_t frequencyBand18;
	struct vbioFrequencyBandCfg_t frequencyBand19;
	struct vbioFrequencyBandCfg_t frequencyBand20;
	struct vbioFrequencyBandCfg_t frequencyBand21;
	struct vbioFrequencyBandCfg_t frequencyBand22;
	struct vbioFrequencyBandCfg_t frequencyBand23;
	struct vbioFrequencyBandCfg_t frequencyBand24;
	struct vbioFrequencyBandCfg_t frequencyBand25;
	struct vbioFrequencyBandCfg_t frequencyBand26;
	struct vbioFrequencyBandCfg_t frequencyBand27;
	struct vbioFrequencyBandCfg_t frequencyBand28;
	struct vbioFrequencyBandCfg_t frequencyBand29;
	struct vbioFrequencyBandCfg_t frequencyBand30;
	struct vbioFrequencyBandCfg_t frequencyBand31;
	struct vbioFrequencyBandCfg_t frequencyBand32;
} vbioModuleCfgEx_t;

typedef struct vbioInternalParamMain_t
{	float scalingCorrSensor[6];
} vbioInternalParamMain_t;

typedef struct vbioInternalFltReceiveQueue_t
{	unsigned char receiveBuffer[128];
	signed short bufferNextReadIndex;
	unsigned char dataSize;
	unsigned long dequeuedElemCnt;
	unsigned long pFltRead;
} vbioInternalFltReceiveQueue_t;

typedef struct vbioInternalFltBuf_t
{	signed short state;
	struct fltRead fubFltRead;
	struct fltWrite fubFltWrite;
	float scalingYaxis;
	float scalingXaxis;
	unsigned char sendBufferRequest[3];
	struct vbioInternalFltReceiveQueue_t receiveQueue;
	unsigned char sendBufferEmpty[1];
	plcbit uploadBufferOld;
	unsigned short moduleBuffer;
	plcbit completeInSaveMode;
	unsigned long nrArrayElements;
} vbioInternalFltBuf_t;

typedef struct vbioInternalModuleCfgBuf_t
{	float highFrequencyConfig;
	struct vbioChannelCfg_t channel[4];
	struct vbioFrequencyBandCfg_t frequencyBand[32];
} vbioInternalModuleCfgBuf_t;

typedef struct vbioInternalAccRead_t
{	plcbit enable;
	unsigned short status;
	unsigned long value;
	unsigned long pChannelName;
	unsigned long pDeviceName;
	unsigned char nodeNr;
	unsigned short registerNr;
	unsigned char size;
	unsigned char fubAccReadSG4SGC[64];
} vbioInternalAccRead_t;

typedef struct vbioInternalModuleCfg_t
{	unsigned short state;
	struct vbioInternalAccRead_t fubAccRead;
	unsigned char cntFrequencyBand;
	plcbit uploadModuleCfg;
	plcbit uploadModuleCfgOld;
	plcbit moduleCfgUploadStartup;
} vbioInternalModuleCfg_t;

typedef struct vbioInternalAi_t
{	unsigned char aiScalingCorrIndex[4];
} vbioInternalAi_t;

typedef struct vbioInternalStartup_t
{	signed short state;
	plcbit moduleCfgUploadDoneOnce;
	unsigned long bootkey;
	plcbit paraModulePathValid;
	plcbit initDone;
} vbioInternalStartup_t;

typedef struct vbioInternal_t
{	plcstring statusTxt[201];
	struct vbioInternalParamMain_t paramMain;
	struct vbioInternalModuleCfgBuf_t moduleCfgOutBuf;
	struct vbioInternalStartup_t startup;
	struct vbioInternalFltBuf_t fltBuf;
	struct vbioInternalModuleCfg_t moduleCfg;
	unsigned long bufferUploadLength;
	plcbit bufferUploadDone;
	plcbit moduleCfgUploadDone;
	unsigned short status;
	plcbit bufferLockValidOld;
	plcbit enableOld;
	plcbit acknowledgeErrorOld;
} vbioInternal_t;

typedef struct vbioCM4810
{
	/* VAR_INPUT (analog) */
	struct vbioParamMain_t paramMain;
	struct vbioParamBufferUpload_t paramBufferUpload;
	struct vbioIoMapping_t ioMapping;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long bufferUploadLength;
	struct vbioModuleCfg_t moduleCfg;
	/* VAR (analog) */
	unsigned short _mode;
	struct vbioInternal_t _internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit requestBufferLock;
	plcbit uploadBuffer;
	plcbit uploadModuleCfg;
	plcbit acknowledgeError;
	/* VAR_OUTPUT (digital) */
	plcbit bufferLockValid;
	plcbit bufferUploadDone;
	plcbit moduleCfgUploadDone;
	plcbit initDone;
} vbioCM4810_typ;

typedef struct vbioCtrlCM4810
{
	/* VAR_INPUT (analog) */
	struct vbioParamMain_t paramMain;
	struct vbioParamBufferUpload_t paramBufferUpload;
	struct vbioIoMapping_t ioMapping;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long bufferUploadLength;
	struct vbioModuleCfgEx_t moduleCfg;
	/* VAR (analog) */
	unsigned short _mode;
	unsigned long _flags;
	unsigned char _buffer[32];
	struct vbioInternal_t _internal;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit requestBufferLock;
	plcbit uploadBuffer;
	plcbit uploadModuleCfg;
	plcbit acknowledgeError;
	/* VAR_OUTPUT (digital) */
	plcbit bufferLockValid;
	plcbit bufferUploadDone;
	plcbit moduleCfgUploadDone;
	plcbit initDone;
} vbioCtrlCM4810_typ;



/* Prototyping of functions and function blocks */
void vbioCM4810(struct vbioCM4810* inst);
void vbioCtrlCM4810(struct vbioCtrlCM4810* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASIOVIB_ */

