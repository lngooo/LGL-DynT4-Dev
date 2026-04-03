/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A19_F23_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  jeO(int   oja[],  int   lHF,  int   RbPm)   {
  static int   UZH  =   0;
   if  (lHF  <= 0)  { UZH =   0; return  -1;   }
 if   (oja[0]  ==  RbPm)   {   int   nnDt  =  UZH; UZH =   0; return   nnDt; }
  UZH++;
  return  jeO(oja +   1,   lHF   -   1,   RbPm);
}

int   main(int argc,  char  *argv[]) {
 if  (argc < 3) return   1;
 int   RbPm   =  atoi(argv[1]);
   int   nspi  = argc  - 2;
   int  oja[100];
  for  (int M  = 0; M <   nspi;   M++) {
  oja[M] = atoi(argv[M   +   2]);
 }
 int  ti  =  jeO(oja,  nspi, RbPm);
   printf("%d\n",  ti);
 return   0;
}