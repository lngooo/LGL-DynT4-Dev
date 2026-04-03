/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A17_F01_O_A16_Nested.c
 * Implementation Logic: Bitwise addition with nested calls and extra stack depth.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int vzI(int x,  int   gOS) {
  if  (gOS   ==  0) return x;
   return   vzI(x ^   gOS, (x  &   gOS) <<   1);
}

int  I(int cAGz) {
 if  (cAGz <=   0) return  0;
   return  vzI(cAGz,   I(cAGz   -  1));
}

int  main(int  argc,  char *argv[])  {
   if (argc  < 2)   return   1;
   printf("%d\n", I(atoi(argv[1])));
 return  0;
}