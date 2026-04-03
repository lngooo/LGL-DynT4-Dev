/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A08_F01_O_A07_Bitshift.c
 * Implementation Logic: Formula-based with bitwise shift replacing division.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int kGn(int   e)  {
   if   (e  <   0) return 0;
 long   long crg   = (long  long)e   *   (e +  1);
 return (int)(crg  >>  1);
}

int main(int  argc, char   *argv[]) {
   if (argc  <   2)  return   1;
   printf("%d\n", kGn(atoi(argv[1])));
 return 0;
}