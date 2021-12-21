/* Automation Studio Generated Header File, Format Version 1.00 */
/* do not change */
#ifndef IF361_H_
#define IF361_H_
#define _WEAK	__attribute__((__weak__))

#include <bur/plctypes.h>

#include <DVFrame.h>
#include <IO_LIB.h>


/* Constants */
_WEAK const unsigned short ERR_IF361_ANSWER_LENGTH = 12071;
_WEAK const unsigned short ERR_IF361_COMMAND_INVALID = 12080;
_WEAK const unsigned short ERR_IF361_DEVICE_STRING = 12058;
_WEAK const unsigned short ERR_IF361_FRAME_TOO_LONG = 12050;
_WEAK const unsigned short ERR_IF361_INBUF_PTR = 12060;
_WEAK const unsigned short ERR_IF361_INLEN = 12062;
_WEAK const unsigned short ERR_IF361_INOUTLEN = 12069;
_WEAK const unsigned short ERR_IF361_INTERFACE = 12063;
_WEAK const unsigned short ERR_IF361_INV_BYTECNT = 12094;
_WEAK const unsigned short ERR_IF361_INV_WRAPCNT = 12093;
_WEAK const unsigned short ERR_IF361_L2DPPARA_PTR = 12066;
_WEAK const unsigned short ERR_IF361_NO_IF361 = 12068;
_WEAK const unsigned short ERR_IF361_OTHER_MASTER_CFG = 12072;
_WEAK const unsigned short ERR_IF361_OUTBUF_PTR = 12059;
_WEAK const unsigned short ERR_IF361_OUTLEN = 12061;
_WEAK const unsigned short ERR_IF361_PARAM_CONFLICT = 12073;
_WEAK const unsigned short ERR_IF361_PARAM_INVALID = 12081;
_WEAK const unsigned short ERR_IF361_RDWR_NO_ANSWER = 12056;
_WEAK const unsigned short ERR_IF361_RDWR_NO_DATA = 12054;
_WEAK const unsigned short ERR_IF361_RDWR_NO_FRAMESTART = 12055;
_WEAK const unsigned short ERR_IF361_RDWR_WRONG_PTR = 12051;
_WEAK const unsigned short ERR_IF361_RESTART_AT_BAUDCHANGE = 12070;
_WEAK const unsigned short ERR_IF361_SETTING_BAUD = 12057;
_WEAK const unsigned short ERR_IF361_SLAVE_OFFLINE = 12076;
_WEAK const unsigned short ERR_IF361_SLOTNR = 12065;
_WEAK const unsigned short ERR_IF361_SPC3BLKDEL = 12095;
_WEAK const unsigned short ERR_IF361_SPC3BLKPRG = 12096;
_WEAK const unsigned short ERR_IF361_SPC3CFG_LEN = 12088;
_WEAK const unsigned short ERR_IF361_SPC3DIAG_LEN = 12086;
_WEAK const unsigned short ERR_IF361_SPC3DIN_LEN = 12084;
_WEAK const unsigned short ERR_IF361_SPC3DOUT_LEN = 12085;
_WEAK const unsigned short ERR_IF361_SPC3INVADR = 12097;
_WEAK const unsigned short ERR_IF361_SPC3INV_CHK = 12091;
_WEAK const unsigned short ERR_IF361_SPC3INV_LEN = 12090;
_WEAK const unsigned short ERR_IF361_SPC3LESS_MEM = 12082;
_WEAK const unsigned short ERR_IF361_SPC3NOFF = 12083;
_WEAK const unsigned short ERR_IF361_SPC3PRM_LEN = 12087;
_WEAK const unsigned short ERR_IF361_SPC3SYS_INI = 12092;
_WEAK const unsigned short ERR_IF361_STATIONNR = 12078;
_WEAK const unsigned short ERR_IF361_SUBSLOTNR = 12064;
_WEAK const unsigned short ERR_IF361_WAIT_FOR_DATAMODE = 12079;
_WEAK const unsigned short ERR_IF361_WATCHDOG = 12077;
_WEAK const unsigned short ERR_IF361_WRONG_BAUD = 12067;


/* Datatypes */
typedef struct if361_IfCfg
{
	unsigned short idle;
	unsigned short delime;
	unsigned char delim[2];
	unsigned short tx_cnt;
	unsigned short rx_cnt;
	unsigned short tx_len;
	unsigned short rx_len;
	unsigned short argc;
	unsigned long argv;
} if361_IfCfg;

typedef struct if361_Iop
{
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char intern_off;
	unsigned char mode;
	unsigned char datalen;
	unsigned char reserve;
	unsigned long data_adr;
} if361_Iop;

typedef struct if361_l2dp
{
	unsigned short baudrate;
	unsigned char station;
	unsigned char freeze;
	unsigned char sync;
	unsigned char glob_cont;
	unsigned char data_exchg;
} if361_l2dp;



/* Datatypes of function blocks */
typedef struct IF361_frm_rdwr
{
	/* VAR_INPUT (analogous) */
	unsigned long pSend;
	unsigned char sendlng;
	unsigned char cmd;
	unsigned long ident;
	unsigned long pRec;
	/* VAR_OUTPUT (analogous) */
	unsigned char rec_lng;
	unsigned short status;
	/* VAR (analogous) */
	unsigned short statusro;
	unsigned char retry;
	unsigned short WR_buflng;
	unsigned long WR_buffer;
	unsigned char frm_step;
	unsigned char* bufferdat;
	struct FRM_gbuf zzFRM_gbuf00000;
	struct FRM_write zzFRM_write00001;
	struct FRM_robuf zzFRM_robuf00002;
	struct FRM_read zzFRM_read00003;
	struct FRM_rbuf zzFRM_rbuf00004;
} IF361_frm_rdwr_typ;

