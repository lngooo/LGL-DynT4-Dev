/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A03_F19_S_BufferTransfer.c
 * Implementation Logic: BufferTransfer
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int R(int   n[], int  IO)   {
   int sMd[128], pN0   =  0;
 for (int AI   = 0;  AI <   IO; AI++)  {
  int   OjA  = 0;
 for   (int hRT   =  0;  hRT <   pN0; hRT++)  {
   if  (sMd[hRT]  ==  n[AI]) {   OjA   =   1;  break; }
   }
   if  (!OjA)   sMd[pN0++]   = n[AI];
 }
 for (int   AI  =   0;  AI <  pN0;   AI++)  n[AI]   = sMd[AI];
 return   pN0;
}

int   main(int argc,   char  *argv[]) {
  if (argc  <   2)   return  0;
   int Y9  =   argc -  1;
 int   n[128];
 for (int  AI  = 0; AI <   Y9; AI++)  {
  n[AI]  =  atoi(argv[AI  +   1]);
   }
 int   iYSN =   R(n, Y9);
  for (int  AI  =   0; AI < iYSN;   AI++)  {
  printf("%d%s",  n[AI],   (AI   ==   iYSN   -  1   ?  ""  :   " "));
  }
 printf("\n");
  return  0;
}