/********************************************************************
 * COPYRIGHT (C) BERNECKER  RAINER, AUSTRIA, A-5142 EGGELSBERG 120
 ********************************************************************
 * Library: AsTpu
 * File: AsTpu.h
 * Created: 15.07.2004
 ********************************************************************
 * Generated declarations of library AsTpu
 ********************************************************************/


#ifndef _ASTPU_20040715152409_
#define _ASTPU_20040715152409_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct LTXcab0
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab0_typ;

typedef struct LTXcab1
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab1_typ;

typedef struct LTXcab2
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab2_typ;

typedef struct LTXcab3
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab3_typ;

typedef struct LTXcab4
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab4_typ;

typedef struct LTXcab5
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab5_typ;

typedef struct LTXcab6
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab6_typ;

typedef struct LTXcab7
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab7_typ;

typedef struct LTXcab8
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab8_typ;

typedef struct LTXcab9
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcab9_typ;

typedef struct LTXcabA
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcabA_typ;

typedef struct LTXcabB
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcabB_typ;

typedef struct LTXcabC
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcabC_typ;

typedef struct LTXcabD
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcabD_typ;

typedef struct LTXcabE
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcabE_typ;

typedef struct LTXcabF
{
	/* VAR_INPUT (analog) */
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
} LTXcabF_typ;

typedef struct LTXcabl0
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl0_typ;

typedef struct LTXcabl1
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl1_typ;

typedef struct LTXcabl2
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl2_typ;

typedef struct LTXcabl3
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl3_typ;

typedef struct LTXcabl4
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl4_typ;

typedef struct LTXcabl5
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl5_typ;

typedef struct LTXcabl6
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl6_typ;

typedef struct LTXcabl7
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl7_typ;

typedef struct LTXcabl8
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl8_typ;

typedef struct LTXcabl9
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcabl9_typ;

typedef struct LTXcablA
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcablA_typ;

typedef struct LTXcablB
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcablB_typ;

typedef struct LTXcablC
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcablC_typ;

typedef struct LTXcablD
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcablD_typ;

typedef struct LTXcablE
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcablE_typ;

typedef struct LTXcablF
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned short Mode;
	signed short RefPos;
	signed short CmpPos;
	signed short CmpDelta;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatStat0;
	unsigned short LatStat1;
	signed short CmpSet;
	signed short LatPos0;
	signed short LatPos1;
	signed short Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXcablF_typ;

typedef struct LTXcabr0
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr0_typ;

typedef struct LTXcabr1
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr1_typ;

typedef struct LTXcabr2
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr2_typ;

typedef struct LTXcabr3
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr3_typ;

typedef struct LTXcabr4
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr4_typ;

typedef struct LTXcabr5
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr5_typ;

typedef struct LTXcabr6
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr6_typ;

typedef struct LTXcabr7
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr7_typ;

typedef struct LTXcabr8
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr8_typ;

typedef struct LTXcabr9
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabr9_typ;

typedef struct LTXcabrA
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabrA_typ;

typedef struct LTXcabrB
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabrB_typ;

typedef struct LTXcabrC
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabrC_typ;

typedef struct LTXcabrD
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabrD_typ;

typedef struct LTXcabrE
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabrE_typ;

typedef struct LTXcabrF
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcabrF_typ;

typedef struct LTXcpe0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe0_typ;

typedef struct LTXcpe1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe1_typ;

typedef struct LTXcpe2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe2_typ;

typedef struct LTXcpe3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe3_typ;

typedef struct LTXcpe4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe4_typ;

typedef struct LTXcpe5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe5_typ;

typedef struct LTXcpe6
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe6_typ;

typedef struct LTXcpe7
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe7_typ;

typedef struct LTXcpe8
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe8_typ;

typedef struct LTXcpe9
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpe9_typ;

typedef struct LTXcpeA
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpeA_typ;

typedef struct LTXcpeB
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpeB_typ;

typedef struct LTXcpeC
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpeC_typ;

typedef struct LTXcpeD
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpeD_typ;

typedef struct LTXcpeE
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpeE_typ;

typedef struct LTXcpeF
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long Prest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[34];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpeF_typ;

typedef struct LTXcpi0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi0_typ;

typedef struct LTXcpi1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi1_typ;

typedef struct LTXcpi2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi2_typ;

typedef struct LTXcpi3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi3_typ;

typedef struct LTXcpi4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi4_typ;

typedef struct LTXcpi5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi5_typ;

typedef struct LTXcpi6
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi6_typ;

typedef struct LTXcpi7
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi7_typ;

typedef struct LTXcpi8
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi8_typ;

typedef struct LTXcpi9
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpi9_typ;

typedef struct LTXcpiA
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpiA_typ;

typedef struct LTXcpiB
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpiB_typ;

typedef struct LTXcpiC
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpiC_typ;

typedef struct LTXcpiD
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpiD_typ;

typedef struct LTXcpiE
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpiE_typ;

typedef struct LTXcpiF
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned long PCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short RdyCnt;
	unsigned short OvlCnt;
	unsigned long PRest;
	unsigned long DifCnt;
	unsigned long DifPer;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXcpiF_typ;

typedef struct LTXcrab0
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab0_typ;

typedef struct LTXcrab1
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab1_typ;

typedef struct LTXcrab2
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab2_typ;

typedef struct LTXcrab3
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab3_typ;

typedef struct LTXcrab4
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab4_typ;

typedef struct LTXcrab5
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab5_typ;

typedef struct LTXcrab6
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab6_typ;

typedef struct LTXcrab7
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab7_typ;

typedef struct LTXcrab8
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab8_typ;

typedef struct LTXcrab9
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrab9_typ;

typedef struct LTXcrabA
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrabA_typ;

typedef struct LTXcrabB
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrabB_typ;

typedef struct LTXcrabC
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrabC_typ;

typedef struct LTXcrabD
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrabD_typ;

typedef struct LTXcrabE
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrabE_typ;

typedef struct LTXcrabF
{
	/* VAR_INPUT (analog) */
	unsigned short RefMode;
	signed long RefPos;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed long Position;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit RefTrig;
	/* VAR_OUTPUT (digital) */
	plcbit RefStat;
} LTXcrabF_typ;

typedef struct LTXct0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct0_typ;

typedef struct LTXct1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct1_typ;

typedef struct LTXct2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct2_typ;

typedef struct LTXct3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct3_typ;

typedef struct LTXct4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct4_typ;

typedef struct LTXct5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct5_typ;

typedef struct LTXct6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct6_typ;

typedef struct LTXct7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct7_typ;

typedef struct LTXct8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct8_typ;

typedef struct LTXct9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXct9_typ;

typedef struct LTXctA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXctA_typ;

typedef struct LTXctB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXctB_typ;

typedef struct LTXctC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXctC_typ;

typedef struct LTXctD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXctD_typ;

typedef struct LTXctE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXctE_typ;

typedef struct LTXctF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long DifTime;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXctF_typ;

typedef struct LTXd2i0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i0_typ;

typedef struct LTXd2i1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i1_typ;

typedef struct LTXd2i2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i2_typ;

typedef struct LTXd2i3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i3_typ;

typedef struct LTXd2i4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i4_typ;

typedef struct LTXd2i5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i5_typ;

typedef struct LTXd2i6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i6_typ;

typedef struct LTXd2i7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i7_typ;

typedef struct LTXd2i8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i8_typ;

typedef struct LTXd2i9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2i9_typ;

typedef struct LTXd2iA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2iA_typ;

typedef struct LTXd2iB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2iB_typ;

typedef struct LTXd2iC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2iC_typ;

typedef struct LTXd2iD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2iD_typ;

typedef struct LTXd2iE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2iE_typ;

typedef struct LTXd2iF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2iF_typ;

typedef struct LTXd2o0
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o0_typ;

typedef struct LTXd2o1
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o1_typ;

typedef struct LTXd2o2
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o2_typ;

typedef struct LTXd2o3
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o3_typ;

typedef struct LTXd2o4
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o4_typ;

typedef struct LTXd2o5
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o5_typ;

typedef struct LTXd2o6
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o6_typ;

typedef struct LTXd2o7
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o7_typ;

typedef struct LTXd2o8
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o8_typ;

typedef struct LTXd2o9
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2o9_typ;

typedef struct LTXd2oA
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2oA_typ;

typedef struct LTXd2oB
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2oB_typ;

typedef struct LTXd2oC
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2oC_typ;

typedef struct LTXd2oD
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2oD_typ;

typedef struct LTXd2oE
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2oE_typ;

typedef struct LTXd2oF
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd2oF_typ;

typedef struct LTXd3i0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i0_typ;

typedef struct LTXd3i1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i1_typ;

typedef struct LTXd3i2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i2_typ;

typedef struct LTXd3i3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i3_typ;

typedef struct LTXd3i4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i4_typ;

typedef struct LTXd3i5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i5_typ;

typedef struct LTXd3i6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i6_typ;

typedef struct LTXd3i7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i7_typ;

typedef struct LTXd3i8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i8_typ;

typedef struct LTXd3i9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3i9_typ;

typedef struct LTXd3iA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3iA_typ;

typedef struct LTXd3iB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3iB_typ;

typedef struct LTXd3iC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3iC_typ;

typedef struct LTXd3iD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3iD_typ;

typedef struct LTXd3iE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3iE_typ;

typedef struct LTXd3iF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3iF_typ;

typedef struct LTXd3o0
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o0_typ;

typedef struct LTXd3o1
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o1_typ;

typedef struct LTXd3o2
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o2_typ;

typedef struct LTXd3o3
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o3_typ;

typedef struct LTXd3o4
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o4_typ;

typedef struct LTXd3o5
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o5_typ;

typedef struct LTXd3o6
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o6_typ;

typedef struct LTXd3o7
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o7_typ;

typedef struct LTXd3o8
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o8_typ;

typedef struct LTXd3o9
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3o9_typ;

typedef struct LTXd3oA
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3oA_typ;

typedef struct LTXd3oB
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3oB_typ;

typedef struct LTXd3oC
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3oC_typ;

typedef struct LTXd3oD
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3oD_typ;

typedef struct LTXd3oE
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3oE_typ;

typedef struct LTXd3oF
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd3oF_typ;

typedef struct LTXd4i0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i0_typ;

typedef struct LTXd4i1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i1_typ;

typedef struct LTXd4i2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i2_typ;

typedef struct LTXd4i3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i3_typ;

typedef struct LTXd4i4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i4_typ;

typedef struct LTXd4i5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i5_typ;

typedef struct LTXd4i6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i6_typ;

typedef struct LTXd4i7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i7_typ;

typedef struct LTXd4i8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i8_typ;

typedef struct LTXd4i9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4i9_typ;

typedef struct LTXd4iA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4iA_typ;

typedef struct LTXd4iB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4iB_typ;

typedef struct LTXd4iC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4iC_typ;

typedef struct LTXd4iD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4iD_typ;

typedef struct LTXd4iE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4iE_typ;

typedef struct LTXd4iF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4iF_typ;

typedef struct LTXd4o0
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o0_typ;

typedef struct LTXd4o1
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o1_typ;

typedef struct LTXd4o2
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o2_typ;

typedef struct LTXd4o3
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o3_typ;

typedef struct LTXd4o4
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o4_typ;

typedef struct LTXd4o5
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o5_typ;

typedef struct LTXd4o6
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o6_typ;

typedef struct LTXd4o7
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o7_typ;

typedef struct LTXd4o8
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o8_typ;

typedef struct LTXd4o9
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4o9_typ;

typedef struct LTXd4oA
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4oA_typ;

typedef struct LTXd4oB
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4oB_typ;

typedef struct LTXd4oC
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4oC_typ;

typedef struct LTXd4oD
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4oD_typ;

typedef struct LTXd4oE
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4oE_typ;

typedef struct LTXd4oF
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[17];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd4oF_typ;

typedef struct LTXd5i0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i0_typ;

typedef struct LTXd5i1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i1_typ;

typedef struct LTXd5i2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i2_typ;

typedef struct LTXd5i3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i3_typ;

typedef struct LTXd5i4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i4_typ;

typedef struct LTXd5i5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i5_typ;

typedef struct LTXd5i6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i6_typ;

typedef struct LTXd5i7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i7_typ;

typedef struct LTXd5i8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i8_typ;

