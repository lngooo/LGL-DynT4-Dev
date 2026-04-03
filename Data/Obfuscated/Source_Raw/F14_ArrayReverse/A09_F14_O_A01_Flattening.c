/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A09_F14_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening for A01.
 */


#include <stdio.h>
#include <stdlib.h>

void   AwI1(int LhDE9[],   int v)  {
   int  JA8   = 0, Ke7 = v  -  1, yt   =  0;
  while  (yt !=  -1)   {
  switch (yt)   {
   case   0: yt  =   (JA8  <  Ke7)  ? 1 :   2; break;
  case 1:   {   int   OO   =  LhDE9[JA8]; LhDE9[JA8] =  LhDE9[Ke7];   LhDE9[Ke7]  =   OO;   JA8++; Ke7--;   yt = 0;   break;  }
   case  2:   yt  =   -1;  break;
 }
   }
}

int  main(int  argc,   char *argv[])  {
   if   (argc < 2)  return 0;
   int v = argc  - 1;
 int  *LhDE9   = (int*)malloc(v *  sizeof(int));
   for(int Bwz=0;   Bwz<v;   Bwz++)  LhDE9[Bwz]   =   atoi(argv[Bwz+1]);
 AwI1(LhDE9, v);
 for(int Bwz=0; Bwz<v;  Bwz++)  printf("%d ", LhDE9[Bwz]);
  printf("\n");
   free(LhDE9);
  return  0;
}