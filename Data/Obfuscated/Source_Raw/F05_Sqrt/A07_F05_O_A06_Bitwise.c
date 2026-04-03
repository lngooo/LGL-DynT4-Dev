/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A07_F05_O_A06_Bitwise.c
 * Implementation Logic: Bit-by-bit method with instruction replacement (e.g., bitwise instead of +/-).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int oFqY(int pSjd)  {
 int  WtaJ =   0,  wIeh = 0x40000000;
  while   (wIeh  >  pSjd)   wIeh   >>=   2;
  while   (wIeh)  {
  int  M   =   WtaJ  |  wIeh;
   if  (pSjd >=  M) {
 pSjd  -=  M;
  WtaJ =   (WtaJ >> 1) |   wIeh;
 } else  WtaJ   >>= 1;
 wIeh  >>=   2;
   }
  return WtaJ;
}

int  main(int   argc,   char *argv[]) {
   if   (argc  <  2) return  1;
   printf("%d\n",  oFqY(atoi(argv[1])));
  return   0;
}