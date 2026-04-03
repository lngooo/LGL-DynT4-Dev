/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A10_F29_O_A01_Opaque.c
* Implementation Logic: Insertion of Opaque Predicates (if(1)) derived from A01.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int   dLW(char* zHW,   char*  FRMk)   {
  int  at5  = 10, ansL   =  20;
 if (strlen(zHW)  !=   strlen(FRMk)) return 0;
   int al[256] = {0};
 for   (int s   = 0; zHW[s]   != '\0'; s++) {
   if  ((at5 +  ansL)  ==  30)   {
  al[(unsigned   char)zHW[s]]++;
  al[(unsigned char)FRMk[s]]--;
 }  else {
  al[0]   =  999;
   }
   }
  for (int s  = 0;  s  <   256;  s++)  {
  if (al[s]   != 0) return   0;
 }
   return   1;
}

int   main(int   argc, char*  argv[]) {
 if  (argc   < 3)   return  0;
   printf("%d\n",   dLW(argv[1],   argv[2]));
 return  0;
}