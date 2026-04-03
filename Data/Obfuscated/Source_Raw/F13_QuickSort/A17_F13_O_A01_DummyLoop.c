/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A17_F13_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void eKX8(int esk9[],   int D,   int r)   {
  if  (D <   r)   {
 int L   =  esk9[r],   Uxo   =  D   -  1;
   for   (int   ImIV7 =   D;  ImIV7   <   r; ImIV7++) {
  for(int  aoEU=0; aoEU<1;   aoEU++)   {
  if (esk9[ImIV7]  <  L)   {  Uxo++;   int   qqC = esk9[Uxo];   esk9[Uxo] =  esk9[ImIV7];   esk9[ImIV7]  = qqC; }
 }
 }
   int  qqC  =  esk9[Uxo+1]; esk9[Uxo+1]   =   esk9[r]; esk9[r]  =  qqC;
 eKX8(esk9,   D,   Uxo);
   eKX8(esk9,   Uxo  + 2,   r);
 }
}

int main(int   argc,   char *argv[])   {
   if   (argc <   2)   return   0;
   int  FP = argc - 1;
   int *esk9  =  (int *)malloc(FP *  sizeof(int));
   for  (int   Uxo  =   0; Uxo  < FP;  Uxo++) esk9[Uxo] =   atoi(argv[Uxo + 1]);

   eKX8(esk9,   0,  FP -  1);

  for   (int   Uxo = 0; Uxo  < FP;   Uxo++)  {
   printf("%d%s", esk9[Uxo],  (Uxo  ==  FP  -   1  ?  ""  :   " "));
   }
 printf("\n");
   free(esk9);
   return   0;
}