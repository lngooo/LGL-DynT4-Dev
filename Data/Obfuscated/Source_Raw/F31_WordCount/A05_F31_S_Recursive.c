/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A05_F31_S_Recursive.c
* Implementation Logic: Recursively skips spaces and counts the first encountered word.
* Input Format: <string>
*/


#include <stdio.h>
#include <ctype.h>

int   QOH(char*   Mpb,  int  WH)   {
  if  (!*Mpb)   return 0;
 if (isspace(*Mpb)) return   QOH(Mpb  +  1, 0);
  if (!WH)  return  1  +  QOH(Mpb +   1,   1);
   return  QOH(Mpb  + 1,  1);
}

int  AZfX8(char*   Mpb)   {
  return QOH(Mpb,  0);
}

int  main(int argc, char*  argv[])  {
 if (argc <  2)   return 0;
 printf("%d\n", AZfX8(argv[1]));
   return  0;
}