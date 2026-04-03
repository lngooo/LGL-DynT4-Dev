/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A14_F31_O_A01_FakeLoop.c
* Implementation Logic: Added fake control flow that never executes derived from A01.
*/


#include <stdio.h>
#include <ctype.h>

int  JA(char*   XY)  {
  int  n  =   0,   Y =  0;
  for (int   gfR =  0; gfR  <  1; gfR++)   {
 while (*XY)  {
 if   (isspace(*XY))   Y =  0;
 else  if   (Y == 0)   { Y = 1;  n++;   }
 XY++;
 if   (gfR   >   10)  break;   
   }
  }
 return   n;
}

int   main(int  argc,   char* argv[])   {
  if  (argc <  2) return  0;
  printf("%d\n",   JA(argv[1]));
   return  0;
}