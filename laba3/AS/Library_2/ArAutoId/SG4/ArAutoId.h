/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ARAUTOID_
#define _ARAUTOID_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>
#include <AsOpcUac.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Datatypes and datatypes of function blocks */
typedef enum ArAutoIdOperationStatusEnum
{	AIOS_SUCCESS = 0,
	AIOS_MISC_ERROR_TOTAL = 1,
	AIOS_MISC_ERROR_PARTIAL = 2,
	AIOS_PERMISSON_ERROR = 3,
	AIOS_PASSWORD_ERROR = 4,
	AIOS_REGION_NOT_FOUND_ERROR = 5,
	AIOS_OP_NOT_POSSIBLE_ERROR = 6,
	AIOS_OUT_OF_RANGE_ERROR = 7,
	AIOS_NO_IDENTIFIER = 8,
	AIOS_MULTIPLE_IDENTIFIERS = 9,
	AIOS_READ_ERROR = 10,
	AIOS_DECODING_ERROR = 11,
	AIOS_MATCH_ERROR = 12,
	AIOS_CODE_NOT_SUPPORTED = 13,
	AIOS_WRITE_ERROR = 14,
	AIOS_NOT_SUPPORTED_BY_DEVICE = 15,
	AIOS_NOT_SUPPORTED_BY_TAG = 16,
	AIOS_DEVICE_NOT_READY = 17,
	AIOS_INVALID_CONFIGURATION = 18,
	AIOS_RF_COMMUNICATION_ERROR = 19,
	AIOS_DEVICE_FAULT = 20,
	AIOS_TAG_HAS_LOW_BATTERY = 21
} ArAutoIdOperationStatusEnum;

typedef enum ArAutoIdDeviceStatusEnum
{	AIDS_Idle = 0,
	AIDS_Error = 1,
	AIDS_Scanning = 2,
	AIDS_Busy = 3
} ArAutoIdDeviceStatusEnum;

typedef enum ArAutoIdLocationTypeEnum
{	AILT_NMEA = 0,
	AILT_LOCAL = 1,
	AILT_WGS84 = 2,
	AILT_NAME = 3
} ArAutoIdLocationTypeEnum;

typedef enum ArAutoIdRfidLockOperationEnum
{	AILO_Lock = 0,
	AILO_Unlock = 1,
	AILO_PermanentLock = 2,
	AILO_PermanentUnlock = 3
} ArAutoIdRfidLockOperationEnum;

typedef enum ArAutoIdRfidLockRegionEnum
{	AIRLR_Kill = 0,
	AIRLR_Access = 1,
	AIRLR_EPC = 2,
	AIRLR_TID = 3,
	AIRLR_User = 4
} ArAutoIdRfidLockRegionEnum;

typedef enum ArAutoIdRfidPasswordTypeEnum
{	AIRPT_Access = 0,
	AIRPT_Kill = 1,
	AIRPT_Read = 2,
	AIRPT_Write = 3
} ArAutoIdRfidPasswordTypeEnum;

typedef struct ArAutoIdAntennaNameIdPairType
{	unsigned long AntennaId;
	plcstring AntennaName[81];
} ArAutoIdAntennaNameIdPairType;

typedef struct ArAutoIdLocalCoordinateType
{	double X;
	double Y;
	double Z;
	plcdt Timestamp;
	double DilutionOfPrecision;
	signed long UsefulPrecision;
} ArAutoIdLocalCoordinateType;

typedef struct ArAutoIdPositionType
{	signed long PositionX;
	signed long PositionY;
	signed long SizeX;
	signed long SizeY;
	signed long Rotation;
} ArAutoIdPositionType;

typedef struct ArAutoIdRfidSightingType
{	signed long Antenna;
	signed long Strength;
	plcdt Timestamp;
	signed long CurrentPowerLevel;
} ArAutoIdRfidSightingType;

typedef struct ArAutoIdRotationType
{	double Yaw;
	double Pitch;
	double Roll;
} ArAutoIdRotationType;

typedef struct ArAutoIdScanDataEpcType
{	unsigned short PC;
	struct UAByteString UId;
	unsigned short XPC_W1;
	unsigned short XPC_W2;
} ArAutoIdScanDataEpcType;

