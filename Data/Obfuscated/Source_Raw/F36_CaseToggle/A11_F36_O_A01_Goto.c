/**
* LGL-DynT4 Dataset - Function: CaseToggle
* -----------------------------------------
* File: A11_F36_O_A01_Goto.c
* Logic: Goto-based loop reconstruction derived from A01.
*/


#include <stdio.h>

void fV(char*  TS7)  {
  int   mLg =  0;
KZkL:
 if  (TS7[mLg] ==  0)  goto  Cu;
  if  (TS7[mLg] <   'A'   ||   TS7[mLg]   > 'z')  goto fU8;
   if (TS7[mLg] >=  'a') { TS7[mLg] -=  32;   goto  fU8;   }
 if   (TS7[mLg]  <= 'Z') { TS7[mLg] +=   32;   goto   fU8;  }
fU8:
 mLg++;
 goto   KZkL;
Cu:
   return;
}

int   main(int  argc, char*  argv[])  {
  if (argc  < 2)  return  0;
  fV(argv[1]);
 printf("%s\n", argv[1]);
  return   0;
}