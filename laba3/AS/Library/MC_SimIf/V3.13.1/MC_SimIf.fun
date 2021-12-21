
FUNCTION_BLOCK MC_BR_ReadLoadSimInputData
	VAR_INPUT
		Axis : UDINT;
		Enable : BOOL;
	END_VAR
	VAR_OUTPUT
		Valid : BOOL;
		Busy : BOOL;
		Error : BOOL;
		ErrorID : UINT;
		LoadSimInputData : MC_LOAD_SIM_INPUT_DATA_REF;
	END_VAR
	VAR
		C_Axis : UDINT;
		IS : MC_0131_IS_TYP;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_BR_WriteLoadSimTorque
	VAR_INPUT
		Axis : UDINT;
		Enable : BOOL;
		Torque : REAL;
	END_VAR
	VAR_OUTPUT
		Valid : BOOL;
		Busy : BOOL;
		Error : BOOL;
		ErrorID : UINT;
	END_VAR
	VAR
		C_Axis : UDINT;
		IS : MC_0132_IS_TYP;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_BR_ReadLoadSimTorque
	VAR_INPUT
		Axis : UDINT;
		Enable : BOOL;
	END_VAR
	VAR_OUTPUT
		Valid : BOOL;
		Busy : BOOL;
		Error : BOOL;
		ErrorID : UINT;
		Torque : REAL;
	END_VAR
	VAR
		C_Axis : UDINT;
		IS : MC_0142_IS_TYP;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK MC_BR_WriteLoadSimPosition
	VAR_INPUT
		Axis : UDINT;
		Enable : BOOL;
		Position : LREAL;
	END_VAR
	VAR_OUTPUT
		Valid : BOOL;
		Busy : BOOL;
		Error : BOOL;
		ErrorID : UINT;
	END_VAR
	VAR
		C_Axis : UDINT;
		IS : MC_0143_IS_TYP;
	END_VAR
END_FUNCTION_BLOCK
