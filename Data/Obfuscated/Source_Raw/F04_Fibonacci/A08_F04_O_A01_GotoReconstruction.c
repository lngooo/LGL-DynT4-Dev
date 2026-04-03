/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A08_F04_O_A01_GotoReconstruction.c
 * Implementation Logic: GotoReconstruction
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long di4(int xOA)   {
   long  G   =  0,   qd   =   1,   jJNi6;
  int fBd  = 2;
   if   (xOA == 0) return   0;
  if (xOA  ==   1) return  1;
   qyT:
   if  (fBd  >   xOA) goto   KDCz;
  jJNi6   = G   + qd;  G = qd;   qd = jJNi6;   fBd++;
 goto   qyT;
  KDCz: return qd;
}

int   main(int   argc, char   *argv[])   {
 if   (argc   <   2)  {
   return 1;
   }
   int  xOA   =  atoi(argv[1]);
   if   (xOA  < 0) {
 printf("0\n");
   return  0;
   }
  long   jb3 =   di4(xOA);
   printf("%ld\n",  jb3);
  return  0;
}
