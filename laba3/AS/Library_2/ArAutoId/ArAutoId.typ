                                                                      
TYPE
	ArAutoIdOperationStatusEnum : 
	(
		AIOS_SUCCESS					:= 0,
		AIOS_MISC_ERROR_TOTAL			:= 1,
		AIOS_MISC_ERROR_PARTIAL			:= 2,
		AIOS_PERMISSON_ERROR			:= 3,
		AIOS_PASSWORD_ERROR				:= 4,
		AIOS_REGION_NOT_FOUND_ERROR		:= 5,
		AIOS_OP_NOT_POSSIBLE_ERROR		:= 6,
		AIOS_OUT_OF_RANGE_ERROR			:= 7,
		AIOS_NO_IDENTIFIER				:= 8,
		AIOS_MULTIPLE_IDENTIFIERS		:= 9,
		AIOS_READ_ERROR					:= 10,
		AIOS_DECODING_ERROR				:= 11,
		AIOS_MATCH_ERROR				:= 12,
		AIOS_CODE_NOT_SUPPORTED			:= 13,
		AIOS_WRITE_ERROR				:= 14,
		AIOS_NOT_SUPPORTED_BY_DEVICE	:= 15,
		AIOS_NOT_SUPPORTED_BY_TAG		:= 16,
		AIOS_DEVICE_NOT_READY			:= 17,
		AIOS_INVALID_CONFIGURATION		:= 18,
		AIOS_RF_COMMUNICATION_ERROR		:= 19,
		AIOS_DEVICE_FAULT				:= 20,
		AIOS_TAG_HAS_LOW_BATTERY		:= 21
	);
	ArAutoIdDeviceStatusEnum :
	(
		AIDS_Idle						:= 0,
		AIDS_Error						:= 1,
		AIDS_Scanning					:= 2,
		AIDS_Busy						:= 3
	);
	ArAutoIdLocationTypeEnum :
	(
		AILT_NMEA						:= 0,
		AILT_LOCAL						:= 1,
		AILT_WGS84						:= 2,
		AILT_NAME						:= 3
	);
	ArAutoIdRfidLockOperationEnum :
	(
		AILO_Lock						:= 0,
		AILO_Unlock						:= 1,
		AILO_PermanentLock				:= 2,
		AILO_PermanentUnlock			:= 3
	);
	ArAutoIdRfidLockRegionEnum :
	(
		AIRLR_Kill						:= 0,
		AIRLR_Access					:= 1,
		AIRLR_EPC						:= 2,
		AIRLR_TID						:= 3,
		AIRLR_User						:= 4
	);
	ArAutoIdRfidPasswordTypeEnum :
	(
		AIRPT_Access					:= 0,
		AIRPT_Kill						:= 1,
		AIRPT_Read						:= 2,
		AIRPT_Write						:= 3
	);

	ArAutoIdAntennaNameIdPairType : STRUCT
		AntennaId				: UDINT;
		AntennaName				: STRING[80];
	END_STRUCT;

	ArAutoIdLocalCoordinateType : STRUCT
		X						: LREAL;
		Y						: LREAL;
		Z						: LREAL;
		Timestamp				: DATE_AND_TIME;
		DilutionOfPrecision		: LREAL;
		UsefulPrecision			: DINT;
	END_STRUCT;

	ArAutoIdPositionType : STRUCT
		PositionX				: DINT;
		PositionY				: DINT;
		SizeX					: DINT;
		SizeY					: DINT;
		Rotation				: DINT;
	END_STRUCT;

	ArAutoIdRfidSightingType : STRUCT
		Antenna					: DINT;
		Strength				: DINT;
		Timestamp				: DATE_AND_TIME;
		CurrentPowerLevel		: DINT;
	END_STRUCT;

	ArAutoIdRotationType : STRUCT
		Yaw						: LREAL;
		Pitch					: LREAL;
		Roll					: LREAL;
	END_STRUCT;

	ArAutoIdScanDataEpcType : STRUCT
		PC						: UINT;
		UId						: UAByteString;
		XPC_W1					: UINT;
		XPC_W2					: UINT;
	END_STRUCT;

	ArAutoIdScanResultType : STRUCT
		LocationSpecified		: BOOL;
		Reserved				: UDINT;
		CodeType				: STRING[80];
		ScanData				: ArAutoIdScanDataType;
		Timestamp				: DATE_AND_TIME;
		Location				: ArAutoIdLocationType;
	END_STRUCT;

	ArAutoIdOcrScanResultType : STRUCT
		LocationSpecified		: BOOL;
		FontSpecified			: BOOL;
		DecodingTimeSpecified	: BOOL;
		Reserved				: UDINT;
		CodeType				: STRING[80];
		ScanData				: ArAutoIdScanDataType;
		Timestamp				: DATE_AND_TIME;
		Location				: ArAutoIdLocationType;
		ImageId					: UANodeID;
		Quality					: USINT;
		Position				: ArAutoIdPositionType;
		Font					: STRING[80];
		DecodingTime			: DATE_AND_TIME;
	END_STRUCT;

	ArAutoIdOpticalScanResultType : STRUCT
		LocationSpecified		: BOOL;
		GradeSpecified			: BOOL;
		PositionSpecified		: BOOL;
		SmybologySpecified		: BOOL;
		ImageIdSpecified		: BOOL;
		Reserved				: UDINT;
		CodeType				: STRING[80];
		ScanData				: ArAutoIdScanDataType;
		Timestamp				: DATE_AND_TIME;
		Location				: ArAutoIdLocationType;
		Grade					: REAL;
		Position				: ArAutoIdPositionType;
		Symbology				: STRING[16];
		ImageId					: UANodeID;
	END_STRUCT;

	ArAutoIdVerifierScanResultType : STRUCT
		LocationSpecified		: BOOL;
		Reserved				: UDINT;
		CodeType				: STRING[80];
		ScanData				: ArAutoIdScanDataType;
		Timestamp				: DATE_AND_TIME;
		Location				: ArAutoIdLocationType;
		IsoGrade				: STRING[16];
		RMin					: INT;
		SymbolContrast			: INT;
		ECMin					: INT;
		Modulation				: INT;
		Defects					: INT;
		Decodability			: INT;
		Decode_					: INT;
		PrintGain				: INT;
	END_STRUCT;

	ArAutoIdRfidScanResultType : STRUCT
		LocationSpecified		: BOOL;
		Reserved				: UDINT;
		CodeType				: STRING[80];
		ScanData				: ArAutoIdScanDataType;
		Timestamp				: DATE_AND_TIME;
		Location				: ArAutoIdLocationType;
		NoOfSighting			: UANoOfElements;
		Sighting				: ARRAY[0..31] OF ArAutoIdRfidSightingType;
	END_STRUCT;

	ArAutoIdRtlsLocationResultType : STRUCT
		LocationSpecified		: BOOL;
		Reserved				: UDINT;
		CodeType				: STRING[80];
		ScanData				: ArAutoIdScanDataType;
		Timestamp				: DATE_AND_TIME;
		Location				: ArAutoIdLocationType;
		Speed					: LREAL;
		Heading					: LREAL;
		Rotation				: ArAutoIdRotationType;
		ReceiveTime				: DATE_AND_TIME;
	END_STRUCT;

	ArAutoIdScanSettingsType : STRUCT
		LocationTypeSpecified	: BOOL;
		Reserved				: UDINT;
		Duration				: LREAL;
		Cycles					: DINT;
		DataAvailable			: BOOL;
		LocationType			: ArAutoIdLocationTypeEnum;
	END_STRUCT;

	ArAutoIdLocationType : STRUCT
		SwitchField				: ArAutoIdLocationTypeEnum;
		NMEA					: STRING[82];
		Local					: ArAutoIdLocalCoordinateType;
		WGS84					: ArAutoIdWGS84CoordinateType;
		LocationName			: STRING[80];
	END_STRUCT;

	ArAutoIdScanDataType : STRUCT
		SwitchField				: UDINT;
		ByteString				: UAByteString;
		String					: STRING[1024];
		Epc						: ArAutoIdScanDataEpcType;
		Custom					: UAVariantData;
	END_STRUCT;

	ArAutoIdWGS84CoordinateType : STRUCT
		N_S_Hemisphere			: STRING[1];
		Latitute				: LREAL;
		E_W_Hemisphere			: STRING[1];
		Longitude				: LREAL;
		Altitude				: LREAL;
		Timestamp				: DATE_AND_TIME;
		DilutionOfPrecision		: LREAL;
		UsefulPrecisionLatLon	: DINT;
		UsefulPrecisionAlt		: DINT;
	END_STRUCT;

END_TYPE
