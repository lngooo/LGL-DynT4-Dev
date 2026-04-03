/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A13_F18_O_A04_LogicWrap.c
 * Implementation Logic: LogicWrap
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  j3(int TNwm2[],  int   F7,   int  kSo, int   PeB) {
   int I5   = kSo -   F7   + 1;
 for (int  anq = 0; anq < PeB;  anq++) {
  int Wxmz7  =   anq;
 for (int   caIl7   = anq  + 1; caIl7  < I5;  caIl7++)  if (TNwm2[caIl7] <   TNwm2[Wxmz7])  Wxmz7   =   caIl7;
  int  opcW5 =   TNwm2[anq]; TNwm2[anq]  = TNwm2[Wxmz7];   TNwm2[Wxmz7]  =  opcW5;
   }
  return  TNwm2[PeB-1];
}

int   main(int  argc,   char   *argv[])  {
 if   (argc   < 3) return  0;
 int  PeB   =   atoi(argv[1]);
   int I5  =   argc  -   2;
   int *TNwm2 =   (int   *)malloc(I5   * sizeof(int));
   for (int anq =  0;  anq   <  I5;  anq++)   TNwm2[anq]  =  atoi(argv[anq  +  2]);

 //   假设  K 是从  1   开始的  (1st   smallest)
 int e  = j3(TNwm2,   0, I5 -  1,  PeB);

  printf("%d\n",  e);
 free(TNwm2);
  return  0;
}