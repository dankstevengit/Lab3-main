/****************************************************************************
*                                                                           *
*  Name     : rio_lib.h														*
*  Titel    : DEFINES for the librio_lib.a Library							*
*  Version  : V5.10															*
*  Datum    : 26 Nov 1999 09:00:00											*
*																			*
******************************COPYRIGHT (C)**********************************
*     THIS SOFTWARE IS THE PROPERTY OF B&R AUSTRIA: ALL RIGHTS RESERVED.	*
*     NO PART OF THIS SOFTWARE MAY BE USED OR COPIED IN ANY WAY WITHOUT		*
*              THE PRIOR WRITTEN PERMISSION OF B&R AUSTRIA.					*
*****************************************************************************
*																			*
*  Project  : B&R 2000 / Remote IO											*
*																			*
****************************************************************************/

#ifndef     RIO_LIB_H

#define     RIO_LIB_H

#include 	<bur/plctypes.h>

typedef struct RIO_cfg
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be 
							accessed (from RIO_init)*/
		USINT prio;			/*Prioryty of the configuration table*/
		USINT inout;		/*Send or receive configuration table?
							0 ... send configuration table for analog data (byte)
							1 ... receive configuration table for analog data (byte)
							2 ... send configuration table for digital data (bit)
                            3 ... receive configuration table for digital data (bit)
							*/
		USINT sl_adr;		/*0 ....... the slave address given in the configuraton table 
										will be used
							  1-126 ... the slave address given in the configuration table
							  			will be replaced with this number*/
		UDINT cfg_ptr;		/*Configuration table. The configuration table can be created
							with a structure array or a data module*/
		UINT cfg_len;		/*Length of the configuration table in Bytes*/	
		UDINT data_ptr;		/*Data buffer for the input or output data*/
		UINT data_len;		/*Length of the input or output data in Bytes
							If a digital configuration table is used (inout = 2 or 3),
							the number of bits is to be entered here (must be a multiple of 8)
							*/
	/* non boolean output parmeter */
		UINT status;		/*Error number (0 = no error)*/
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_cfg_typ;
	
typedef struct RIO_cmd
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be 
							accessed (from RIO_init)*/
		USINT cmd;			/*The following commands are supported:
							$1 ... START with Wait
							$0 ... RESET with Wait
							$81... START without Wait
							$80... RESET without Wait*/
	/* non boolean output parmeter */
		UINT status;		/*Error number
							0 ... No error 
							1 ... The function must be colled again so that the command
							can be completed*/
	/* non boolean static */
		USINT cmd_state;	
		USINT mcmd;
		USINT init;
		UDINT tout;
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_cmd_typ;
	
typedef struct RIO_in
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be
							accessed (from RIO_init)*/
		USINT prio;			/*Prioryty of the shovel table:
							0 ... Prioryty 0 (high priority)
							1 ... Prioryry 1 (low priority)*/
	/* non boolean output parmeter */
		UINT status;		/*Error number (0 = no error)*/
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_in_typ;
	
