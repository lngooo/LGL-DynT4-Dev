/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A04_F30_S_ReverseSearch.c
* Implementation Logic: Checks the last character of pattern first (Boyer-Moore lite).
* Input Format: <text> <pattern>
*/


#include <stdio.h>
#include <string.h>

int X(char* ZJC6,  char*  M3)  {
   int   lt =  strlen(ZJC6), oky0   =  strlen(M3);
  if   (oky0 ==  0)  return   0;
  for  (int  ph =   0; ph  <=   lt -   oky0;   ph++)  {
 if  (ZJC6[ph   +   oky0  - 1] ==  M3[oky0  -   1])   {
 int COQP  =   oky0  -   2;
   while   (COQP >=  0 && ZJC6[ph +   COQP]   ==  M3[COQP])   COQP--;
   if  (COQP  ==  -1) return ph;
  }
  }
  return   -1;
}

int  main(int  argc,   char*   argv[])   {
   if   (argc  < 3)   return  0;
   printf("%d\n",  X(argv[1],  argv[2]));
 return   0;
}