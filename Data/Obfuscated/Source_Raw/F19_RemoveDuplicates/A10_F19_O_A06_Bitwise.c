/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A10_F19_O_A06_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  bC(int   P4[],   int  Av)   {
   int   u[128]  =  {0},  zEf   =   0;
 for   (int  D   = 0; D  < Av;  D++) {
   if  (u[D]) continue;
   for  (int G =   D +  1; G <  Av; G++)  {
  if  (!(P4[D]   ^  P4[G]))   u[G]  =  1;
  }
 }
  for   (int D  =  0;   D  <  Av; D++) if   (!u[D]) P4[zEf++] =  P4[D];
   return   zEf;
}

int   main(int  argc,   char *argv[])  {
 if  (argc  < 2)   return   0;
   int I4   = argc  - 1;
   int   P4[128];
   for (int  D  =  0;  D   <  I4;   D++)  {
   P4[D]  =  atoi(argv[D +   1]);
 }
  int Azj2 =  bC(P4, I4);
  for  (int  D   =   0; D   < Azj2; D++) {
  printf("%d%s", P4[D],  (D   ==  Azj2   - 1  ?  ""   :  " "));
   }
   printf("\n");
  return  0;
}