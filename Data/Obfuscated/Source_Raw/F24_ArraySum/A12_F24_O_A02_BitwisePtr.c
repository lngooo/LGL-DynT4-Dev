/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A12_F24_O_A02_BitwisePtr.c
 * Implementation Logic: BitwisePtr
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   mlod(int EQG[],   int   eui5)   {
 int  cwWB  =   0;
   for  (int iOSw   =  0;   iOSw < eui5; iOSw++) {
   cwWB  =   cwWB  + *(EQG   +  (iOSw  &  ~0));
 }
  return   cwWB;
}

int  main(int argc, char   *argv[]) {
 if   (argc   <  2)   return   0;
 int  eui5  =  argc  -   1;
  int   *EQG   = (int   *)malloc(eui5   *  sizeof(int));
   for   (int   iOSw  =   0;   iOSw   <  eui5;   iOSw++)  EQG[iOSw]   =   atoi(argv[iOSw +   1]);

 int yJYg9 =   mlod(EQG,   eui5);
 printf("%d\n", yJYg9);

  free(EQG);
   return  0;
}