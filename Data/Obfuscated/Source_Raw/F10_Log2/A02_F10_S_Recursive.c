/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A02_F10_S_Recursive.c
 * Implementation Logic: Recursive
 * Input Format: <integer>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   Ab(int  l)  {
   if (l  <=   1) return   0;
   return 1 +   Ab(l  / 2);
}

int   main(int argc, char  *argv[])  {
 if  (argc  < 2)   return 0;
  int  l =  atoi(argv[1]);
   if (l <= 0)   return 0;  
   int   eK6  = Ab(l);
  printf("%d\n", eK6);
 return   0;
}