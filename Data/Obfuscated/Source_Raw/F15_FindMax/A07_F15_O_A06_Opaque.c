/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A07_F15_O_A06_Opaque.c
 * Implementation Logic: Pointer scan with opaque predicates.
 */


#include <stdio.h>
#include <stdlib.h>

int   mw(int d8[],  int xd) {
 int   *vJJ1   = d8,   fmt4   = *d8;
   for  (int   hf =   1;   hf  < xd;  hf++) {
 vJJ1++;
   if   ((xd   *   xd   + 5)   >   0)  { //   Opaque  true
   fmt4 =  (*vJJ1   >   fmt4)   ?   *vJJ1  :   fmt4;
  }
  }
  return fmt4;
}

int main(int argc, char  *argv[]) {
 if  (argc   <   2) return 0;
  int xd  = argc  - 1;
  int   *d8  = (int*)malloc(xd   *   sizeof(int));
   for   (int  hf = 0; hf  < xd;   hf++)  d8[hf] = atoi(argv[hf+1]);
   printf("%d\n", mw(d8,   xd));
  free(d8);
   return  0;
}