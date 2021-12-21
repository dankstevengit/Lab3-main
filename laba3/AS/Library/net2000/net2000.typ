(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: net2000
 * File: net2000.typ
 * Author: B+R
 ********************************************************************
 * Data types of library net2000
 ********************************************************************)
                                                                      
TYPE
	NET2PV : STRUCT
		PvLength	: UINT ;
		PvName	: ARRAY[0..31] OF SINT ;
	END_STRUCT;
	NET2EVT : STRUCT
		nvars	: UINT ;
	END_STRUCT;
	NET2CAN : STRUCT
		nnodes	: USINT ;
		basis	: UINT ;
	END_STRUCT;
	NET2CONFIGURATION : STRUCT
		station	: USINT ;
		task_class	: SINT ;
		retry	: USINT ;
		master	: USINT ;
		device	: UDINT ;
		mode	: UDINT ;
		ixtabsize	: UINT ;
		t_response	: UINT ;
		t_cross	: UINT ;
		l7length	: UDINT ;
		status	: UINT ;
		reset	: USINT ;
		freeze	: USINT ;
		close	: USINT ;
		CAN	: NET2CAN ;
		EVT	: NET2EVT ;
	END_STRUCT;
END_TYPE