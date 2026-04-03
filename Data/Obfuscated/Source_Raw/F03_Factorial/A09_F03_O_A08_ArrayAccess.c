/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A09_F03_O_A08_ArrayAccess.c
 * Implementation Logic: DP with obfuscated array indexing and redundant storage.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

long   long   iUe(int   xnm4) {
 if  (xnm4 < 0)  return 0;
  long  long L7[21]; 
  L7[0] =  1;
 for   (int YTzt   = 1;  YTzt   <=   xnm4  &&   YTzt <  21;   YTzt++) {
   int  R = (YTzt *  2) / 2;
  L7[R]   =   L7[R   -   1]   *  YTzt;
   }
  return  L7[xnm4 > 20 ?  20   :   xnm4];
}

int  main(int argc, char  *argv[]) {
  if (argc  <   2)   return   1;
  printf("%lld\n", iUe(atoi(argv[1])));
 return 0;
}