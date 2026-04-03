/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A07_F19_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   ElR3(int   NnT[], int I)   {
   int  wikn =   0,   otqW   =  0, OmQg;
T8:
   if   (wikn   >=  I) goto  rr;
  OmQg   =   0;
PXTx:
   if   (OmQg   >= otqW) goto  qb;
   if (NnT[wikn]  ==   NnT[OmQg]) goto IWqu6;
   OmQg++; goto   PXTx;
qb:
 NnT[otqW++]  =   NnT[wikn];
IWqu6:
   wikn++;   goto   T8;
rr:
 return  otqW;
}

int   main(int   argc, char   *argv[]) {
  if (argc < 2)  return   0;
 int  UOc =   argc   - 1;
   int   NnT[128];
 for  (int  wikn   = 0;  wikn   <   UOc;   wikn++)   {
  NnT[wikn]   =   atoi(argv[wikn +   1]);
 }
 int Y4 = ElR3(NnT,  UOc);
   for  (int   wikn  =  0; wikn <   Y4; wikn++) {
  printf("%d%s",  NnT[wikn],  (wikn  ==  Y4 -   1 ? ""   :   " "));
   }
   printf("\n");
  return   0;
}