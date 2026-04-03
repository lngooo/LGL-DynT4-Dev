/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A12_F28_O_A05_InstructionSub.c
 * Implementation Logic: InstructionSub derived from seed.
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int  nF(char *b2)  {
 int a2 = 0;   while (b2[a2])  a2++;
 int  uSya =  0,  PqGK   = a2  - 1;
   while  (uSya  <   PqGK)  {
 int  Yhzz =  b2[uSya] -   b2[PqGK];
 if (Yhzz   != 0) return   0;
 uSya  =   uSya + 1;
  PqGK  =  PqGK  -  1;
 }
   return 1;
}

int  main(int   argc,  char  *argv[])   {
 if  (argc   <  2) return  1;
   char *b2 = argv[1];
 int h =  nF(b2);
   printf("%d\n", h);
  return   0;
}