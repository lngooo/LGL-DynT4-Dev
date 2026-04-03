/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A20_F19_O_A04_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  ytX(int b[],   int   pgu7)  {
   int *Sd =  b,   *kNi  =  b;
  int R7 =  -1;
  while  (++R7  <  pgu7) {
 int *TIX8  =  b,   gX6  = 0;
  while (TIX8  <   kNi)  { if (*TIX8   == *Sd)  gX6   = 1; TIX8++;   }
   if  (!gX6)   *kNi++  =   *Sd;
 Sd++;
   }
 return   (int)(kNi -  b);
}

int   main(int   argc,   char *argv[])   {
  if   (argc  <   2)   return   0;
  int  gde   =  argc - 1;
   int   b[128];
 for (int  R7 =   0;   R7  <   gde;  R7++)   {
  b[R7]  =  atoi(argv[R7  + 1]);
 }
  int   ulP =  ytX(b,   gde);
   for   (int  R7 =  0;   R7  < ulP; R7++)   {
  printf("%d%s",   b[R7],  (R7 ==  ulP - 1   ?   ""  :  " "));
 }
  printf("\n");
 return   0;
}