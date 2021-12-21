/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASPCISTR_
#define _ASPCISTR_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _IEC_CONST
#define _IEC_CONST _WEAK const
#endif




/* Prototyping of functions and function blocks */
unsigned long pciMemSet(unsigned long pDest, unsigned char value, unsigned long length);
unsigned long pciMemCpy(unsigned long pDest, unsigned long pSrc, unsigned long length);
unsigned long pciMemMove(unsigned long pDest, unsigned long pSrc, unsigned long length);
signed long pciMemCmp(unsigned long pMem1, unsigned long pMem2, unsigned long length);
unsigned long pciStrCat(unsigned long pDest, unsigned long pSrc);
unsigned long pciStrCpy(unsigned long pDest, unsigned long pSrc);
signed long pciStrCmp(unsigned long pString1, unsigned long pString2);


#ifdef __cplusplus
};
#endif
#endif /* _ASPCISTR_ */

                                                           
