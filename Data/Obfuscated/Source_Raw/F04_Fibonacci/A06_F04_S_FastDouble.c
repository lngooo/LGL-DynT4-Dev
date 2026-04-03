/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A06_F04_S_FastDouble.c
 * Implementation Logic: FastDouble
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long   yGx(int  sCQ)  {
 if (sCQ == 0)   return 0;
   long  gTYk   =   0,   Yo = 1;
 for  (int OxeF = 31  -   __builtin_clz(sCQ); OxeF >=  0;   OxeF--) {
 long  TH   = gTYk *   (2  *  Yo - gTYk);
   long  GDSd3  =   gTYk * gTYk   + Yo * Yo;
   gTYk  =  TH;  Yo  =   GDSd3;
  if   ((sCQ  >> OxeF)   &   1) {
   long   qpn  =   gTYk   +   Yo;
   gTYk  =   Yo;   Yo   =   qpn;
  }
  }
  return   gTYk;
}

int main(int argc,  char  *argv[])  {
  if  (argc <  2) {
 return   1;
 }
  int  sCQ  =   atoi(argv[1]);
 if   (sCQ  <  0)  {
 printf("0\n");
  return  0;
   }
 long UOW   =  yGx(sCQ);
 printf("%ld\n",  UOW);
   return  0;
}
