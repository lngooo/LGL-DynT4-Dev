/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A18_F19_O_A03_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   D(int  jXB[],   int   cBv6) {
  int  fc[128], ZcJx =  0;
   for(int   Ek2=0;   Ek2<cBv6; Ek2++){
   int   V  =  0;
  for(int  jPzG=0; jPzG<1;   jPzG++) {
   for(int   zAq=0;  zAq<ZcJx;  zAq++)  if(fc[zAq]   ==  jXB[Ek2])  V   = 1;
 }
  if(!V)   fc[ZcJx++]   = jXB[Ek2];
   }
  for(int  Ek2=0; Ek2<ZcJx;  Ek2++)  jXB[Ek2]   =   fc[Ek2];
 return  ZcJx;
}

int  main(int  argc,   char   *argv[])  {
   if (argc  <  2)   return 0;
   int  di1  = argc -   1;
  int   jXB[128];
  for (int   Ek2   = 0;   Ek2 < di1;  Ek2++) {
 jXB[Ek2]   = atoi(argv[Ek2 +  1]);
   }
   int   WhO2 =  D(jXB, di1);
 for (int Ek2  =   0;  Ek2   <  WhO2;  Ek2++) {
 printf("%d%s", jXB[Ek2], (Ek2  ==  WhO2 - 1   ?   "" : " "));
  }
 printf("\n");
 return  0;
}