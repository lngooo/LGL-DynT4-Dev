/**
 * LGL-DynT4 Dataset - Function: HammingDistance
 * -----------------------------------------
 * File: A08_F42_O_A01_Flattening.c
 * Implementation Logic: Control flow flattening using a switch-case state machine derived from A01.
 * Input Format: <uint1> <uint2>
 */


#include <stdio.h>
#include <stdlib.h>

int p(unsigned   int   vqch,  unsigned   int Mvb)  {
   unsigned  int E  =  vqch  ^ Mvb;
   int   coW  = 0;
  int  Ss   = 0;
   while  (Ss   != -1)  {
   switch (Ss) {
 case  0:
   if  (E   >   0)  Ss   =  1; else Ss   = -1;
  break;
 case 1:
 if   (E   &  1)   coW++;
 E  >>=  1;
   Ss  =   0;
 break;
  }
  }
  return  coW;
}

int  main(int   argc,   char* argv[]) {
 if (argc  < 3)  return   0;
   unsigned  int j  =  (unsigned int)strtoul(argv[1],   NULL,   10);
  unsigned   int   Np   = (unsigned int)strtoul(argv[2], NULL,  10);
 printf("%d",   p(j,   Np));
   return  0;
}