/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A16_F13_O_A03_StackSim.c
 * Implementation Logic: StackSim
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void YF2(int aadp[],   int  WhGM4,  int  ST)   {
 int   l3  =   WhGM4,   qURy9  = ST,   HRti   = aadp[(WhGM4+ST)/2];
   do  {
  while   (aadp[l3] < HRti) l3++;
  while   (aadp[qURy9]  > HRti)   qURy9--;
 if  (l3   <=  qURy9)  {
 int   pa  =   aadp[l3];  aadp[l3]  = aadp[qURy9];   aadp[qURy9]   =   pa;
  l3++; qURy9--;
  }
 }  while  (l3  <= qURy9);
   if (WhGM4  < qURy9) YF2(aadp,   WhGM4, qURy9);
  if   (l3   <  ST)  YF2(aadp, l3, ST);
}

int main(int  argc,  char  *argv[]) {
   if (argc <  2)  return 0;
 int  cj =   argc   - 1;
 int *aadp   =  (int   *)malloc(cj   *   sizeof(int));
   for   (int l3   = 0;   l3  < cj; l3++)  aadp[l3] = atoi(argv[l3  +   1]);

 YF2(aadp,  0,  cj  -  1);

  for   (int   l3 =  0;  l3  < cj;  l3++)   {
   printf("%d%s",  aadp[l3], (l3 ==  cj - 1   ?  ""  :  " "));
 }
   printf("\n");
 free(aadp);
  return   0;
}