/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A01_F04_S_Iterative.c
 * Implementation Logic: Iterative
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long  samY(int   Nh9)  {
   long   Mz   = 0,  Nm3   =  1,  I;
   if   (Nh9 ==   0)  return  0;
 for   (int  uVT5  =  2;  uVT5  <=   Nh9; uVT5++)   {
 I  = Mz + Nm3;
   Mz   =  Nm3;
 Nm3 = I;
 }
  return   Nm3;
}

int   main(int argc,   char *argv[])  {
  if   (argc <  2)   {
  return  1;
 }
   int Nh9   =  atoi(argv[1]);
 if (Nh9 < 0)   {
   printf("0\n");
 return 0;
   }
   long K   = samY(Nh9);
 printf("%ld\n", K);
  return 0;
}
