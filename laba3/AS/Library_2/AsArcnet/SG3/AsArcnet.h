/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASARCNET_
#define _ASARCNET_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Constants */
#ifdef _REPLACE_CONST
 #define ERR_ARCLIB_SEND_ACTIV 27911U
 #define ERR_ARCLIB_RECV_BUSY 27910U
 #define ERR_ARCLIB_QUEUE 27900U
 #define ERR_ARCLIB_NO_MORE_IDENTS 27902U
 #define ERR_ARCLIB_NO_FRAME 27906U
 #define ERR_ARCLIB_INVALID_PARAM 27904U
 #define ERR_ARCLIB_INVALID_NODEID 27908U
 #define ERR_ARCLIB_INVALID_IDENT 27901U
 #define ERR_ARCLIB_INIT_UP 27909U
 #define ERR_ARCLIB_FBASE 27907U
 #define ERR_ARCLIB_DEVICE 27903U
 #define ERR_ARCLIB_BUFLNG 27905U
#else
 _IEC_CONST unsigned short ERR_ARCLIB_SEND_ACTIV = 27911U;
 _IEC_CONST unsigned short ERR_ARCLIB_RECV_BUSY = 27910U;
 _IEC_CONST unsigned short ERR_ARCLIB_QUEUE = 27900U;
 _IEC_CONST unsigned short ERR_ARCLIB_NO_MORE_IDENTS = 27902U;
 _IEC_CONST unsigned short ERR_ARCLIB_NO_FRAME = 27906U;
 _IEC_CONST unsigned short ERR_ARCLIB_INVALID_PARAM = 27904U;
 _IEC_CONST unsigned short ERR_ARCLIB_INVALID_NODEID = 27908U;
 _IEC_CONST unsigned short ERR_ARCLIB_INVALID_IDENT = 27901U;
 _IEC_CONST unsigned short ERR_ARCLIB_INIT_UP = 27909U;
 _IEC_CONST unsigned short ERR_ARCLIB_FBASE = 27907U;
 _IEC_CONST unsigned short ERR_ARCLIB_DEVICE = 27903U;
 _IEC_CONST unsigned short ERR_ARCLIB_BUFLNG = 27905U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct ARCstat_typ
{	unsigned long BytesRecv;
	unsigned long BytesSend;
	unsigned long IntRX;
	unsigned long IntTA;
	unsigned long IntENAK;
	unsigned long IntNNID;
	unsigned long IntRECON;
	unsigned long ReconCnt;
	unsigned long ErrRead;
	unsigned long ErrSend;
	unsigned long NoFreeBuf;
	unsigned long ExcPaket;
} ARCstat_typ;

typedef struct ARCopen
{
	/* VAR_INPUT (analog) */
	unsigned long device;
	unsigned long mode;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ident;
	/* VAR_INPUT (digital) */
	plcbit enable;
} ARCopen_typ;

typedef struct ARCclose
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} ARCclose_typ;

typedef struct ARCread
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long buffer;
	unsigned long buflng;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char node_id;
	/* VAR_INPUT (digital) */
	plcbit enable;
} ARCread_typ;

typedef struct ARCwrite
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long buffer;
	unsigned long buflng;
	unsigned char node_id;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} ARCwrite_typ;

typedef struct ARCexcep
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned char node_id;
	unsigned char exc_nr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} ARCexcep_typ;

typedef struct ARCinfo
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char node_id;
	unsigned long statadr;
	/* VAR_INPUT (digital) */
	plcbit enable;
} ARCinfo_typ;

typedef struct ARCxread
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long buffer;
	unsigned long buflng;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char node_id;
	/* VAR_INPUT (digital) */
	plcbit enable;
} ARCxread_typ;



/* Prototyping of functions and function blocks */
void ARCopen(struct ARCopen* inst);
void ARCclose(struct ARCclose* inst);
void ARCread(struct ARCread* inst);
void ARCwrite(struct ARCwrite* inst);
void ARCexcep(struct ARCexcep* inst);
void ARCinfo(struct ARCinfo* inst);
void ARCxread(struct ARCxread* inst);


#ifdef __cplusplus
};
#endif
#endif /* _ASARCNET_ */

                                                           
