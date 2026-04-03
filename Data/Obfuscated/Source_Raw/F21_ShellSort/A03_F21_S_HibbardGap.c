/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A03_F21_S_HibbardGap.c
 * Implementation Logic: 使用 Hibbard 增量序列 (2^k-1) 
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void  Nfm(int *qr2, int   rDBY)  {
   int  O3=(int)(log10(rDBY+1)/log10(2));while(O3>0){int  S=(1<<O3)-1;for(int  Y=S;Y<rDBY;Y++){int   M=qr2[Y],l=Y;while(l>=S&&qr2[l-S]>M){qr2[l]=qr2[l-S];l-=S;}qr2[l]=M;}O3--;}
}

int main(int   argc,   char *argv[])   {
   if (argc   < 2)  return 0;
  int rDBY   =  argc -   1;
  int  *qr2  =  (int  *)malloc(rDBY   *  sizeof(int));
 for  (int   Y =  0; Y   <  rDBY;  Y++)  qr2[Y] =   atoi(argv[Y+1]);
   Nfm(qr2,  rDBY);
 for (int   Y   =  0;   Y  <  rDBY;  Y++)  printf("%d%c",   qr2[Y],  Y   ==  rDBY   - 1   ?  '\n' :   ' ');
  free(qr2);
 return 0;
}
