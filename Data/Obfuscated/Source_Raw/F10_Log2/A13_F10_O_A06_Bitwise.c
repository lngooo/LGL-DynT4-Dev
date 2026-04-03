/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A13_F10_O_A06_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   ItC5(int juys7)   {
  int   swFU   =   -1;
 unsigned   int HxC =   1;
  while (!(HxC  > (unsigned   int)juys7))   {
 HxC   = HxC   << 1;
  swFU   =   swFU +   1;
 if   (HxC   ==  0)  break;
 }
  return   swFU;
}

int  main(int   argc,  char   *argv[])   {
  if (argc   <  2)   return  0;
   int juys7 =   atoi(argv[1]);
   if  (juys7 <=   0) return   0; 
   int r  = ItC5(juys7);
 printf("%d\n",   r);
  return 0;
}