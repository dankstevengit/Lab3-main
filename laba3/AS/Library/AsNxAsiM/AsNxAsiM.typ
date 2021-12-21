(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsNxAsiM
 * File: AsNxAsiM.typ
 * Author: B+R
 ********************************************************************
 * Data types of library AsNxAsiM
 ********************************************************************)
                                                                      
TYPE
	asimSlaveList_t			: STRUCT				(*slave list*)
		slaveBits			: ARRAY[0..7] OF USINT;	(*slave bits*)
	END_STRUCT;
	
	asimSlaveDiagnosis_t	: STRUCT				(*slave diagnosis*)
		diagnosisFlags		: UDINT;				(*diagnosis flags*)
		numOfDiagInfos		: UDINT;				(*number of diagnosis infos*)
		slaveError			: ARRAY[0..7] OF UDINT;	(*slave error*)
	END_STRUCT;
END_TYPE
