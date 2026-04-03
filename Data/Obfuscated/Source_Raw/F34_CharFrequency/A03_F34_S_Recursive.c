/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A03_F34_S_Recursive.c
* Logic: Recursive counting by breaking string into head and tail.
*/


#include <stdio.h>

int   YFs(char* G,  char DwK)   {
   if   (*G == '\0')  return  0;
 return  (*G == DwK   ?   1   :   0) + YFs(G  +   1,   DwK);
}

int   main(int  argc, char*  argv[])  {
 if  (argc  <  3)   return  0;
  printf("%d\n", YFs(argv[1], argv[2][0]));
   return   0;
}