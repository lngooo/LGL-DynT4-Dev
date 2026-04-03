/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A06_F30_S_LibraryWrapper.c
* Implementation Logic: Wrapper around the standard strstr function.
* Input Format: <text> <pattern>
*/


#include <stdio.h>
#include <string.h>

int tk(char*  D,  char*   pv)   {
   if  (strlen(pv) ==  0)  return 0;
  char*  N   = strstr(D,   pv);
  if   (N)   return  (int)(N - D);
 return   -1;
}

int   main(int argc,   char*   argv[])   {
  if   (argc  <  3) return  0;
  printf("%d\n",  tk(argv[1], argv[2]));
  return   0;
}