/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A01_F26_S_Standard.c
 * Implementation Logic: Standard iterative counter (Seed 1).
 */


#include <stdio.h>

int D(const char   *lIK)  {
 int   jr1 = 0;
 while   (lIK[jr1] != '\0') {
 jr1++;
  }
 return jr1;
}

int   main(int argc, char   *argv[])   {
 if   (argc   <  2)  return 0;
   printf("%d\n",   D(argv[1]));
   return 0;
}