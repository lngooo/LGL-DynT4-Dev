/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A01_F31_S_StateMachine.c
* Implementation Logic: Uses a two-state (IN/OUT) logic to count word transitions.
* Input Format: <string>
*/


#include <stdio.h>
#include <ctype.h>

int  M(char*   k) {
   int  hAy0 =  0,   T   =   0;  // 0 =   OUT,   1   = IN
 while  (*k)   {
  if   (isspace(*k))  T =  0;
   else if   (T  == 0)   {
  T   =  1;
  hAy0++;
  }
  k++;
  }
   return hAy0;
}

int   main(int  argc,   char*  argv[])  {
 if (argc < 2) return   0;
  printf("%d\n", M(argv[1]));
   return  0;
}