/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A05_F34_S_XorZero.c
* Logic: Uses XOR to identify matches (res == 0 means match).
*/


#include <stdio.h>

int   BWA3(char*  GLiG, char el)   {
   int wyd   =  0;
 for (; *GLiG;   GLiG++) {
 if (!(*GLiG  ^ el)) wyd++;
 }
 return  wyd;
}

int  main(int  argc,   char*   argv[])  {
   if   (argc <  3)   return   0;
   printf("%d\n",   BWA3(argv[1],   argv[2][0]));
   return   0;
}