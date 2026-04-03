/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A19_F31_O_A03_Ternary.c
* Implementation Logic: Replaces if-else with complex ternary expressions derived from A03.
*/


#include <stdio.h>
#include <ctype.h>

int   M3(char*  y) {
 int T   = 0;
  for  (int   QVbZ = 0;   y[QVbZ]; QVbZ++)   {
   T   +=   (!isspace(y[QVbZ]) &&   (isspace(y[QVbZ+1])   || y[QVbZ+1]  ==   0)) ? 1 : 0;
  }
  return T;
}

int   main(int   argc,   char*  argv[])  {
   if  (argc  <  2) return   0;
 printf("%d\n",  M3(argv[1]));
  return  0;
}