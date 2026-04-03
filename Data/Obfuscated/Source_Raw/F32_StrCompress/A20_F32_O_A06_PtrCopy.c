/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A20_F32_O_A06_PtrCopy.c
* Implementation Logic: Copies pointer into local stack variable derived from A06.
*/


#include <stdio.h>
#include <string.h>

void  WRO5(char* FUG) {
  char *fRtC   =   FUG;
 while (*fRtC)  {
 int  aBXS  =   0;
  char  wRk  =  *fRtC;
 char   *IT6 =  fRtC;
   while (*IT6  == wRk)  {   aBXS++;  IT6++; }
   printf("%c%d", wRk,  aBXS);
  fRtC   =  IT6;
  }
 printf("\n");
}

int  main(int  argc,   char*  argv[])  {
  if   (argc   <  2)   return 0;
  WRO5(argv[1]);
  return 0;
}