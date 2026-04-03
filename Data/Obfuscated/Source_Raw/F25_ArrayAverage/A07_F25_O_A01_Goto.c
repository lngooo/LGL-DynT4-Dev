/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A07_F25_O_A01_Goto.c
 * Implementation Logic: Goto
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double   oNVd(int df6[], int FZ)  {
  if   (FZ  <= 0)   return  0.0;
  double  ivw4 = 0.0;  int  aT  =   0;
rt:
 if  (aT >=   FZ)  goto  la;
 ivw4 +=   df6[aT++];
   goto rt;
la:
 return ivw4  /   FZ;
}

int main(int  argc,   char   *argv[])  {
   if (argc   <   2)  return   0;
   int FZ   =  argc   -  1;
  int  *df6  =  (int   *)malloc(FZ *   sizeof(int));
 for  (int aT =   0;   aT  < FZ;   aT++)  df6[aT]  = atoi(argv[aT  +  1]);

 double HH =   oNVd(df6,   FZ);
   printf("%.2f\n", HH);

  free(df6);
  return 0;
}