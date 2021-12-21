(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: FB_lib
 * File: FB_lib.typ
 * Author: B+R
 ********************************************************************
 * Data types of library FB_lib
 ********************************************************************)
                                                                      
TYPE
	FBDevice_typ : STRUCT			(*internal use*)
		MemorySize	: USINT ;		
		DevAdress	: UDINT ;		
		DevInfo	: UDINT ;			
		Error	: UINT ;			
		FBIdent	: UDINT ;			
		DevNumber	: UINT ;		
		DevType	: USINT ;			
		ConfMsgNr	: USINT ;		
		CommandMsgNr	: USINT ;	
		StatusMsgNr	: USINT ;	
		OtherMsgNr	: USINT ;		
	END_STRUCT;
END_TYPE