typedef struct ArAutoIdScanDataType
{	unsigned long SwitchField;
	struct UAByteString ByteString;
	plcstring String[1025];
	struct ArAutoIdScanDataEpcType Epc;
	struct UAVariantData Custom;
} ArAutoIdScanDataType;

typedef struct ArAutoIdWGS84CoordinateType
{	plcstring N_S_Hemisphere[2];
	double Latitute;
	plcstring E_W_Hemisphere[2];
	double Longitude;
	double Altitude;
	plcdt Timestamp;
	double DilutionOfPrecision;
	signed long UsefulPrecisionLatLon;
	signed long UsefulPrecisionAlt;
} ArAutoIdWGS84CoordinateType;

typedef struct ArAutoIdLocationType
{	enum ArAutoIdLocationTypeEnum SwitchField;
	plcstring NMEA[83];
	struct ArAutoIdLocalCoordinateType Local;
	struct ArAutoIdWGS84CoordinateType WGS84;
	plcstring LocationName[81];
} ArAutoIdLocationType;

typedef struct ArAutoIdScanResultType
{	plcbit LocationSpecified;
	unsigned long Reserved;
	plcstring CodeType[81];
	struct ArAutoIdScanDataType ScanData;
	plcdt Timestamp;
	struct ArAutoIdLocationType Location;
} ArAutoIdScanResultType;

typedef struct ArAutoIdOcrScanResultType
{	plcbit LocationSpecified;
	plcbit FontSpecified;
	plcbit DecodingTimeSpecified;
	unsigned long Reserved;
	plcstring CodeType[81];
	struct ArAutoIdScanDataType ScanData;
	plcdt Timestamp;
	struct ArAutoIdLocationType Location;
	struct UANodeID ImageId;
	unsigned char Quality;
	struct ArAutoIdPositionType Position;
	plcstring Font[81];
	plcdt DecodingTime;
} ArAutoIdOcrScanResultType;

typedef struct ArAutoIdOpticalScanResultType
{	plcbit LocationSpecified;
	plcbit GradeSpecified;
	plcbit PositionSpecified;
	plcbit SmybologySpecified;
	plcbit ImageIdSpecified;
	unsigned long Reserved;
	plcstring CodeType[81];
	struct ArAutoIdScanDataType ScanData;
	plcdt Timestamp;
	struct ArAutoIdLocationType Location;
	float Grade;
	struct ArAutoIdPositionType Position;
	plcstring Symbology[17];
	struct UANodeID ImageId;
} ArAutoIdOpticalScanResultType;

typedef struct ArAutoIdVerifierScanResultType
{	plcbit LocationSpecified;
	unsigned long Reserved;
	plcstring CodeType[81];
	struct ArAutoIdScanDataType ScanData;
	plcdt Timestamp;
	struct ArAutoIdLocationType Location;
	plcstring IsoGrade[17];
	signed short RMin;
	signed short SymbolContrast;
	signed short ECMin;
	signed short Modulation;
	signed short Defects;
	signed short Decodability;
	signed short Decode_;
	signed short PrintGain;
} ArAutoIdVerifierScanResultType;

typedef struct ArAutoIdRfidScanResultType
{	plcbit LocationSpecified;
	unsigned long Reserved;
	plcstring CodeType[81];
	struct ArAutoIdScanDataType ScanData;
	plcdt Timestamp;
	struct ArAutoIdLocationType Location;
	UANoOfElements NoOfSighting;
	struct ArAutoIdRfidSightingType Sighting[32];
} ArAutoIdRfidScanResultType;

typedef struct ArAutoIdRtlsLocationResultType
{	plcbit LocationSpecified;
	unsigned long Reserved;
	plcstring CodeType[81];
	struct ArAutoIdScanDataType ScanData;
	plcdt Timestamp;
	struct ArAutoIdLocationType Location;
	double Speed;
	double Heading;
	struct ArAutoIdRotationType Rotation;
	plcdt ReceiveTime;
} ArAutoIdRtlsLocationResultType;

typedef struct ArAutoIdScanSettingsType
{	plcbit LocationTypeSpecified;
	unsigned long Reserved;
	double Duration;
	signed long Cycles;
	plcbit DataAvailable;
	enum ArAutoIdLocationTypeEnum LocationType;
} ArAutoIdScanSettingsType;






#ifdef __cplusplus
};
#endif
#endif /* _ARAUTOID_ */

