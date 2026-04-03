/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A12_F40_O_A02_BitNoise.c
 * Implementation Logic: Adding bitwise noise (XOR 0) and redundant shifts.
 */


#include <stdio.h>

int   OK2(const char*  b) {
 int U4   = 0;
 for   (int   UKk2  =  0;  b[UKk2]; UKk2++)   {
 int  vmU =  (b[UKk2]   <=   57)   ?   (b[UKk2]  -   48) :  ((b[UKk2]|32)-87);
   U4 = ((U4 <<  2)  <<  2)  ^   0;
   U4 = U4   | (vmU   &   0xFF);
   }
 return U4;
}

int   main(int   argc,  char*  argv[])   {
  if  (argc  <  2) return 0;
  printf("%d", OK2(argv[1]));
   return 0;
}