typedef struct IF361
{
	/* VAR_INPUT (analogous) */
	unsigned long device;
	struct if361_l2dp* L2DPpara;
	unsigned long outbuf;
	unsigned long outlen;
	unsigned long inbuf;
	unsigned long inlen;
	plcbit* outcopy;
	plcbit* incopy;
	/* VAR_OUTPUT (analogous) */
	unsigned short status;
	/* VAR (analogous) */
	unsigned char station;
	unsigned char userstatus;
	unsigned char frmoffset;
	unsigned char blockoffse;
	unsigned char offset;
	unsigned char to_sendlng;
	unsigned char output;
	unsigned char input;
	unsigned char i_len;
	unsigned char o_len;
	unsigned char reclen;
	unsigned char rec[64];
	struct IF361_frm_rdwr frm;
	unsigned char send[64];
	unsigned char sendlng;
	unsigned char cmd;
	unsigned short buffsize;
	unsigned char diag_data_;
	unsigned char param_data;
	unsigned char CFG_dataLen;
	unsigned char wait_loop;
	unsigned long ident;
	unsigned long baudrate[4];
	struct if361_IfCfg ifcfg;
	unsigned long ioident;
	struct if361_Iop iop;
	unsigned short baudfrm;
	unsigned short baud;
	unsigned char slot;
	unsigned char SubSlot;
	unsigned char interface;
	unsigned char Slot;
	unsigned short length;
	unsigned char i;
	unsigned char u_step;
	unsigned char outLEN;
	unsigned char inLEN;
	unsigned long allocated;
	unsigned long cmp_buf;
	unsigned char L2DPstep;
	unsigned long SYS_initcn;
	unsigned long initcnt;
	unsigned char* devicestr;
	unsigned char* tosend;
	unsigned char* oldsend;
	struct IO_mphydef zzIO_mphydef00000;
	struct IO_data zzIO_data00001;
	struct IO_mphydef zzIO_mphydef00002;
	struct IO_data zzIO_data00003;
	struct IO_mphydef zzIO_mphydef00004;
	struct IO_data zzIO_data00005;
	struct FRM_xopen zzFRM_xopen00006;
	struct IO_mphydef zzIO_mphydef00007;
	struct IO_data zzIO_data00008;
	struct IO_mphydef zzIO_mphydef00009;
	unsigned long avtident;
	unsigned short avt_status;
	unsigned long avtinfo;
	unsigned char avtname[11];
	struct FRM_xopen zzFRM_xopen00000;
	struct IO_mphydef zzIO_mphydef00001;
	struct IO_data zzIO_data00002;
	struct IO_mphydef zzIO_mphydef00003;
	struct IO_data zzIO_data00004;
	struct IO_mphydef zzIO_mphydef00005;
	struct IO_data zzIO_data00006;
	struct FRM_xopen zzFRM_xopen00007;
	struct IO_mphydef zzIO_mphydef00008;
	struct IO_data zzIO_data00009;
	struct IO_mphydef zzIO_mphydef00010;
	struct IO_alloc zzIO_alloc00001;
	struct IO_mphydef zzIO_mphydef00006;
	struct IO_data zzIO_data00007;
	struct FRM_xopen zzFRM_xopen00008;
	struct IO_data zzIO_data00010;
	struct IO_mphydef zzIO_mphydef00011;
	unsigned long IO_alloc_01;
	unsigned long IO_alloc_02;
	struct IO_free zzIO_free00011;
	struct IO_free zzIO_free00012;
	unsigned short* baudfrm_ptr;
	unsigned short* Kennung_ptr;
	unsigned short* valuerd_ptr;
	unsigned short* valuewr_ptr;
	struct IO_alloc zzIO_alloc00002;
	struct FRM_xopen zzFRM_xopen00009;
	struct IO_data zzIO_data00011;
	struct IO_mphydef zzIO_mphydef00012;
	struct IO_free zzIO_free00013;
	struct IO_free zzIO_free00014;
	struct FRM_xopen zzFRM_xopen00011;
	struct IO_mphydef zzIO_mphydef00013;
	struct IO_data zzIO_data00014;
	struct IO_mphydef zzIO_mphydef00015;
	struct IO_mphydef zzIO_mphydef00016;
	struct IO_free zzIO_free00017;
	struct IO_free zzIO_free00018;
	struct IO_alloc zzIO_alloc00000;
	struct FRM_xopen zzFRM_xopen00002;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit bufcleared;
	plcbit chg_statio;
	plcbit leave_loop;
	plcbit exit;
	plcbit leave_send;
	plcbit newblock;
	plcbit exchange;
	plcbit chg_buffer;
	plcbit null_after_dl;
	plcbit hochlauf_flag;
	plcbit alloc_01;
	plcbit alloc_02;
} IF361_typ;



/* Prototyping of functions and function blocks */
void IF361_frm_rdwr(IF361_frm_rdwr_typ* inst);
void IF361(IF361_typ* inst);



#endif /* IF361_H_ */

