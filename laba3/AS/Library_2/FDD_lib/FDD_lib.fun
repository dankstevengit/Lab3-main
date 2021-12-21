(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: FDD_lib
 * File: FDD_lib.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library FDD_lib
 ********************************************************************)
                                                                      
FUNCTION_BLOCK ID_read			(*reads the floppy disk ID*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		ident	:UDINT;			(*identifier returned from FDDxopen() FBK*)
	END_VAR
	VAR_OUTPUT
		diskID	:UDINT;			(*the disk ID is written to this variable*)
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		active	:BOOL;			(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDDxopen			(*opens a file*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		filename	:UDINT;		(*name of the file which is to be opened*)
		drive	:USINT;			(*indicates the number of the current drive (0 or 1)*)
		xdevice	:UDINT;			(*start address of the xdevice string*)
		mode	:UDINT;			(*start address of the mode string*)
	END_VAR	
	VAR_OUTPUT
		ident	:UDINT;			(*identifier is required by the FBKs, FDD_read(), FDDwrite(), FDD_wrfa() ...*)
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR	
	VAR
		active	:BOOL;			(*internal variable*)
		ds_ptr	:UDINT;			(*internal variable*)
		InitCount	:UDINT;		(*internal variable*)
		FirstInit	:USINT;		(*internal variable*)
	END_VAR	
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDDwrite			(*writes data to a file*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		ident	:UDINT;			(*identifier returned from the FDDxopen() FBK*)
		src_p	:UDINT;			(*start address of the data which is written on the disk*)
		length	:UDINT;			(*data is written from the start address to the address src_p + length*)
	END_VAR	
	VAR_OUTPUT
		wrlength	:UDINT;		(*output of the written length*)
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR	
	VAR
		active	:BOOL;			(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDDini			(*allocates a temporary memory (8 KByte), which is required for all function blocks*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
	END_VAR
	VAR_OUTPUT
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDDclose			(*closes a file*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		ident	:UDINT;			(*identifier returned from the FDDxopen() FBK*)
	END_VAR
	VAR_OUTPUT
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDD_xdir			(*reads a directory*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		drive	:USINT;			(*identifier returned from FDDxopen()*)
		dest_p	:UDINT;			(*target address where the data which was read is saved*)
		dest_size	:UDINT;		(*indicates the length of the reserved memory for the disk entries*)
		xdevice	:UDINT;			(*start address of the xdevice string*)
		mode	:UDINT;			(*start address of the mode string*)
	END_VAR
	VAR_OUTPUT
		file_cnt	:USINT;		(*number of files which can be read*)
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR		
	VAR
		active	:BOOL;			(*internal variable*)
		openbit	:BOOL;			(*internal variable*)
		ds_ptr	:UDINT;			(*internal variable*)
		InitCount	:UDINT;		(*internal variable*)
		FirstScan	:USINT;		(*internal variable**)
	END_VAR		
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDD_wrfa			(*writes data to a file*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		ident	:UDINT;			(*identifier returned from the FDDxopen() FBK*)
		src_p	:UDINT;			(*start address of the data which is written on the disk*)
		length	:UDINT;			(*data is written from the start address src_p to the address src_p + length*)
	END_VAR	
	VAR_OUTPUT
		wrlength	:UDINT;		(*output of the written length (the output is only written on the end of the file)*)
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR		
	VAR
		active	:BOOL;			(*internal variable*)
	END_VAR		
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDD_seek			(*sets offset in file*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		ident	:UDINT;			(*identifier returned from the FDDxopen() FBK*)
		offset	:UDINT;			(*value (< file size) to which the file offset is set*)
	END_VAR	
	VAR_OUTPUT
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR	
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDD_read			(*reads data from a file*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		ident	:UDINT;			(*identifier returned from the FDDxopen() FBK*)
		dest_p	:UDINT;			(*target address where the data which was read is saved*)
		length	:UDINT;			(*length of the data to be read (in bytes)*)
	END_VAR	
	VAR_OUTPUT
		rdlength	:UDINT;		(*output of the data which was read*)
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		active	:BOOL;			(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDD_open			(*do not use, use FDDxopen() instead*)
	VAR_INPUT
		enable	:BOOL;			
		filename	:UDINT;		
		drive	:USINT;			
		device	:USINT;		
	END_VAR	
	VAR_OUTPUT
		ident	:UDINT;			
		ready	:BOOL;			
		status	:UINT;		
	END_VAR	
	VAR
		active	:BOOL;			
		ds_ptr	:UDINT;			
		InitCount	:UDINT;		
		FirstInit	:USINT;		
	END_VAR	
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDD_dir			(*do not use, use FDD_xdir() instead*)
	VAR_INPUT
		enable	:BOOL;			
		drive	:USINT;			
		dest_p	:UDINT;			
		dest_size	:UDINT;		
		device	:USINT;			
	END_VAR	
	VAR_OUTPUT
		file_cnt	:USINT;		
		ready	:BOOL;			
		status	:UINT;			
	END_VAR		
	VAR
		active	:BOOL;			
		openbit	:BOOL;			
		ds_ptr	:UDINT;			
		InitCount	:UDINT;		
		FirstScan	:USINT;		
	END_VAR	
END_FUNCTION_BLOCK
FUNCTION_BLOCK FDD_del			(*deletes file*)
	VAR_INPUT
		enable	:BOOL;			(*enables execution*)
		ident	:UDINT;			(*the disk ID is written to this variable*)
	END_VAR	
	VAR_OUTPUT
		ready	:BOOL;			(*0 ... FBK is still being processed, 1 ... FBK was processed*)
		status	:UINT;			(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR	
	VAR
		active	:BOOL;			(*internal variable*)
	END_VAR		
END_FUNCTION_BLOCK
