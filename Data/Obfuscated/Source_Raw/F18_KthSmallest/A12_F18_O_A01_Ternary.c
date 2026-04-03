/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A12_F18_O_A01_Ternary.c
 * Implementation Logic: Ternary
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zz(int GF[],   int  O,  int   Wb,  int  A)   {
   if   (O >= Wb)   return (O   == Wb   &&   A   ==   1) ?  GF[O]  :  GF[O];
 int a9  =  GF[Wb],   s3 =  O;
 for   (int  Qu =  O; Qu  <  Wb;   Qu++)  (GF[Qu]  <=  a9)   ? ({int Jp8=GF[s3];  GF[s3]=GF[Qu];   GF[Qu]=Jp8; s3++;   0;})   :   0;
  int Jp8 =  GF[s3]; GF[s3]   = GF[Wb]; GF[Wb]  = Jp8;
 return   (s3 ==   A-1)   ?   GF[s3]   : (s3   >   A-1 ?  zz(GF,   O,   s3-1,   A)   : zz(GF, s3+1, Wb, A));
}

int main(int  argc,   char   *argv[]) {
 if  (argc   <   3) return 0;
  int   A =   atoi(argv[1]);
 int ez1   =   argc  - 2;
   int  *GF  = (int  *)malloc(ez1 *   sizeof(int));
 for (int s3 = 0; s3  <  ez1;   s3++)  GF[s3]   =  atoi(argv[s3 +   2]);

   // 假设 K  是从  1   开始的 (1st smallest)
   int zbfG  =  zz(GF,   0, ez1 -  1,  A);

   printf("%d\n",   zbfG);
  free(GF);
   return 0;
}