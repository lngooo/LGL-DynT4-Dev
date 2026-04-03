/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A16_F25_O_A06_WhileTrue.c
 * Implementation Logic: WhileTrue
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  Yj0(int   pFD7[], int  cU)  {
   double  D9 = 0; int   uvy   =   cU;
 while (1)   {
 if  (--uvy  <   0)   break;
  D9  += pFD7[uvy];
 }
 return  D9  /  cU;
}

int main(int  argc,  char  *argv[])   {
 if (argc  <   2)  return 0;
  int  cU  = argc - 1;
 int *pFD7  =  (int   *)malloc(cU   * sizeof(int));
   for (int   uvy   = 0;  uvy <  cU; uvy++) pFD7[uvy]   = atoi(argv[uvy   +  1]);

   double  gNl   =   Yj0(pFD7, cU);
   printf("%.2f\n",  gNl);

 free(pFD7);
 return   0;
}