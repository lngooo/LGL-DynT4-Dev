/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A07_F04_O_A01_ControlFlowFlattening.c
 * Implementation Logic: ControlFlowFlattening
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  mLHR1(int  GAPF)  {
  int   oMQ =  0;
 long j7 =  0,  oGjb8 =   1,  j4;
 int LL2  =  2;
 while (oMQ   != 3)  {
  switch (oMQ)   {
 case 0:  if   (GAPF ==   0)   return 0;  oMQ  =   1;  break;
  case 1:   oMQ   = (LL2   <=   GAPF)   ? 2  :  3;   break;
  case 2:  j4 =   j7 + oGjb8; j7   =  oGjb8;  oGjb8 = j4;  LL2++;   oMQ =  1; break;
 }
 }
   return   (GAPF  ==   1)   ? 1  : oGjb8;
}

int main(int argc,  char *argv[])   {
   if  (argc   < 2) {
  return   1;
 }
   int   GAPF = atoi(argv[1]);
  if (GAPF  <   0)   {
  printf("0\n");
  return   0;
 }
 long   z  =  mLHR1(GAPF);
   printf("%ld\n", z);
  return 0;
}
