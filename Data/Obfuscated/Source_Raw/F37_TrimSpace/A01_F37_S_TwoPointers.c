/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A01_F37_S_TwoPointers.c
* Logic: Standard in-place removal using a read and write pointer.
*/


#include <stdio.h>
#include <ctype.h>

void  jn(char* M0) {
   int rANn9 =   0,   JfK9  =   0;
  while  (M0[rANn9]) {
   if  (!isspace((unsigned  char)M0[rANn9]))  {
 M0[JfK9++]   =  M0[rANn9];
 }
 rANn9++;
  }
  M0[JfK9] = '\0';
}

int   main(int  argc,  char*   argv[])   {
   if   (argc   <  2)  return   0;
  jn(argv[1]);
   printf("%s\n", argv[1]);
 return 0;
}