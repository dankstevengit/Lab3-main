(********************************************************************
 * COPYRIGHT (C) BERNECKER + RAINER, AUSTRIA, A-5142 EGGELSBERG
 ********************************************************************
 * Library: IF361
 * File: IF361.fun
 * Created: 11.11.2003
 ********************************************************************
 * Functions and function blocks of library IF361
 ********************************************************************)
FUNCTION_BLOCK IF361_frm_rdwr
	VAR_INPUT
		pSend	:UDINT;
		sendlng	:USINT;
		cmd	:USINT;
		ident	:UDINT;
		pRec	:UDINT;
	END_VAR
	VAR_OUTPUT
		rec_lng	:USINT;
		status	:UINT;
	END_VAR
	VAR
		statusro	:UINT;
		retry	:USINT;
		WR_buflng	:UINT;
		WR_buffer	:UDINT;
		frm_step	:USINT;
		bufferdat	:REFERENCE TO USINT;
		zzFRM_gbuf00000	:FRM_gbuf;
		zzFRM_write00001	:FRM_write;
		zzFRM_robuf00002	:FRM_robuf;
		zzFRM_read00003	:FRM_read;
		zzFRM_rbuf00004	:FRM_rbuf;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IF361
	VAR_INPUT
		enable	:BOOL;
		device	:UDINT;
		L2DPpara	:REFERENCE TO if361_l2dp;
		outbuf	:UDINT;
		outlen	:UDINT;
		inbuf	:UDINT;
		inlen	:UDINT;
		outcopy	:REFERENCE TO BOOL;
		incopy	:REFERENCE TO BOOL;
	END_VAR
	VAR_OUTPUT
		status	:UINT;
	END_VAR
	VAR
		bufcleared	:BOOL;
		chg_statio	:BOOL;
		station	:USINT;
		leave_loop	:BOOL;
		userstatus	:USINT;
		exit	:BOOL;
		frmoffset	:USINT;
		leave_send	:BOOL;
		blockoffse	:USINT;
		newblock	:BOOL;
		offset	:USINT;
		to_sendlng	:USINT;
		output	:USINT;
		input	:USINT;
		i_len	:USINT;
		o_len	:USINT;
		reclen	:USINT;
		rec	:USINT;
		frm	:IF361_frm_rdwr;
		send	:USINT;
		sendlng	:USINT;
		cmd	:USINT;
		buffsize	:UINT;
		diag_data_	:USINT;
		param_data	:USINT;
		CFG_dataLen	:USINT;
		wait_loop	:USINT;
		valuewr	:UINT;
		ident	:UDINT;
		baudrate	:UDINT;
		ifcfg	:if361_IfCfg;
		valuerd	:UINT;
		ioident	:UDINT;
		src	:USINT;
		Kennung	:UINT;
		iop	:if361_Iop;
		baudfrm	:UINT;
		baud	:UINT;
		slot	:USINT;
		SubSlot	:USINT;
		interface	:USINT;
		Slot	:USINT;
		length	:UINT;
		i	:USINT;
		exchange	:BOOL;
		chg_buffer	:BOOL;
		u_step	:USINT;
		outLEN	:USINT;
		inLEN	:USINT;
		allocated	:UDINT;
		cmp_buf	:UDINT;
		L2DPstep	:USINT;
		SYS_initcn	:UDINT;
		initcnt	:UDINT;
		devicestr	:REFERENCE TO USINT;
		tosend	:REFERENCE TO USINT;
		oldsend	:REFERENCE TO USINT;
		zzIO_mphydef00000	:IO_mphydef;
		zzIO_data00001	:IO_data;
		zzIO_mphydef00002	:IO_mphydef;
		zzIO_data00003	:IO_data;
		zzIO_mphydef00004	:IO_mphydef;
		zzIO_data00005	:IO_data;
		zzFRM_xopen00006	:FRM_xopen;
		zzIO_mphydef00007	:IO_mphydef;
		zzIO_data00008	:IO_data;
		zzIO_mphydef00009	:IO_mphydef;
		avtident	:UDINT;
		null_after_dl	:BOOL;
		avt_status	:UINT;
		avtinfo	:UDINT;
		avtname	:USINT;
		zzFRM_xopen00000	:FRM_xopen;
		zzIO_mphydef00001	:IO_mphydef;
		zzIO_data00002	:IO_data;
		zzIO_mphydef00003	:IO_mphydef;
		zzIO_data00004	:IO_data;
		zzIO_mphydef00005	:IO_mphydef;
		zzIO_data00006	:IO_data;
		zzFRM_xopen00007	:FRM_xopen;
		zzIO_mphydef00008	:IO_mphydef;
		zzIO_data00009	:IO_data;
		zzIO_mphydef00010	:IO_mphydef;
		hochlauf_flag	:BOOL;
	END_VAR
END_FUNCTION_BLOCK
