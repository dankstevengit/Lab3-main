(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: MTSubsProp
 * File: MTSubsProp.fun
 * Author: B&R
 ********************************************************************
 * Functions and function blocks of library MTSubsProp
 ********************************************************************)

 FUNCTION_BLOCK MTSubsPropEnthalpyIAPWS (*Enthalpy of H2O according to IAPWS-IF97*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*)
		Region : USINT; (*Region (1,2,4,5) according to IAPWS-IF97*)
		Pressure : LREAL; (*Pressure in bar*)
		Temperature : LREAL; (*Temperature in °C*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Indicates an error*)
		StatusID : MTSubsPropStatusEnum; (*Status information*)
		EnthalpyFluid : LREAL; (*Specific enthalpy of liquid region (1, 4) in kJ/kg*)
		EnthalpyVapor : LREAL; (*Specific Enthalpy of vapour region (2, 4, 5) in kJ/kg*)
		TRngMax : LREAL; (*Upper temperature limit of defined region in °C*)
		TRngMin : LREAL; (*Lower temperature limit of defined region in °C*)
		TOutOfRng : BOOL; (*Temperature exceed limit*)
		PRngMax : LREAL; (*Upper pressure limit to defined region in bar*)
		PRngMin : LREAL; (*Lower pressure limit to defined region in bar*)
		POutOfRng : BOOL; (*Pressure exceed limit*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTSubsPropDensityIAPWS (*Density of H2O according to IAPWS-IF97*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*)
		Region : USINT; (*Region (1,2,4,5) according to IAPWS-IF97*)
		Pressure : LREAL; (*Pressure in bar*)
		Temperature : LREAL; (*Temperature in °C*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Indicates an error*)
		StatusID : MTSubsPropStatusEnum; (*Status information*)
		DensityFluid : LREAL; (*Density of liquid region (1, 4) in kg/m³*)
		DensityVapor : LREAL; (*Density of vapour region (2, 4, 5) in kg/m³*)
		TRngMax : LREAL; (*Upper temperature limit of defined region in °C*)
		TRngMin : LREAL; (*Lower temperature limit of defined region in °C*)
		TOutOfRng : BOOL; (*Temperature exceed limit*)
		PRngMax : LREAL; (*Upper pressure limit of defined region in bar*)
		PRngMin : LREAL; (*Lower pressure limit of defined region in bar*)
		POutOfRng : BOOL; (*Pressure exceed limit*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTSubsPropSatTemperatureIAPWS (*Saturation temperature according to IAPWS-IF97*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*)
		Pressure : LREAL; (*Pressure in bar*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Indicates an error*)
		StatusID : MTSubsPropStatusEnum; (*Status information*)
		Temperature : LREAL; (*Saturation temperature in °C*)
		PRngMax : LREAL; (*Upper pressure limit of defined region in bar*)
		PRngMin : LREAL; (*Lower pressure limit of defined region in bar*)
		POutOfRng : BOOL; (*Pressure exceed limit*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTSubsPropSatPressureIAPWS (*Saturation Pressure according to IAPWS-IF97*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*)
		Temperature : LREAL; (*Temperature in °C*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Indicates an error*)
		StatusID : MTSubsPropStatusEnum; (*Status information*)
		Pressure : LREAL; (*Saturation pressure in bar*)
		TRngMax : LREAL; (*Upper temperature limit of defined region in °C*)
		TRngMin : LREAL; (*Lower temperature limit of defined region in °C*)
		TOutOfRng : BOOL; (*Temperature exceed limit*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTSubsPropSubPressureIAPWS (*Sublimation pressure according to IAPWS-IF97*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*)
		Temperature : LREAL; (*Temperature in °C*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Indicates an error*)
		StatusID : MTSubsPropStatusEnum; (*Status information*)
		Pressure : LREAL; (*Sublimation pressure in bar*)
		TRngMax : LREAL; (*Upper temperature limit of defined region in °C*)
		TRngMin : LREAL; (*Lower temperature limit of defined region in °C*)
		TOutOfRng : BOOL; (*Temperature exceed limit*)
	END_VAR
END_FUNCTION_BLOCK

 FUNCTION_BLOCK MTSubsPropEnthalpyHumAir (*Enthalpy of humid air according to VDI4670 and IAPWS-IF97*)
	VAR_INPUT
		Enable : BOOL; (*Enables/Disables the function block.*)
		Pressure : LREAL; (*Pressure in bar*)
		Temperature : LREAL; (*Temperature in °C*)
		RelHum : LREAL; (*Relative humidity in %*)
	END_VAR
	VAR_OUTPUT
		Active : BOOL; (*Function block is active*)
		Error : BOOL; (*Indicates an error*)
		StatusID : MTSubsPropStatusEnum; (*Status information*)
		Enthalpy : LREAL; (*Sum of enthalpy in kJ / kg*)
		EnthalpyAir : LREAL; (*Enthalpy of air in kJ / kg*)
		EnthalpyH2o : LREAL; (*Enthalpy of water in kJ / kg*)
		MolMassDryAir : LREAL; (*Mol mass of dry air in kg / mol*)
		SPressure : LREAL; (*Sublimation / saturation pressure in bar*)
		DewPoint : LREAL; (*Dew point in °C*)
		MoistureCont : LREAL; (*Absolute humidity (such as kg H2O / kg air)*)
		MaxMoistureCont : LREAL; (*Maximal possible humidity according to saturated air  (such as kg H2O / kg air)*)
		RelHumOutOfRng : BOOL; (*TRUE if pressure to according region is out of valid range*)
		RelHumMax : LREAL; (*Maximal possible relative humidity according to Pressure in %*)
		TRngMax : LREAL; (*Upper temperature limit of defined region in °C*)
		TRngMin : LREAL; (*Lower temperature limit of defined region in °C*)
		TOutOfRng : BOOL; (*Temperature exceed limit*)
		PRngMax : LREAL; (*Upper pressure limit of defined region in bar*)
		PRngMin : LREAL; (*Lower pressure limit of defined region in bar*)
		POutOfRng : BOOL; (*Pressure exceed limit*)
	END_VAR
	VAR
		Internal : MTSubsPropEnthalpyHumAirInternal; (*Data for internal use*)
	END_VAR
END_FUNCTION_BLOCK
