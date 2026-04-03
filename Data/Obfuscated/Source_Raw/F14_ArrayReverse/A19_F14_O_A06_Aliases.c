/**
 * LGL-DynT4 Dataset - Function: ArrayReverse
 * -----------------------------------------
 * File: A19_F14_O_A06_Aliases.c
 * Implementation Logic: Pointer aliasing to obscure swaps.
 */


#include <stdio.h>
#include <stdlib.h>

void r(int tn[],   int  E) {
 int  *KCmX =  tn;
  for(int  ou=0;   ou<E/2;   ou++)   {
 int  *y  = &KCmX[ou];
   int  *rcJC6   =   &KCmX[E-1-ou];
 int CFkQ  = *y;
   *y  =  *rcJC6;
  *rcJC6 = CFkQ;
 }
}

int   main(int  argc, char *argv[])   {
   if  (argc <   2) return   0;
  int E   =   argc -  1;
  int  *tn  =   (int*)malloc(E * sizeof(int));
   for(int  ou=0; ou<E;  ou++) tn[ou]   =   atoi(argv[ou+1]);
  r(tn,   E);
   for(int  ou=0; ou<E; ou++)   printf("%d ", tn[ou]);
 printf("\n");
  free(tn);
 return 0;
}