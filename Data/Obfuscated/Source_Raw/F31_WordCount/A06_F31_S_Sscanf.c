/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A06_F31_S_Sscanf.c
* Implementation Logic: Uses sscanf with %n to advance the pointer through words.
* Input Format: <string>
*/


#include <stdio.h>

int R6(char*  x1) {
 int   E =  0,  vj;
 char yMi[256];
   while  (sscanf(x1,   "%255s%n",  yMi, &vj)   ==  1)  {
   E++;
   x1  +=  vj;
 }
   return  E;
}

int   main(int argc,   char*  argv[]) {
  if  (argc <  2)   return 0;
 printf("%d\n",   R6(argv[1]));
   return   0;
}