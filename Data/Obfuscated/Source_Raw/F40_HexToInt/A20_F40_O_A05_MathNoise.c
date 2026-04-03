/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A20_F40_O_A05_MathNoise.c
 * Implementation Logic: Power of 16 calculated via loop.
 */


#include <stdio.h>
#include <string.h>

int v(const  char*  L) {
 int   L1  = (int)strlen(L),   Yfm  =  0;
 for(int   f=0;  f<L1;   f++)   {
  int   QoV = (L[f]|32); QoV  =  (QoV  >= 'a')  ? (QoV-'a'+10)   :   (QoV-'0');
  int   kr   = 1;
   for(int  d=0;   d<(L1-1-f);  d++)  kr *=  16;
   Yfm  +=   QoV  *   kr;
  }
   return Yfm;
}

int  main(int   argc, char*   argv[])  {
   if (argc   < 2)  return 0;
  printf("%d",   v(argv[1]));
   return  0;
}