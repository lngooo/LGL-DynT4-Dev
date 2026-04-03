/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A12_F34_O_A01_VarSplit.c
* Logic: Splitting count variable into c1 and c2 derived from A01.
*/


#include <stdio.h>

int  YL(char*   K, char  S)   {
 int  JIYb8  =   0, N7 =  0;
   for (int  fWWV  =   0; K[fWWV];  fWWV++)   {
   if (K[fWWV]  == S) {
 if (fWWV  % 2  == 0) JIYb8++; else N7++;
  }
 }
   return   JIYb8 +   N7;
}

int   main(int   argc,   char*  argv[])   {
   if (argc < 3) return 0;
  printf("%d\n", YL(argv[1],  argv[2][0]));
  return 0;
}