typedef struct RIO_init
{
	/* non boolean input parmeter */
		USINT mod_nr;		/*Module addresse of the remote master module to be initialized*/
		UDINT par_ptr;		/*Structure where the parameters for the operation of the 
							remote master module are defined as intelligent slave (ISL).
							If the remote mster module is to used as master, the value 0
							must be given for adr(par_ptr)*/
		UINT par_len;		/*When using the remote master module as ISL, the parameter 
							par_len must contain the length of the structure par. If the 
							remote master module is used as master, par_len must be 0*/
	/* non boolean output parmeter */
		UDINT maident;		/*Ident number of the master or ISL module. The ident number
							is required for the other functions in the I/O library*/
		UINT status;		/*Error number (0 = no error)*/
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_init_typ;
	
typedef struct RIO_life
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be
							accessed (from RIO_init)*/
		UDINT data_ptr;		/*BYTE array that contains information about the installed
							slaves. Each element of this BYTE array is assigned to a slave.
							The first element corresponds to the slave with slave address 1,
							the second array element to the slave with slave address 2 etc.
							The status (0 or 1) of array element shows if the respective
							slave is aviable or not:
							0 ... Slave is not aviable 
							1 ... Slave is aviable*/
		UINT data_len;		/*Length of the BYTE array "data_ptr", or number of slaves that
							are to checked*/
	/* non boolean output parmeter */
		USINT sl_cnt;		/*Number of active slave stations in the remote I/O system*/
		UINT status;		/*Error number (0 = no error)*/
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_life_typ;
	
typedef struct RIO_list
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be
							accessed (from RIO_init)*/
		USINT slave_no;		/*Slave address of the slave station that is to be searched
							for I/O modules*/
		USINT prev_mod;		/*Module address (in decimal form) of the I/O module where search
							is to begin (entering 0 cases the search to begin at the first
							I/O module on the remote I/O bus)*/
		UDINT name_adr;		/*6 BYTE (ARRAY). Name of the I/O module (as null terminated 
							string)*/
	/* non boolean output parmeter */
		USINT module_adr;	/*Modul address of the first I/O module found (in decimal form)*/
		USINT module_typ;	/*Type (type code) of the I/O module found*/
		USINT io_bus;		/*0 ... B&R 2005
   							  1 ... B&R 2010
   							  4 ... B&R 2003
   							*/
		UINT status;		/*Error number (0 = no error)*/
	/* non boolean static */
		USINT state;
		USINT sl_lst;
		USINT init;
		USINT sl_adr;
		USINT bl_nr;
		USINT cntr;
		USINT cmd_res;
		USINT stat;
		USINT ver;
		USINT sltyp;
		UDINT data00;
		UDINT data01;
		UDINT data02;
		UDINT data03;
		UDINT data04;
		UDINT data05;
		UDINT data06;	
		UDINT data07;
		UDINT data08;
		UDINT data09;
		UDINT data10;
		UDINT data11;
		UDINT data12;
		UDINT data13;
		UDINT data14;
		UDINT data15;
		UDINT data16;
		UDINT data17;
		UDINT data18;
		UDINT data19;
		UDINT data21;
		UDINT data22;
		UDINT data23;
		UDINT data24;
		UDINT data25;
		UDINT data26;
		UDINT data27;
		UDINT data28;
		UDINT data29;
		UDINT data30;
		UDINT data31;
		UDINT data32;
		UDINT data33;
		UDINT data34;
		UDINT data35;
		UDINT data36;
		UDINT data37;
		UDINT data38;
		UDINT data39;
		UDINT data40;
		UDINT data41;
		UDINT data42;
		UDINT data43;
		UDINT data44;
		UDINT data45;
		UDINT data46;
		UDINT data47;
		UDINT data48;
		UDINT data49;	
		USINT submod;
		USINT modnr;
		USINT modcnt;
		USINT trigger;
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_list_typ;
	
typedef struct RIO_mode
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be
							accessed (from RIO_init)*/
		USINT sl_adr;		/*Slave address of the slave station where the parameter "mode"
							settings are valid. If the value $FF is given instead of a slave
							adddress, the parameter "mode" settings are valid for all slaves
							in the remote I/O system*/
		USINT mode;			/*Mode byte*/
	/* non boolean output parmeter */
		UINT status;		/*Error number (0 = no error)*/
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_mode_typ;
	
typedef struct RIO_out
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be
							accessed (from RIO_init)*/
		USINT prio;			/*Priority of the shovel table
							0 ... Prioryty 0 (high priority)
							1 ... Prioryry 1 (low priority)*/		
	/* non boolean output parmeter */
		UINT status;		/*Error number (0 = no error)*/
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_out_typ;
	
typedef struct RIO_quit
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be
							accessed (from RIO_init)*/
		USINT sl_adr;		/*Slave addresse of the slave station to be acknowledged*/
		USINT qmode;		/*Acknowledge drop out (ERROR state) or RELAY state for a slave:
							0 ... Acknowledge drop out (ERROR)
							1 ... Acknowledge ready*/
	/* non boolean output parmeter */
		UINT status;		/*Error number (0 = no error)*/
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_quit_typ;
	
typedef struct RIO_stat
{
	/* non boolean input parmeter */
		UDINT maident;		/*Ident number of the master or ISL module to be
							accessed (from RIO_init)*/
		UDINT sl_tab;		/*(ARRAY). BYTE array that contains the status of all slaves
							in the remote I/O system */
		UINT len;			/*Length of the BYTE array "sl_tab" or number of slaves to be 
							checked*/
	/* non boolean output parmeter */
		UINT status;		/*Error number (0 = no error)*/
	/* boolean input parmeter */
		BOOL enable;		/*The function block is only executed if enable = 1*/
} RIO_stat_typ;
	


/* Prototypes */
void RIO_cfg	(RIO_cfg_typ*	p_cfg	);	/* Configure the rimote I/O system */
void RIO_cmd	(RIO_cmd_typ*	p_cmd	);	/* Activate or reset a configuration */
void RIO_in		(RIO_in_typ*	p_in	);	/* Get RIO input data (Master/ISL) */
void RIO_init	(RIO_init_typ*	p_init	);	/* Initialize the remote master module */
void RIO_life	(RIO_life_typ*	p_life	);	/* Request Life List */
void RIO_list	(RIO_list_typ*	p_list	);	/* Search remote I/O bus for I/O modules */
void RIO_mode	(RIO_mode_typ*	p_mode	);	/* Define slave behavior in case of an error */
void RIO_out	(RIO_out_typ*	p_out	);	/* Give RIO output data to the Master/ISL */
void RIO_quit	(RIO_quit_typ*	p_quit	);	/* Acknowledge when a slave falls out or is ready */
void RIO_stat	(RIO_stat_typ*	p_stat	);	/* Request status of all slaves */

#endif /* RIO_LIB_H */

