/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A11_F32_O_A02_Goto.c
* Implementation Logic: Goto-based reconstruction of pointer logic derived from A02.
*/


#include <stdio.h>
#include <string.h>

void  Rw(char*  xKbJ5)  {
  char  *eukm   =   xKbJ5,  *u8;
xfhf:
 if (!*eukm)  goto WME9;
 u8 =   eukm;
w3:
   if   (*u8  ==   *eukm)   {   u8++;   goto  w3;  }
  printf("%c%ld",   *eukm, (long)(u8 -   eukm));
   eukm  =   u8;
  goto   xfhf;
WME9:
  printf("\n");
}

int   main(int  argc,   char* argv[])   {
   if   (argc <  2)   return   0;
 Rw(argv[1]);
  return   0;
}