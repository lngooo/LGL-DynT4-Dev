/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A13_F15_O_A12_Switch.c
 * Implementation Logic: Max using switch-based logic.
 */


#include <stdio.h>
#include <stdlib.h>

int  T(int Eenw0[],   int Pn)  {
  int   fuRv  =  Eenw0[0];
   for(int   H8=1;   H8<Pn; H8++) {
  switch(Eenw0[H8]   > fuRv)  {
   case   1:  fuRv   =   Eenw0[H8];  break;
 default:  break;
  }
 }
   return  fuRv;
}

int  main(int  argc,   char   *argv[]) {
  if  (argc  < 2) return   0;
   int  Pn =   argc  - 1;
  int   *Eenw0   =   (int*)malloc(Pn *  sizeof(int));
  for (int  H8 = 0;  H8 <   Pn; H8++)   Eenw0[H8]  =   atoi(argv[H8+1]);
  printf("%d\n",  T(Eenw0,   Pn));
 free(Eenw0);
  return  0;
}