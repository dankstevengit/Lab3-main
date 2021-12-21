(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsArcnet
 * File: AsArcnet.typ
 * Author: B+R
 ********************************************************************
 * Data types of library AsArcnet
 ********************************************************************)
                                                                      
TYPE
	ARCstat_typ : 	STRUCT     (*statistic data*)
		BytesRecv : UDINT;     (*number of bytes received by Fbase*)
		BytesSend : UDINT;     (*number of bytes sent and confirmed by Fbase*)
		IntRX : UDINT;         (*receive interrupt*)
		IntTA : UDINT;         (*transmit interrupt*)
		IntENAK : UDINT;       (*excessive NAK interrupt*)
		IntNNID : UDINT;       (*new next ID interrupt*)
		IntRECON : UDINT;      (*reconfiguration interrupt*)
		ReconCnt : UDINT;      (*number of reconfigurations triggered by the nodes*)
		ErrRead : UDINT;       (*error reading from the controller*)
		ErrSend : UDINT;       (*error writing to the controller*)
		NoFreeBuf : UDINT;     (*counters for buffers are full (call ARCread as long as "status" equals ERR_OK*)
		ExcPaket : UDINT;      (*exception packet counter*)
	END_STRUCT;
END_TYPE