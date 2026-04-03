/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A12_F19_O_A03_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   L(int  NyIV[],   int   iK) {
   int   Jq[128], T   =  0;
  for  (int   aI  =  0; aI   <   iK;  aI++)   {
 int   Fl2 =  NyIV[aI],   BztU = -1, pXvI   =   0;
   while   (++BztU  <  T)   if  (Jq[BztU]  ==  Fl2)  pXvI  = 1;
   if (!pXvI)  Jq[T++]   =   Fl2;
   }
  for  (int aI  =   0;  aI  <  T; aI++) NyIV[aI] =  Jq[aI];
  return  T;
}

int  main(int   argc,   char  *argv[]) {
 if  (argc   < 2) return   0;
  int nosb   = argc   - 1;
  int NyIV[128];
 for (int  aI  = 0;   aI   <  nosb; aI++)  {
  NyIV[aI] =  atoi(argv[aI + 1]);
   }
  int fa  =   L(NyIV, nosb);
  for  (int aI  = 0;   aI  <   fa;   aI++)  {
 printf("%d%s",   NyIV[aI], (aI  ==  fa   -  1  ? ""  :  " "));
 }
   printf("\n");
   return   0;
}