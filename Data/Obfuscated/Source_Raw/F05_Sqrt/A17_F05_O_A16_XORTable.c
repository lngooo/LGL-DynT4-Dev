/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A17_F05_O_A16_XORTable.c
 * Implementation Logic: Lookup table with XOR-encoded values to vary tokens.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   jM(int   w6)  {
   if   (w6   <   0)  return  -1;
 if (w6 < 4) {
 int a[]   = {0^0xF, 1^0xF, 1^0xF,  1^0xF};
   return a[w6]   ^ 0xF;
  }
   int   JTYF = 2;
  while  (JTYF *  JTYF  <= w6) JTYF++;
 return JTYF   -   1;
}

int  main(int  argc,  char *argv[])  {
   if (argc <  2)   return  1;
 printf("%d\n",  jM(atoi(argv[1])));
 return 0;
}