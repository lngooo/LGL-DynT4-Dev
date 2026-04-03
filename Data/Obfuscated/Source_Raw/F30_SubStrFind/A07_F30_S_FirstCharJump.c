/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A07_F30_S_FirstCharJump.c
* Implementation Logic: Locate the first character using strchr then verify pattern.
* Input Format: <text> <pattern>
*/


#include <stdio.h>
#include <string.h>

int  s6(char*   VCV4,   char*   tKA)  {
   char*  GhS  =   VCV4;
 int  a  = strlen(tKA);
   if (a ==   0)   return 0;
 while  ((GhS = strchr(GhS,   tKA[0]))  !=   NULL)   {
  if (strncmp(GhS, tKA,  a) ==  0)   return  (int)(GhS  -   VCV4);
  GhS++;
   }
 return   -1;
}

int   main(int   argc,   char* argv[])  {
   if  (argc < 3) return  0;
  printf("%d\n", s6(argv[1], argv[2]));
 return 0;
}