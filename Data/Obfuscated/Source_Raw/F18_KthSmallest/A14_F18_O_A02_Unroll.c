/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A14_F18_O_A02_Unroll.c
 * Implementation Logic: Unroll
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  g3(int   n[],  int pA7,   int qj9,   int HHj9)   {
   while   (pA7  <=   qj9)  {
  int OsAj =  n[qj9], GT5  = pA7, UGiU9  = pA7;
  for   (; UGiU9 < qj9  -  1; UGiU9 +=  2) {
 if  (n[UGiU9]   <= OsAj) {  int  Du=n[GT5];   n[GT5]=n[UGiU9]; n[UGiU9]=Du;  GT5++;   }
  if (n[UGiU9+1]  <= OsAj)  { int   Du=n[GT5];   n[GT5]=n[UGiU9+1];  n[UGiU9+1]=Du; GT5++; }
 }
  for  (; UGiU9  <  qj9;  UGiU9++)  if  (n[UGiU9]   <= OsAj)   {   int  Du=n[GT5]; n[GT5]=n[UGiU9];  n[UGiU9]=Du;  GT5++; }
 int Du=n[GT5]; n[GT5]=n[qj9];  n[qj9]=Du;
  if  (GT5   ==  HHj9  -   1)  return  n[GT5];
   if  (GT5 > HHj9   -   1)   qj9   =  GT5 -   1;  else  pA7 =   GT5 +  1;
 }
 return   -1;
}

int main(int argc,  char  *argv[])  {
   if   (argc <  3)   return  0;
  int HHj9   =   atoi(argv[1]);
   int  Noo7 =  argc  -   2;
 int  *n =   (int   *)malloc(Noo7   *   sizeof(int));
  for  (int   GT5   = 0;  GT5 < Noo7; GT5++)  n[GT5]  = atoi(argv[GT5  +  2]);

   // 假设   K 是从  1  开始的   (1st smallest)
   int Em =  g3(n,  0,   Noo7 -  1,  HHj9);

   printf("%d\n", Em);
 free(n);
 return   0;
}