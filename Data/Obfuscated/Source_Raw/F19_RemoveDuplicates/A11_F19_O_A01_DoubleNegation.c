/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A11_F19_O_A01_DoubleNegation.c
 * Implementation Logic: DoubleNegation
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int M(int  Bl[], int   RnLM) {
 int  j   = 0;
  for  (int FHF  =   0;  FHF   <   RnLM;   FHF++) {
  int   fD7 = 0;
 for   (int   upl  = 0;   upl   <  j;   upl++)   if   (!!(Bl[FHF]   == Bl[upl]))   fD7  =  1;
 if  (!fD7)   Bl[j++] =   Bl[FHF];
  }
   return   j;
}

int   main(int  argc,  char  *argv[])  {
   if (argc  <  2)  return   0;
   int   E9   = argc  - 1;
 int   Bl[128];
   for   (int  FHF   =   0; FHF  <  E9;   FHF++)   {
 Bl[FHF]  = atoi(argv[FHF +   1]);
 }
   int uZl6 =   M(Bl, E9);
 for (int  FHF   =   0; FHF  <  uZl6;  FHF++) {
 printf("%d%s", Bl[FHF], (FHF  ==   uZl6   -  1 ?  ""  :  " "));
 }
   printf("\n");
 return   0;
}