typedef struct LTXd5i9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5i9_typ;

typedef struct LTXd5iA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5iA_typ;

typedef struct LTXd5iB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5iB_typ;

typedef struct LTXd5iC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5iC_typ;

typedef struct LTXd5iD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5iD_typ;

typedef struct LTXd5iE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5iE_typ;

typedef struct LTXd5iF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5iF_typ;

typedef struct LTXd5o0
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o0_typ;

typedef struct LTXd5o1
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o1_typ;

typedef struct LTXd5o2
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o2_typ;

typedef struct LTXd5o3
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o3_typ;

typedef struct LTXd5o4
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o4_typ;

typedef struct LTXd5o5
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o5_typ;

typedef struct LTXd5o6
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o6_typ;

typedef struct LTXd5o7
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o7_typ;

typedef struct LTXd5o8
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o8_typ;

typedef struct LTXd5o9
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5o9_typ;

typedef struct LTXd5oA
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5oA_typ;

typedef struct LTXd5oB
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5oB_typ;

typedef struct LTXd5oC
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5oC_typ;

typedef struct LTXd5oD
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5oD_typ;

typedef struct LTXd5oE
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5oE_typ;

typedef struct LTXd5oF
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd5oF_typ;

typedef struct LTXd6i0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i0_typ;

typedef struct LTXd6i1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i1_typ;

typedef struct LTXd6i2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i2_typ;

typedef struct LTXd6i3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i3_typ;

typedef struct LTXd6i4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i4_typ;

typedef struct LTXd6i5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i5_typ;

typedef struct LTXd6i6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i6_typ;

typedef struct LTXd6i7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i7_typ;

typedef struct LTXd6i8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i8_typ;

typedef struct LTXd6i9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6i9_typ;

typedef struct LTXd6iA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6iA_typ;

typedef struct LTXd6iB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6iB_typ;

typedef struct LTXd6iC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6iC_typ;

typedef struct LTXd6iD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6iD_typ;

typedef struct LTXd6iE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6iE_typ;

typedef struct LTXd6iF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6iF_typ;

typedef struct LTXd6o0
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o0_typ;

typedef struct LTXd6o1
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o1_typ;

typedef struct LTXd6o2
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o2_typ;

typedef struct LTXd6o3
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o3_typ;

typedef struct LTXd6o4
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o4_typ;

typedef struct LTXd6o5
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o5_typ;

typedef struct LTXd6o6
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o6_typ;

typedef struct LTXd6o7
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o7_typ;

typedef struct LTXd6o8
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o8_typ;

typedef struct LTXd6o9
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6o9_typ;

typedef struct LTXd6oA
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6oA_typ;

typedef struct LTXd6oB
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6oB_typ;

typedef struct LTXd6oC
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6oC_typ;

typedef struct LTXd6oD
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6oD_typ;

typedef struct LTXd6oE
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6oE_typ;

typedef struct LTXd6oF
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[23];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd6oF_typ;

typedef struct LTXd7i0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i0_typ;

typedef struct LTXd7i1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i1_typ;

typedef struct LTXd7i2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i2_typ;

typedef struct LTXd7i3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i3_typ;

typedef struct LTXd7i4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i4_typ;

typedef struct LTXd7i5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i5_typ;

typedef struct LTXd7i6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i6_typ;

typedef struct LTXd7i7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i7_typ;

typedef struct LTXd7i8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i8_typ;

typedef struct LTXd7i9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7i9_typ;

typedef struct LTXd7iA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7iA_typ;

typedef struct LTXd7iB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7iB_typ;

typedef struct LTXd7iC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7iC_typ;

typedef struct LTXd7iD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7iD_typ;

typedef struct LTXd7iE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7iE_typ;

typedef struct LTXd7iF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7iF_typ;

typedef struct LTXd7o0
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o0_typ;

typedef struct LTXd7o1
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o1_typ;

typedef struct LTXd7o2
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o2_typ;

typedef struct LTXd7o3
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o3_typ;

typedef struct LTXd7o4
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o4_typ;

typedef struct LTXd7o5
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o5_typ;

typedef struct LTXd7o6
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o6_typ;

typedef struct LTXd7o7
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o7_typ;

typedef struct LTXd7o8
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o8_typ;

typedef struct LTXd7o9
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7o9_typ;

typedef struct LTXd7oA
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7oA_typ;

typedef struct LTXd7oB
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7oB_typ;

typedef struct LTXd7oC
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7oC_typ;

typedef struct LTXd7oD
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7oD_typ;

typedef struct LTXd7oE
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7oE_typ;

typedef struct LTXd7oF
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd7oF_typ;

typedef struct LTXd8i0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i0_typ;

typedef struct LTXd8i1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i1_typ;

typedef struct LTXd8i2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i2_typ;

typedef struct LTXd8i3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i3_typ;

typedef struct LTXd8i4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i4_typ;

typedef struct LTXd8i5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i5_typ;

typedef struct LTXd8i6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i6_typ;

typedef struct LTXd8i7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i7_typ;

typedef struct LTXd8i8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i8_typ;

typedef struct LTXd8i9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8i9_typ;

typedef struct LTXd8iA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8iA_typ;

typedef struct LTXd8iB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8iB_typ;

typedef struct LTXd8iC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8iC_typ;

typedef struct LTXd8iD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8iD_typ;

typedef struct LTXd8iE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8iE_typ;

typedef struct LTXd8iF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char DigIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8iF_typ;

typedef struct LTXd8o0
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o0_typ;

typedef struct LTXd8o1
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o1_typ;

typedef struct LTXd8o2
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o2_typ;

typedef struct LTXd8o3
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o3_typ;

typedef struct LTXd8o4
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o4_typ;

typedef struct LTXd8o5
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o5_typ;

typedef struct LTXd8o6
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o6_typ;

typedef struct LTXd8o7
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o7_typ;

typedef struct LTXd8o8
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o8_typ;

typedef struct LTXd8o9
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8o9_typ;

typedef struct LTXd8oA
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8oA_typ;

typedef struct LTXd8oB
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8oB_typ;

typedef struct LTXd8oC
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8oC_typ;

typedef struct LTXd8oD
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8oD_typ;

typedef struct LTXd8oE
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8oE_typ;

typedef struct LTXd8oF
{
	/* VAR_INPUT (analog) */
	unsigned char DigOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[29];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXd8oF_typ;

typedef struct LTXdi0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi0_typ;

typedef struct LTXdi1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi1_typ;

typedef struct LTXdi2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi2_typ;

typedef struct LTXdi3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi3_typ;

typedef struct LTXdi4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi4_typ;

typedef struct LTXdi5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi5_typ;

typedef struct LTXdi6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi6_typ;

typedef struct LTXdi7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi7_typ;

typedef struct LTXdi8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi8_typ;

typedef struct LTXdi9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdi9_typ;

typedef struct LTXdiA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiA_typ;

typedef struct LTXdiB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiB_typ;

typedef struct LTXdiC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiC_typ;

typedef struct LTXdiD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiD_typ;

typedef struct LTXdiE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiE_typ;

typedef struct LTXdiex0
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex0_typ;

typedef struct LTXdiex1
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex1_typ;

typedef struct LTXdiex2
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex2_typ;

typedef struct LTXdiex3
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex3_typ;

typedef struct LTXdiex4
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex4_typ;

typedef struct LTXdiex5
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex5_typ;

typedef struct LTXdiex6
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex6_typ;

typedef struct LTXdiex7
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex7_typ;

typedef struct LTXdiex8
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex8_typ;

typedef struct LTXdiex9
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiex9_typ;

typedef struct LTXdiexA
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiexA_typ;

typedef struct LTXdiexB
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiexB_typ;

typedef struct LTXdiexC
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiexC_typ;

typedef struct LTXdiexD
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiexD_typ;

typedef struct LTXdiexE
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiexE_typ;

typedef struct LTXdiexF
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short Mode;
	unsigned char ExcNr0;
	unsigned char ExcNr1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short ExcCnt0;
	unsigned short ExcCnt1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[27];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiexF_typ;

typedef struct LTXdiF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdiF_typ;

typedef struct LTXdil0
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil0_typ;

typedef struct LTXdil1
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil1_typ;

typedef struct LTXdil2
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil2_typ;

typedef struct LTXdil3
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil3_typ;

typedef struct LTXdil4
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil4_typ;

typedef struct LTXdil5
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil5_typ;

typedef struct LTXdil6
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil6_typ;

typedef struct LTXdil7
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil7_typ;

typedef struct LTXdil8
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil8_typ;

typedef struct LTXdil9
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdil9_typ;

typedef struct LTXdilA
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdilA_typ;

typedef struct LTXdilB
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdilB_typ;

typedef struct LTXdilC
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdilC_typ;

typedef struct LTXdilD
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdilD_typ;

typedef struct LTXdilE
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdilE_typ;

typedef struct LTXdilF
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdilF_typ;

typedef struct LTXdit0
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit0_typ;

typedef struct LTXdit1
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit1_typ;

typedef struct LTXdit2
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit2_typ;

typedef struct LTXdit3
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit3_typ;

typedef struct LTXdit4
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit4_typ;

typedef struct LTXdit5
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit5_typ;

typedef struct LTXdit6
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit6_typ;

typedef struct LTXdit7
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit7_typ;

typedef struct LTXdit8
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit8_typ;

typedef struct LTXdit9
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXdit9_typ;

typedef struct LTXditA
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXditA_typ;

typedef struct LTXditB
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXditB_typ;

typedef struct LTXditC
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXditC_typ;

typedef struct LTXditD
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXditD_typ;

typedef struct LTXditE
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXditE_typ;

typedef struct LTXditF
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short TCnt0;
	unsigned long Time0;
	unsigned short TCnt1;
	unsigned long Time1;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[20];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
} LTXditF_typ;

typedef struct LTXdiws0
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws0_typ;

typedef struct LTXdiws1
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws1_typ;

typedef struct LTXdiws2
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws2_typ;

typedef struct LTXdiws3
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws3_typ;

typedef struct LTXdiws4
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws4_typ;

typedef struct LTXdiws5
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws5_typ;

typedef struct LTXdiws6
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws6_typ;

typedef struct LTXdiws7
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws7_typ;

typedef struct LTXdiws8
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws8_typ;

typedef struct LTXdiws9
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiws9_typ;

typedef struct LTXdiwsA
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiwsA_typ;

typedef struct LTXdiwsB
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiwsB_typ;

typedef struct LTXdiwsC
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiwsC_typ;

typedef struct LTXdiwsD
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiwsD_typ;

typedef struct LTXdiwsE
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiwsE_typ;

typedef struct LTXdiwsF
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LoFilter;
	unsigned short HiFilter;
	unsigned short SwitchMode;
	unsigned long SwitchAdr;
	signed short Value0;
	signed short Value1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short LatchCnt;
	unsigned short EdgeCnt;
	unsigned short SwitchCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[26];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit DigIn;
	plcbit Switch;
} LTXdiwsF_typ;

typedef struct LTXdo0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo0_typ;

typedef struct LTXdo1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo1_typ;

typedef struct LTXdo2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo2_typ;

typedef struct LTXdo3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo3_typ;

typedef struct LTXdo4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo4_typ;

typedef struct LTXdo5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo5_typ;

typedef struct LTXdo6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo6_typ;

typedef struct LTXdo7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo7_typ;

typedef struct LTXdo8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo8_typ;

typedef struct LTXdo9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdo9_typ;

typedef struct LTXdoA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdoA_typ;

typedef struct LTXdoB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdoB_typ;

typedef struct LTXdoC
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdoC_typ;

typedef struct LTXdoD
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdoD_typ;

typedef struct LTXdoE
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdoE_typ;

typedef struct LTXdoF
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdoF_typ;

typedef struct LTXdol0
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol0_typ;

typedef struct LTXdol1
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol1_typ;

typedef struct LTXdol2
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol2_typ;

typedef struct LTXdol3
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol3_typ;

typedef struct LTXdol4
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol4_typ;

typedef struct LTXdol5
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol5_typ;

typedef struct LTXdol6
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol6_typ;

typedef struct LTXdol7
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol7_typ;

typedef struct LTXdol8
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol8_typ;

typedef struct LTXdol9
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdol9_typ;

typedef struct LTXdolA
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdolA_typ;

typedef struct LTXdolB
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdolB_typ;

