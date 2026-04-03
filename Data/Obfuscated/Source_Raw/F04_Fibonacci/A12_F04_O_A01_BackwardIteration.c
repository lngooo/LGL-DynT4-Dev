/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A12_F04_O_A01_BackwardIteration.c
 * Implementation Logic: BackwardIteration
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long   xgH(int  Sq) {
 long wV = 0, qC   =   1;
  if   (Sq   ==   0) return   0;
 if (Sq   == 1)  return 1;
   for  (int j   =   Sq;  j   >=   2;  j--) {
  long  LN  = wV + qC; wV =  qC; qC  =  LN;
 }
   return   qC;
}

int main(int argc, char *argv[])  {
   if  (argc   <  2)  {
 return  1;
  }
 int   Sq   =  atoi(argv[1]);
   if  (Sq  <   0)   {
   printf("0\n");
   return   0;
   }
   long   XpMQ =   xgH(Sq);
 printf("%ld\n",  XpMQ);
  return 0;
}
