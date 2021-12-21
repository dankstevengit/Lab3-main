(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: c220man
 * File: c220man.fun
 * Author: B+R
 ********************************************************************
 * Functions and function blocks of library c220man
 ********************************************************************)
                                                                      
FUNCTION_BLOCK Ptabini 					(*initializes keypad module*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		keytab1	:UDINT;					(*data object name for a numeric key table*)
		keytab2	:UDINT;					(*data object name for an alphanumeric key table*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR		
	VAR
		initcnt	:UDINT;					(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pstat 					(*requests keypad module status*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Psetled 					(*changes status of an individual key LED*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		key	:UINT;						(*logical key code*)
		mode	:USINT;					(*LED Status, e.g. 0 ... LED is off, 1 ... LED lit*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_key	:UINT;					(*internal variable*)
		old_mode	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		srch_flag	:USINT;				(*internal variable*)
		phy_key	:USINT;					(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Poutw 					(*outputs a UINT data type value (output word)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		value	:UINT;					(*value to be output*)
		row	:USINT;						(*lines (1-16), in which value is to be output*)
		column	:USINT;					(*columns (1-40), in which value is to be output*)
		digits	:USINT;					(*number of digits (maximum 11 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR	
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:UINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pouttxtn 				(*outputs a character string of a specified length*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		row	:USINT;						(*lines (1-16), in which text is to be output*)
		column	:USINT;					(*columns (1-40), in which text is to be output*)
		text	:UDINT;					(*pointer to the text which is to be output*)
		textlen	:USINT;					(*size of the text*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pouttext 				(*outputs a zero-terminated ASCII character string*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		row	:USINT;						(*lines (1-16), in which text is to be output*)
		column	:USINT;					(*columns (1-40), in which text is to be output*)
		text	:UDINT;					(*pointer on the text which is to be output*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK	
FUNCTION_BLOCK Poutrect 				(*outputs a rectangle*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		x	:USINT;						(*horizontal pixel position of the top left corner of the rectangle*)
		y	:USINT;						(*vertical pixel position of the top left corner of the rectangle*)
		width	:USINT;					(*width of the rectangle in pixels*)
		height	:USINT;					(*height of the rectangle in pixels*)
		lwidth	:USINT;					(*line thickness in pixels*)
		attribut	:USINT;				(*e.g. 0 ... rectangle with line thickness lwidth and white borders*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_x	:USINT;					(*internal variable*)
		old_y	:USINT;					(*internal variable*)
		old_width	:USINT;				(*internal variable*)
		old_height	:USINT;				(*internal variable*)
		old_lwidth	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Poutl 					(*outputs a UDINT value (output long)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		value	:UDINT;					(*value to be output*)
		row	:USINT;						(*lines (1-16), in which value is to be output*)
		column	:USINT;					(*columns (1-40), in which value is to be output*)
		digits	:USINT;					(*number of digits (maximum 11 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:UDINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pouti8 					(*outputs a SINT value (output integer 8)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		value	:SINT;					(*value to be output*)
		row	:USINT;						(*lines (1-16), in which value is to be output*)
		column	:USINT;					(*columns (1-40), in which value is to be output*)
		digits	:USINT;					(*number of digits (maximum 12 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:SINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pouti32 					(*outputs a DINT value (output integer 32)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		value	:DINT;					(*value to be output*)
		row	:USINT;						(*lines (1-16), in which value is to be output*)
		column	:USINT;					(*columns (1-40), in which value is to be output*)
		digits	:USINT;					(*number of digits (maximum 12 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:DINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pouti16 					(*outputs an INT value (output integer 16)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		value	:INT;					(*value to be output*)
		row	:USINT;						(*lines (1-16), in which value is to be output*)
		column	:USINT;					(*columns (1-40), in which value is to be output*)
		digits	:USINT;					(*number of digits (maximum 12 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:INT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Poutbmp 					(*outputs a bitmap graphic*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		x	:USINT;						(*horizontal pixel position of the top left corner of the window*)
		y	:USINT;						(*vertical pixel position of the top left corner of the window*)
		width	:USINT;					(*width of the window in pixels*)
		height	:USINT;					(*height of the window in pixels*)
		bmp_adr	:UDINT;					(*start address of the BIT sample*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_x	:USINT;					(*internal variable*)
		old_y	:USINT;					(*internal variable*)
		old_width	:USINT;				(*internal variable*)
		old_height	:USINT;				(*internal variable*)
		old_bmpptr	:UDINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Poutbar 					(*outputs a bar*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		value	:USINT;					(*fill level of the bar in pixels (valid value: 0-length)*)
		x	:USINT;						(*horizontal pixel position of the reference point*)
		y	:USINT;						(*vertical pixel position of the reference point*)
		width	:USINT;					(*width of the bar in pixels*)
		length	:USINT;					(*maximum length of the bar in pixels*)
		direction	:USINT;				(*direction of the bar*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Poutb 					(*outputs a USINT value (output byte)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		value	:USINT;					(*value to be output*)
		row	:USINT;						(*lines (1-16), in which value is to be output*)
		column	:USINT;					(*columns (1-40), in which value is to be output*)
		digits	:USINT;					(*number of digits (maximum 11 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Plight 					(*sets mode of the background lightning*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		mode	:USINT;					(*e.g. 0 ... background lighting off, 1 ... background lighting on*)
		time	:USINT;					(*time in minutes (1-98)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pinw 					(*input a UINT value (input word)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		focus	:BOOL;					(*input field active/passive switching: 0 ... passive, 1 ... active*)
		value_adr	:UDINT;				(*pointer to the variable to be written (UINT data type)*)
		row	:USINT;						(*lines (1-16), in which the value of the variable is to be output*)
		column	:USINT;					(*columns (1-40), in which the value of the variable is to be output*)	
		digits	:USINT;					(*number of digits (maximum 11 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
		lowlimit	:UINT;				(*lower input limit or 0 (see input field limits)*)
		highlimit	:UINT;				(*upper input limit or 0 (see input field limits)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		valid	:BOOL;					(*set to 1 for a cycle when the ENTER key is pressed*)
		aktivated	:BOOL;				(*set to 1 when the input field is active*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		focus_cnt	:UINT;				(*internal variable*)
		old_value	:UINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pinstr 					(*inputs text or an ASCII character string*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		focus	:BOOL;					(*input field active/passive switching: 0 ... passive, 1 ... active*)
		text_adr	:UDINT;				(*string variable in which the given text string is saved, given as a pointer*)
		textlen	:USINT;					(*size of the input field for the text string (1-40)*)
		row	:USINT;						(*lines (1-16), in which the input field is to be displayed*)
		column	:USINT;					(*columns (1-40), in which the input field is to be displayed*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		valid	:BOOL;					(*set to 1 for a cycle when the ENTER key is pressed*)
		aktivated	:BOOL;				(*set to 1 when the input field is active*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value0	:UDINT;				(*internal variable*)
		old_value1	:UDINT;				(*internal variable*)
		old_value2	:UDINT;				(*internal variable*)
		old_value3	:UDINT;				(*internal variable*)
		old_value4	:UDINT;				(*internal variable*)
		old_value5	:UDINT;				(*internal variable*)
		old_value6	:UDINT;				(*internal variable*)
		old_value7	:UDINT;				(*internal variable*)
		old_value8	:UDINT;				(*internal variable*)
		old_value9	:UDINT;				(*internal variable*)
		focus_cnt	:UINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pinl 					(*inputs a UDINT value (input long)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		focus	:BOOL;					(*input field active/passive switching: 0 ... passive,  1 ... active*)
		value_adr	:UDINT;				(*pointer to the variable to be written (UDINT data type)*)
		row	:USINT;						(*lines (1-16), in which the value of the variable is to be output*)
		column	:USINT;					(*columns (1-40), in which the value of the variable is to be output*)
		digits	:USINT;					(*number of digits (maximum 11 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
		lowlimit	:UDINT;				(*lower input limit or 0 (see input field limits)*)
		highlimit	:UDINT;				(*upper input limit or 0 (see input field limits)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		valid	:BOOL;					(*set to 1 for a cycle when the ENTER key is pressed*)
		aktivated	:BOOL;				(*set to 1 when the input field is active*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:UDINT;				(*internal variable*)
		focus_cnt	:UINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pini8 					(*inputs an SINT value (input integer 8)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		focus	:BOOL;					(*input field active/passive switching: 0 ... passive, 1 ... active*)
		value_adr	:UDINT;				(*pointer to the variable to be written (SINT data type)*)
		row	:USINT;						(*lines (1-16), in which the value of the variable is to be output*)
		column	:USINT;					(*columns (1-40), in which the value of the variable is to be output*)
		digits	:USINT;					(*number of digits (maximum 12 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
		lowlimit	:SINT;				(*lower input limit or 0 (see input field limits)*)
		highlimit	:SINT;				(*upper input limit or 0 (see input field limits)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		valid	:BOOL;					(*set to 1 for a cycle when the ENTER key is pressed*)
		aktivated	:BOOL;				(*set to 1 when the input field is active*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		focus_cnt	:UINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		old_value	:SINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pini32 					(*inputs a DINT value (input integer 32)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		focus	:BOOL;					(*input field active/passive switching: 0 ... passive, 1 ... active*)
		value_adr	:UDINT;				(*pointer to the variable to be written (DINT data type)*)
		row	:USINT;						(*lines (1-16), in which the value of the variable is to be output*)
		column	:USINT;					(*columns (1-40), in which the value of the variable is to be output*)
		digits	:USINT;					(*number of digits (maximum 12 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
		lowlimit	:DINT;				(*lower input limit or 0 (see input field limits)*)
		highlimit	:DINT;				(*upper input limit or 0 (see input field limits)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		valid	:BOOL;					(*set to 1 for a cycle when the ENTER key is pressed*)
		aktivated	:BOOL;				(*set to 1 when the input field is active*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_value	:DINT;				(*internal variable*)
		focus_cnt	:UINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pini16 					(*inputs an INT value (input integer 16)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		focus	:BOOL;					(*input field active/passive switching: 0 ... passive, 1 ... active*)
		value_adr	:UDINT;				(*pointer to the variable to be written (INT data type)*)
		row	:USINT;						(*lines (1-16), in which the value of the variable is to be output*)
		column	:USINT;					(*columns (1-40), in which the value of the variable is to be output*)
		digits	:USINT;					(*number of digits (maximum 12 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
		lowlimit	:INT;				(*lower input limit or 0 (see input field limits)*)
		highlimit	:INT;				(*upper input limit or 0 (see input field limits)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		valid	:BOOL;					(*set to 1 for a cycle when the ENTER key is pressed*)
		aktivated	:BOOL;				(*set to 1 when the input field is active*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		focus_cnt	:UINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		old_value	:INT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pinb 					(*inputs of a USINT value (input byte)*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		focus	:BOOL;					(*input field active/passive switching: 0 ... passive, 1 ... active*)
		value_adr	:UDINT;				(*pointer to the variable to be written (USINT data type)*)
		row	:USINT;						(*lines (1-16), in which the value of the variable is to be output*)
		column	:USINT;					(*columns (1-40), in which the value of the variable is to be output*)
		digits	:USINT;					(*number of digits (maximum 11 digits)*)
		dbdp	:USINT;					(*number of decimal places*)
		zero_flag	:BOOL;				(*0 ... no leading zeroes displayed, 1 ... display leading zeroes*)
		attribut	:USINT;				(*0 ... normal, 1 ... blinking/inverse*)
		size	:USINT;					(*font size: 1 ... normal, 2 ... 2 x 2, 4 ... 4 x 4*)
		lowlimit	:USINT;				(*lower input limit or 0 (see input field limits)*)
		highlimit	:USINT;				(*upper input limit or 0 (see input field limits)*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		valid	:BOOL;					(*set to 1 for a cycle when the ENTER key is pressed*)
		aktivated	:BOOL;				(*set to 1 when the input field is active*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		focus_cnt	:UINT;				(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		old_attr	:USINT;				(*internal variable*)
		old_value	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pgetkmtx 				(*retrieves image of all associated keypad modules*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		keymtx	:UDINT;					(*key matrix address (a USINT[14] field)*)
	END_VAR	
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pgetkey 					(*requests an individual key*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		key	:UINT;						(*logical key code*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, ERR_FUB_BUSY, 0xXXXX = see help*)
		ton	:BOOL;						(*set to 1 for a cycle when the key key is pressed*)
		toff	:BOOL;					(*set to 1 for a cycle when the key key is released*)
		pressed	:BOOL;					(*set to 1 for the duration of time that the key key is pressed*)
	END_VAR
	VAR	
		initcnt	:UDINT;					(*internal variable*)
		clrcnt	:UDINT;					(*internal variable*)
		old_key	:UINT;					(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		srch_flag	:USINT;				(*internal variable*)
		phy_key	:USINT;					(*internal variable*)
		told0	:USINT;					(*internal variable*)
		told1	:USINT;					(*internal variable*)
		told2	:USINT;					(*internal variable*)
		told3	:USINT;					(*internal variable*)
		told4	:USINT;					(*internal variable*)
		told5	:USINT;					(*internal variable*)
		told6	:USINT;					(*internal variable*)
		told7	:USINT;					(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
FUNCTION_BLOCK Pclear 					(*clears display*)
	VAR_INPUT
		enable	:BOOL;					(*enables execution*)
		clrscr	:BOOL;					(*if clrscr is set to 1, the entire screen area is cleared*)
		clrleds	:BOOL;					(*if clrleds is set to 1, all key LEDS are switched off*)
	END_VAR
	VAR_OUTPUT
		status	:UINT;					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR	
	VAR
		initcnt	:UDINT;					(*internal variable*)
		first_flag	:USINT;				(*internal variable*)
		busy	:USINT;					(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
