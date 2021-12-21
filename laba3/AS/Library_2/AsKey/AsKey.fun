                                                                      
{REDUND_ERROR} FUNCTION KeyGetSecurityInfo : BOOL		(*provides information about whether the transferred key is enabled or not*)
	VAR_INPUT
		type	:UDINT;					(*key type to request: KEY_WEBSERVER, KEY_BR_IPC, KEY_ARNC0, KEY_AR106, KEY_AR105, ...*)
	END_VAR
END_FUNCTION

{REDUND_ERROR} FUNCTION KeyGetUserInfo	: UINT			(*read dongle user part data*)			
	VAR_INPUT							
		pBuffer			: UDINT;		(*pointer to the buffer where to store data*)
		bufferSize		: UDINT;		(*max. length of data in bytes*)
	END_VAR
END_FUNCTION
