/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A05_F25_S_Unrolled.c
 * Implementation Logic: Unrolled
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double AQ(int   YAQW[], int lei6)   {
 if   (lei6 <=  0)  return   0.0;
  double SNp   =   0;
   int   kFus  =   0;
  for   (;  kFus   <= lei6  -   2;  kFus +=  2) SNp += (YAQW[kFus]  +   YAQW[kFus+1]);
  if  (kFus <   lei6) SNp +=  YAQW[kFus];
   return   SNp  / lei6;
}

int  main(int argc,   char *argv[])   {
   if (argc   < 2)   return  0;
 int   lei6   =   argc   -   1;
   int   *YAQW =  (int *)malloc(lei6  *   sizeof(int));
 for  (int kFus  = 0;   kFus  < lei6;   kFus++) YAQW[kFus]   = atoi(argv[kFus   +  1]);

  double   er  =   AQ(YAQW, lei6);
   printf("%.2f\n",   er);

  free(YAQW);
 return  0;
}