typedef struct LTXdolC
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdolC_typ;

typedef struct LTXdolD
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdolD_typ;

typedef struct LTXdolE
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdolE_typ;

typedef struct LTXdolF
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short Mode;
	unsigned long LoHiDelay;
	unsigned long HiLoDelay;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[22];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit DigOut;
} LTXdolF_typ;

typedef struct LTXdpwl0
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl0_typ;

typedef struct LTXdpwl1
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl1_typ;

typedef struct LTXdpwl2
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl2_typ;

typedef struct LTXdpwl3
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl3_typ;

typedef struct LTXdpwl4
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl4_typ;

typedef struct LTXdpwl5
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl5_typ;

typedef struct LTXdpwl6
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl6_typ;

typedef struct LTXdpwl7
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl7_typ;

typedef struct LTXdpwl8
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl8_typ;

typedef struct LTXdpwl9
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwl9_typ;

typedef struct LTXdpwlA
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwlA_typ;

typedef struct LTXdpwlB
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwlB_typ;

typedef struct LTXdpwlC
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwlC_typ;

typedef struct LTXdpwlD
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwlD_typ;

typedef struct LTXdpwlE
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwlE_typ;

typedef struct LTXdpwlF
{
	/* VAR_INPUT (analog) */
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short StartTicks;
	unsigned short LowTicks;
	unsigned short HighTicks;
	unsigned short CmpCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXdpwlF_typ;

typedef struct LTXdpwm0
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm0_typ;

typedef struct LTXdpwm1
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm1_typ;

typedef struct LTXdpwm2
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm2_typ;

typedef struct LTXdpwm3
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm3_typ;

typedef struct LTXdpwm4
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm4_typ;

typedef struct LTXdpwm5
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm5_typ;

typedef struct LTXdpwm6
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm6_typ;

typedef struct LTXdpwm7
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm7_typ;

typedef struct LTXdpwm8
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm8_typ;

typedef struct LTXdpwm9
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwm9_typ;

typedef struct LTXdpwmA
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwmA_typ;

typedef struct LTXdpwmB
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwmB_typ;

typedef struct LTXdpwmC
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwmC_typ;

typedef struct LTXdpwmD
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwmD_typ;

typedef struct LTXdpwmE
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwmE_typ;

typedef struct LTXdpwmF
{
	/* VAR_INPUT (analog) */
	unsigned long LowTicks;
	unsigned long HighTicks;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long EdgeCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[21];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXdpwmF_typ;

typedef struct LTXi2c00
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c00_typ;

typedef struct LTXi2c01
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c01_typ;

typedef struct LTXi2c02
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c02_typ;

typedef struct LTXi2c03
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c03_typ;

typedef struct LTXi2c04
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c04_typ;

typedef struct LTXi2c05
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c05_typ;

typedef struct LTXi2c06
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c06_typ;

typedef struct LTXi2c07
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c07_typ;

typedef struct LTXi2c08
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c08_typ;

typedef struct LTXi2c09
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c09_typ;

typedef struct LTXi2c0A
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c0A_typ;

typedef struct LTXi2c0B
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c0B_typ;

typedef struct LTXi2c0C
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c0C_typ;

typedef struct LTXi2c0D
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c0D_typ;

typedef struct LTXi2c0E
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c0E_typ;

typedef struct LTXi2c0F
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short OutChan;
	unsigned short InChan;
	unsigned short ClockTime;
	unsigned short LnkMode;
	unsigned short LnkChan0;
	unsigned short LnkChan1;
	unsigned long OutData;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long InData;
	unsigned short ReadyCnt;
	unsigned short StartCnt;
	unsigned short ErrorCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[24];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXi2c0F_typ;

typedef struct LTXi2c10
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c10_typ;

typedef struct LTXi2c11
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c11_typ;

typedef struct LTXi2c12
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c12_typ;

typedef struct LTXi2c13
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c13_typ;

typedef struct LTXi2c14
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c14_typ;

typedef struct LTXi2c15
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c15_typ;

typedef struct LTXi2c16
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c16_typ;

typedef struct LTXi2c17
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c17_typ;

typedef struct LTXi2c18
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c18_typ;

typedef struct LTXi2c19
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c19_typ;

typedef struct LTXi2c1A
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c1A_typ;

typedef struct LTXi2c1B
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c1B_typ;

typedef struct LTXi2c1C
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c1C_typ;

typedef struct LTXi2c1D
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c1D_typ;

typedef struct LTXi2c1E
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c1E_typ;

typedef struct LTXi2c1F
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c1F_typ;

typedef struct LTXi2c20
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c20_typ;

typedef struct LTXi2c21
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c21_typ;

typedef struct LTXi2c22
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c22_typ;

typedef struct LTXi2c23
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c23_typ;

typedef struct LTXi2c24
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c24_typ;

typedef struct LTXi2c25
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c25_typ;

typedef struct LTXi2c26
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c26_typ;

typedef struct LTXi2c27
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c27_typ;

typedef struct LTXi2c28
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c28_typ;

typedef struct LTXi2c29
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c29_typ;

typedef struct LTXi2c2A
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c2A_typ;

typedef struct LTXi2c2B
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c2B_typ;

typedef struct LTXi2c2C
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c2C_typ;

typedef struct LTXi2c2D
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c2D_typ;

typedef struct LTXi2c2E
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c2E_typ;

typedef struct LTXi2c2F
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXi2c2F_typ;

typedef struct LTXiss00
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss00_typ;

typedef struct LTXiss01
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss01_typ;

typedef struct LTXiss02
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss02_typ;

typedef struct LTXiss03
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss03_typ;

typedef struct LTXiss04
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss04_typ;

typedef struct LTXiss05
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss05_typ;

typedef struct LTXiss06
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss06_typ;

typedef struct LTXiss07
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss07_typ;

typedef struct LTXiss08
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss08_typ;

typedef struct LTXiss09
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss09_typ;

typedef struct LTXiss0A
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss0A_typ;

typedef struct LTXiss0B
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss0B_typ;

typedef struct LTXiss0C
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss0C_typ;

typedef struct LTXiss0D
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss0D_typ;

typedef struct LTXiss0E
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss0E_typ;

typedef struct LTXiss0F
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[15];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Start;
} LTXiss0F_typ;

typedef struct LTXiss10
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss10_typ;

typedef struct LTXiss11
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss11_typ;

typedef struct LTXiss12
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss12_typ;

typedef struct LTXiss13
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss13_typ;

typedef struct LTXiss14
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss14_typ;

typedef struct LTXiss15
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss15_typ;

typedef struct LTXiss16
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss16_typ;

typedef struct LTXiss17
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss17_typ;

typedef struct LTXiss18
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss18_typ;

typedef struct LTXiss19
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss19_typ;

typedef struct LTXiss1A
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss1A_typ;

typedef struct LTXiss1B
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss1B_typ;

typedef struct LTXiss1C
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss1C_typ;

typedef struct LTXiss1D
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss1D_typ;

typedef struct LTXiss1E
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss1E_typ;

typedef struct LTXiss1F
{
	/* VAR_INPUT (analog) */
	unsigned short MMode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short ClockTime;
	unsigned short DelayTime;
	unsigned short InChan;
	unsigned short OutChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short ErrCnt;
	unsigned short RdyCnt;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss1F_typ;

typedef struct LTXiss20
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss20_typ;

typedef struct LTXiss21
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss21_typ;

typedef struct LTXiss22
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss22_typ;

typedef struct LTXiss23
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss23_typ;

typedef struct LTXiss24
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss24_typ;

typedef struct LTXiss25
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss25_typ;

typedef struct LTXiss26
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss26_typ;

typedef struct LTXiss27
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss27_typ;

typedef struct LTXiss28
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss28_typ;

typedef struct LTXiss29
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss29_typ;

typedef struct LTXiss2A
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss2A_typ;

typedef struct LTXiss2B
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss2B_typ;

typedef struct LTXiss2C
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss2C_typ;

typedef struct LTXiss2D
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss2D_typ;

typedef struct LTXiss2E
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss2E_typ;

typedef struct LTXiss2F
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss2F_typ;

typedef struct LTXiss30
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss30_typ;

typedef struct LTXiss31
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss31_typ;

typedef struct LTXiss32
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss32_typ;

typedef struct LTXiss33
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss33_typ;

typedef struct LTXiss34
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss34_typ;

typedef struct LTXiss35
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss35_typ;

typedef struct LTXiss36
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss36_typ;

typedef struct LTXiss37
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss37_typ;

typedef struct LTXiss38
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss38_typ;

typedef struct LTXiss39
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss39_typ;

typedef struct LTXiss3A
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss3A_typ;

typedef struct LTXiss3B
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss3B_typ;

typedef struct LTXiss3C
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss3C_typ;

typedef struct LTXiss3D
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss3D_typ;

typedef struct LTXiss3E
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss3E_typ;

typedef struct LTXiss3F
{
	/* VAR_INPUT (analog) */
	unsigned short SMode;
	unsigned short NextChan;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long Data;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} LTXiss3F_typ;

typedef struct LTXp2st0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st0_typ;

typedef struct LTXp2st1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st1_typ;

typedef struct LTXp2st2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st2_typ;

typedef struct LTXp2st3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st3_typ;

typedef struct LTXp2st4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st4_typ;

typedef struct LTXp2st5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st5_typ;

typedef struct LTXp2st6
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st6_typ;

typedef struct LTXp2st7
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st7_typ;

typedef struct LTXp2st8
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st8_typ;

typedef struct LTXp2st9
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2st9_typ;

typedef struct LTXp2stA
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2stA_typ;

typedef struct LTXp2stB
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2stB_typ;

typedef struct LTXp2stC
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2stC_typ;

typedef struct LTXp2stD
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2stD_typ;

typedef struct LTXp2stE
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2stE_typ;

typedef struct LTXp2stF
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[74];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXp2stF_typ;

typedef struct LTXpest0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest0_typ;

typedef struct LTXpest1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest1_typ;

typedef struct LTXpest2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest2_typ;

typedef struct LTXpest3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest3_typ;

typedef struct LTXpest4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest4_typ;

typedef struct LTXpest5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest5_typ;

typedef struct LTXpest6
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest6_typ;

typedef struct LTXpest7
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest7_typ;

typedef struct LTXpest8
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest8_typ;

typedef struct LTXpest9
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpest9_typ;

typedef struct LTXpestA
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpestA_typ;

typedef struct LTXpestB
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpestB_typ;

typedef struct LTXpestC
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpestC_typ;

typedef struct LTXpestD
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpestD_typ;

typedef struct LTXpestE
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpestE_typ;

typedef struct LTXpestF
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short LnkMode;
	unsigned short LnkChan;
	unsigned short LnkPar;
	unsigned short SetPar;
	signed long VMin;
	signed long VMax;
	signed long Accel;
	signed long Decel;
	signed long SRef;
	signed long SCmp;
	signed long SCmpRel;
	signed long STarget;
	signed long STargetRel;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short LnkStat;
	unsigned short CmpStat;
	unsigned short VStat;
	signed long VSet;
	signed long SLatch;
	signed long SSet;
	/* VAR (analog) */
	unsigned short FUBSTATIC[68];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Halt;
} LTXpestF_typ;

typedef struct DM455cfg
{
	/* VAR_INPUT (analog) */
	unsigned short Mode0;
	signed short ILimit0;
	unsigned short Mode1;
	signed short ILimit1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} DM455cfg_typ;

typedef struct DM455led
{
	/* VAR_INPUT (analog) */
	unsigned short LedStatus;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} DM455led_typ;

typedef struct DM455ovl
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short OvlStat;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit OvlQuit;
} DM455ovl_typ;

typedef struct DM455rdn
{
	/* VAR_INPUT (analog) */
	unsigned long DataP;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[7];
	/* VAR_INPUT (digital) */
	plcbit enable;
} DM455rdn_typ;

typedef struct DM455wrb
{
	/* VAR_INPUT (analog) */
	unsigned char Offset;
	unsigned char Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[7];
	/* VAR_INPUT (digital) */
	plcbit enable;
} DM455wrb_typ;

