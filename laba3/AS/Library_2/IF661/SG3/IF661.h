/* Automation Studio Generated Header File, Format Version 1.00 */
/* do not change */
#ifndef IF661_H_
#define IF661_H_
#define _WEAK	__attribute__((__weak__))

#include <bur/plc.h>



/* Constants */


/* Datatypes */


/* Datatypes of function blocks */
typedef struct IF661
{
	/* VAR_INPUT (analogous) */
	unsigned long device;
	unsigned short L2DPid;
	unsigned long outbuf;
	unsigned char outlen;
	unsigned long inbuf;
	unsigned char inlen;
	unsigned long outcopy;
	unsigned long incopy;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	/* VAR (analogous) */
	unsigned char init;
	unsigned char byRunState;
	unsigned char baudrate;
	unsigned char diagflag;
	unsigned long pCfgData;
	unsigned long pInData;
	unsigned long pDiagData;
	unsigned long param0;
	unsigned long param4;
	unsigned long param8;
	unsigned long param12;
	unsigned long param16;
	unsigned long param20;
	unsigned long base0;
	unsigned long base1;
	unsigned long base2;
	unsigned long base3;
	unsigned long base4;
	unsigned long base5;
	unsigned long base6;
	unsigned long base7;
	unsigned long base8;
	unsigned long base9;
	unsigned long base10;
	unsigned long base11;
	unsigned long base12;
	unsigned long base13;
	unsigned long base14;
	unsigned long base15;
	unsigned long base16;
	unsigned long base17;
	unsigned long base18;
	unsigned long base19;
	unsigned long base20;
	unsigned long base21;
	unsigned long base22;
	unsigned long base23;
	unsigned long base24;
	unsigned long base25;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IF661_typ;



/* Prototyping of functions and function blocks */
void IF661(IF661_typ* inst);



#endif /* IF661_H_ */

