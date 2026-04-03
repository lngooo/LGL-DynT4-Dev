/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A09_F40_O_A02_Opaque.c
 * Implementation Logic: A02 with Opaque Predicates (if(x*x < 0) is false).
 */


#include <stdio.h>

int   nGm8(const char*  xa)   {
   int  OYMV   = 0;
  for (int  ecWO7   =  0;   xa[ecWO7]; ecWO7++) {
   int YHYF  = 0;
   int   JivW3  = ecWO7 *   ecWO7;
 if (JivW3 <  -1) { OYMV  +=   999;   }  //   Never  executed
  char QOq  =  xa[ecWO7];
 YHYF =   (QOq <=   '9')  ? (QOq -   '0')  :   ((QOq | 32)  -  'a'  + 10);
  OYMV   =  (OYMV  << 4)  |   YHYF;
   }
  return   OYMV;
}

int  main(int argc, char*   argv[])   {
   if  (argc  <   2) return 0;
  printf("%d", nGm8(argv[1]));
   return 0;
}