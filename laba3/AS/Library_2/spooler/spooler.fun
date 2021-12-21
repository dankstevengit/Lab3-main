                                                                      
{REDUND_ERROR} FUNCTION_BLOCK SPExUpData
	VAR_INPUT
		enable	:BOOL;
		pMode	:UDINT;
		pDevice	:UDINT;
		pIP	:UDINT;
		pCPU	:UDINT;
		data_len	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
	VAR
		first	:USINT;
		komm	:UDINT;
		maxcount	:UDINT;
		count	:UDINT;
		sp_dest	:UDINT;
		sp_kommadr	:UDINT;
		sp_mode	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
{REDUND_ERROR} FUNCTION_BLOCK SPExDownData
	VAR_INPUT
		enable	:BOOL;
		pMode	:UDINT;
		pDevice	:UDINT;
		pIP	:UDINT;
		pCPU	:UDINT;
		data_len	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
	VAR
		first	:USINT;
		komm	:UDINT;
		maxcount	:UDINT;
		count	:UDINT;
		sp_dest	:UDINT;
		sp_kommadr	:UDINT;
		sp_mode	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
{REDUND_ERROR} FUNCTION_BLOCK SPExUpModule
	VAR_INPUT
		enable	:BOOL;
		pMode	:UDINT;
		pDevice	:UDINT;
		pName	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		pCPU	:UDINT;
		pData	:UDINT;
		module_len	:UDINT;
	END_VAR
	VAR
		first	:USINT;
		komm	:UDINT;
		moadr	:UDINT;
		s_laenge	:UDINT;
		maxcount	:UDINT;
		count	:UDINT;
		sp_dest	:UDINT;
		sp_kommadr	:UDINT;
		sp_mode	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
{REDUND_ERROR} FUNCTION_BLOCK SPExDownModule
	VAR_INPUT
		enable	:BOOL;
		pMode	:UDINT;
		pDevice	:UDINT;
		pName	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
	VAR
		first	:USINT;
		komm	:UDINT;
		moadr	:UDINT;
		maxcount	:UDINT;
		count	:UDINT;
		sp_dest	:UDINT;
		sp_kommadr	:UDINT;
		sp_mode	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
{REDUND_ERROR} FUNCTION_BLOCK SPTimeOut
	VAR_INPUT
		enable	:BOOL;
		timeout	:USINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
END_FUNCTION_BLOCK
{REDUND_ERROR} FUNCTION_BLOCK SPUpData
	VAR_INPUT
		enable	:BOOL;
		io_type	:USINT;
		master_no	:USINT;
		slave_no	:USINT;
		module_adr	:USINT;
		mode	:USINT;
		ip_adr	:UDINT;
		cpu_adr	:UDINT;
		data_len	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
	VAR
		first	:USINT;
		komm	:UDINT;
		maxcount	:UDINT;
		count	:UDINT;
		sp_dest	:UDINT;
		sp_kommadr	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
{REDUND_ERROR} FUNCTION_BLOCK SPDownData
	VAR_INPUT
		enable	:BOOL;
		io_type	:USINT;
		master_no	:USINT;
		slave_no	:USINT;
		module_adr	:USINT;
		mode	:USINT;
		ip_adr	:UDINT;
		cpu_adr	:UDINT;
		data_len	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
	VAR
		first	:USINT;
		komm	:UDINT;
		maxcount	:UDINT;
		count	:UDINT;
		sp_dest	:UDINT;
		sp_kommadr	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
{REDUND_ERROR} FUNCTION_BLOCK SPUpModule
	VAR_INPUT
		enable	:BOOL;
		io_type	:USINT;
		master_no	:USINT;
		slave_no	:USINT;
		module_adr	:USINT;
		mode	:USINT;
		pName	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
		cpu_adr	:UDINT;
		data_adr	:UDINT;
		modullen	:UDINT;
	END_VAR
	VAR
		first	:USINT;
		komm	:UDINT;
		moadr	:UDINT;
		s_laenge	:UDINT;
		maxcount	:UDINT;
		count	:UDINT;
		sp_dest	:UDINT;
		sp_kommadr	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
{REDUND_ERROR} FUNCTION_BLOCK SPDownModule
	VAR_INPUT
		enable	:BOOL;
		io_type	:USINT;
		master_no	:USINT;
		slave_no	:USINT;
		module_adr	:USINT;
		mode	:USINT;
		pName	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
	VAR
		first	:USINT;
		komm	:UDINT;
		moadr	:UDINT;
		maxcount	:UDINT;
		count	:UDINT;
		sp_dest	:UDINT;
		sp_kommadr	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
