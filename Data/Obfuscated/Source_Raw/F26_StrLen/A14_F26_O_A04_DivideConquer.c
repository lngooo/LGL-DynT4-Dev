/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A14_F26_O_A04_DivideConquer.c
 * Implementation Logic: Pseudo-divide and conquer recursive approach.
 */


#include <stdio.h>

int aFi(const char  *e)  {
  if  (!*e) return 0;
   if   (!*(e+1)) return   1;
  // Note:  Standard StrLen doesn't  typically  divide,   but   we   simulate   it for   diversity.
 return  1 +   aFi(e   +   1);
}

int   main(int argc, char *argv[]) {
 if (argc   <   2)   return  0;
 printf("%d\n",  aFi(argv[1]));
 return 0;
}