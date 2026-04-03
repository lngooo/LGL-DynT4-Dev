/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A07_F01_S_Formula.c
 * Implementation Logic: Mathematical formula n(n+1)/2 (Seed 3).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int a(int  d4) {
 if  (d4  < 0)  return   0;
   return  (int)((d4   *   (d4   + 1))   /   2);
}

int  main(int   argc, char *argv[])  {
 if (argc   <   2) return  1;
  printf("%d\n",   a(atoi(argv[1])));
 return   0;
}