typedef struct DM455wrl
{
	/* VAR_INPUT (analog) */
	unsigned char Offset;
	unsigned long Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[7];
	/* VAR_INPUT (digital) */
	plcbit enable;
} DM455wrl_typ;

typedef struct DM455wrw
{
	/* VAR_INPUT (analog) */
	unsigned char Offset;
	unsigned short Data;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[7];
	/* VAR_INPUT (digital) */
	plcbit enable;
} DM455wrw_typ;

typedef struct IP151ac0
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ac0_typ;

typedef struct IP151ac1
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ac1_typ;

typedef struct IP151ac2
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ac2_typ;

typedef struct IP151ac3
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ac3_typ;

typedef struct IP151ac4
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ac4_typ;

typedef struct IP151ac5
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ac5_typ;

typedef struct IP151ai0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ai0_typ;

typedef struct IP151ai1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ai1_typ;

typedef struct IP151ai2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ai2_typ;

typedef struct IP151ai3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ai3_typ;

typedef struct IP151ai4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ai4_typ;

typedef struct IP151ai5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ai5_typ;

typedef struct IP151ao0
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ao0_typ;

typedef struct IP151ao1
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ao1_typ;

typedef struct IP151ao2
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ao2_typ;

typedef struct IP151ao3
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ao3_typ;

typedef struct IP151ao4
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ao4_typ;

typedef struct IP151ao5
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ao5_typ;

typedef struct IP151as0
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151as0_typ;

typedef struct IP151as1
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151as1_typ;

typedef struct IP151as2
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151as2_typ;

typedef struct IP151as3
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151as3_typ;

typedef struct IP151as4
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151as4_typ;

typedef struct IP151as5
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151as5_typ;

typedef struct IP151bc
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	signed short AnCmp0;
	signed short AnCmp1;
	signed short AnCmp2;
	signed short AnCmp3;
	signed short AnCmp4;
	signed short AnCmp5;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151bc_typ;

typedef struct IP151bi
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn0;
	signed short AnIn1;
	signed short AnIn2;
	signed short AnIn3;
	signed short AnIn4;
	signed short AnIn5;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151bi_typ;

typedef struct IP151bo
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	signed short AnOut0;
	signed short AnOut1;
	signed short AnOut2;
	signed short AnOut3;
	signed short AnOut4;
	signed short AnOut5;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151bo_typ;

typedef struct IP151cac
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short CmpMode0;
	unsigned short CmpMode1;
	unsigned short CmpMode2;
	unsigned short CmpMode3;
	unsigned short CmpMode4;
	unsigned short CmpMode5;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[14];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Trig;
} IP151cac_typ;

typedef struct IP151caf
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short FIFOSize;
	unsigned long FIFOAdr0;
	unsigned long FIFOAdr1;
	unsigned long FIFOAdr2;
	unsigned long FIFOAdr3;
	unsigned long FIFOAdr4;
	unsigned long FIFOAdr5;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Trig;
} IP151caf_typ;

typedef struct IP151cd
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151cd_typ;

typedef struct IP151nc0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151nc0_typ;

typedef struct IP151nc1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151nc1_typ;

typedef struct IP151nc2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151nc2_typ;

typedef struct IP151nc3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151nc3_typ;

typedef struct IP151nc4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151nc4_typ;

typedef struct IP151nc5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151nc5_typ;

typedef struct IP151ni0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ni0_typ;

typedef struct IP151ni1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ni1_typ;

typedef struct IP151ni2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ni2_typ;

typedef struct IP151ni3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ni3_typ;

typedef struct IP151ni4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ni4_typ;

typedef struct IP151ni5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151ni5_typ;

typedef struct IP151no0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151no0_typ;

typedef struct IP151no1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151no1_typ;

typedef struct IP151no2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151no2_typ;

typedef struct IP151no3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151no3_typ;

typedef struct IP151no4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151no4_typ;

typedef struct IP151no5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP151no5_typ;

typedef struct IP152ai0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai0_typ;

typedef struct IP152ai1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai1_typ;

typedef struct IP152ai2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai2_typ;

typedef struct IP152ai3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai3_typ;

typedef struct IP152ai4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai4_typ;

typedef struct IP152ai5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai5_typ;

typedef struct IP152ai6
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai6_typ;

typedef struct IP152ai7
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai7_typ;

typedef struct IP152ai8
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai8_typ;

typedef struct IP152ai9
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ai9_typ;

typedef struct IP152aiA
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152aiA_typ;

typedef struct IP152aiB
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152aiB_typ;

typedef struct IP152bi
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn0;
	signed short AnIn1;
	signed short AnIn2;
	signed short AnIn3;
	signed short AnIn4;
	signed short AnIn5;
	signed short AnIn6;
	signed short AnIn7;
	signed short AnIn8;
	signed short AnIn9;
	signed short AnInA;
	signed short AnInB;
	/* VAR (analog) */
	unsigned short FUBSTATIC[31];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152bi_typ;

typedef struct IP152cfg
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Trig;
} IP152cfg_typ;

typedef struct IP152ni0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni0_typ;

typedef struct IP152ni1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni1_typ;

typedef struct IP152ni2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni2_typ;

typedef struct IP152ni3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni3_typ;

typedef struct IP152ni4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni4_typ;

typedef struct IP152ni5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni5_typ;

typedef struct IP152ni6
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni6_typ;

typedef struct IP152ni7
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni7_typ;

typedef struct IP152ni8
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni8_typ;

typedef struct IP152ni9
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152ni9_typ;

typedef struct IP152niA
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152niA_typ;

typedef struct IP152niB
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP152niB_typ;

typedef struct IP161ac0
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ac0_typ;

typedef struct IP161ac1
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ac1_typ;

typedef struct IP161ac2
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ac2_typ;

typedef struct IP161ac3
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ac3_typ;

typedef struct IP161ac4
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ac4_typ;

typedef struct IP161ac5
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ac5_typ;

typedef struct IP161ah0
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ah0_typ;

typedef struct IP161ah1
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ah1_typ;

typedef struct IP161ah2
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ah2_typ;

typedef struct IP161ah3
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ah3_typ;

typedef struct IP161ah4
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ah4_typ;

typedef struct IP161ah5
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ah5_typ;

typedef struct IP161ai0
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ai0_typ;

typedef struct IP161ai1
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ai1_typ;

typedef struct IP161ai2
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ai2_typ;

typedef struct IP161ai3
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ai3_typ;

typedef struct IP161ai4
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ai4_typ;

typedef struct IP161ai5
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ai5_typ;

typedef struct IP161al0
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161al0_typ;

typedef struct IP161al1
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161al1_typ;

typedef struct IP161al2
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161al2_typ;

typedef struct IP161al3
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161al3_typ;

typedef struct IP161al4
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161al4_typ;

