/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A01_F08_S_StandardIf.c
 * Implementation Logic: Basic conditional check (Seed 1).
 */


#include <stdio.h>
#include <stdlib.h>

int r6(int  U)   {
 if (U <  0)   {
 return   -U;
  }
  return  U;
}

int  main(int argc, char *argv[]) {
 if   (argc   <  2)   return   1;
   printf("%d\n", r6(atoi(argv[1])));
   return  0;
}