/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A16_F29_O_A07_PointerArithmetic.c
* Implementation Logic: Replaces array indexing with raw pointer arithmetic derived from A07.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int YIu(char*   h, char*  i0)   {
 int fTD  = strlen(h);
  if (fTD !=   (int)strlen(i0))   return  0;
   char   srq[256];   strcpy(srq,  i0);
  for(char* qLDv   =   h;   *qLDv; qLDv++)  {
   int   bFT   =   0;
   for(char* tYhY   =   srq; tYhY <  srq + fTD;  tYhY++)  {
   if(*qLDv ==  *tYhY) {   *tYhY = 0;   bFT  =  1;  break;   }
   }
 if(!bFT)  return   0;
   }
   return  1;
}

int   main(int  argc,   char* argv[]) {
   if (argc <   3)  return  0;
   printf("%d\n", YIu(argv[1],  argv[2]));
 return   0;
}