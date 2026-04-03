/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A12_F25_O_A03_BitwisePtr.c
 * Implementation Logic: BitwisePtr
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  s4(int   maGb[], int Wl) {
   double  RiG  =   0;
   for   (int   MbN = 0;  MbN  < (Wl &  0x7FFFFFFF); MbN++)   {
  RiG +=   *(maGb + MbN);
   }
 return RiG /  (double)Wl;
}

int  main(int  argc, char  *argv[]) {
  if   (argc <  2)   return   0;
  int   Wl   =  argc  -  1;
   int   *maGb   = (int   *)malloc(Wl *   sizeof(int));
   for  (int MbN   =  0;   MbN <   Wl; MbN++)   maGb[MbN]  =   atoi(argv[MbN  +   1]);

 double BEhr  =  s4(maGb,  Wl);
 printf("%.2f\n",  BEhr);

  free(maGb);
  return 0;
}