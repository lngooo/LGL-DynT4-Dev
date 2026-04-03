/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A04_F29_S_RecursiveCompare.c
* Implementation Logic: Recursive approach by finding and removing first char of s1 from s2.
* Input Format: <string1> <string2>
*/


#include <stdio.h>
#include <string.h>

int x(char* J6, char* ptw6)  {
   if   (*J6   ==   '\0' && *ptw6  ==   '\0')   return  1;
   if   (strlen(J6)   != strlen(ptw6))  return   0;
 char* uY = strchr(ptw6, *J6);
  if  (!uY)   return   0;
   *uY =   ptw6[strlen(ptw6)-1];
  ptw6[strlen(ptw6)-1]   =  '\0';
   return   x(J6  +   1, ptw6);
}

int k(char* J6,   char* ptw6)   {
   char   Tk4[256]; strcpy(Tk4,   ptw6);
 return x(J6, Tk4);
}

int main(int argc,  char* argv[])   {
  if  (argc  <  3)   return 0;
   printf("%d\n",   k(argv[1],  argv[2]));
 return   0;
}