typedef struct IP161al5
{
	/* VAR_INPUT (analog) */
	signed short AnCmp;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161al5_typ;

typedef struct IP161ao0
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ao0_typ;

typedef struct IP161ao1
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ao1_typ;

typedef struct IP161ao2
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ao2_typ;

typedef struct IP161ao3
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ao3_typ;

typedef struct IP161ao4
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ao4_typ;

typedef struct IP161ao5
{
	/* VAR_INPUT (analog) */
	signed short AnOut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[9];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ao5_typ;

typedef struct IP161as0
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161as0_typ;

typedef struct IP161as1
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161as1_typ;

typedef struct IP161as2
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161as2_typ;

typedef struct IP161as3
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161as3_typ;

typedef struct IP161as4
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161as4_typ;

typedef struct IP161as5
{
	/* VAR_INPUT (analog) */
	signed short AnOut0;
	signed short AnOut1;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ValAdr;
	signed short Value0;
	signed short Value1;
	/* VAR (analog) */
	unsigned short FUBSTATIC[11];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161as5_typ;

typedef struct IP161bc
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	signed short AnCmp0;
	signed short AnCmp1;
	signed short AnCmp2;
	signed short AnCmp3;
	signed short AnCmp4;
	signed short AnCmp5;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161bc_typ;

typedef struct IP161bh
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	signed short AnCmp0;
	signed short AnCmp1;
	signed short AnCmp2;
	signed short AnCmp3;
	signed short AnCmp4;
	signed short AnCmp5;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161bh_typ;

typedef struct IP161bi
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	signed short AnIn0;
	signed short AnIn1;
	signed short AnIn2;
	signed short AnIn3;
	signed short AnIn4;
	signed short AnIn5;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161bi_typ;

typedef struct IP161bl
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	signed short AnCmp0;
	signed short AnCmp1;
	signed short AnCmp2;
	signed short AnCmp3;
	signed short AnCmp4;
	signed short AnCmp5;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161bl_typ;

typedef struct IP161bo
{
	/* VAR_INPUT (analog) */
	unsigned short ChanOn;
	signed short AnOut0;
	signed short AnOut1;
	signed short AnOut2;
	signed short AnOut3;
	signed short AnOut4;
	signed short AnOut5;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[19];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161bo_typ;

typedef struct IP161ca
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short CmpMode0;
	unsigned short CmpMode1;
	unsigned short CmpMode2;
	unsigned short CmpMode3;
	unsigned short CmpMode4;
	unsigned short CmpMode5;
	unsigned long FifoAdr;
	unsigned short FifoCnt;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short CmpStatus;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Trig;
	/* VAR_OUTPUT (digital) */
	plcbit FifoReady;
} IP161ca_typ;

typedef struct IP161cac
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	unsigned short CmpMode0;
	unsigned short CmpMode1;
	unsigned short CmpMode2;
	unsigned short CmpMode3;
	unsigned short CmpMode4;
	unsigned short CmpMode5;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[12];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Trig;
} IP161cac_typ;

typedef struct IP161cd
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short FUBSTATIC[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161cd_typ;

typedef struct IP161nc0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nc0_typ;

typedef struct IP161nc1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nc1_typ;

typedef struct IP161nc2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nc2_typ;

typedef struct IP161nc3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nc3_typ;

typedef struct IP161nc4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nc4_typ;

typedef struct IP161nc5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nc5_typ;

typedef struct IP161nh0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nh0_typ;

typedef struct IP161nh1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nh1_typ;

typedef struct IP161nh2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nh2_typ;

typedef struct IP161nh3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nh3_typ;

typedef struct IP161nh4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nh4_typ;

typedef struct IP161nh5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nh5_typ;

typedef struct IP161ni0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ni0_typ;

typedef struct IP161ni1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ni1_typ;

typedef struct IP161ni2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ni2_typ;

typedef struct IP161ni3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ni3_typ;

typedef struct IP161ni4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ni4_typ;

typedef struct IP161ni5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161ni5_typ;

typedef struct IP161nl0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nl0_typ;

typedef struct IP161nl1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nl1_typ;

typedef struct IP161nl2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nl2_typ;

typedef struct IP161nl3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nl3_typ;

typedef struct IP161nl4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nl4_typ;

typedef struct IP161nl5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161nl5_typ;

typedef struct IP161no0
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161no0_typ;

typedef struct IP161no1
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161no1_typ;

typedef struct IP161no2
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161no2_typ;

typedef struct IP161no3
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161no3_typ;

typedef struct IP161no4
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161no4_typ;

typedef struct IP161no5
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	signed long d;
	signed long k;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short Error;
	/* VAR (analog) */
	unsigned short FUBSTATIC[13];
	/* VAR_INPUT (digital) */
	plcbit enable;
} IP161no5_typ;

typedef struct IP350caf
{
	/* VAR_INPUT (analog) */
	unsigned short Mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short CHANCnt;
	unsigned long CHANAdr;
	unsigned short FIFOSize;
	unsigned long FIFOAdr;
	/* VAR (analog) */
	unsigned short FUBSTATIC[10];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit Trig;
} IP350caf_typ;



/* Prototyping of functions and function blocks */
void LTXcab0(LTXcab0_typ* inst);
void LTXcab1(LTXcab1_typ* inst);
void LTXcab2(LTXcab2_typ* inst);
void LTXcab3(LTXcab3_typ* inst);
void LTXcab4(LTXcab4_typ* inst);
void LTXcab5(LTXcab5_typ* inst);
void LTXcab6(LTXcab6_typ* inst);
void LTXcab7(LTXcab7_typ* inst);
void LTXcab8(LTXcab8_typ* inst);
void LTXcab9(LTXcab9_typ* inst);
void LTXcabA(LTXcabA_typ* inst);
void LTXcabB(LTXcabB_typ* inst);
void LTXcabC(LTXcabC_typ* inst);
void LTXcabD(LTXcabD_typ* inst);
void LTXcabE(LTXcabE_typ* inst);
void LTXcabF(LTXcabF_typ* inst);
void LTXcabl0(LTXcabl0_typ* inst);
void LTXcabl1(LTXcabl1_typ* inst);
void LTXcabl2(LTXcabl2_typ* inst);
void LTXcabl3(LTXcabl3_typ* inst);
void LTXcabl4(LTXcabl4_typ* inst);
void LTXcabl5(LTXcabl5_typ* inst);
void LTXcabl6(LTXcabl6_typ* inst);
void LTXcabl7(LTXcabl7_typ* inst);
void LTXcabl8(LTXcabl8_typ* inst);
void LTXcabl9(LTXcabl9_typ* inst);
void LTXcablA(LTXcablA_typ* inst);
void LTXcablB(LTXcablB_typ* inst);
void LTXcablC(LTXcablC_typ* inst);
void LTXcablD(LTXcablD_typ* inst);
void LTXcablE(LTXcablE_typ* inst);
void LTXcablF(LTXcablF_typ* inst);
void LTXcabr0(LTXcabr0_typ* inst);
void LTXcabr1(LTXcabr1_typ* inst);
void LTXcabr2(LTXcabr2_typ* inst);
void LTXcabr3(LTXcabr3_typ* inst);
void LTXcabr4(LTXcabr4_typ* inst);
void LTXcabr5(LTXcabr5_typ* inst);
void LTXcabr6(LTXcabr6_typ* inst);
void LTXcabr7(LTXcabr7_typ* inst);
void LTXcabr8(LTXcabr8_typ* inst);
void LTXcabr9(LTXcabr9_typ* inst);
void LTXcabrA(LTXcabrA_typ* inst);
void LTXcabrB(LTXcabrB_typ* inst);
void LTXcabrC(LTXcabrC_typ* inst);
void LTXcabrD(LTXcabrD_typ* inst);
void LTXcabrE(LTXcabrE_typ* inst);
void LTXcabrF(LTXcabrF_typ* inst);
void LTXcpe0(LTXcpe0_typ* inst);
void LTXcpe1(LTXcpe1_typ* inst);
void LTXcpe2(LTXcpe2_typ* inst);
void LTXcpe3(LTXcpe3_typ* inst);
void LTXcpe4(LTXcpe4_typ* inst);
void LTXcpe5(LTXcpe5_typ* inst);
void LTXcpe6(LTXcpe6_typ* inst);
void LTXcpe7(LTXcpe7_typ* inst);
void LTXcpe8(LTXcpe8_typ* inst);
void LTXcpe9(LTXcpe9_typ* inst);
void LTXcpeA(LTXcpeA_typ* inst);
void LTXcpeB(LTXcpeB_typ* inst);
void LTXcpeC(LTXcpeC_typ* inst);
void LTXcpeD(LTXcpeD_typ* inst);
void LTXcpeE(LTXcpeE_typ* inst);
void LTXcpeF(LTXcpeF_typ* inst);
void LTXcpi0(LTXcpi0_typ* inst);
void LTXcpi1(LTXcpi1_typ* inst);
void LTXcpi2(LTXcpi2_typ* inst);
void LTXcpi3(LTXcpi3_typ* inst);
void LTXcpi4(LTXcpi4_typ* inst);
void LTXcpi5(LTXcpi5_typ* inst);
void LTXcpi6(LTXcpi6_typ* inst);
void LTXcpi7(LTXcpi7_typ* inst);
void LTXcpi8(LTXcpi8_typ* inst);
void LTXcpi9(LTXcpi9_typ* inst);
void LTXcpiA(LTXcpiA_typ* inst);
void LTXcpiB(LTXcpiB_typ* inst);
void LTXcpiC(LTXcpiC_typ* inst);
void LTXcpiD(LTXcpiD_typ* inst);
void LTXcpiE(LTXcpiE_typ* inst);
void LTXcpiF(LTXcpiF_typ* inst);
void LTXcrab0(LTXcrab0_typ* inst);
void LTXcrab1(LTXcrab1_typ* inst);
void LTXcrab2(LTXcrab2_typ* inst);
void LTXcrab3(LTXcrab3_typ* inst);
void LTXcrab4(LTXcrab4_typ* inst);
void LTXcrab5(LTXcrab5_typ* inst);
void LTXcrab6(LTXcrab6_typ* inst);
void LTXcrab7(LTXcrab7_typ* inst);
void LTXcrab8(LTXcrab8_typ* inst);
void LTXcrab9(LTXcrab9_typ* inst);
void LTXcrabA(LTXcrabA_typ* inst);
void LTXcrabB(LTXcrabB_typ* inst);
void LTXcrabC(LTXcrabC_typ* inst);
void LTXcrabD(LTXcrabD_typ* inst);
void LTXcrabE(LTXcrabE_typ* inst);
void LTXcrabF(LTXcrabF_typ* inst);
void LTXct0(LTXct0_typ* inst);
void LTXct1(LTXct1_typ* inst);
void LTXct2(LTXct2_typ* inst);
void LTXct3(LTXct3_typ* inst);
void LTXct4(LTXct4_typ* inst);
void LTXct5(LTXct5_typ* inst);
void LTXct6(LTXct6_typ* inst);
void LTXct7(LTXct7_typ* inst);
void LTXct8(LTXct8_typ* inst);
void LTXct9(LTXct9_typ* inst);
void LTXctA(LTXctA_typ* inst);
void LTXctB(LTXctB_typ* inst);
void LTXctC(LTXctC_typ* inst);
void LTXctD(LTXctD_typ* inst);
void LTXctE(LTXctE_typ* inst);
void LTXctF(LTXctF_typ* inst);
void LTXd2i0(LTXd2i0_typ* inst);
void LTXd2i1(LTXd2i1_typ* inst);
void LTXd2i2(LTXd2i2_typ* inst);
void LTXd2i3(LTXd2i3_typ* inst);
void LTXd2i4(LTXd2i4_typ* inst);
void LTXd2i5(LTXd2i5_typ* inst);
void LTXd2i6(LTXd2i6_typ* inst);
void LTXd2i7(LTXd2i7_typ* inst);
void LTXd2i8(LTXd2i8_typ* inst);
void LTXd2i9(LTXd2i9_typ* inst);
void LTXd2iA(LTXd2iA_typ* inst);
void LTXd2iB(LTXd2iB_typ* inst);
void LTXd2iC(LTXd2iC_typ* inst);
void LTXd2iD(LTXd2iD_typ* inst);
void LTXd2iE(LTXd2iE_typ* inst);
void LTXd2iF(LTXd2iF_typ* inst);
void LTXd2o0(LTXd2o0_typ* inst);
void LTXd2o1(LTXd2o1_typ* inst);
void LTXd2o2(LTXd2o2_typ* inst);
void LTXd2o3(LTXd2o3_typ* inst);
void LTXd2o4(LTXd2o4_typ* inst);
void LTXd2o5(LTXd2o5_typ* inst);
void LTXd2o6(LTXd2o6_typ* inst);
void LTXd2o7(LTXd2o7_typ* inst);
void LTXd2o8(LTXd2o8_typ* inst);
void LTXd2o9(LTXd2o9_typ* inst);
void LTXd2oA(LTXd2oA_typ* inst);
void LTXd2oB(LTXd2oB_typ* inst);
void LTXd2oC(LTXd2oC_typ* inst);
void LTXd2oD(LTXd2oD_typ* inst);
void LTXd2oE(LTXd2oE_typ* inst);
void LTXd2oF(LTXd2oF_typ* inst);
void LTXd3i0(LTXd3i0_typ* inst);
void LTXd3i1(LTXd3i1_typ* inst);
void LTXd3i2(LTXd3i2_typ* inst);
void LTXd3i3(LTXd3i3_typ* inst);
void LTXd3i4(LTXd3i4_typ* inst);
void LTXd3i5(LTXd3i5_typ* inst);
void LTXd3i6(LTXd3i6_typ* inst);
void LTXd3i7(LTXd3i7_typ* inst);
void LTXd3i8(LTXd3i8_typ* inst);
void LTXd3i9(LTXd3i9_typ* inst);
void LTXd3iA(LTXd3iA_typ* inst);
void LTXd3iB(LTXd3iB_typ* inst);
void LTXd3iC(LTXd3iC_typ* inst);
void LTXd3iD(LTXd3iD_typ* inst);
void LTXd3iE(LTXd3iE_typ* inst);
void LTXd3iF(LTXd3iF_typ* inst);
void LTXd3o0(LTXd3o0_typ* inst);
void LTXd3o1(LTXd3o1_typ* inst);
void LTXd3o2(LTXd3o2_typ* inst);
void LTXd3o3(LTXd3o3_typ* inst);
void LTXd3o4(LTXd3o4_typ* inst);
void LTXd3o5(LTXd3o5_typ* inst);
void LTXd3o6(LTXd3o6_typ* inst);
void LTXd3o7(LTXd3o7_typ* inst);
void LTXd3o8(LTXd3o8_typ* inst);
void LTXd3o9(LTXd3o9_typ* inst);
void LTXd3oA(LTXd3oA_typ* inst);
void LTXd3oB(LTXd3oB_typ* inst);
void LTXd3oC(LTXd3oC_typ* inst);
void LTXd3oD(LTXd3oD_typ* inst);
void LTXd3oE(LTXd3oE_typ* inst);
void LTXd3oF(LTXd3oF_typ* inst);
void LTXd4i0(LTXd4i0_typ* inst);
void LTXd4i1(LTXd4i1_typ* inst);
void LTXd4i2(LTXd4i2_typ* inst);
void LTXd4i3(LTXd4i3_typ* inst);
void LTXd4i4(LTXd4i4_typ* inst);
void LTXd4i5(LTXd4i5_typ* inst);
void LTXd4i6(LTXd4i6_typ* inst);
void LTXd4i7(LTXd4i7_typ* inst);
void LTXd4i8(LTXd4i8_typ* inst);
void LTXd4i9(LTXd4i9_typ* inst);
void LTXd4iA(LTXd4iA_typ* inst);
void LTXd4iB(LTXd4iB_typ* inst);
void LTXd4iC(LTXd4iC_typ* inst);
void LTXd4iD(LTXd4iD_typ* inst);
void LTXd4iE(LTXd4iE_typ* inst);
void LTXd4iF(LTXd4iF_typ* inst);
void LTXd4o0(LTXd4o0_typ* inst);
void LTXd4o1(LTXd4o1_typ* inst);
void LTXd4o2(LTXd4o2_typ* inst);
void LTXd4o3(LTXd4o3_typ* inst);
void LTXd4o4(LTXd4o4_typ* inst);
void LTXd4o5(LTXd4o5_typ* inst);
void LTXd4o6(LTXd4o6_typ* inst);
void LTXd4o7(LTXd4o7_typ* inst);
void LTXd4o8(LTXd4o8_typ* inst);
void LTXd4o9(LTXd4o9_typ* inst);
void LTXd4oA(LTXd4oA_typ* inst);
void LTXd4oB(LTXd4oB_typ* inst);
void LTXd4oC(LTXd4oC_typ* inst);
void LTXd4oD(LTXd4oD_typ* inst);
void LTXd4oE(LTXd4oE_typ* inst);
void LTXd4oF(LTXd4oF_typ* inst);
void LTXd5i0(LTXd5i0_typ* inst);
void LTXd5i1(LTXd5i1_typ* inst);
void LTXd5i2(LTXd5i2_typ* inst);
void LTXd5i3(LTXd5i3_typ* inst);
void LTXd5i4(LTXd5i4_typ* inst);
void LTXd5i5(LTXd5i5_typ* inst);
void LTXd5i6(LTXd5i6_typ* inst);
void LTXd5i7(LTXd5i7_typ* inst);
void LTXd5i8(LTXd5i8_typ* inst);
void LTXd5i9(LTXd5i9_typ* inst);
void LTXd5iA(LTXd5iA_typ* inst);
void LTXd5iB(LTXd5iB_typ* inst);
void LTXd5iC(LTXd5iC_typ* inst);
void LTXd5iD(LTXd5iD_typ* inst);
void LTXd5iE(LTXd5iE_typ* inst);
void LTXd5iF(LTXd5iF_typ* inst);
void LTXd5o0(LTXd5o0_typ* inst);
void LTXd5o1(LTXd5o1_typ* inst);
void LTXd5o2(LTXd5o2_typ* inst);
void LTXd5o3(LTXd5o3_typ* inst);
void LTXd5o4(LTXd5o4_typ* inst);
void LTXd5o5(LTXd5o5_typ* inst);
void LTXd5o6(LTXd5o6_typ* inst);
void LTXd5o7(LTXd5o7_typ* inst);
void LTXd5o8(LTXd5o8_typ* inst);
void LTXd5o9(LTXd5o9_typ* inst);
void LTXd5oA(LTXd5oA_typ* inst);
void LTXd5oB(LTXd5oB_typ* inst);
void LTXd5oC(LTXd5oC_typ* inst);
void LTXd5oD(LTXd5oD_typ* inst);
void LTXd5oE(LTXd5oE_typ* inst);
void LTXd5oF(LTXd5oF_typ* inst);
void LTXd6i0(LTXd6i0_typ* inst);
void LTXd6i1(LTXd6i1_typ* inst);
void LTXd6i2(LTXd6i2_typ* inst);
void LTXd6i3(LTXd6i3_typ* inst);
void LTXd6i4(LTXd6i4_typ* inst);
void LTXd6i5(LTXd6i5_typ* inst);
void LTXd6i6(LTXd6i6_typ* inst);
void LTXd6i7(LTXd6i7_typ* inst);
void LTXd6i8(LTXd6i8_typ* inst);
void LTXd6i9(LTXd6i9_typ* inst);
void LTXd6iA(LTXd6iA_typ* inst);
void LTXd6iB(LTXd6iB_typ* inst);
void LTXd6iC(LTXd6iC_typ* inst);
void LTXd6iD(LTXd6iD_typ* inst);
void LTXd6iE(LTXd6iE_typ* inst);
void LTXd6iF(LTXd6iF_typ* inst);
void LTXd6o0(LTXd6o0_typ* inst);
void LTXd6o1(LTXd6o1_typ* inst);
void LTXd6o2(LTXd6o2_typ* inst);
void LTXd6o3(LTXd6o3_typ* inst);
void LTXd6o4(LTXd6o4_typ* inst);
void LTXd6o5(LTXd6o5_typ* inst);
void LTXd6o6(LTXd6o6_typ* inst);
void LTXd6o7(LTXd6o7_typ* inst);
void LTXd6o8(LTXd6o8_typ* inst);
void LTXd6o9(LTXd6o9_typ* inst);
void LTXd6oA(LTXd6oA_typ* inst);
void LTXd6oB(LTXd6oB_typ* inst);
void LTXd6oC(LTXd6oC_typ* inst);
void LTXd6oD(LTXd6oD_typ* inst);
void LTXd6oE(LTXd6oE_typ* inst);
void LTXd6oF(LTXd6oF_typ* inst);
void LTXd7i0(LTXd7i0_typ* inst);
void LTXd7i1(LTXd7i1_typ* inst);
void LTXd7i2(LTXd7i2_typ* inst);
void LTXd7i3(LTXd7i3_typ* inst);
void LTXd7i4(LTXd7i4_typ* inst);
void LTXd7i5(LTXd7i5_typ* inst);
void LTXd7i6(LTXd7i6_typ* inst);
void LTXd7i7(LTXd7i7_typ* inst);
void LTXd7i8(LTXd7i8_typ* inst);
void LTXd7i9(LTXd7i9_typ* inst);
void LTXd7iA(LTXd7iA_typ* inst);
void LTXd7iB(LTXd7iB_typ* inst);
void LTXd7iC(LTXd7iC_typ* inst);
void LTXd7iD(LTXd7iD_typ* inst);
void LTXd7iE(LTXd7iE_typ* inst);
void LTXd7iF(LTXd7iF_typ* inst);
void LTXd7o0(LTXd7o0_typ* inst);
void LTXd7o1(LTXd7o1_typ* inst);
void LTXd7o2(LTXd7o2_typ* inst);
void LTXd7o3(LTXd7o3_typ* inst);
void LTXd7o4(LTXd7o4_typ* inst);
void LTXd7o5(LTXd7o5_typ* inst);
void LTXd7o6(LTXd7o6_typ* inst);
void LTXd7o7(LTXd7o7_typ* inst);
void LTXd7o8(LTXd7o8_typ* inst);
void LTXd7o9(LTXd7o9_typ* inst);
void LTXd7oA(LTXd7oA_typ* inst);
void LTXd7oB(LTXd7oB_typ* inst);
void LTXd7oC(LTXd7oC_typ* inst);
void LTXd7oD(LTXd7oD_typ* inst);
void LTXd7oE(LTXd7oE_typ* inst);
void LTXd7oF(LTXd7oF_typ* inst);
void LTXd8i0(LTXd8i0_typ* inst);
void LTXd8i1(LTXd8i1_typ* inst);
void LTXd8i2(LTXd8i2_typ* inst);
void LTXd8i3(LTXd8i3_typ* inst);
void LTXd8i4(LTXd8i4_typ* inst);
void LTXd8i5(LTXd8i5_typ* inst);
void LTXd8i6(LTXd8i6_typ* inst);
void LTXd8i7(LTXd8i7_typ* inst);
void LTXd8i8(LTXd8i8_typ* inst);
void LTXd8i9(LTXd8i9_typ* inst);
void LTXd8iA(LTXd8iA_typ* inst);
void LTXd8iB(LTXd8iB_typ* inst);
void LTXd8iC(LTXd8iC_typ* inst);
void LTXd8iD(LTXd8iD_typ* inst);
void LTXd8iE(LTXd8iE_typ* inst);
void LTXd8iF(LTXd8iF_typ* inst);
void LTXd8o0(LTXd8o0_typ* inst);
void LTXd8o1(LTXd8o1_typ* inst);
void LTXd8o2(LTXd8o2_typ* inst);
void LTXd8o3(LTXd8o3_typ* inst);
void LTXd8o4(LTXd8o4_typ* inst);
void LTXd8o5(LTXd8o5_typ* inst);
void LTXd8o6(LTXd8o6_typ* inst);
void LTXd8o7(LTXd8o7_typ* inst);
void LTXd8o8(LTXd8o8_typ* inst);
void LTXd8o9(LTXd8o9_typ* inst);
void LTXd8oA(LTXd8oA_typ* inst);
void LTXd8oB(LTXd8oB_typ* inst);
void LTXd8oC(LTXd8oC_typ* inst);
void LTXd8oD(LTXd8oD_typ* inst);
void LTXd8oE(LTXd8oE_typ* inst);
void LTXd8oF(LTXd8oF_typ* inst);
void LTXdi0(LTXdi0_typ* inst);
void LTXdi1(LTXdi1_typ* inst);
void LTXdi2(LTXdi2_typ* inst);
void LTXdi3(LTXdi3_typ* inst);
void LTXdi4(LTXdi4_typ* inst);
void LTXdi5(LTXdi5_typ* inst);
void LTXdi6(LTXdi6_typ* inst);
void LTXdi7(LTXdi7_typ* inst);
void LTXdi8(LTXdi8_typ* inst);
void LTXdi9(LTXdi9_typ* inst);
void LTXdiA(LTXdiA_typ* inst);
void LTXdiB(LTXdiB_typ* inst);
void LTXdiC(LTXdiC_typ* inst);
void LTXdiD(LTXdiD_typ* inst);
void LTXdiE(LTXdiE_typ* inst);
void LTXdiex0(LTXdiex0_typ* inst);
void LTXdiex1(LTXdiex1_typ* inst);
void LTXdiex2(LTXdiex2_typ* inst);
void LTXdiex3(LTXdiex3_typ* inst);
void LTXdiex4(LTXdiex4_typ* inst);
void LTXdiex5(LTXdiex5_typ* inst);
void LTXdiex6(LTXdiex6_typ* inst);
void LTXdiex7(LTXdiex7_typ* inst);
void LTXdiex8(LTXdiex8_typ* inst);
void LTXdiex9(LTXdiex9_typ* inst);
void LTXdiexA(LTXdiexA_typ* inst);
void LTXdiexB(LTXdiexB_typ* inst);
void LTXdiexC(LTXdiexC_typ* inst);
void LTXdiexD(LTXdiexD_typ* inst);
void LTXdiexE(LTXdiexE_typ* inst);
void LTXdiexF(LTXdiexF_typ* inst);
void LTXdiF(LTXdiF_typ* inst);
void LTXdil0(LTXdil0_typ* inst);
void LTXdil1(LTXdil1_typ* inst);
void LTXdil2(LTXdil2_typ* inst);
void LTXdil3(LTXdil3_typ* inst);
void LTXdil4(LTXdil4_typ* inst);
void LTXdil5(LTXdil5_typ* inst);
void LTXdil6(LTXdil6_typ* inst);
void LTXdil7(LTXdil7_typ* inst);
void LTXdil8(LTXdil8_typ* inst);
void LTXdil9(LTXdil9_typ* inst);
void LTXdilA(LTXdilA_typ* inst);
void LTXdilB(LTXdilB_typ* inst);
void LTXdilC(LTXdilC_typ* inst);
void LTXdilD(LTXdilD_typ* inst);
void LTXdilE(LTXdilE_typ* inst);
void LTXdilF(LTXdilF_typ* inst);
void LTXdit0(LTXdit0_typ* inst);
void LTXdit1(LTXdit1_typ* inst);
void LTXdit2(LTXdit2_typ* inst);
void LTXdit3(LTXdit3_typ* inst);
void LTXdit4(LTXdit4_typ* inst);
void LTXdit5(LTXdit5_typ* inst);
void LTXdit6(LTXdit6_typ* inst);
void LTXdit7(LTXdit7_typ* inst);
void LTXdit8(LTXdit8_typ* inst);
void LTXdit9(LTXdit9_typ* inst);
void LTXditA(LTXditA_typ* inst);
void LTXditB(LTXditB_typ* inst);
void LTXditC(LTXditC_typ* inst);
void LTXditD(LTXditD_typ* inst);
void LTXditE(LTXditE_typ* inst);
void LTXditF(LTXditF_typ* inst);
void LTXdiws0(LTXdiws0_typ* inst);
void LTXdiws1(LTXdiws1_typ* inst);
void LTXdiws2(LTXdiws2_typ* inst);
void LTXdiws3(LTXdiws3_typ* inst);
void LTXdiws4(LTXdiws4_typ* inst);
void LTXdiws5(LTXdiws5_typ* inst);
void LTXdiws6(LTXdiws6_typ* inst);
void LTXdiws7(LTXdiws7_typ* inst);
void LTXdiws8(LTXdiws8_typ* inst);
void LTXdiws9(LTXdiws9_typ* inst);
void LTXdiwsA(LTXdiwsA_typ* inst);
void LTXdiwsB(LTXdiwsB_typ* inst);
void LTXdiwsC(LTXdiwsC_typ* inst);
void LTXdiwsD(LTXdiwsD_typ* inst);
void LTXdiwsE(LTXdiwsE_typ* inst);
void LTXdiwsF(LTXdiwsF_typ* inst);
void LTXdo0(LTXdo0_typ* inst);
void LTXdo1(LTXdo1_typ* inst);
void LTXdo2(LTXdo2_typ* inst);
void LTXdo3(LTXdo3_typ* inst);
void LTXdo4(LTXdo4_typ* inst);
void LTXdo5(LTXdo5_typ* inst);
void LTXdo6(LTXdo6_typ* inst);
void LTXdo7(LTXdo7_typ* inst);
void LTXdo8(LTXdo8_typ* inst);
void LTXdo9(LTXdo9_typ* inst);
void LTXdoA(LTXdoA_typ* inst);
void LTXdoB(LTXdoB_typ* inst);
void LTXdoC(LTXdoC_typ* inst);
void LTXdoD(LTXdoD_typ* inst);
void LTXdoE(LTXdoE_typ* inst);
void LTXdoF(LTXdoF_typ* inst);
void LTXdol0(LTXdol0_typ* inst);
void LTXdol1(LTXdol1_typ* inst);
void LTXdol2(LTXdol2_typ* inst);
void LTXdol3(LTXdol3_typ* inst);
void LTXdol4(LTXdol4_typ* inst);
void LTXdol5(LTXdol5_typ* inst);
void LTXdol6(LTXdol6_typ* inst);
void LTXdol7(LTXdol7_typ* inst);
void LTXdol8(LTXdol8_typ* inst);
void LTXdol9(LTXdol9_typ* inst);
void LTXdolA(LTXdolA_typ* inst);
void LTXdolB(LTXdolB_typ* inst);
void LTXdolC(LTXdolC_typ* inst);
void LTXdolD(LTXdolD_typ* inst);
void LTXdolE(LTXdolE_typ* inst);
void LTXdolF(LTXdolF_typ* inst);
void LTXdpwl0(LTXdpwl0_typ* inst);
void LTXdpwl1(LTXdpwl1_typ* inst);
void LTXdpwl2(LTXdpwl2_typ* inst);
void LTXdpwl3(LTXdpwl3_typ* inst);
void LTXdpwl4(LTXdpwl4_typ* inst);
void LTXdpwl5(LTXdpwl5_typ* inst);
void LTXdpwl6(LTXdpwl6_typ* inst);
void LTXdpwl7(LTXdpwl7_typ* inst);
void LTXdpwl8(LTXdpwl8_typ* inst);
void LTXdpwl9(LTXdpwl9_typ* inst);
void LTXdpwlA(LTXdpwlA_typ* inst);
void LTXdpwlB(LTXdpwlB_typ* inst);
void LTXdpwlC(LTXdpwlC_typ* inst);
void LTXdpwlD(LTXdpwlD_typ* inst);
void LTXdpwlE(LTXdpwlE_typ* inst);
void LTXdpwlF(LTXdpwlF_typ* inst);
void LTXdpwm0(LTXdpwm0_typ* inst);
void LTXdpwm1(LTXdpwm1_typ* inst);
void LTXdpwm2(LTXdpwm2_typ* inst);
void LTXdpwm3(LTXdpwm3_typ* inst);
void LTXdpwm4(LTXdpwm4_typ* inst);
void LTXdpwm5(LTXdpwm5_typ* inst);
void LTXdpwm6(LTXdpwm6_typ* inst);
void LTXdpwm7(LTXdpwm7_typ* inst);
void LTXdpwm8(LTXdpwm8_typ* inst);
void LTXdpwm9(LTXdpwm9_typ* inst);
void LTXdpwmA(LTXdpwmA_typ* inst);
void LTXdpwmB(LTXdpwmB_typ* inst);
void LTXdpwmC(LTXdpwmC_typ* inst);
void LTXdpwmD(LTXdpwmD_typ* inst);
void LTXdpwmE(LTXdpwmE_typ* inst);
void LTXdpwmF(LTXdpwmF_typ* inst);
void LTXi2c00(LTXi2c00_typ* inst);
void LTXi2c01(LTXi2c01_typ* inst);
void LTXi2c02(LTXi2c02_typ* inst);
void LTXi2c03(LTXi2c03_typ* inst);
void LTXi2c04(LTXi2c04_typ* inst);
void LTXi2c05(LTXi2c05_typ* inst);
void LTXi2c06(LTXi2c06_typ* inst);
void LTXi2c07(LTXi2c07_typ* inst);
void LTXi2c08(LTXi2c08_typ* inst);
void LTXi2c09(LTXi2c09_typ* inst);
void LTXi2c0A(LTXi2c0A_typ* inst);
void LTXi2c0B(LTXi2c0B_typ* inst);
void LTXi2c0C(LTXi2c0C_typ* inst);
void LTXi2c0D(LTXi2c0D_typ* inst);
void LTXi2c0E(LTXi2c0E_typ* inst);
void LTXi2c0F(LTXi2c0F_typ* inst);
void LTXi2c10(LTXi2c10_typ* inst);
void LTXi2c11(LTXi2c11_typ* inst);
void LTXi2c12(LTXi2c12_typ* inst);
void LTXi2c13(LTXi2c13_typ* inst);
void LTXi2c14(LTXi2c14_typ* inst);
void LTXi2c15(LTXi2c15_typ* inst);
void LTXi2c16(LTXi2c16_typ* inst);
void LTXi2c17(LTXi2c17_typ* inst);
void LTXi2c18(LTXi2c18_typ* inst);
void LTXi2c19(LTXi2c19_typ* inst);
void LTXi2c1A(LTXi2c1A_typ* inst);
void LTXi2c1B(LTXi2c1B_typ* inst);
void LTXi2c1C(LTXi2c1C_typ* inst);
void LTXi2c1D(LTXi2c1D_typ* inst);
void LTXi2c1E(LTXi2c1E_typ* inst);
void LTXi2c1F(LTXi2c1F_typ* inst);
void LTXi2c20(LTXi2c20_typ* inst);
void LTXi2c21(LTXi2c21_typ* inst);
void LTXi2c22(LTXi2c22_typ* inst);
void LTXi2c23(LTXi2c23_typ* inst);
void LTXi2c24(LTXi2c24_typ* inst);
void LTXi2c25(LTXi2c25_typ* inst);
void LTXi2c26(LTXi2c26_typ* inst);
void LTXi2c27(LTXi2c27_typ* inst);
void LTXi2c28(LTXi2c28_typ* inst);
void LTXi2c29(LTXi2c29_typ* inst);
void LTXi2c2A(LTXi2c2A_typ* inst);
void LTXi2c2B(LTXi2c2B_typ* inst);
void LTXi2c2C(LTXi2c2C_typ* inst);
void LTXi2c2D(LTXi2c2D_typ* inst);
void LTXi2c2E(LTXi2c2E_typ* inst);
void LTXi2c2F(LTXi2c2F_typ* inst);
void LTXiss00(LTXiss00_typ* inst);
void LTXiss01(LTXiss01_typ* inst);
void LTXiss02(LTXiss02_typ* inst);
void LTXiss03(LTXiss03_typ* inst);
void LTXiss04(LTXiss04_typ* inst);
void LTXiss05(LTXiss05_typ* inst);
void LTXiss06(LTXiss06_typ* inst);
void LTXiss07(LTXiss07_typ* inst);
void LTXiss08(LTXiss08_typ* inst);
void LTXiss09(LTXiss09_typ* inst);
void LTXiss0A(LTXiss0A_typ* inst);
void LTXiss0B(LTXiss0B_typ* inst);
void LTXiss0C(LTXiss0C_typ* inst);
void LTXiss0D(LTXiss0D_typ* inst);
void LTXiss0E(LTXiss0E_typ* inst);
void LTXiss0F(LTXiss0F_typ* inst);
void LTXiss10(LTXiss10_typ* inst);
void LTXiss11(LTXiss11_typ* inst);
void LTXiss12(LTXiss12_typ* inst);
void LTXiss13(LTXiss13_typ* inst);
void LTXiss14(LTXiss14_typ* inst);
void LTXiss15(LTXiss15_typ* inst);
void LTXiss16(LTXiss16_typ* inst);
void LTXiss17(LTXiss17_typ* inst);
void LTXiss18(LTXiss18_typ* inst);
void LTXiss19(LTXiss19_typ* inst);
void LTXiss1A(LTXiss1A_typ* inst);
void LTXiss1B(LTXiss1B_typ* inst);
void LTXiss1C(LTXiss1C_typ* inst);
void LTXiss1D(LTXiss1D_typ* inst);
void LTXiss1E(LTXiss1E_typ* inst);
void LTXiss1F(LTXiss1F_typ* inst);
void LTXiss20(LTXiss20_typ* inst);
void LTXiss21(LTXiss21_typ* inst);
void LTXiss22(LTXiss22_typ* inst);
void LTXiss23(LTXiss23_typ* inst);
void LTXiss24(LTXiss24_typ* inst);
void LTXiss25(LTXiss25_typ* inst);
void LTXiss26(LTXiss26_typ* inst);
void LTXiss27(LTXiss27_typ* inst);
void LTXiss28(LTXiss28_typ* inst);
void LTXiss29(LTXiss29_typ* inst);
void LTXiss2A(LTXiss2A_typ* inst);
void LTXiss2B(LTXiss2B_typ* inst);
void LTXiss2C(LTXiss2C_typ* inst);
void LTXiss2D(LTXiss2D_typ* inst);
void LTXiss2E(LTXiss2E_typ* inst);
void LTXiss2F(LTXiss2F_typ* inst);
void LTXiss30(LTXiss30_typ* inst);
void LTXiss31(LTXiss31_typ* inst);
void LTXiss32(LTXiss32_typ* inst);
void LTXiss33(LTXiss33_typ* inst);
void LTXiss34(LTXiss34_typ* inst);
void LTXiss35(LTXiss35_typ* inst);
void LTXiss36(LTXiss36_typ* inst);
void LTXiss37(LTXiss37_typ* inst);
void LTXiss38(LTXiss38_typ* inst);
void LTXiss39(LTXiss39_typ* inst);
void LTXiss3A(LTXiss3A_typ* inst);
void LTXiss3B(LTXiss3B_typ* inst);
void LTXiss3C(LTXiss3C_typ* inst);
void LTXiss3D(LTXiss3D_typ* inst);
void LTXiss3E(LTXiss3E_typ* inst);
void LTXiss3F(LTXiss3F_typ* inst);
void LTXp2st0(LTXp2st0_typ* inst);
void LTXp2st1(LTXp2st1_typ* inst);
void LTXp2st2(LTXp2st2_typ* inst);
void LTXp2st3(LTXp2st3_typ* inst);
void LTXp2st4(LTXp2st4_typ* inst);
void LTXp2st5(LTXp2st5_typ* inst);
void LTXp2st6(LTXp2st6_typ* inst);
void LTXp2st7(LTXp2st7_typ* inst);
void LTXp2st8(LTXp2st8_typ* inst);
void LTXp2st9(LTXp2st9_typ* inst);
void LTXp2stA(LTXp2stA_typ* inst);
void LTXp2stB(LTXp2stB_typ* inst);
void LTXp2stC(LTXp2stC_typ* inst);
void LTXp2stD(LTXp2stD_typ* inst);
void LTXp2stE(LTXp2stE_typ* inst);
void LTXp2stF(LTXp2stF_typ* inst);
void LTXpest0(LTXpest0_typ* inst);
void LTXpest1(LTXpest1_typ* inst);
void LTXpest2(LTXpest2_typ* inst);
void LTXpest3(LTXpest3_typ* inst);
void LTXpest4(LTXpest4_typ* inst);
void LTXpest5(LTXpest5_typ* inst);
void LTXpest6(LTXpest6_typ* inst);
void LTXpest7(LTXpest7_typ* inst);
void LTXpest8(LTXpest8_typ* inst);
void LTXpest9(LTXpest9_typ* inst);
void LTXpestA(LTXpestA_typ* inst);
void LTXpestB(LTXpestB_typ* inst);
void LTXpestC(LTXpestC_typ* inst);
void LTXpestD(LTXpestD_typ* inst);
void LTXpestE(LTXpestE_typ* inst);
void LTXpestF(LTXpestF_typ* inst);
void DM455cfg(DM455cfg_typ* inst);
void DM455led(DM455led_typ* inst);
void DM455ovl(DM455ovl_typ* inst);
void DM455rdn(DM455rdn_typ* inst);
void DM455wrb(DM455wrb_typ* inst);
void DM455wrl(DM455wrl_typ* inst);
void DM455wrw(DM455wrw_typ* inst);
void IP151ac0(IP151ac0_typ* inst);
void IP151ac1(IP151ac1_typ* inst);
void IP151ac2(IP151ac2_typ* inst);
void IP151ac3(IP151ac3_typ* inst);
void IP151ac4(IP151ac4_typ* inst);
void IP151ac5(IP151ac5_typ* inst);
void IP151ai0(IP151ai0_typ* inst);
void IP151ai1(IP151ai1_typ* inst);
void IP151ai2(IP151ai2_typ* inst);
void IP151ai3(IP151ai3_typ* inst);
void IP151ai4(IP151ai4_typ* inst);
void IP151ai5(IP151ai5_typ* inst);
void IP151ao0(IP151ao0_typ* inst);
void IP151ao1(IP151ao1_typ* inst);
void IP151ao2(IP151ao2_typ* inst);
void IP151ao3(IP151ao3_typ* inst);
void IP151ao4(IP151ao4_typ* inst);
void IP151ao5(IP151ao5_typ* inst);
void IP151as0(IP151as0_typ* inst);
void IP151as1(IP151as1_typ* inst);
void IP151as2(IP151as2_typ* inst);
void IP151as3(IP151as3_typ* inst);
void IP151as4(IP151as4_typ* inst);
void IP151as5(IP151as5_typ* inst);
void IP151bc(IP151bc_typ* inst);
void IP151bi(IP151bi_typ* inst);
void IP151bo(IP151bo_typ* inst);
void IP151cac(IP151cac_typ* inst);
void IP151caf(IP151caf_typ* inst);
void IP151cd(IP151cd_typ* inst);
void IP151nc0(IP151nc0_typ* inst);
void IP151nc1(IP151nc1_typ* inst);
void IP151nc2(IP151nc2_typ* inst);
void IP151nc3(IP151nc3_typ* inst);
void IP151nc4(IP151nc4_typ* inst);
void IP151nc5(IP151nc5_typ* inst);
void IP151ni0(IP151ni0_typ* inst);
void IP151ni1(IP151ni1_typ* inst);
void IP151ni2(IP151ni2_typ* inst);
void IP151ni3(IP151ni3_typ* inst);
void IP151ni4(IP151ni4_typ* inst);
void IP151ni5(IP151ni5_typ* inst);
void IP151no0(IP151no0_typ* inst);
void IP151no1(IP151no1_typ* inst);
void IP151no2(IP151no2_typ* inst);
void IP151no3(IP151no3_typ* inst);
void IP151no4(IP151no4_typ* inst);
void IP151no5(IP151no5_typ* inst);
void IP152ai0(IP152ai0_typ* inst);
void IP152ai1(IP152ai1_typ* inst);
void IP152ai2(IP152ai2_typ* inst);
void IP152ai3(IP152ai3_typ* inst);
void IP152ai4(IP152ai4_typ* inst);
void IP152ai5(IP152ai5_typ* inst);
void IP152ai6(IP152ai6_typ* inst);
void IP152ai7(IP152ai7_typ* inst);
void IP152ai8(IP152ai8_typ* inst);
void IP152ai9(IP152ai9_typ* inst);
void IP152aiA(IP152aiA_typ* inst);
void IP152aiB(IP152aiB_typ* inst);
void IP152bi(IP152bi_typ* inst);
void IP152cfg(IP152cfg_typ* inst);
void IP152ni0(IP152ni0_typ* inst);
void IP152ni1(IP152ni1_typ* inst);
void IP152ni2(IP152ni2_typ* inst);
void IP152ni3(IP152ni3_typ* inst);
void IP152ni4(IP152ni4_typ* inst);
void IP152ni5(IP152ni5_typ* inst);
void IP152ni6(IP152ni6_typ* inst);
void IP152ni7(IP152ni7_typ* inst);
void IP152ni8(IP152ni8_typ* inst);
void IP152ni9(IP152ni9_typ* inst);
void IP152niA(IP152niA_typ* inst);
void IP152niB(IP152niB_typ* inst);
void IP161ac0(IP161ac0_typ* inst);
void IP161ac1(IP161ac1_typ* inst);
void IP161ac2(IP161ac2_typ* inst);
void IP161ac3(IP161ac3_typ* inst);
void IP161ac4(IP161ac4_typ* inst);
void IP161ac5(IP161ac5_typ* inst);
void IP161ah0(IP161ah0_typ* inst);
void IP161ah1(IP161ah1_typ* inst);
void IP161ah2(IP161ah2_typ* inst);
void IP161ah3(IP161ah3_typ* inst);
void IP161ah4(IP161ah4_typ* inst);
void IP161ah5(IP161ah5_typ* inst);
void IP161ai0(IP161ai0_typ* inst);
void IP161ai1(IP161ai1_typ* inst);
void IP161ai2(IP161ai2_typ* inst);
void IP161ai3(IP161ai3_typ* inst);
void IP161ai4(IP161ai4_typ* inst);
void IP161ai5(IP161ai5_typ* inst);
void IP161al0(IP161al0_typ* inst);
void IP161al1(IP161al1_typ* inst);
void IP161al2(IP161al2_typ* inst);
void IP161al3(IP161al3_typ* inst);
void IP161al4(IP161al4_typ* inst);
void IP161al5(IP161al5_typ* inst);
void IP161ao0(IP161ao0_typ* inst);
void IP161ao1(IP161ao1_typ* inst);
void IP161ao2(IP161ao2_typ* inst);
void IP161ao3(IP161ao3_typ* inst);
void IP161ao4(IP161ao4_typ* inst);
void IP161ao5(IP161ao5_typ* inst);
void IP161as0(IP161as0_typ* inst);
void IP161as1(IP161as1_typ* inst);
void IP161as2(IP161as2_typ* inst);
void IP161as3(IP161as3_typ* inst);
void IP161as4(IP161as4_typ* inst);
void IP161as5(IP161as5_typ* inst);
void IP161bc(IP161bc_typ* inst);
void IP161bh(IP161bh_typ* inst);
void IP161bi(IP161bi_typ* inst);
void IP161bl(IP161bl_typ* inst);
void IP161bo(IP161bo_typ* inst);
void IP161ca(IP161ca_typ* inst);
void IP161cac(IP161cac_typ* inst);
void IP161cd(IP161cd_typ* inst);
void IP161nc0(IP161nc0_typ* inst);
void IP161nc1(IP161nc1_typ* inst);
void IP161nc2(IP161nc2_typ* inst);
void IP161nc3(IP161nc3_typ* inst);
void IP161nc4(IP161nc4_typ* inst);
void IP161nc5(IP161nc5_typ* inst);
void IP161nh0(IP161nh0_typ* inst);
void IP161nh1(IP161nh1_typ* inst);
void IP161nh2(IP161nh2_typ* inst);
void IP161nh3(IP161nh3_typ* inst);
void IP161nh4(IP161nh4_typ* inst);
void IP161nh5(IP161nh5_typ* inst);
void IP161ni0(IP161ni0_typ* inst);
void IP161ni1(IP161ni1_typ* inst);
void IP161ni2(IP161ni2_typ* inst);
void IP161ni3(IP161ni3_typ* inst);
void IP161ni4(IP161ni4_typ* inst);
void IP161ni5(IP161ni5_typ* inst);
void IP161nl0(IP161nl0_typ* inst);
void IP161nl1(IP161nl1_typ* inst);
void IP161nl2(IP161nl2_typ* inst);
void IP161nl3(IP161nl3_typ* inst);
void IP161nl4(IP161nl4_typ* inst);
void IP161nl5(IP161nl5_typ* inst);
void IP161no0(IP161no0_typ* inst);
void IP161no1(IP161no1_typ* inst);
void IP161no2(IP161no2_typ* inst);
void IP161no3(IP161no3_typ* inst);
void IP161no4(IP161no4_typ* inst);
void IP161no5(IP161no5_typ* inst);
void IP350caf(IP350caf_typ* inst);


__asm__(".section \".plc\"");

/* used IEC Files */
__asm__(".ascii \"iecfile \\\"C:/AS30/As/Library/AsTpu/V4.01.0/AsTpu.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */
#ifdef _ASTPU_EXPORT
	__asm__(".ascii\"plcexport \\\"LTXcab0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcab9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabl9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcablA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcablB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcablC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcablD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcablE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcablF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabr9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabrA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabrB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabrC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabrD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabrE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcabrF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpe9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpeA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpeB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpeC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpeD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpeE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpeF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpi9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpiA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpiB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpiC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpiD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpiE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcpiF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrab9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrabA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrabB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrabC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrabD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrabE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXcrabF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXct9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXctA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXctB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXctC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXctD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXctE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXctF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2i9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2iA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2iB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2iC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2iD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2iE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2iF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2o9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2oA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2oB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2oC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2oD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2oE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd2oF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3i9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3iA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3iB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3iC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3iD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3iE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3iF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3o9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3oA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3oB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3oC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3oD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3oE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd3oF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4i9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4iA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4iB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4iC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4iD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4iE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4iF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4o9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4oA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4oB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4oC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4oD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4oE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd4oF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5i9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5iA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5iB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5iC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5iD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5iE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5iF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5o9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5oA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5oB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5oC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5oD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5oE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd5oF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6i9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6iA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6iB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6iC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6iD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6iE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6iF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6o9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6oA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6oB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6oC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6oD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6oE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd6oF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7i9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7iA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7iB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7iC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7iD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7iE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7iF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7o9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7oA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7oB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7oC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7oD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7oE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd7oF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8i9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8iA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8iB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8iC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8iD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8iE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8iF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8o9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8oA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8oB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8oC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8oD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8oE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXd8oF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdi9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiex9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiexA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiexB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiexC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiexD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiexE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiexF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdil9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdilA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdilB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdilC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdilD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdilE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdilF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdit9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXditA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXditB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXditC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXditD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXditE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXditF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiws9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiwsA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiwsB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiwsC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiwsD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiwsE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdiwsF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdo9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdoA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdoB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdoC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdoD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdoE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdoF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdol9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdolA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdolB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdolC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdolD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdolE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdolF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwl9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwlA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwlB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwlC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwlD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwlE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwlF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwm9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwmA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwmB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwmC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwmD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwmE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXdpwmF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c00\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c01\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c02\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c03\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c04\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c05\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c06\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c07\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c08\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c09\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c0A\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c0B\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c0C\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c0D\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c0E\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c0F\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c10\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c11\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c12\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c13\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c14\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c15\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c16\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c17\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c18\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c19\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c1A\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c1B\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c1C\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c1D\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c1E\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c1F\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c20\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c21\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c22\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c23\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c24\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c25\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c26\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c27\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c28\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c29\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c2A\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c2B\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c2C\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c2D\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c2E\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXi2c2F\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss00\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss01\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss02\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss03\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss04\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss05\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss06\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss07\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss08\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss09\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss0A\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss0B\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss0C\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss0D\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss0E\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss0F\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss10\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss11\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss12\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss13\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss14\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss15\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss16\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss17\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss18\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss19\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss1A\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss1B\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss1C\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss1D\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss1E\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss1F\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss20\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss21\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss22\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss23\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss24\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss25\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss26\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss27\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss28\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss29\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss2A\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss2B\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss2C\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss2D\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss2E\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss2F\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss30\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss31\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss32\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss33\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss34\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss35\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss36\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss37\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss38\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss39\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss3A\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss3B\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss3C\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss3D\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss3E\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXiss3F\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2st9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2stA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2stB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2stC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2stD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2stE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXp2stF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpest9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpestA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpestB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpestC\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpestD\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpestE\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"LTXpestF\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"DM455cfg\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"DM455led\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"DM455ovl\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"DM455rdn\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"DM455wrb\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"DM455wrl\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"DM455wrw\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ac0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ac1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ac2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ac3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ac4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ac5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ai0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ai1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ai2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ai3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ai4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ai5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ao0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ao1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ao2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ao3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ao4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ao5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151as0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151as1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151as2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151as3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151as4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151as5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151bc\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151bi\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151bo\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151cac\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151caf\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151cd\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151nc0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151nc1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151nc2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151nc3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151nc4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151nc5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ni0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ni1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ni2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ni3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ni4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151ni5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151no0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151no1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151no2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151no3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151no4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP151no5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ai9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152aiA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152aiB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152bi\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152cfg\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni6\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni7\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni8\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152ni9\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152niA\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP152niB\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ac0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ac1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ac2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ac3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ac4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ac5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ah0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ah1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ah2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ah3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ah4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ah5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ai0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ai1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ai2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ai3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ai4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ai5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161al0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161al1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161al2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161al3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161al4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161al5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ao0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ao1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ao2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ao3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ao4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ao5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161as0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161as1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161as2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161as3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161as4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161as5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161bc\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161bh\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161bi\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161bl\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161bo\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ca\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161cac\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161cd\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nc0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nc1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nc2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nc3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nc4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nc5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nh0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nh1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nh2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nh3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nh4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nh5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ni0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ni1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ni2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ni3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ni4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161ni5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nl0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nl1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nl2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nl3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nl4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161nl5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161no0\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161no1\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161no2\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161no3\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161no4\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP161no5\\\"\\n\"");
	__asm__(".ascii\"plcexport \\\"IP350caf\\\"\\n\"");
#endif

__asm__(".previous");


#endif /* _ASTPU_20040715152409_ */

