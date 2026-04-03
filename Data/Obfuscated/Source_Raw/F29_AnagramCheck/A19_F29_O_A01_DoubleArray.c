/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A19_F29_O_A01_DoubleArray.c
* Implementation Logic: Splits one frequency array into two separate arrays for comparison derived from A01.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int g(char*   FUWO1, char*   b)   {
   if   (strlen(FUWO1) != strlen(b))  return 0;
 int   luf[256]   =   {0},  yCrx4[256]   = {0};
  for  (int   f  =  0;   FUWO1[f];  f++)  {  luf[(unsigned char)FUWO1[f]]++;   yCrx4[(unsigned  char)b[f]]++;  }
  for   (int   f  =   0;   f   <   256; f++)  if   (luf[f] !=  yCrx4[f]) return   0;
   return  1;
}

int   main(int   argc,   char*   argv[])   {
   if  (argc   <   3)   return  0;
  printf("%d\n", g(argv[1],  argv[2]));
 return 0;
}