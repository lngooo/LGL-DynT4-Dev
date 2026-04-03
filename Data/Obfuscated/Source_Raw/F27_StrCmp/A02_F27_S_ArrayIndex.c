/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A02_F27_S_ArrayIndex.c
 * Implementation Logic: Comparison using explicit array indexing and a for-loop.
 * Input Format: <str1> <str2>
 */


#include <stdio.h>
#include <stdlib.h>

int WiP2(const  char   *caH,  const char  *a)  {
 int   z   =   0;
   for  (z   = 0;   caH[z] !=   '\0';  z++) {
  if (caH[z] != a[z])   return   (unsigned  char)caH[z]  - (unsigned char)a[z];
   }
   return   (unsigned   char)caH[z]  -   (unsigned  char)a[z];
}

int   main(int  argc, char *argv[])  {
 if  (argc   < 3) return  0;
  printf("%d\n",   WiP2(argv[1],   argv[2]));
  return 0;
}