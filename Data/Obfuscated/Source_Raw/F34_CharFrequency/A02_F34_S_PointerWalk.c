/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A02_F34_S_PointerWalk.c
* Logic: Pointer incrementation and dereferencing.
*/


#include <stdio.h>

int B(char* w6, char nE6)  {
 int  V  = 0;
   while (*w6)  {
   if (*w6 == nE6)   V++;
  w6++;
  }
  return  V;
}

int  main(int   argc, char*  argv[])  {
   if  (argc  < 3)  return 0;
   printf("%d\n",   B(argv[1],  argv[2][0]));
   return 0;
}