/**
 * LGL-DynT4 Dataset - Function: Factorial
 * -----------------------------------------
 * File: A20_F03_S_Indirect.c
 * Implementation Logic: Indirect function calls to calculate product (Seed 10).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

typedef   long long   (*AAz3)(int,   long long);

long   long AXi(int  G3,   long long  RkRT)   {
  return   G3 *  RkRT;
}

long  long  HWMh(int  bdj1)   {
 if  (bdj1 <   0) return 0;
   AAz3  Vv   =  AXi;
   long long  waJB   =   1;
   for  (int G3   =   1; G3 <= bdj1; G3++)   waJB   =  Vv(G3,   waJB);
   return waJB;
}

int  main(int argc,   char   *argv[])   {
  if (argc  <   2)   return 1;
 printf("%lld\n", HWMh(atoi(argv[1])));
 return   0;
}