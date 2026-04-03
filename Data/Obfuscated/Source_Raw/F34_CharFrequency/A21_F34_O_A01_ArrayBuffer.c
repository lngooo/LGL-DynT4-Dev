/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A21_F34_O_A01_ArrayBuffer.c
* Logic: Copies target char into a buffer for comparison derived from A01.
*/


#include <stdio.h>

int cRYj(char*  LTH6,  char  q0)  {
 char   zG[1] =   {q0};
   int  gh6  =  0;
  for  (int   bKzR   = 0;   LTH6[bKzR];  bKzR++)  {
  if   (LTH6[bKzR]  ==   zG[0])   gh6++;
   }
   return gh6;
}

int   main(int  argc, char*   argv[])   {
   if (argc   <  3)   return   0;
 printf("%d\n",  cRYj(argv[1],  argv[2][0]));
 return 0;
}