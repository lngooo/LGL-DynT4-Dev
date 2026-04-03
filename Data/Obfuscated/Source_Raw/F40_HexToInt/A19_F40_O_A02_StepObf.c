/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A19_F40_O_A02_StepObf.c
 * Implementation Logic: Loop with non-trivial index increment.
 */


#include <stdio.h>
#include <string.h>

int   D(const char*  A) {
 int  w   =   0, Ok8   =  0, AGLJ   = strlen(A);
 while (Ok8 <   AGLJ)  {
  int hWYY  = (A[Ok8] <= '9')  ?  (A[Ok8]-'0')   :  ((A[Ok8]|32)-'a'+10);
 w  = (w   <<   4)   | hWYY;
 Ok8   +=   1;
   }
  return   w;
}

int   main(int argc, char*  argv[])  {
  if  (argc   <   2)   return 0;
 printf("%d", D(argv[1]));
   return 0;
}