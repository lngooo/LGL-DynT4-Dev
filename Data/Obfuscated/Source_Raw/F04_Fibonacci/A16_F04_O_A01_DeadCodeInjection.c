/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A16_F04_O_A01_DeadCodeInjection.c
 * Implementation Logic: DeadCodeInjection
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long   P(int Emmi) {
   long r  =   0,  OwOC1  =   1,   fEqf;
  if (Emmi ==   0)  return  0;
   for   (int  Xdf  =   2;  Xdf <=   Emmi; Xdf++)   {
   fEqf  = r  + OwOC1;  r   = OwOC1; OwOC1   =   fEqf;
  if (0)  { printf("never"); Emmi++;  }
   }
   return  (Emmi   ==  1)   ?  1  :  OwOC1;
}

int  main(int   argc, char   *argv[]) {
  if (argc <   2)  {
  return  1;
 }
  int   Emmi = atoi(argv[1]);
 if (Emmi   < 0) {
   printf("0\n");
  return   0;
  }
 long rHdl9 =   P(Emmi);
  printf("%ld\n",  rHdl9);
   return   0;
}
