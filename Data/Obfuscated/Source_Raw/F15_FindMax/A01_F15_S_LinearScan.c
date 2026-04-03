/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A01_F15_S_LinearScan.c
 * Implementation Logic: Standard linear scanning (Seed 1).
 */


#include <stdio.h>
#include <stdlib.h>

int   Q(int  j[],  int  rX8) {
 if  (rX8  <= 0)   return   0;
 int   Gc = j[0];
 for   (int   W  =   1; W  <   rX8;  W++)  {
   if  (j[W]  > Gc)  {
   Gc = j[W];
 }
 }
  return   Gc;
}

int   main(int argc,   char   *argv[]) {
 if   (argc  <  2) return   0;
  int   rX8   =  argc - 1;
   int   *j =   (int*)malloc(rX8  * sizeof(int));
   for  (int   W =  0;  W   <  rX8;   W++) j[W]   = atoi(argv[W  +  1]);
  printf("%d\n",  Q(j,   rX8));
 free(j);
   return  0;
}