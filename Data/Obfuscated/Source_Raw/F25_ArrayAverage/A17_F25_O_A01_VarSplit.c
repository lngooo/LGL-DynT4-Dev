/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A17_F25_O_A01_VarSplit.c
 * Implementation Logic: VarSplit
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double   hM(int  Rh[],   int  VvyW)  {
  double  SqRo =   0,   AiH =  0;
 for  (int   U =  0;  U   <   VvyW; U++)   {
   if   (U   %  2 ==  0)  SqRo += Rh[U];
   else   AiH  += Rh[U];
  }
 return (SqRo   +  AiH)  /   VvyW;
}

int  main(int argc,  char   *argv[]) {
  if  (argc   <  2)   return  0;
  int  VvyW  =  argc -   1;
  int   *Rh   = (int *)malloc(VvyW * sizeof(int));
   for   (int  U =  0;  U   <  VvyW; U++)  Rh[U]   =   atoi(argv[U   +   1]);

   double  TWwr  =   hM(Rh,   VvyW);
  printf("%.2f\n",   TWwr);

 free(Rh);
 return  0;
}