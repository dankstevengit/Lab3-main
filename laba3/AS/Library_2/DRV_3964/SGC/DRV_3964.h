/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _DRV_3964_
#define _DRV_3964_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <dvframe.h>
#include <runtime.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define s39ERR_ILLG_IDENT_SCLOSE 25741U
 #define s39ERR_ILLG_IDENT_SOPEN 25742U
 #define s39ERR_ILLG_IDENT_SLAVE 25740U
 #define s39ERR_S3964R_TEL_TYPE 25816U
 #define s39ERR_L2_RX_NACK_DATA 25715U
 #define s39ERR_L2_STX_INV_DLE 25702U
 #define s39ERR_L2_RX_NACK_STX 25714U
 #define s39ERR_S3964R_DB_LEN 25852U
 #define s39ERR_L2_STX_NO_DLE 25703U
 #define s39ERR_L2_RX_TIMEOUT 25701U
 #define s39ERR_S3964R_KOOR 25850U
 #define s39ERR_S3964R_COMM 25822U
 #define s39ERR_S3964R_BASE 25800U
 #define s39MODE_SEND_RECV 3U
 #define s39MODE_SEND_ONLY 2U
 #define s39MODE_RECV_ONLY 1U
 #define s39ERR_S3964R_TEL 25854U
 #define s39ERR_S3964R_CPU 25812U
 #define s39ERR_L2_RX_CHAR 25713U
 #define s39ERR_TXBUF_LEN 25751U
 #define s39ERR_S39_TXLEN 25790U
 #define s39ERR_S39_TXBUF 25789U
 #define s39ERR_S39_RXLEN 25788U
 #define s39ERR_S39_RXBUF 25787U
 #define s39ERR_S3964R_DB 25820U
 #define s39ERR_RXBUF_LEN 25753U
 #define s39ERR_RK512_REQ 25728U
 #define s39ERR_L2_RX_BCC 25712U
 #define s39ERR_ILLG_MODE 25760U
 #define s39MODE_DISABLE 0U
 #define s39ERR_TX_LEN 25750U
 #define s39ERR_SYSMEM 25780U
 #define s39ERR_RX_LEN 25752U
#else
 _IEC_CONST unsigned short s39ERR_ILLG_IDENT_SCLOSE = 25741U;
 _IEC_CONST unsigned short s39ERR_ILLG_IDENT_SOPEN = 25742U;
 _IEC_CONST unsigned short s39ERR_ILLG_IDENT_SLAVE = 25740U;
 _IEC_CONST unsigned short s39ERR_S3964R_TEL_TYPE = 25816U;
 _IEC_CONST unsigned short s39ERR_L2_RX_NACK_DATA = 25715U;
 _IEC_CONST unsigned short s39ERR_L2_STX_INV_DLE = 25702U;
 _IEC_CONST unsigned short s39ERR_L2_RX_NACK_STX = 25714U;
 _IEC_CONST unsigned short s39ERR_S3964R_DB_LEN = 25852U;
 _IEC_CONST unsigned short s39ERR_L2_STX_NO_DLE = 25703U;
 _IEC_CONST unsigned short s39ERR_L2_RX_TIMEOUT = 25701U;
 _IEC_CONST unsigned short s39ERR_S3964R_KOOR = 25850U;
 _IEC_CONST unsigned short s39ERR_S3964R_COMM = 25822U;
 _IEC_CONST unsigned short s39ERR_S3964R_BASE = 25800U;
 _IEC_CONST unsigned char s39MODE_SEND_RECV = 3U;
 _IEC_CONST unsigned char s39MODE_SEND_ONLY = 2U;
 _IEC_CONST unsigned char s39MODE_RECV_ONLY = 1U;
 _IEC_CONST unsigned short s39ERR_S3964R_TEL = 25854U;
 _IEC_CONST unsigned short s39ERR_S3964R_CPU = 25812U;
 _IEC_CONST unsigned short s39ERR_L2_RX_CHAR = 25713U;
 _IEC_CONST unsigned short s39ERR_TXBUF_LEN = 25751U;
 _IEC_CONST unsigned short s39ERR_S39_TXLEN = 25790U;
 _IEC_CONST unsigned short s39ERR_S39_TXBUF = 25789U;
 _IEC_CONST unsigned short s39ERR_S39_RXLEN = 25788U;
 _IEC_CONST unsigned short s39ERR_S39_RXBUF = 25787U;
 _IEC_CONST unsigned short s39ERR_S3964R_DB = 25820U;
 _IEC_CONST unsigned short s39ERR_RXBUF_LEN = 25753U;
 _IEC_CONST unsigned short s39ERR_RK512_REQ = 25728U;
 _IEC_CONST unsigned short s39ERR_L2_RX_BCC = 25712U;
 _IEC_CONST unsigned short s39ERR_ILLG_MODE = 25760U;
 _IEC_CONST unsigned char s39MODE_DISABLE = 0U;
 _IEC_CONST unsigned short s39ERR_TX_LEN = 25750U;
 _IEC_CONST unsigned short s39ERR_SYSMEM = 25780U;
 _IEC_CONST unsigned short s39ERR_RX_LEN = 25752U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct S39SRk512
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned char mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short exec;
	unsigned short type;
	unsigned short cmd;
	unsigned char db;
	unsigned char dw;
	unsigned short len;
	unsigned short coinf;
	/* VAR_INPUT (digital) */
	plcbit enable;
} S39SRk512_typ;

typedef struct S39SClose
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char InitCount;
	/* VAR_INPUT (digital) */
	plcbit enable;
} S39SClose_typ;

typedef struct S39Slave
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned char mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short exec;
	/* VAR_INPUT (digital) */
	plcbit enable;
} S39Slave_typ;

typedef struct S39SOpen
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned long pMode;
	unsigned short buflen;
	unsigned short timeout;
	unsigned char retry;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ident;
	unsigned long tx_buf;
	unsigned long rx_buf;
	/* VAR (analog) */
	unsigned char InitCount;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit rk512;
} S39SOpen_typ;



/* Prototyping of functions and function blocks */
void S39SRk512(struct S39SRk512* inst);
void S39SClose(struct S39SClose* inst);
void S39Slave(struct S39Slave* inst);
void S39SOpen(struct S39SOpen* inst);


#ifdef __cplusplus
};
#endif
#endif /* _DRV_3964_ */

                                                           
