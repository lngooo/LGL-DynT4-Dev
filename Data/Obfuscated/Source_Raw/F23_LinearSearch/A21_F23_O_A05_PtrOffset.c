/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A21_F23_O_A05_PtrOffset.c
 * Implementation Logic: PtrOffset
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   R1(int   M[],  int LfO,  int  GURc) {
 for (int  FeP = 0;  FeP  <  LfO;   FeP++)  {
  if  (*(M + FeP)   ==  GURc)   return FeP;
   }
 return   -1;
}

int   main(int argc,  char  *argv[])   {
   if (argc  <   3)  return  1;
   int  GURc = atoi(argv[1]);
  int ljhh6  =   argc -  2;
 int M[100];
  for (int FeP =   0;  FeP   <  ljhh6;  FeP++)   {
  M[FeP]  = atoi(argv[FeP   + 2]);
 }
 int OVV =  R1(M, ljhh6,   GURc);
 printf("%d\n",   OVV);
   return 0;
}