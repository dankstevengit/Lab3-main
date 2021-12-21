(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTSubsProp
 * File: MTSubsProp.typ
 * Author: B&R
 ********************************************************************
 * Data types of library MTSubsProp
 ********************************************************************)

TYPE
	MTSubsPropStatusEnum : 
		( (*Status information*)
		mtWARN_RELATIVE_HUMIDITY_LIMITED := 36480, (*Warning: Range of relative humidity is limited*)
		mtERR_IAPWS_REGION_NOT_SUPPORTED := 36481, (*Error: IAPWS conform region is not supported*)
		mtERR_PRESSURE_OUT_OF_REGION := 36482, (*Error: Pressure do not agree with pressure limits of IAPWS region*)
		mtERR_TEMPERATURE_OUT_OF_REGION := 36483, (*Error: Temperature do not agree with pressure limits of IAPWS region*)
		mtERR_REGION_3_NOT_SUPPORTED := 36484, (*Error: IAPWS-IF97 Region 3 not supported*)
		mtERR_NO_TEMP_PRESSURE_COUPLING := 36485, (*Error: Temperature and Pressure must be coupled in this Region*)
		mtERR_PRESSURE_EXCEED_LIMITS := 36486, (*Error: Input Pressure exceed supported range*)
		mtERR_TEMPERATURE_EXCEED_LIMITS := 36487, (*Error: Input Temperature exceed supported range*)
		mtERR_REL_HUMIDITY_EXCEED_LIMITS := 36488, (*Error: Relative humidity exceed supported range*)
		mtERR_UNBALANCED_MOLE_FRACTIONS := 36489 (*Warning: Sum of mole fractions not 100 % *)
		);
	MTSubsPropEnthalpyHumAirInternal : 	STRUCT  (*Enthalpy humid air parameters*)
		N2MolarFraction : LREAL; (*Molar fraction of Nitrogen in %*)
		O2MolarFraction : LREAL; (*Molar fraction of Oxygen in %*)
		ArMolarFraction : LREAL; (*Molar fraction of Argon in %*)
		N2MolarMass : LREAL; (*Molar mass of Nitrogen in kg / mol*)
		O2MolarMass : LREAL; (*Molar mass of Oxygen in kg / mol*)
		ArMolarMass : LREAL; (*Molar mass of Argon in kg / mol*)
		H2oMolarMass : LREAL; (*Molar mass of Water in kg / mol*)
		Bootkey : UDINT; (*Data for internal use.*)
	END_STRUCT;
END_TYPE
