/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A06_F34_S_LookupTable.c
* Logic: Full histogram pre-calculation for the string.
*/


#include <stdio.h>

int   eS(char*   t3, char   TqN8)  {
   int   sHW[256]   =  {0};
 while (*t3) {
  sHW[(unsigned  char)*t3]++;
   t3++;
 }
  return   sHW[(unsigned  char)TqN8];
}

int  main(int  argc, char*  argv[]) {
 if (argc   < 3) return 0;
   printf("%d\n",   eS(argv[1],  argv[2][0]));
 return  0;
}