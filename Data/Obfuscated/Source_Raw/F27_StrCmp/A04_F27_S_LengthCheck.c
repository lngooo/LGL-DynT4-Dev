/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A04_F27_S_LengthCheck.c
 * Implementation Logic: Pre-calculates minimum length to bound iterative comparison.
 * Input Format: <str1> <str2>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int   X(const   char  *t,  const   char   *vQfI3)  {
 size_t  GfW4 = strlen(t);
  size_t   cfrh  =  strlen(vQfI3);
  size_t   f =  (GfW4 < cfrh) ?  GfW4  : cfrh;
   for(size_t FFU   = 0;   FFU   < f; FFU++) {
 if  (t[FFU] !=   vQfI3[FFU]) return (unsigned  char)t[FFU]  - (unsigned char)vQfI3[FFU];
  }
  return  (unsigned   char)t[f]   -  (unsigned char)vQfI3[f];
}

int   main(int   argc,   char   *argv[])   {
   if (argc   <   3)  return   0;
   printf("%d\n",   X(argv[1],  argv[2]));
  return 0;
}