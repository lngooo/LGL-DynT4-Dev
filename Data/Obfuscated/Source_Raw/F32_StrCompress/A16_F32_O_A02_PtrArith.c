/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A16_F32_O_A02_PtrArith.c
* Implementation Logic: Raw pointer arithmetic and dereferencing derived from A02.
*/


#include <stdio.h>
#include <string.h>

void  x6(char* TAYR)  {
 char *WQ  = TAYR;
  while  (*WQ)   {
   char  *Qh  =   WQ;
 while (*(Qh  +  1)   ==   *WQ) Qh++;
 printf("%c%d",  *WQ,   (int)(Qh  -   WQ +   1));
 WQ  = Qh  +  1;
   }
   printf("\n");
}

int   main(int   argc, char*   argv[])  {
   if (argc  <  2) return  0;
   x6(argv[1]);
   return  0;
}