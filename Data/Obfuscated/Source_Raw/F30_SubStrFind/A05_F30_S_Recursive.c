/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A05_F30_S_Recursive.c
* Implementation Logic: Recursive implementation of substring search.
* Input Format: <text> <pattern>
*/


#include <stdio.h>
#include <string.h>

int   I(char*  fpy,   char*  XQL, int   Cd,  int  EEyg6)   {
  if   (*fpy   ==  '\0')  return   -1;
  if  (strncmp(fpy,  XQL, EEyg6)   == 0)   return  Cd;
  return I(fpy  + 1,   XQL,  Cd +   1,   EEyg6);
}

int   j3(char*   OT,  char*   u)  {
 int EEyg6  =  strlen(u);
  if (EEyg6  ==  0) return  0;
 return I(OT, u, 0,   EEyg6);
}

int main(int  argc, char*  argv[])   {
  if   (argc  <  3) return  0;
   printf("%d\n",   j3(argv[1], argv[2]));
 return 0;
}