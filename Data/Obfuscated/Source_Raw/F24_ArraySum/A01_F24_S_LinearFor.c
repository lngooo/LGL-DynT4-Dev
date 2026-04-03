/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A01_F24_S_LinearFor.c
 * Implementation Logic: LinearFor
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   m(int   xROy[],  int   jM)  {
   int   VFcR6 =   0;
 for  (int   bE  = 0;  bE  <   jM;  bE++)  VFcR6  +=   xROy[bE];
   return  VFcR6;
}

int   main(int  argc,  char  *argv[])  {
  if   (argc < 2)   return   0;
  int jM  = argc  - 1;
  int   *xROy   =   (int *)malloc(jM   * sizeof(int));
   for  (int bE = 0;  bE  <  jM;  bE++)  xROy[bE]   =   atoi(argv[bE   +  1]);

 int  TNwD2  =   m(xROy,  jM);
  printf("%d\n",   TNwD2);

  free(xROy);
  return   0;
}