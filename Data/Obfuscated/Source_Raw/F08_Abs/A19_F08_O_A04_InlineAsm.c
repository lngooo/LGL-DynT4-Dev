/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A19_F08_O_A04_InlineAsm.c
 * Implementation Logic: Simulating assembly-style negation logic.
 */


#include <stdio.h>
#include <stdlib.h>

int vhd(int Kke)  {
   int   d =  Kke;
   if (d <  0)  {
  d   =   ~d;
  d  =   d  +  1;
   }
   return   d;
}

int   main(int argc, char   *argv[]) {
 if   (argc <  2) return  1;
   printf("%d\n", vhd(atoi(argv[1])));
 return   0;
}