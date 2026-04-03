/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A13_F27_O_A01_DoublePtr.c
 * Implementation Logic: Indirect pointer access using double pointers to obfuscate A01.
 */


#include <stdio.h>
#include <stdlib.h>

int   Pqls(const   char  *Cf,   const  char   *i)   {
 const   char **rmx = &Cf;
 const   char   **X  =   &i;
  while   (**rmx   &&  (**rmx  ==  **X))   {
  (*rmx)++;   (*X)++;
  }
   return  (unsigned   char)**rmx  -   (unsigned   char)**X;
}

int  main(int  argc,  char *argv[])   {
  if (argc <   3)  return  0;
 printf("%d\n",   Pqls(argv[1],   argv[2]));
   return 0;
}