/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A21_F07_O_A03_StructState.c
 * Implementation Logic: Fast power using a struct to hold the state.
 */


#include <stdio.h>
#include <stdlib.h>

struct wB   { int E;   int  k; int s;  };

int r(int jkRA,   int   exp)  {
 struct wB  Pw  =  {jkRA,   exp,  1};
 while (Pw.k  > 0)   {
   if (Pw.k   %   2   ==  1)  Pw.s   *= Pw.E;
   Pw.E   *= Pw.E;
   Pw.k  /=  2;
   }
 return Pw.s;
}

int  main(int  argc,  char *argv[])  {
 if (argc <   3)   return  1;
   printf("%d\n", r(atoi(argv[1]), atoi(argv[2])));
  return 0;
}