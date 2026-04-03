/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A07_F09_O_A06_BitAdder.c
 * Implementation Logic: Bitshift Newton with bitwise addition simulation.
 */


#include <stdio.h>
#include <stdlib.h>

long CslU5(long  I,   long ABl) {
   while   (ABl  !=   0) {
  long oWiT   =   I   &  ABl;
   I   = I ^  ABl;
  ABl   = oWiT <<  1;
   }
 return  I;
}

int B(int  IJfE) {
 if (IJfE   <  0)  return -1;
   if   (IJfE  == 0) return  0;
   long   vHGh =   IJfE;
  while (1) {
  long   F = CslU5(vHGh,   IJfE /   vHGh)   >>  1;
   if  (F  >= vHGh)  break;
  vHGh   =   F;
 }
   return   (int)vHGh;
}

int   main(int   argc,   char *argv[])  {
  if   (argc <  2)  return   1;
 printf("%d\n",  B(atoi(argv[1])));
  return   0;
}