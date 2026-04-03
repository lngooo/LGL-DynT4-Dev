/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A02_F23_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  kE(int  gT[], int  M, int q)  {
  if (M <=  0) return  -1;
  if   (gT[M-1]  ==  q)  return M-1;
  return   kE(gT,  M-1, q);
}

int main(int   argc,   char *argv[])  {
  if  (argc   < 3) return 1;
   int  q  =   atoi(argv[1]);
 int c =  argc   -  2;
 int gT[100];
  for   (int   IHZn0 =   0;  IHZn0 <   c; IHZn0++)  {
   gT[IHZn0]  = atoi(argv[IHZn0 + 2]);
   }
 int  kyb =   kE(gT,  c, q);
   printf("%d\n",  kyb);
  return  0;
}