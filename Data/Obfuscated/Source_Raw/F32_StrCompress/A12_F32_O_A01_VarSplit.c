/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A12_F32_O_A01_VarSplit.c
* Implementation Logic: Variable i split into i_lo and i_hi derived from A01.
*/


#include <stdio.h>
#include <string.h>

void T(char*   EFLD)   {
  int Qz  =  strlen(EFLD);
   int  XK  =   0,   f   =   0;
  while   ((XK   + f)  <   Qz)  {
  int  ToAj  = 1, LK6 = XK   +   f;
   while (LK6 +  1 <   Qz  && EFLD[LK6]  == EFLD[LK6   +  1]) {   ToAj++;   LK6++;   }
   printf("%c%d", EFLD[LK6], ToAj);
 int   onqJ2  = (LK6   +  1)   - (XK   +   f);
  XK +=   onqJ2;
   }
  printf("\n");
}

int   main(int  argc,  char*  argv[]) {
   if   (argc  < 2)   return  0;
  T(argv[1]);
 return 0;
}