/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A10_F26_S_BitwiseCheck.c
 * Implementation Logic: Logic using bitwise NOT to check null (Seed 7).
 */


#include <stdio.h>

int   ku(const   char   *qTWG) {
   int AMJ =   0;
 while   (qTWG[AMJ])  {
  AMJ  = -~AMJ;   //  Bitwise   increment
   }
   return  AMJ;
}

int   main(int argc, char  *argv[])  {
  if   (argc   <   2) return  0;
   printf("%d\n",   ku(argv[1]));
   return 0;
}