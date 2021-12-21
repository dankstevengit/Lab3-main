(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsTpu
 * File: AsTpu.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library AsTpu
 ********************************************************************)
                                                                      
FUNCTION_BLOCK LTXcab0 (* Incremental encoder  1..2 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab1 (* Incremental encoder  2..3 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab2 (* Incremental encoder  3..4 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab3 (* Incremental encoder  4..5 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab4 (* Incremental encoder  5..6 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab5 (* Incremental encoder  6..7 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab6 (* Incremental encoder  7..8 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab7 (* Incremental encoder  8..9 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab8 (* Incremental encoder  9..10 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcab9 (* Incremental encoder 10..11 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabA (* Incremental encoder 11..12 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabB (* Incremental encoder 12..13 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabC (* Incremental encoder 13..14 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabD (* Incremental encoder 14..15 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabE (* Incremental encoder 15..16 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabF (* Incremental encoder 16, 1 with A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl0 (* Incremental encoder  1..2 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl1 (* Incremental encoder  2..3 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl2 (* Incremental encoder  3..4 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl3 (* Incremental encoder  4..5 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl4 (* Incremental encoder  5..6 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl5 (* Incremental encoder  6..7 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl6 (* Incremental encoder  7..8 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl7 (* Incremental encoder  8..9 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl8 (* Incremental encoder  9..10 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabl9 (* Incremental encoder 10..11 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcablA (* Incremental encoder 11..12 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcablB (* Incremental encoder 12..13 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcablC (* Incremental encoder 13..14 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcablD (* Incremental encoder 14..15 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcablE (* Incremental encoder 15..16 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcablF (* Incremental encoder 16, 1 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		Mode :UINT;
		RefPos :INT;
		CmpPos :INT;
		CmpDelta :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatStat0 :UINT;
		LatStat1 :UINT;
		CmpSet :INT;
		LatPos0 :INT;
		LatPos1 :INT;
		Position :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr0 (* Incremental encoder  1..3 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr1 (* Incremental encoder  2..4 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr2 (* Incremental encoder  3..5 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr3 (* Incremental encoder  4..6 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr4 (* Incremental encoder  5..7 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr5 (* Incremental encoder  6..8 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr6 (* Incremental encoder  7..9 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr7 (* Incremental encoder  8..10 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr8 (* Incremental encoder  9..11 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabr9 (* Incremental encoder 10..12 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabrA (* Incremental encoder 11..13 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabrB (* Incremental encoder 12..14 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabrC (* Incremental encoder 13..15 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabrD (* Incremental encoder 14..16 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabrE (* Incremental encoder 15..16, 1 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcabrF (* Incremental encoder 16, 1..2 with A,B,R signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe0 (* Gate Time Measurement  1 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe1 (* Gate Time Measurement  2 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe2 (* Gate Time Measurement  3 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe3 (* Gate Time Measurement  4 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe4 (* Gate Time Measurement  5 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe5 (* Gate Time Measurement  6 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe6 (* Gate Time Measurement  7 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe7 (* Gate Time Measurement  8 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe8 (* Gate Time Measurement  9 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpe9 (* Gate Time Measurement 10 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpeA (* Gate Time Measurement 11 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpeB (* Gate Time Measurement 12 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpeC (* Gate Time Measurement 13 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpeD (* Gate Time Measurement 14 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpeE (* Gate Time Measurement 15 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpeF (* Gate Time Measurement 16 (external)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		Prest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..33] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi0 (* Gate Time Measurement  1 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi1 (* Gate Time Measurement  2 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi2 (* Gate Time Measurement  3 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi3 (* Gate Time Measurement  4 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi4 (* Gate Time Measurement  5 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi5 (* Gate Time Measurement  6 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi6 (* Gate Time Measurement  7 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi7 (* Gate Time Measurement  8 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi8 (* Gate Time Measurement  9 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpi9 (* Gate Time Measurement 10 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpiA (* Gate Time Measurement 11 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpiB (* Gate Time Measurement 12 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpiC (* Gate Time Measurement 13 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpiD (* Gate Time Measurement 14 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpiE (* Gate Time Measurement 15 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcpiF (* Gate Time Measurement 16 (internal)*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		PCnt :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RdyCnt :UINT;
		OvlCnt :UINT;
		PRest :UDINT;
		DifCnt :UDINT;
		DifPer :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab0 (* Incremental encoder  1..3 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab1 (* Incremental encoder  2..4 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab2 (* Incremental encoder  3..5 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab3 (* Incremental encoder  4..6 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab4 (* Incremental encoder  5..7 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab5 (* Incremental encoder  6..8 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab6 (* Incremental encoder  7..9 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab7 (* Incremental encoder  8..10 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab8 (* Incremental encoder  9..11 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrab9 (* Incremental encoder 10..12 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrabA (* Incremental encoder 11..13 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrabB (* Incremental encoder 12..14 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrabC (* Incremental encoder 13..15 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrabD (* Incremental encoder 14..16 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrabE (* Incremental encoder 15..16, 1 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXcrabF (* Incremental encoder 16, 1..2 with R,A,B signal*)
	VAR_INPUT
		enable :BOOL;
		RefTrig :BOOL;
		RefMode :UINT;
		RefPos :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		RefStat :BOOL;
		Position :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct0 (* Time difference measurement  1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct1 (* Time difference measurement  2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct2 (* Time difference measurement  3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct3 (* Time difference measurement  4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct4 (* Time difference measurement  5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct5 (* Time difference measurement  6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct6 (* Time difference measurement  7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct7 (* Time difference measurement  8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct8 (* Time difference measurement  9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXct9 (* Time difference measurement 10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXctA (* Time difference measurement 11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXctB (* Time difference measurement 12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXctC (* Time difference measurement 13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXctD (* Time difference measurement 14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXctE (* Time difference measurement 15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXctF (* Time difference measurement 16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DifTime :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i0 (* Input  1..2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i1 (* Input  2..3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i2 (* Input  3..4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i3 (* Input  4..5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i4 (* Input  5..6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i5 (* Input  6..7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i6 (* Input  7..8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i7 (* Input  8..9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i8 (* Input  9..10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2i9 (* Input 10..11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2iA (* Input 11..12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2iB (* Input 12..13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2iC (* Input 13..14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2iD (* Input 14..15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2iE (* Input 15..16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2iF (* Input 16, 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o0 (* Output  1..2*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o1 (* Output  2..3*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o2 (* Output  3..4*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o3 (* Output 4..5*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o4 (* Output 5..6*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o5 (* Output 6..7*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o6 (* Output 7..8*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o7 (* Output 8..9*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o8 (* Output 9..10*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2o9 (* Output 10..11*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2oA (* Output 11..12*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2oB (* Output 12..13*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2oC (* Output 13..14*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2oD (* Output 14..15*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2oE (* Output 15..16*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd2oF (* Output 16, 1*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i0 (* Input  1..3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i1 (* Input  2..4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i2 (* Input  3..5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i3 (* Input  4..6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i4 (* Input  5..7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i5 (* Input  6..8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i6 (* Input  7..9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i7 (* Input  8..10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i8 (* Input  9..11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3i9 (* Input 10..12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3iA (* Input 11..13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3iB (* Input 12..14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3iC (* Input 13..15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3iD (* Input 14..16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3iE (* Input 15..16, 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3iF (* Input 16, 1..2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o0 (* Output 1..3*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o1 (* Output 2..4*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o2 (* Output 3..5*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o3 (* Output 4..6*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o4 (* Output 5..7*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o5 (* Output 6..8*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o6 (* Output 7..9*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o7 (* Output 8..10*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o8 (* Output 9..11*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3o9 (* Output 10..12*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3oA (* Output 11..13*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3oB (* Output 12..14*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3oC (* Output 13..15*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3oD (* Output 14..16*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3oE (* Output 15..16, 1*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd3oF (* Output 16, 1..2*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i0 (* Input  1..4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i1 (* Input  2..5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i2 (* Input  3..6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i3 (* Input  4..7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i4 (* Input  5..8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i5 (* Input  6..9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i6 (* Input  7..10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i7 (* Input  8..11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i8 (* Input  9..12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4i9 (* Input 10..13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4iA (* Input 11..14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4iB (* Input 12..15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4iC (* Input 13..16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4iD (* Input 14..16, 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4iE (* Input 15..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4iF (* Input 16, 1..3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o0 (* Output 1..4*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o1 (* Output 2..5*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o2 (* Output 3..6*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o3 (* Output 4..7*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o4 (* Output 5..8*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o5 (* Output 6..9*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o6 (* Output 7..10*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o7 (* Output 8..11*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o8 (* Output 9..12*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4o9 (* Output 10..13*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4oA (* Output 11..14*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4oB (* Output 12..15*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4oC (* Output 13..16*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4oD (* Output 14..16, 1*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4oE (* Output 15..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd4oF (* Output 16, 1..3*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..16] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i0 (* Input  1..5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i1 (* Input  2..6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i2 (* Input  3..7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i3 (* Input  4..8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i4 (* Input  5..9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i5 (* Input  6..10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i6 (* Input  7..11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i7 (* Input  8..12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i8 (* Input  9..13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5i9 (* Input 10..14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5iA (* Input 11..15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5iB (* Input 12..16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5iC (* Input 13..16, 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5iD (* Input 14..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5iE (* Input 15..16, 1..3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5iF (* Input 16, 1..4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o0 (* Output 1..5*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o1 (* Output 2..6*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o2 (* Output 3..7*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o3 (* Output 4..8*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o4 (* Output 5..9*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o5 (* Output 6..10*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o6 (* Output 7..11*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o7 (* Output 8..12*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o8 (* Output 9..13*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5o9 (* Output 10..14*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5oA (* Output 11..15*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5oB (* Output 12..16*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5oC (* Output 13..16, 1*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5oD (* Output 14..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5oE (* Output 15..16, 1..3*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd5oF (* Output 16, 1..4*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i0 (* Input  1..6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i1 (* Input  2..7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i2 (* Input  3..8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i3 (* Input  4..9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i4 (* Input  5..10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i5 (* Input  6..11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i6 (* Input  7..12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i7 (* Input  8..13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i8 (* Input  9..14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6i9 (* Input 10..15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6iA (* Input 11..16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6iB (* Input 12..16, 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6iC (* Input 13..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6iD (* Input 14..16, 1..3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6iE (* Input 15..16, 1..4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6iF (* Input 16, 1..5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o0 (* Output 1..6*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o1 (* Output 2..7*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o2 (* Output 3..8*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o3 (* Output 4..9*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o4 (* Output 5..10*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o5 (* Output 6..11*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o6 (* Output 7..12*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o7 (* Output 8..13*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o8 (* Output 9..14*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6o9 (* Output 10..15*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6oA (* Output 11..16*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6oB (* Output 12..16, 1*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6oC (* Output 13..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6oD (* Output 14..16, 1..3*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6oE (* Output 15..16, 1..4*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd6oF (* Output 16, 1..5*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..22] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i0 (* Input  1..7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i1 (* Input  2..8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i2 (* Input  3..9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i3 (* Input  4..10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i4 (* Input  5..11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i5 (* Input  6..12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i6 (* Input  7..13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i7 (* Input  8..14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i8 (* Input  9..15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7i9 (* Input 10..16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7iA (* Input 11..16, 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7iB (* Input 12..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7iC (* Input 13..16, 1..3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7iD (* Input 14..16, 1..4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7iE (* Input 15..16, 1..5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7iF (* Input 16, 1..6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o0 (* Output 1..7*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o1 (* Output 2..8*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o2 (* Output 3..9*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o3 (* Output 4..10*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o4 (* Output 5..11*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o5 (* Output 6..12*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o6 (* Output 7..13*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o7 (* Output 8..14*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o8 (* Output 9..15*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7o9 (* Output 10..16*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7oA (* Output 11..16, 1*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7oB (* Output 12..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7oC (* Output 13..16, 1..3*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7oD (* Output 14..16, 1..4*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7oE (* Output 15..16, 1..5*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd7oF (* Output 16, 1..6*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i0 (* Input  1..8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i1 (* Input  2..9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i2 (* Input  3..10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i3 (* Input  4..11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i4 (* Input  5..12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i5 (* Input  6..13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i6 (* Input  7..14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i7 (* Input  8..15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i8 (* Input  9..16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8i9 (* Input 10..16, 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8iA (* Input 11..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8iB (* Input 12..16, 1..3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8iC (* Input 13..16, 1..4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8iD (* Input 14..16, 1..5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8iE (* Input 15..16, 1..6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8iF (* Input 16, 1..7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :USINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o0 (* Output 1..8*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o1 (* Output 2..9*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o2 (* Output 3..10*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o3 (* Output 4..11*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o4 (* Output 5..12*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o5 (* Output 6..13*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o6 (* Output 7..14*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o7 (* Output 8..15*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o8 (* Output 9..16*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8o9 (* Output 10..16, 1*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8oA (* Output 11..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8oB (* Output 12..16, 1..3*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8oC (* Output 13..16, 1..4*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8oD (* Output 14..16, 1..5*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8oE (* Output 15..16, 1..6*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXd8oF (* Output 16, 1..7*)
	VAR_INPUT
		enable :BOOL;
		DigOut :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..28] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi0 (* Input  1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi1 (* Input  2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi2 (* Input  3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi3 (* Input  4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi4 (* Input  5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi5 (* Input  6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi6 (* Input  7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi7 (* Input  8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi8 (* Input  9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdi9 (* Input 10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiA (* Input 11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiB (* Input 12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiC (* Input 13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiD (* Input 14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiE (* Input 15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex0 (* Input  1 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex1 (* Input  2 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex2 (* Input  3 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex3 (* Input  4 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex4 (* Input  5 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex5 (* Input  6 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex6 (* Input  7 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex7 (* Input  8 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex8 (* Input  9 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiex9 (* Input 10 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiexA (* Input 11 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiexB (* Input 12 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiexC (* Input 13 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiexD (* Input 14 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiexE (* Input 15 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiexF (* Input 16 as exception source*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		Mode :UINT;
		ExcNr0 :USINT;
		ExcNr1 :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		ExcCnt0 :UINT;
		ExcCnt1 :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..26] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiF (* Input 16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil0 (* Input  1 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil1 (* Input  2 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil2 (* Input  3 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil3 (* Input  4 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil4 (* Input  5 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil5 (* Input  6 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil6 (* Input  7 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil7 (* Input  8 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil8 (* Input  9 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdil9 (* Input 10 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdilA (* Input 11 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdilB (* Input 12 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdilC (* Input 13 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdilD (* Input 14 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdilE (* Input 15 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdilF (* Input 16 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit0 (* Input  1 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit1 (* Input  2 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit2 (* Input  3 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit3 (* Input  4 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit4 (* Input  5 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit5 (* Input  6 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit6 (* Input  7 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit7 (* Input  8 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit8 (* Input  9 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdit9 (* Input 10 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXditA (* Input 11 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXditB (* Input 12 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXditC (* Input 13 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXditD (* Input 14 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXditE (* Input 15 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXditF (* Input 16 with timestamps*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		TCnt0 :UINT;
		Time0 :UDINT;
		TCnt1 :UINT;
		Time1 :UDINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..19] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws0 (* Input  1 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws1 (* Input  2 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws2 (* Input  3 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws3 (* Input  4 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws4 (* Input  5 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws5 (* Input  6 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws6 (* Input  7 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws7 (* Input  8 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws8 (* Input  9 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiws9 (* Input 10 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiwsA (* Input 11 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiwsB (* Input 12 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiwsC (* Input 13 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiwsD (* Input 14 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiwsE (* Input 15 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdiwsF (* Input 16 as analog switcher*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		LoFilter :UINT;
		HiFilter :UINT;
		SwitchMode :UINT;
		SwitchAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		LatchCnt :UINT;
		EdgeCnt :UINT;
		DigIn :BOOL;
		SwitchCnt :UINT;
		Switch :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..25] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo0 (* Output  1*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo1 (* Output  2*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo2 (* Output  3*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo3 (* Output  4*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo4 (* Output  5*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo5 (* Output  6*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo6 (* Output  7*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo7 (* Output  8*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo8 (* Output  9*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdo9 (* Output 10*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdoA (* Output 11*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdoB (* Output 12*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdoC (* Output 13*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdoD (* Output 14*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdoE (* Output 15*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdoF (* Output 16*)
	VAR_INPUT
		enable :BOOL;
		DigOut :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol0 (* Output  1 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol1 (* Output  2 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol2 (* Output  3 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol3 (* Output  4 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol4 (* Output  5 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol5 (* Output  6 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol6 (* Output  7 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol7 (* Output  8 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol8 (* Output  9 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdol9 (* Output 10 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdolA (* Output 11 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdolB (* Output 12 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdolC (* Output 13 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdolD (* Output 14 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdolE (* Output 15 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdolF (* Output 16 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Mode :UINT;
		DigOut :BOOL;
		LoHiDelay :UDINT;
		HiLoDelay :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..21] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl0 (* PWM output  1 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl1 (* PWM output  2 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl2 (* PWM output  3 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl3 (* PWM output  4 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl4 (* PWM output  5 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl5 (* PWM output  6 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl6 (* PWM output  7 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl7 (* PWM output  8 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl8 (* PWM output  9 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwl9 (* PWM output 10 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwlA (* PWM output 11 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwlB (* PWM output 12 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwlC (* PWM output 13 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwlD (* PWM output 14 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwlE (* PWM output 15 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwlF (* PWM output 16 with link*)
	VAR_INPUT
		enable :BOOL;
		LnkMode :UINT;
		LnkChan :UINT;
		Start :BOOL;
		StartTicks :UINT;
		LowTicks :UINT;
		HighTicks :UINT;
		CmpCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm0 (* PWM output  1*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm1 (* PWM output  2*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm2 (* PWM output  3*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm3 (* PWM output  4*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm4 (* PWM output  5*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm5 (* PWM output  6*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm6 (* PWM output  7*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm7 (* PWM output  8*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm8 (* PWM output  9*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwm9 (* PWM output 10*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwmA (* PWM output 11*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwmB (* PWM output 12*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwmC (* PWM output 13*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwmD (* PWM output 14*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwmE (* PWM output 15*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXdpwmF (* PWM output 16*)
	VAR_INPUT
		enable :BOOL;
		LowTicks :UDINT;
		HighTicks :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		EdgeCnt :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..20] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c00 (* I2C clock output 1*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c01 (* I2C clock output 2*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c02 (* I2C clock output 3*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c03 (* I2C clock output 4*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c04 (* I2C clock output 5*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c05 (* I2C clock output 6*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c06 (* I2C clock output 7*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c07 (* I2C clock output 8*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c08 (* I2C clock output 9*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c09 (* I2C clock output 10*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c0A (* I2C clock output 11*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c0B (* I2C clock output 12*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c0C (* I2C clock output 13*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c0D (* I2C clock output 14*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c0E (* I2C clock output 15*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c0F (* I2C clock output 16*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		Mode :UINT;
		OutChan :UINT;
		InChan :UINT;
		ClockTime :UINT;
		LnkMode :UINT;
		LnkChan0 :UINT;
		LnkChan1 :UINT;
		OutData :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		InData :UDINT;
		ReadyCnt :UINT;
		StartCnt :UINT;
		ErrorCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..23] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c10 (* I2C data output 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c11 (* I2C data output 2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c12 (* I2C data output 3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c13 (* I2C data output 4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c14 (* I2C data output 5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c15 (* I2C data output 6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c16 (* I2C data output 7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c17 (* I2C data output 8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c18 (* I2C data output 9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c19 (* I2C data output 10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c1A (* I2C data output 11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c1B (* I2C data output 12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c1C (* I2C data output 13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c1D (* I2C data output 14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c1E (* I2C data output 15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c1F (* I2C data output 16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c20 (* I2C data input 1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c21 (* I2C data input 2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c22 (* I2C data input 3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c23 (* I2C data input 4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c24 (* I2C data input 5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c25 (* I2C data input 6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c26 (* I2C data input 7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c27 (* I2C data input 8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c28 (* I2C data input 9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c29 (* I2C data input 10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c2A (* I2C data input 11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c2B (* I2C data input 12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c2C (* I2C data input 13*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c2D (* I2C data input 14*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c2E (* I2C data input 15*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXi2c2F (* I2C data input 16*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss00 (* SSI Master output  1*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss01 (* SSI Master output  2*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss02 (* SSI Master output  3*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss03 (* SSI Master output  4*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss04 (* SSI Master output  5*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss05 (* SSI Master output  6*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss06 (* SSI Master output  7*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss07 (* SSI Master output  8*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss08 (* SSI Master output  9*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss09 (* SSI Master output 10*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss0A (* SSI Master output 11*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss0B (* SSI Master output 12*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss0C (* SSI Master output 13*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss0D (* SSI Master output 14*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss0E (* SSI Master output 15*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss0F (* SSI Master output 16*)
	VAR_INPUT
		enable :BOOL;
		Start :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..14] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss10 (* SSI Master input  1*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss11 (* SSI Master input  2*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss12 (* SSI Master input  3*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss13 (* SSI Master input  4*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss14 (* SSI Master input  5*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss15 (* SSI Master input  6*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss16 (* SSI Master input  7*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss17 (* SSI Master input  8*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss18 (* SSI Master input  9*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss19 (* SSI Master input 10*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss1A (* SSI Master input 11*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss1B (* SSI Master input 12*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss1C (* SSI Master input 13*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss1D (* SSI Master input 14*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss1E (* SSI Master input 15*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss1F (* SSI Master input 16*)
	VAR_INPUT
		enable :BOOL;
		MMode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		ClockTime :UINT;
		DelayTime :UINT;
		InChan :UINT;
		OutChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ErrCnt :UINT;
		RdyCnt :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss20 (* SSI Slave output  1*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss21 (* SSI Slave output  2*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss22 (* SSI Slave output  3*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss23 (* SSI Slave output  4*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss24 (* SSI Slave output  5*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss25 (* SSI Slave output  6*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss26 (* SSI Slave output  7*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss27 (* SSI Slave output  8*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss28 (* SSI Slave output  9*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss29 (* SSI Slave output 10*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss2A (* SSI Slave output 11*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss2B (* SSI Slave output 12*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss2C (* SSI Slave output 13*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss2D (* SSI Slave output 14*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss2E (* SSI Slave output 15*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss2F (* SSI Slave output 16*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss30 (* SSI Slave input  1*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss31 (* SSI Slave input  2*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss32 (* SSI Slave input  3*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss33 (* SSI Slave input  4*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss34 (* SSI Slave input  5*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss35 (* SSI Slave input  6*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss36 (* SSI Slave input  7*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss37 (* SSI Slave input  8*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss38 (* SSI Slave input  9*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss39 (* SSI Slave input 10*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss3A (* SSI Slave input 11*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss3B (* SSI Slave input 12*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss3C (* SSI Slave input 13*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss3D (* SSI Slave input 14*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss3E (* SSI Slave input 15*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXiss3F (* SSI Slave input 16*)
	VAR_INPUT
		enable :BOOL;
		SMode :UINT;
		NextChan :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Data :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st0 (* Stepper motor  1..4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st1 (* Stepper motor  2..5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st2 (* Stepper motor  3..6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st3 (* Stepper motor  4..7*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st4 (* Stepper motor  5..8*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st5 (* Stepper motor  6..9*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st6 (* Stepper motor  7..10*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st7 (* Stepper motor  8..11*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st8 (* Stepper motor  9..12*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2st9 (* Stepper motor 10..13*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2stA (* Stepper motor 11..14*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2stB (* Stepper motor 12..15*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2stC (* Stepper motor 13..16*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2stD (* Stepper motor 14..16, 1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2stE (* Stepper motor 15..16, 1..2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXp2stF (* Stepper motor 16, 1..3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..73] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest0 (* Stepper motor  1..2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest1 (* Stepper motor  2..3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest2 (* Stepper motor  3..4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest3 (* Stepper motor  4..5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest4 (* Stepper motor  5..6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest5 (* Stepper motor  6..7*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest6 (* Stepper motor  7..8*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest7 (* Stepper motor  8..9*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest8 (* Stepper motor  9..10*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpest9 (* Stepper motor 10..11*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpestA (* Stepper motor 11..12*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpestB (* Stepper motor 12..13*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpestC (* Stepper motor 13..14*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpestD (* Stepper motor 14..15*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpestE (* Stepper motor 15..16*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK LTXpestF (* Stepper motor 16, 1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		LnkMode :UINT;
		LnkChan :UINT;
		LnkPar :UINT;
		SetPar :UINT;
		Halt :BOOL;
		VMin :DINT;
		VMax :DINT;
		Accel :DINT;
		Decel :DINT;
		SRef :DINT;
		SCmp :DINT;
		SCmpRel :DINT;
		STarget :DINT;
		STargetRel :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		LnkStat :UINT;
		CmpStat :UINT;
		VStat :UINT;
		VSet :DINT;
		SLatch :DINT;
		SSet :DINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..67] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK DM455cfg (* Output type configuration*)
	VAR_INPUT
		enable :BOOL;
		Mode0 :UINT;
		ILimit0 :INT;
		Mode1 :UINT;
		ILimit1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK DM455led (* LED control*)
	VAR_INPUT
		enable :BOOL;
		LedStatus :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK DM455ovl (* Short circuit acknowledge*)
	VAR_INPUT
		enable :BOOL;
		OvlQuit :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		OvlStat :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK DM455rdn (* Read data memory*)
	VAR_INPUT
		enable :BOOL;
		DataP :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..6] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK DM455wrb (* Write to data memory (byte)*)
	VAR_INPUT
		enable :BOOL;
		Offset :USINT;
		Data :USINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..6] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK DM455wrl (* Write to data memory (long)*)
	VAR_INPUT
		enable :BOOL;
		Offset :USINT;
		Data :UDINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..6] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK DM455wrw (* Write to data memory (word)*)
	VAR_INPUT
		enable :BOOL;
		Offset :USINT;
		Data :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..6] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ac0 (* Analog comparator  1*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ac1 (* Analog comparator  2*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ac2 (* Analog comparator  3*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ac3 (* Analog comparator  4*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ac4 (* Analog comparator  5*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ac5 (* Analog comparator  6*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ai0 (* Analog input  1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ai1 (* Analog input  2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ai2 (* Analog input  3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ai3 (* Analog input  4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ai4 (* Analog input  5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ai5 (* Analog input  6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ao0 (* Analog output  1*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ao1 (* Analog output  2*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ao2 (* Analog output  3*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ao3 (* Analog output  4*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ao4 (* Analog output  5*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ao5 (* Analog output  6*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151as0 (* Analog switcher  1*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151as1 (* Analog switcher  2*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151as2 (* Analog switcher  3*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151as3 (* Analog switcher  4*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151as4 (* Analog switcher  5*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151as5 (* Analog switcher  6*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151bc (* Blocked analog comparator*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
		AnCmp0 :INT;
		AnCmp1 :INT;
		AnCmp2 :INT;
		AnCmp3 :INT;
		AnCmp4 :INT;
		AnCmp5 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151bi (* Blocked analog input*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn0 :INT;
		AnIn1 :INT;
		AnIn2 :INT;
		AnIn3 :INT;
		AnIn4 :INT;
		AnIn5 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151bo (* Blocked analog output*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
		AnOut0 :INT;
		AnOut1 :INT;
		AnOut2 :INT;
		AnOut3 :INT;
		AnOut4 :INT;
		AnOut5 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151cac (* Config analog comparator*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		Trig :BOOL;
		CmpMode0 :UINT;
		CmpMode1 :UINT;
		CmpMode2 :UINT;
		CmpMode3 :UINT;
		CmpMode4 :UINT;
		CmpMode5 :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..13] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151caf (* Config analog FIFO mode*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		Trig :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		FIFOSize :UINT;
		FIFOAdr0 :UDINT;
		FIFOAdr1 :UDINT;
		FIFOAdr2 :UDINT;
		FIFOAdr3 :UDINT;
		FIFOAdr4 :UDINT;
		FIFOAdr5 :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151cd (* Config digital I/O*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151nc0 (* Normalize analog comparator  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151nc1 (* Normalize analog comparator  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151nc2 (* Normalize analog comparator  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151nc3 (* Normalize analog comparator  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151nc4 (* Normalize analog comparator  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151nc5 (* Normalize analog comparator  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ni0 (* Normalize analog input  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ni1 (* Normalize analog input  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ni2 (* Normalize analog input  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ni3 (* Normalize analog input  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ni4 (* Normalize analog input  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151ni5 (* Normalize analog input  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151no0 (* Normalize analog output  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151no1 (* Normalize analog output  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151no2 (* Normalize analog output  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151no3 (* Normalize analog output  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151no4 (* Normalize analog output  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP151no5 (* Normalize analog output  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai0 (* Analog input  1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai1 (* Analog input  2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai2 (* Analog input  3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai3 (* Analog input  4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai4 (* Analog input  5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai5 (* Analog input  6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai6 (* Analog input  7*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai7 (* Analog input  8*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai8 (* Analog input  9*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ai9 (* Analog input 10*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152aiA (* Analog input 11*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152aiB (* Analog input 12*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152bi (* Blocked analog input*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn0 :INT;
		AnIn1 :INT;
		AnIn2 :INT;
		AnIn3 :INT;
		AnIn4 :INT;
		AnIn5 :INT;
		AnIn6 :INT;
		AnIn7 :INT;
		AnIn8 :INT;
		AnIn9 :INT;
		AnInA :INT;
		AnInB :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..30] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152cfg (* config analog inputs*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		Trig :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni0 (* Normalize analog input  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni1 (* Normalize analog input  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni2 (* Normalize analog input  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni3 (* Normalize analog input  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni4 (* Normalize analog input  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni5 (* Normalize analog input  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni6 (* Normalize analog input  7*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni7 (* Normalize analog input  8*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni8 (* Normalize analog input  9*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152ni9 (* Normalize analog input 10*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152niA (* Normalize analog input 11*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP152niB (* Normalize analog input 12*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ac0 (* Analog comparator  1*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ac1 (* Analog comparator  2*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ac2 (* Analog comparator  3*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ac3 (* Analog comparator  4*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ac4 (* Analog comparator  5*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ac5 (* Analog comparator  6*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ah0 (* Analog comparator  1 (high limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ah1 (* Analog comparator  2 (high limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ah2 (* Analog comparator  3 (high limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ah3 (* Analog comparator  4 (high limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ah4 (* Analog comparator  5 (high limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ah5 (* Analog comparator  6 (high limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ai0 (* Analog input  1*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ai1 (* Analog input  2*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ai2 (* Analog input  3*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ai3 (* Analog input  4*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ai4 (* Analog input  5*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ai5 (* Analog input  6*)
	VAR_INPUT
		enable :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161al0 (* Analog comparator  1 (low limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161al1 (* Analog comparator  2 (low limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161al2 (* Analog comparator  3 (low limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161al3 (* Analog comparator  4 (low limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161al4 (* Analog comparator  5 (low limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161al5 (* Analog comparator  6 (low limit)*)
	VAR_INPUT
		enable :BOOL;
		AnCmp :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ao0 (* Analog output  1*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ao1 (* Analog output  2*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ao2 (* Analog output  3*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ao3 (* Analog output  4*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ao4 (* Analog output  5*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ao5 (* Analog output  6*)
	VAR_INPUT
		enable :BOOL;
		AnOut :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..8] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161as0 (* Analog switcher  1*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161as1 (* Analog switcher  2*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161as2 (* Analog switcher  3*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161as3 (* Analog switcher  4*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161as4 (* Analog switcher  5*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161as5 (* Analog switcher  6*)
	VAR_INPUT
		enable :BOOL;
		AnOut0 :INT;
		AnOut1 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		ValAdr :UDINT;
		Value0 :INT;
		Value1 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..10] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161bc (* Blocked analog comparator*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
		AnCmp0 :INT;
		AnCmp1 :INT;
		AnCmp2 :INT;
		AnCmp3 :INT;
		AnCmp4 :INT;
		AnCmp5 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161bh (* Blocked analog comparator (high limit)*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
		AnCmp0 :INT;
		AnCmp1 :INT;
		AnCmp2 :INT;
		AnCmp3 :INT;
		AnCmp4 :INT;
		AnCmp5 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161bi (* Blocked analog input*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		AnIn0 :INT;
		AnIn1 :INT;
		AnIn2 :INT;
		AnIn3 :INT;
		AnIn4 :INT;
		AnIn5 :INT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161bl (* Blocked analog comparator (low limit)*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
		AnCmp0 :INT;
		AnCmp1 :INT;
		AnCmp2 :INT;
		AnCmp3 :INT;
		AnCmp4 :INT;
		AnCmp5 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161bo (* Blocked analog output*)
	VAR_INPUT
		enable :BOOL;
		ChanOn :UINT;
		AnOut0 :INT;
		AnOut1 :INT;
		AnOut2 :INT;
		AnOut3 :INT;
		AnOut4 :INT;
		AnOut5 :INT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..18] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ca (* Config analog I/O*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		Trig :BOOL;
		CmpMode0 :UINT;
		CmpMode1 :UINT;
		CmpMode2 :UINT;
		CmpMode3 :UINT;
		CmpMode4 :UINT;
		CmpMode5 :UINT;
		FifoAdr :UDINT;
		FifoCnt :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		CmpStatus :UINT;
		FifoReady :BOOL;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161cac (* Config analog comparator*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		Trig :BOOL;
		CmpMode0 :UINT;
		CmpMode1 :UINT;
		CmpMode2 :UINT;
		CmpMode3 :UINT;
		CmpMode4 :UINT;
		CmpMode5 :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..11] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161cd (* Config digital I/O*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..7] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nc0 (* Normalize analog comparator  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nc1 (* Normalize analog comparator  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nc2 (* Normalize analog comparator  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nc3 (* Normalize analog comparator  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nc4 (* Normalize analog comparator  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nc5 (* Normalize analog comparator  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nh0 (* Normalize analog comparator  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nh1 (* Normalize analog comparator  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nh2 (* Normalize analog comparator  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nh3 (* Normalize analog comparator  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nh4 (* Normalize analog comparator  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nh5 (* Normalize analog comparator  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ni0 (* Normalize analog input  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ni1 (* Normalize analog input  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ni2 (* Normalize analog input  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ni3 (* Normalize analog input  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ni4 (* Normalize analog input  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161ni5 (* Normalize analog input  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nl0 (* Normalize analog comparator  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nl1 (* Normalize analog comparator  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nl2 (* Normalize analog comparator  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nl3 (* Normalize analog comparator  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nl4 (* Normalize analog comparator  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161nl5 (* Normalize analog comparator  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161no0 (* Normalize analog output  1*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161no1 (* Normalize analog output  2*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161no2 (* Normalize analog output  3*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161no3 (* Normalize analog output  4*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161no4 (* Normalize analog output  5*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP161no5 (* Normalize analog output  6*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		d :DINT;
		k :DINT;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		Error :UINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..12] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK IP350caf (* Config analog FIFO mode*)
	VAR_INPUT
		enable :BOOL;
		Mode :UINT;
		Trig :BOOL;
	END_VAR
	VAR_OUTPUT
		status :UINT;
		CHANCnt :UINT;
		CHANAdr :UDINT;
		FIFOSize :UINT;
		FIFOAdr :UDINT;
	END_VAR
	VAR
		FUBSTATIC :ARRAY [0..9] OF UINT;
	END_VAR
END_FUNCTION_BLOCK
