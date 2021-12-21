/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _IO_LIB_
#define _IO_LIB_
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
 #define HW_UNDEFINED 255U
 #define HWLIST_TYPE_SYS_SLOT 10U
 #define HWLIST_TYPE_SYSTEM 9U
 #define HWLIST_TYPE_PP 8U
 #define HWLIST_TYPE_CPU 7U
 #define HWLIST_TYPE_CANIO 6U
 #define HWLIST_TYPE_IO2003 5U
 #define HWLIST_TYPE_RIO2003 4U
 #define HWLIST_TYPE_RIO2005 3U
 #define HWLIST_TYPE_RIO2010 2U
 #define HWLIST_TYPE_IO2005 1U
 #define HWLIST_TYPE_IO2010 0U
#else
 _IEC_CONST unsigned char HW_UNDEFINED = 255U;
 _IEC_CONST unsigned char HWLIST_TYPE_SYS_SLOT = 10U;
 _IEC_CONST unsigned char HWLIST_TYPE_SYSTEM = 9U;
 _IEC_CONST unsigned char HWLIST_TYPE_PP = 8U;
 _IEC_CONST unsigned char HWLIST_TYPE_CPU = 7U;
 _IEC_CONST unsigned char HWLIST_TYPE_CANIO = 6U;
 _IEC_CONST unsigned char HWLIST_TYPE_IO2003 = 5U;
 _IEC_CONST unsigned char HWLIST_TYPE_RIO2003 = 4U;
 _IEC_CONST unsigned char HWLIST_TYPE_RIO2005 = 3U;
 _IEC_CONST unsigned char HWLIST_TYPE_RIO2010 = 2U;
 _IEC_CONST unsigned char HWLIST_TYPE_IO2005 = 1U;
 _IEC_CONST unsigned char HWLIST_TYPE_IO2010 = 0U;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct IOP_typ
{	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char intern_off;
	unsigned char mode;
	unsigned char data_len;
	unsigned char reserve;
	unsigned long data_adr;
} IOP_typ;

typedef struct IO_alloc
{
	/* VAR_INPUT (analog) */
	unsigned short bytesize;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long data_ptr;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IO_alloc_typ;

typedef struct IO_check
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char search_typ;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char module_typ;
	/* VAR (analog) */
	unsigned long chk_ident;
	unsigned char sc_mod_adr;
	unsigned char sc_kurzken;
	unsigned char sc_int_off;
	unsigned char sc_laenge;
	unsigned short sc_ioc_ptr;
	unsigned short sc_ende;
	unsigned long sc_data;
	unsigned long sc_data2;
	unsigned long sc_data3;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit found_flag;
} IO_check_typ;

typedef struct IO_data
{
	/* VAR_INPUT (analog) */
	unsigned long ioident;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IO_data_typ;

typedef struct IO_disable
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char force_flag;
	unsigned short ana_value;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit dig_value;
} IO_disable_typ;

typedef struct IO_enable
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IO_enable_typ;

typedef struct IO_free
{
	/* VAR_INPUT (analog) */
	unsigned short bytesize;
	unsigned long data_ptr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IO_free_typ;

typedef struct IO_info
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char intern_off;
	unsigned char mode;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IO_info_typ;

typedef struct IO_list
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char prev_mod;
	unsigned long name_adr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char module_adr;
	unsigned char module_typ;
	unsigned short io_bus;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned char first_flag;
	unsigned char chk_io_typ;
	unsigned char chk_master_no;
	unsigned char chk_slave_no;
	unsigned char chk_module_adr;
	unsigned char entry;
	unsigned long entry_ptr;
	unsigned long tab_ptr;
	plcstring reserve_b[16];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit chk_found;
} IO_list_typ;

