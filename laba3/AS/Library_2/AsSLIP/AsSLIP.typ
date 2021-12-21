                                                                      
TYPE
    slipPARAMETER_typ	: STRUCT		(*slip parameter*)
		pHostAddr		: UDINT;		(*pointer to the host ip address (string format)*)
		pPeerAddr		: UDINT;		(*pointer to the peer ip address (string format)*)
		mtu				: UDINT;		(*maximum trasmission unit*)
		compAllow		: BOOL;			(*compression allow*)
		compEnable		: BOOL;			(*compression enable*)
	END_STRUCT;
END_TYPE
