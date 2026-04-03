/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A04_F23_S_TwoWay.c
 * Implementation Logic: TwoWay
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n(int  uj4[],   int  rgz, int um7) {
   int  jh  =   0, mqO   =  rgz  -  1;
 while   (jh   <=  mqO)  {
   if  (uj4[jh]  == um7)   return jh;
   if (uj4[mqO] == um7)   return mqO;
  jh++; mqO--;
 }
   return   -1;
}

int main(int   argc,   char *argv[])   {
  if  (argc  <  3) return  1;
 int  um7   =   atoi(argv[1]);
   int   Oj  = argc  -  2;
   int  uj4[100];
   for  (int  nfKu   =   0;   nfKu <   Oj;  nfKu++)  {
   uj4[nfKu]  =  atoi(argv[nfKu +   2]);
 }
 int v  =  n(uj4,  Oj,   um7);
   printf("%d\n",   v);
  return   0;
}