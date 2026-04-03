/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A11_F33_O_A05_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <str1> <str2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void TXM(char   **FGcj3,   int  yaO, char   *U)  {
   int MjH   = 0;
  while   (1)  {
   char RZW =   *(FGcj3[0]  +   MjH);
   if  (!(RZW ^  0))   break;
 int AdC   =  1, eZxx  =   1;
  while  (AdC  < yaO)   {
  if  (*(FGcj3[AdC]   + MjH)  ^  RZW)  { eZxx   =  0;  break;  }
   AdC++;
   }
 if  (eZxx)  { *(U  + MjH)   =  RZW; MjH++;   }   else   break;
 }
   *(U +   MjH) = '\0';
}

int  main(int   argc,   char   *argv[])  {
 if  (argc  < 2)   return   0;
   int VZyd  =  argc  -   1;
  char **FGcj3 =  &argv[1];
   char   fbiN7[128]   =   {0};
  TXM(FGcj3, VZyd,  fbiN7);
 printf("%s\n", fbiN7);
 return 0;
}