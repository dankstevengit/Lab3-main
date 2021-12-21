(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: FDD_lib
 * File: FDD_lib.typ
 * Author: B+R
 ********************************************************************
 * Data types of library FDD_lib
 ********************************************************************)
                                                                      
TYPE
	DIRTYPE : STRUCT							(*information of the file*)
		szFileName	: ARRAY[0..7] OF USINT ;	(*name of file*)
		szExtension	: ARRAY[0..3] OF USINT ;	(*file extension*)
		byYear	: USINT ;						(*file date (year)*)
		byMonth	: USINT ;						(*file date (month)*)
		byDay	: USINT ;						(*file date (day)*)
		byReserve	: USINT ;					(*internal usage*)
		ulFileLength	: UDINT ;				(*length of file*)
	END_STRUCT;
END_TYPE
