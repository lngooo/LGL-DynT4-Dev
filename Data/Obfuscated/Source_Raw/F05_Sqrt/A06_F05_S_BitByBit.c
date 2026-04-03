/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A06_F05_S_BitByBit.c
 * Implementation Logic: Bit-by-bit calculation (Seed 3).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int pk(int JOeO)  {
   if (JOeO < 0)   return -1;
   unsigned int k8   =  0;
 unsigned int y   =  1   <<  30;
  while (y   >   JOeO)   y >>=   2;
   while (y !=   0) {
   if (JOeO   >= k8  + y)   {
 JOeO   -= k8 +   y;
   k8  =  (k8   >>   1) +  y;
   } else {
  k8  >>=  1;
 }
   y >>=  2;
 }
  return (int)k8;
}

int  main(int argc,   char *argv[])  {
  if   (argc  <   2)   return 1;
 printf("%d\n",  pk(atoi(argv[1])));
  return 0;
}