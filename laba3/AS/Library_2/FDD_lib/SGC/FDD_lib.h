/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _FDD_LIB_
#define _FDD_LIB_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <sys_lib.h>
#include <runtime.h>
#include <dvframe.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif

/* Datatypes and datatypes of function blocks */
typedef struct DIRTYPE
{	unsigned char szFileName[8];
	unsigned char szExtension[4];
	unsigned char byYear;
	unsigned char byMonth;
	unsigned char byDay;
	unsigned char byReserve;
	unsigned long ulFileLength;
} DIRTYPE;

typedef struct ID_read
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned long diskID;
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
} ID_read_typ;

typedef struct FDDxopen
{
	/* VAR_INPUT (analog) */
	unsigned long filename;
	unsigned char drive;
	unsigned long xdevice;
	unsigned long mode;
	/* VAR_OUTPUT (analog) */
	unsigned long ident;
	unsigned short status;
	/* VAR (analog) */
	unsigned long ds_ptr;
	unsigned long InitCount;
	unsigned char FirstInit;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
} FDDxopen_typ;

typedef struct FDDwrite
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long src_p;
	unsigned long length;
	/* VAR_OUTPUT (analog) */
	unsigned long wrlength;
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
} FDDwrite_typ;

typedef struct FDDini
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
} FDDini_typ;

typedef struct FDDclose
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
} FDDclose_typ;

typedef struct FDD_xdir
{
	/* VAR_INPUT (analog) */
	unsigned char drive;
	unsigned long dest_p;
	unsigned long dest_size;
	unsigned long xdevice;
	unsigned long mode;
	/* VAR_OUTPUT (analog) */
	unsigned char file_cnt;
	unsigned short status;
	/* VAR (analog) */
	unsigned long ds_ptr;
	unsigned long InitCount;
	unsigned char FirstScan;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
	plcbit openbit;
} FDD_xdir_typ;

typedef struct FDD_wrfa
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long src_p;
	unsigned long length;
	/* VAR_OUTPUT (analog) */
	unsigned long wrlength;
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
} FDD_wrfa_typ;

typedef struct FDD_seek
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long offset;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
} FDD_seek_typ;

typedef struct FDD_read
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	unsigned long dest_p;
	unsigned long length;
	/* VAR_OUTPUT (analog) */
	unsigned long rdlength;
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
} FDD_read_typ;

typedef struct FDD_open
{
	/* VAR_INPUT (analog) */
	unsigned long filename;
	unsigned char drive;
	unsigned char device;
	/* VAR_OUTPUT (analog) */
	unsigned long ident;
	unsigned short status;
	/* VAR (analog) */
	unsigned long ds_ptr;
	unsigned long InitCount;
	unsigned char FirstInit;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
} FDD_open_typ;

typedef struct FDD_dir
{
	/* VAR_INPUT (analog) */
	unsigned char drive;
	unsigned long dest_p;
	unsigned long dest_size;
	unsigned char device;
	/* VAR_OUTPUT (analog) */
	unsigned char file_cnt;
	unsigned short status;
	/* VAR (analog) */
	unsigned long ds_ptr;
	unsigned long InitCount;
	unsigned char FirstScan;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
	plcbit openbit;
} FDD_dir_typ;

typedef struct FDD_del
{
	/* VAR_INPUT (analog) */
	unsigned long ident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ready;
	/* VAR (digital) */
	plcbit active;
} FDD_del_typ;



/* Prototyping of functions and function blocks */
void ID_read(struct ID_read* inst);
void FDDxopen(struct FDDxopen* inst);
void FDDwrite(struct FDDwrite* inst);
void FDDini(struct FDDini* inst);
void FDDclose(struct FDDclose* inst);
void FDD_xdir(struct FDD_xdir* inst);
void FDD_wrfa(struct FDD_wrfa* inst);
void FDD_seek(struct FDD_seek* inst);
void FDD_read(struct FDD_read* inst);
void FDD_open(struct FDD_open* inst);
void FDD_dir(struct FDD_dir* inst);
void FDD_del(struct FDD_del* inst);


#ifdef __cplusplus
};
#endif
#endif /* _FDD_LIB_ */

