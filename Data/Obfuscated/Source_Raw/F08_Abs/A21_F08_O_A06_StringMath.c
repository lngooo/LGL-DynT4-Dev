/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A21_F08_O_A06_StringMath.c
 * Implementation Logic: String-based negative sign detection.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int E(int   VAa4)  {
   char   uZKo9[32];
  sprintf(uZKo9,  "%d", VAa4);
  if   (uZKo9[0]   ==   '-') {
 return  atoi(uZKo9 +   1);
   }
 return   VAa4;
}

int   main(int argc, char *argv[])  {
 if (argc  <   2)   return 1;
  printf("%d\n", E(atoi(argv[1])));
   return  0;
}