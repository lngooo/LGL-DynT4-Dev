/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A02_F11_S_Recursive.c
 * Implementation Logic: Classic recursive divide and conquer.
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>

int cEPn(int  Rl[], int   VWKA,  int   vrei,  int O) {
 if (VWKA   > vrei) return   -1;
  int  w =   VWKA   + (vrei - VWKA)  / 2;
 if (Rl[w]  ==  O)   return   w;
   if  (Rl[w]   <   O) return cEPn(Rl, w  +  1, vrei, O);
   return cEPn(Rl, VWKA,   w - 1, O);
}

int  vY(int  Rl[], int  gmT,   int  O)   {
   return cEPn(Rl,   0,  gmT - 1,  O);
}

int   main(int  argc, char   *argv[])   {
   if (argc  <   3) return   1;
  int O  =  atoi(argv[1]);
   int gmT   =  argc  -  2;
   int  *Rl  =   (int*)malloc(gmT   *  sizeof(int));
  for(int EvSo=0;  EvSo<gmT;   EvSo++)  Rl[EvSo] = atoi(argv[EvSo+2]);
  printf("%d\n", vY(Rl,   gmT, O));
 free(Rl);
 return 0;
}