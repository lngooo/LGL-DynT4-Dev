/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A19_F04_O_A01_AlgebraicIdentity.c
 * Implementation Logic: AlgebraicIdentity
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  K9(int tN)  {
  long UK7  = 0,  H =   1;
  if (tN   ==  0) return 0;
   for  (int OJI   =   2; OJI  <=   tN;  OJI++) {
 H = UK7   +   H;  UK7  = H  - UK7;
   }
   return (tN ==   1)  ?  1 :   H;
}

int  main(int  argc,   char *argv[])   {
   if  (argc  <  2)  {
   return 1;
   }
 int tN  =   atoi(argv[1]);
  if (tN   <   0)  {
  printf("0\n");
   return  0;
  }
 long   idO   = K9(tN);
  printf("%ld\n",   idO);
  return 0;
}
