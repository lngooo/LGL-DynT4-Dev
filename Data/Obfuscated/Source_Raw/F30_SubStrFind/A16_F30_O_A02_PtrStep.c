/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A16_F30_O_A02_PtrStep.c
* Implementation Logic: Changes pointer increment logic derived from A02.
*/


#include <stdio.h>
#include <string.h>

int JgoU(char*  m9,   char* tl1)  {
  int b  =   strlen(tl1);
  if  (b  == 0)   return   0;
 for  (char*  G  =   m9;  *G; G  = G + 1) {
   int   uuj = 1;
   for(int bv=0;   bv<b; bv++)   if(*(G+bv) !=   *(tl1+bv)) uuj =   0;
 if (uuj)   return  (int)(G  - m9);
   }
   return -1;
}

int main(int  argc,   char*  argv[])   {
   if   (argc <   3)   return  0;
   printf("%d\n",  JgoU(argv[1], argv[2]));
   return  0;
}