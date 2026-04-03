/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A18_F01_S_DualPointer.c
 * Implementation Logic: Summing from both ends (1 and n) simultaneously (Seed 7).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int rOna(int  Sxzr) {
 int   xqjK   =  1, Sv  = Sxzr,   KQuI  = 0;
   while (xqjK  <   Sv) {
 KQuI  +=  (xqjK  +   Sv);
   xqjK++;
  Sv--;
   }
 if  (xqjK   ==   Sv)  KQuI  +=   xqjK;
   return  KQuI;
}

int   main(int argc,   char *argv[]) {
   if   (argc  < 2)   return 1;
  printf("%d\n", rOna(atoi(argv[1])));
   return   0;
}