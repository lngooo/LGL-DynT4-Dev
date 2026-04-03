/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A15_F18_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   h(int   Vmy[],  int   WqMZ, int   Gav, int fbQE) {
 if   (WqMZ  > Gav)  return   -1;
   int   VFTh   =  Vmy[Gav], A  = WqMZ;
  for   (int  u1  =   WqMZ;   u1   <  Gav;   u1++)  {
 for(int wsa2=0; wsa2<1;   wsa2++) if  (Vmy[u1] <=  VFTh)  { int  aLj=Vmy[A];  Vmy[A]=Vmy[u1]; Vmy[u1]=aLj;   A++;  }
 }
  int aLj=Vmy[A]; Vmy[A]=Vmy[Gav];   Vmy[Gav]=aLj;
   if  (A ==   fbQE  -   1)  return Vmy[A];
   return   (A  >   fbQE   -   1)   ?  h(Vmy,  WqMZ,  A   -  1,   fbQE)  : h(Vmy,  A   +   1,   Gav, fbQE);
}

int   main(int argc, char  *argv[])  {
  if  (argc   <  3)   return   0;
   int   fbQE =  atoi(argv[1]);
  int  V =  argc  -   2;
   int *Vmy =  (int   *)malloc(V *   sizeof(int));
  for   (int   A   = 0;  A <  V; A++)   Vmy[A] = atoi(argv[A  +  2]);

   // 假设 K   是从  1   开始的   (1st  smallest)
   int   Vy  =  h(Vmy,   0, V   -  1, fbQE);

  printf("%d\n",  Vy);
   free(Vmy);
  return  0;
}