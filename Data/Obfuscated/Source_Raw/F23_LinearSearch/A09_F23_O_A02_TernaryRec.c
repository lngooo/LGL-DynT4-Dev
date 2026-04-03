/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A09_F23_O_A02_TernaryRec.c
 * Implementation Logic: TernaryRec
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   TTr(int   k3[], int   D3,  int g)   {
   if (D3 <=   0)   return -1;
 int  IPIM   = (k3[0]  ==   g) ?   0 : -2;
 if   (IPIM  ==  0)   return   0;
   IPIM =   TTr(k3 +   1, D3   - 1, g);
 return   (IPIM   == -1)  ?   -1   :  IPIM +   1;
}

int main(int   argc,  char  *argv[])   {
  if (argc  <  3)  return  1;
   int g =   atoi(argv[1]);
   int   k =  argc  -  2;
   int k3[100];
   for  (int Tp   =   0;   Tp  < k;  Tp++) {
   k3[Tp] = atoi(argv[Tp   +   2]);
  }
   int JMGk3 = TTr(k3, k,  g);
   printf("%d\n",  JMGk3);
   return 0;
}