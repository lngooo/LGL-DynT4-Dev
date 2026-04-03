/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A10_F09_S_FloatNewton.c
 * Implementation Logic: Newton using double precision for internal steps (Seed 5).
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   Y(int aUAz6)   {
   if (aUAz6  < 0) return  -1;
 if (aUAz6   ==   0) return  0;
   double  eSr   =   (double)aUAz6;
  double   kf4  = 0.5  *  (eSr  +  (double)aUAz6 /  eSr);
  while   (fabs(eSr  -   kf4)  >=  1.0)  {
  eSr   =  kf4;
  kf4 =  0.5 *  (eSr  +   (double)aUAz6 /  eSr);
  }
 //   Converge to integer
   int   qBf  =  (int)kf4;
  if ((long)(qBf  +  1)  *  (qBf   +   1)   <= aUAz6) qBf++;
   return   qBf;
}

int  main(int  argc, char *argv[]) {
 if  (argc   <  2)   return   1;
  printf("%d\n", Y(atoi(argv[1])));
   return  0;
}