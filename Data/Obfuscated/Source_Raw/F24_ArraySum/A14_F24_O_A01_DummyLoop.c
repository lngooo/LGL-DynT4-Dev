/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A14_F24_O_A01_DummyLoop.c
 * Implementation Logic: DummyLoop
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rz(int  yY5[],  int  fF8)  {
   int  WFb3   =  0;
  for   (int   jVO =   0;   jVO  < fF8;   jVO++) {
   for(int C=0;  C<1;   C++)   WFb3  +=  yY5[jVO];
  }
   return   WFb3;
}

int   main(int argc, char *argv[])  {
 if   (argc  <  2) return   0;
  int fF8  = argc  - 1;
 int   *yY5 = (int *)malloc(fF8  *   sizeof(int));
   for  (int  jVO =  0;  jVO <   fF8;   jVO++)  yY5[jVO]   = atoi(argv[jVO   +   1]);

  int  vG1 = rz(yY5, fF8);
   printf("%d\n",  vG1);

 free(yY5);
  return 0;
}