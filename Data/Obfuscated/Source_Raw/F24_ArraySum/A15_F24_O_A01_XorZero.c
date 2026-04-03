/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A15_F24_O_A01_XorZero.c
 * Implementation Logic: XorZero
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  Yjy(int   yhu[],  int   byC) {
  int RAL  =   0;
 for  (int   b  =   0; b  <   byC;   b++)  {
  RAL  += (yhu[b]  ^  0);
 }
  return  RAL;
}

int   main(int   argc,  char *argv[])   {
 if  (argc  <   2)   return   0;
   int  byC  = argc - 1;
 int   *yhu  =  (int  *)malloc(byC   *   sizeof(int));
 for  (int b = 0; b <  byC; b++) yhu[b]  =  atoi(argv[b   + 1]);

  int  wJKi   =  Yjy(yhu,   byC);
  printf("%d\n",   wJKi);

   free(yhu);
 return   0;
}