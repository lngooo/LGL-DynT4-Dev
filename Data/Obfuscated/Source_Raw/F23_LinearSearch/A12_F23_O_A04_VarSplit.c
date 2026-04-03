/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A12_F23_O_A04_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  lKQj(int   fhy2[],   int  H5,   int   fN)   {
   int   j   = 0,  nQY   =  H5 -  1;
   while   (j   <=   nQY)  {
 int Ut   =   fhy2[j];
  int   U7   =  fhy2[nQY];
 if (Ut ==   fN)   return j;
 if   (U7 ==  fN)   return  nQY;
   j  += 1; nQY -= 1;
  }
   return  -1;
}

int main(int argc,  char *argv[])   {
   if   (argc   < 3) return  1;
   int fN  =   atoi(argv[1]);
  int   Eye  =   argc -   2;
   int  fhy2[100];
   for  (int IX8 =   0;  IX8   <  Eye;  IX8++)   {
 fhy2[IX8]  =   atoi(argv[IX8  +  2]);
   }
   int  LC3 = lKQj(fhy2, Eye,   fN);
  printf("%d\n", LC3);
 return   0;
}