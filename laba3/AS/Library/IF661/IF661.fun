(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: IF661
 * File: IF661.fun
 * Created: 11.11.2003
 ********************************************************************
 * Functions and function blocks of library IF661
 ********************************************************************)
FUNCTION_BLOCK IF661
	VAR_INPUT
		enable	:BOOL;
		device	:UDINT;
		L2DPid	:UINT;
		outbuf	:UDINT;
		outlen	:USINT;
		inbuf	:UDINT;
		inlen	:USINT;
		outcopy	:UDINT;
		incopy	:UDINT;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
	VAR
		init	:USINT;
		byRunState	:USINT;
		baudrate	:USINT;
		diagflag	:USINT;
		pCfgData	:UDINT;
		pInData	:UDINT;
		pDiagData	:UDINT;
		param0	:UDINT;
		param4	:UDINT;
		param8	:UDINT;
		param12	:UDINT;
		param16	:UDINT;
		param20	:UDINT;
		base0	:UDINT;
		base1	:UDINT;
		base2	:UDINT;
		base3	:UDINT;
		base4	:UDINT;
		base5	:UDINT;
		base6	:UDINT;
		base7	:UDINT;
		base8	:UDINT;
		base9	:UDINT;
		base10	:UDINT;
		base11	:UDINT;
		base12	:UDINT;
		base13	:UDINT;
		base14	:UDINT;
		base15	:UDINT;
		base16	:UDINT;
		base17	:UDINT;
		base18	:UDINT;
		base19	:UDINT;
		base20	:UDINT;
		base21	:UDINT;
		base22	:UDINT;
		base23	:UDINT;
		base24	:UDINT;
		base25	:UDINT;
	END_VAR
END_FUNCTION_BLOCK
