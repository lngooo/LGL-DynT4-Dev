/**
 * LGL-DynT4 Dataset - Function: Fibonacci
 * -----------------------------------------
 * File: A21_F04_O_A01_DuffStyleLoop.c
 * Implementation Logic: DuffStyleLoop
 * Input Format: <arg1>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long qY0(int rg6)   {
   long KC   = 0,   g  =   1, Oaza1;
   int  vPO  =  rg6;
 if   (rg6 == 0) return   0;
 if   (rg6  ==   1)   return 1;
  vPO--;
   do   {
 Oaza1  = KC + g; KC   =  g;  g = Oaza1;
   } while (--vPO   >  0);
  return g;
}

int  main(int  argc,  char   *argv[])  {
 if (argc   < 2)   {
 return 1;
 }
  int   rg6 = atoi(argv[1]);
 if   (rg6  <   0)   {
  printf("0\n");
  return 0;
   }
   long  ho = qY0(rg6);
  printf("%ld\n", ho);
 return 0;
}
