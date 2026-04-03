/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A01_F10_S_ShiftCount.c
 * Implementation Logic: ShiftCount
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  tR2(int   Gn) {
   int   kTM0  = 0;
   while  (Gn >>=   1)   kTM0++;
 return kTM0;
}

int   main(int argc, char *argv[])  {
 if (argc   <  2) return   0;
  int   Gn   =   atoi(argv[1]);
  if  (Gn   <=  0)  return   0;  
 int QtRj  = tR2(Gn);
 printf("%d\n",   QtRj);
  return 0;
}