typedef struct IO_mphydef
{
	/* VAR_INPUT (analog) */
	unsigned long iop_adr;
	unsigned long sc_adr;
	unsigned short io_index;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned long ioident;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IO_mphydef_typ;

typedef struct IO_ptest
{
	/* VAR_INPUT (analog) */
	unsigned long iop_adr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned char chk_io_typ;
	unsigned char chk_master;
	unsigned char chk_slave;
	unsigned char chk_module;
	unsigned char chk_search;
	unsigned short chk_status;
	unsigned char chk_modtyp;
	unsigned long chk_ident;
	unsigned char sc_mod_adr;
	unsigned char sc_kurzken;
	unsigned char sc_int_off;
	unsigned char sc_laenge;
	unsigned short sc_ioc_ptr;
	unsigned short sc_ende;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit ok;
} IO_ptest_typ;

typedef struct IO_slist
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char prev_slot;
	unsigned long name_adr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char slot_no;
	unsigned char slot_typ;
	/* VAR (analog) */
	unsigned long initcnt;
	unsigned char first_flag;
	unsigned char chk_io_typ;
	unsigned char chk_master_no;
	unsigned char chk_slave_no;
	unsigned char chk_module_adr;
	unsigned char entry;
	unsigned long entry_ptr;
	unsigned long tab_ptr;
	unsigned char slot_cnt;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR (digital) */
	plcbit chk_found;
} IO_slist_typ;

typedef struct IX_check
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char slot;
	unsigned char search_typ;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char module_typ;
	/* VAR (analog) */
	unsigned char chk_align;
	unsigned char chk_io_typ;
	unsigned char chk_master;
	unsigned char chk_slave;
	unsigned char chk_module;
	unsigned char chk_search;
	unsigned short chk_status;
	unsigned char chk_modtyp;
	unsigned long chk_ident;
	unsigned char sc_mod_adr;
	unsigned char sc_kurzken;
	unsigned char sc_int_off;
	unsigned char sc_laenge;
	unsigned short sc_ioc_ptr;
	unsigned short sc_ende;
	unsigned long sc_data;
	unsigned long sc_data2;
	unsigned long sc_data3;
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit found_flag;
} IX_check_typ;

typedef struct IX_disable
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char slot;
	unsigned char force_flag;
	unsigned short ana_value;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit dig_value;
} IX_disable_typ;

typedef struct IX_enable
{
	/* VAR_INPUT (analog) */
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char slot;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IX_enable_typ;

typedef struct IX_info
{
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char io_type;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char slot;
	unsigned char intern_off;
	unsigned char mode;
	/* VAR_INPUT (digital) */
	plcbit enable;
} IX_info_typ;

typedef struct SYS_list
{
	/* VAR_INPUT (analog) */
	unsigned char prev_mod;
	unsigned long name_adr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char module_adr;
	unsigned char module_typ;
	/* VAR_INPUT (digital) */
	plcbit enable;
} SYS_list_typ;

typedef struct HW_list
{
	/* VAR_INPUT (analog) */
	unsigned long name_adr;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned char hw_type;
	unsigned char module_typ;
	unsigned char master_no;
	unsigned char slave_no;
	unsigned char module_adr;
	unsigned char slot_no;
	/* VAR (analog) */
	unsigned long next_vw_p;
	unsigned long last_modul_p;
	unsigned long next_entry_p;
	unsigned char next_entry_ix;
	unsigned char next_slot_ix;
	unsigned char last_rio_master;
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit first;
} HW_list_typ;



/* Prototyping of functions and function blocks */
void IO_alloc(struct IO_alloc* inst);
void IO_check(struct IO_check* inst);
void IO_data(struct IO_data* inst);
void IO_disable(struct IO_disable* inst);
void IO_enable(struct IO_enable* inst);
void IO_free(struct IO_free* inst);
void IO_info(struct IO_info* inst);
void IO_list(struct IO_list* inst);
void IO_mphydef(struct IO_mphydef* inst);
void IO_ptest(struct IO_ptest* inst);
void IO_slist(struct IO_slist* inst);
void IX_check(struct IX_check* inst);
void IX_disable(struct IX_disable* inst);
void IX_enable(struct IX_enable* inst);
void IX_info(struct IX_info* inst);
void SYS_list(struct SYS_list* inst);
void HW_list(struct HW_list* inst);


#ifdef __cplusplus
};
#endif
#endif /* _IO_LIB_ */

