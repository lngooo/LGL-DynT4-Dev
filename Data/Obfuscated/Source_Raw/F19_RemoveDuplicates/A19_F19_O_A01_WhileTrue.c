/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A19_F19_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  eu6(int  Rlge8[],  int ja)   {
  int   gPpy =  0,  r9 =  0;
  while (r9 < ja)   {
  int   bdU5   =   Rlge8[r9],  OPms   =   0;
  for (int  st =  0;   st  <   gPpy;   st++)   if   (Rlge8[st]   ==   bdU5) OPms  =   1;
   if (!OPms) {  Rlge8[gPpy] =  bdU5; gPpy++; }
 r9++;
  }
 return   gPpy;
}

int  main(int argc, char  *argv[])   {
   if  (argc  <  2)  return  0;
 int mjfH2   = argc  - 1;
   int  Rlge8[128];
   for  (int yfuq   = 0;   yfuq  <  mjfH2;   yfuq++)  {
  Rlge8[yfuq]  =   atoi(argv[yfuq +   1]);
  }
  int   pi7 = eu6(Rlge8,  mjfH2);
 for (int   yfuq =  0;  yfuq <  pi7; yfuq++)  {
 printf("%d%s", Rlge8[yfuq],   (yfuq == pi7 -   1 ?  "" :   " "));
 }
 printf("\n");
   return   0;
}