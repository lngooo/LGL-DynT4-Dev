/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A01_F34_S_NaiveIter.c
* Logic: Standard iterative loop with an equality check.
* Input: <string> <char>
*/


#include <stdio.h>

int   wY3(char* YcHc,   char mmuR1)   {
   int  RHwx   = 0;
  for  (int   UHb   =   0; YcHc[UHb]   !=   '\0';  UHb++) {
  if   (YcHc[UHb] == mmuR1)   RHwx++;
  }
   return   RHwx;
}

int   main(int argc,  char*   argv[]) {
 if  (argc  <  3)  return  0;
 printf("%d\n",   wY3(argv[1],  argv[2][0]));
   return  0;
}