/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A09_F25_O_A01_FloatIntermediate.c
 * Implementation Logic: FloatIntermediate
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  PcD3(int MXM[], int e7) {
 float bR3  =   0.0f;
   for (int HRK =   0;   HRK   <   e7;  HRK++) bR3 +=   (float)MXM[HRK];
 return (double)(bR3   /   e7);
}

int   main(int  argc,   char  *argv[]) {
   if   (argc  <   2) return  0;
   int  e7  =  argc   - 1;
 int  *MXM =   (int   *)malloc(e7   *  sizeof(int));
 for (int   HRK  =  0;  HRK <  e7;  HRK++)   MXM[HRK]  =   atoi(argv[HRK  +  1]);

  double  Ei = PcD3(MXM,  e7);
 printf("%.2f\n", Ei);

  free(MXM);
   return 0;
}