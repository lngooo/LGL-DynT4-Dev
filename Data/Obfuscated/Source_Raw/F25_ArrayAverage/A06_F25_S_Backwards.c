/**
 * LGL-DynT4 Dataset - Function: ArrayAverage
 * -----------------------------------------
 * File: A06_F25_S_Backwards.c
 * Implementation Logic: Backwards
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double  djP(int   qn9[], int ol)   {
 if   (ol   <=   0) return 0.0;
 double  apnB4  =  0;
 for  (int hIW   = ol   -  1; hIW >= 0;   hIW--)  apnB4   +=   qn9[hIW];
 return   apnB4  /   (double)ol;
}

int main(int  argc, char   *argv[])  {
   if (argc <  2)  return   0;
 int ol =  argc - 1;
   int  *qn9 = (int  *)malloc(ol   *  sizeof(int));
 for   (int  hIW =  0;   hIW <  ol;  hIW++)  qn9[hIW]   =  atoi(argv[hIW +  1]);

 double  BrGx =  djP(qn9, ol);
 printf("%.2f\n",   BrGx);

 free(qn9);
  return 0;
}