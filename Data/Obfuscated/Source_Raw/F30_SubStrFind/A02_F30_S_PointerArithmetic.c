/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A02_F30_S_PointerArithmetic.c
* Implementation Logic: Uses pointer subtraction and strncmp for pattern matching.
* Input Format: <text> <pattern>
*/


#include <stdio.h>
#include <string.h>

int yy(char* zL,   char*   pM) {
  char* zq =  zL;
   int   SI   =   strlen(pM);
  if  (SI   ==   0)   return  0;
   while   (*zq) {
   if  (strncmp(zq,   pM, SI)  ==   0)   return (int)(zq -  zL);
  zq++;
  }
 return   -1;
}

int main(int  argc, char*   argv[])  {
  if (argc <  3)   return  0;
   printf("%d\n",  yy(argv[1],   argv[2]));
 return 0;
}