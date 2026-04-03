/**
 * LGL-DynT4 Dataset - Function: Sum
 * -----------------------------------------
 * File: A03_F01_O_A01_Goto.c
 * Implementation Logic: Goto-based loop reconstruction to alter CFG structure.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int hN(int   F) {
 int   W  =   0, mmD7  =   1;
YNA4:
   if  (mmD7 >   F)   goto   fwx;
 W   +=  mmD7;
  mmD7++;
   goto   YNA4;
fwx:
  return  W;
}

int   main(int  argc, char *argv[]) {
 if  (argc <   2)   return 1;
   printf("%d\n", hN(atoi(argv[1])));
 return 0;
}