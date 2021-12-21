/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _C220MAN_
#define _C220MAN_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Datatypes and datatypes of function blocks */
typedef struct Ptabini
{
	/* VAR_INPUT (analog) */
	unsigned long keytab1;
	unsigned long keytab2;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Ptabini_typ;

typedef struct Pstat
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Pstat_typ;

typedef struct Psetled
{
	/* VAR_INPUT (analog) */
	unsigned short key;
	unsigned char mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned short old_key;
	unsigned char old_mode;
	unsigned char first_flag;
	unsigned char srch_flag;
	unsigned char phy_key;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Psetled_typ;

typedef struct Poutw
{
	/* VAR_INPUT (analog) */
	unsigned short value;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned short old_value;
	unsigned char old_attr;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit zero_flag;
} Poutw_typ;

typedef struct Pouttxtn
{
	/* VAR_INPUT (analog) */
	unsigned char row;
	unsigned char column;
	unsigned long text;
	unsigned char textlen;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Pouttxtn_typ;

typedef struct Pouttext
{
	/* VAR_INPUT (analog) */
	unsigned char row;
	unsigned char column;
	unsigned long text;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Pouttext_typ;

typedef struct Poutrect
{
	/* VAR_INPUT (analog) */
	unsigned char x;
	unsigned char y;
	unsigned char width;
	unsigned char height;
	unsigned char lwidth;
	unsigned char attribut;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned char old_x;
	unsigned char old_y;
	unsigned char old_width;
	unsigned char old_height;
	unsigned char old_lwidth;
	unsigned char old_attr;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Poutrect_typ;

typedef struct Poutl
{
	/* VAR_INPUT (analog) */
	unsigned long value;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned long old_value;
	unsigned char old_attr;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit zero_flag;
} Poutl_typ;

typedef struct Pouti8
{
	/* VAR_INPUT (analog) */
	signed char value;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	signed char old_value;
	unsigned char old_attr;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit zero_flag;
} Pouti8_typ;

typedef struct Pouti32
{
	/* VAR_INPUT (analog) */
	signed long value;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	signed long old_value;
	unsigned char old_attr;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit zero_flag;
} Pouti32_typ;

typedef struct Pouti16
{
	/* VAR_INPUT (analog) */
	signed short value;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	signed short old_value;
	unsigned char old_attr;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit zero_flag;
} Pouti16_typ;

typedef struct Poutbmp
{
	/* VAR_INPUT (analog) */
	unsigned char x;
	unsigned char y;
	unsigned char width;
	unsigned char height;
	unsigned long bmp_adr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned char old_x;
	unsigned char old_y;
	unsigned char old_width;
	unsigned char old_height;
	unsigned long old_bmpptr;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Poutbmp_typ;

typedef struct Poutbar
{
	/* VAR_INPUT (analog) */
	unsigned char value;
	unsigned char x;
	unsigned char y;
	unsigned char width;
	unsigned char length;
	unsigned char direction;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned char old_value;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Poutbar_typ;

typedef struct Poutb
{
	/* VAR_INPUT (analog) */
	unsigned char value;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned char old_value;
	unsigned char old_attr;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit zero_flag;
} Poutb_typ;

typedef struct Plight
{
	/* VAR_INPUT (analog) */
	unsigned char mode;
	unsigned char time;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Plight_typ;

typedef struct Pinw
{
	/* VAR_INPUT (analog) */
	unsigned long value_adr;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	unsigned short lowlimit;
	unsigned short highlimit;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned short focus_cnt;
	unsigned short old_value;
	unsigned char first_flag;
	unsigned char old_attr;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit focus;
	plcbit zero_flag;
	/* VAR_OUTPUT (digital) */
	plcbit valid;
	plcbit aktivated;
} Pinw_typ;

typedef struct Pinstr
{
	/* VAR_INPUT (analog) */
	unsigned long text_adr;
	unsigned char textlen;
	unsigned char row;
	unsigned char column;
	unsigned char attribut;
	unsigned char size;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned long old_value0;
	unsigned long old_value1;
	unsigned long old_value2;
	unsigned long old_value3;
	unsigned long old_value4;
	unsigned long old_value5;
	unsigned long old_value6;
	unsigned long old_value7;
	unsigned long old_value8;
	unsigned long old_value9;
	unsigned short focus_cnt;
	unsigned char first_flag;
	unsigned char old_attr;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit focus;
	/* VAR_OUTPUT (digital) */
	plcbit valid;
	plcbit aktivated;
} Pinstr_typ;

typedef struct Pinl
{
	/* VAR_INPUT (analog) */
	unsigned long value_adr;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	unsigned long lowlimit;
	unsigned long highlimit;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned long old_value;
	unsigned short focus_cnt;
	unsigned char first_flag;
	unsigned char old_attr;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit focus;
	plcbit zero_flag;
	/* VAR_OUTPUT (digital) */
	plcbit valid;
	plcbit aktivated;
} Pinl_typ;

typedef struct Pini8
{
	/* VAR_INPUT (analog) */
	unsigned long value_adr;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	signed char lowlimit;
	signed char highlimit;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned short focus_cnt;
	unsigned char first_flag;
	unsigned char old_attr;
	signed char old_value;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit focus;
	plcbit zero_flag;
	/* VAR_OUTPUT (digital) */
	plcbit valid;
	plcbit aktivated;
} Pini8_typ;

typedef struct Pini32
{
	/* VAR_INPUT (analog) */
	unsigned long value_adr;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	signed long lowlimit;
	signed long highlimit;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	signed long old_value;
	unsigned short focus_cnt;
	unsigned char first_flag;
	unsigned char old_attr;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit focus;
	plcbit zero_flag;
	/* VAR_OUTPUT (digital) */
	plcbit valid;
	plcbit aktivated;
} Pini32_typ;

typedef struct Pini16
{
	/* VAR_INPUT (analog) */
	unsigned long value_adr;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	signed short lowlimit;
	signed short highlimit;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned short focus_cnt;
	unsigned char first_flag;
	unsigned char old_attr;
	signed short old_value;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit focus;
	plcbit zero_flag;
	/* VAR_OUTPUT (digital) */
	plcbit valid;
	plcbit aktivated;
} Pini16_typ;

typedef struct Pinb
{
	/* VAR_INPUT (analog) */
	unsigned long value_adr;
	unsigned char row;
	unsigned char column;
	unsigned char digits;
	unsigned char dbdp;
	unsigned char attribut;
	unsigned char size;
	unsigned char lowlimit;
	unsigned char highlimit;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned short focus_cnt;
	unsigned char first_flag;
	unsigned char old_attr;
	unsigned char old_value;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit focus;
	plcbit zero_flag;
	/* VAR_OUTPUT (digital) */
	plcbit valid;
	plcbit aktivated;
} Pinb_typ;

typedef struct Pgetkmtx
{
	/* VAR_INPUT (analog) */
	unsigned long keymtx;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned char first_flag;
	/* VAR_INPUT (digital) */
	plcbit enable;
} Pgetkmtx_typ;

typedef struct Pgetkey
{
	/* VAR_INPUT (analog) */
	unsigned short key;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned long clrcnt;
	unsigned short old_key;
	unsigned char first_flag;
	unsigned char srch_flag;
	unsigned char phy_key;
	unsigned char told0;
	unsigned char told1;
	unsigned char told2;
	unsigned char told3;
	unsigned char told4;
	unsigned char told5;
	unsigned char told6;
	unsigned char told7;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ton;
	plcbit toff;
	plcbit pressed;
} Pgetkey_typ;

typedef struct Pclear
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned char first_flag;
	unsigned char busy;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit clrscr;
	plcbit clrleds;
} Pclear_typ;



/* Prototyping of functions and function blocks */
void Ptabini(struct Ptabini* inst);
void Pstat(struct Pstat* inst);
void Psetled(struct Psetled* inst);
void Poutw(struct Poutw* inst);
void Pouttxtn(struct Pouttxtn* inst);
void Pouttext(struct Pouttext* inst);
void Poutrect(struct Poutrect* inst);
void Poutl(struct Poutl* inst);
void Pouti8(struct Pouti8* inst);
void Pouti32(struct Pouti32* inst);
void Pouti16(struct Pouti16* inst);
void Poutbmp(struct Poutbmp* inst);
void Poutbar(struct Poutbar* inst);
void Poutb(struct Poutb* inst);
void Plight(struct Plight* inst);
void Pinw(struct Pinw* inst);
void Pinstr(struct Pinstr* inst);
void Pinl(struct Pinl* inst);
void Pini8(struct Pini8* inst);
void Pini32(struct Pini32* inst);
void Pini16(struct Pini16* inst);
void Pinb(struct Pinb* inst);
void Pgetkmtx(struct Pgetkmtx* inst);
void Pgetkey(struct Pgetkey* inst);
void Pclear(struct Pclear* inst);


#ifdef __cplusplus
};
#endif
#endif /* _C220MAN_ */

