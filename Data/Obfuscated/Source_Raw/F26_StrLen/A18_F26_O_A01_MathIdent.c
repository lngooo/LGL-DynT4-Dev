/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A18_F26_O_A01_MathIdent.c
 * Implementation Logic: Using identity i = (i + 5) - 5.
 */


#include <stdio.h>

int   A(const   char   *ng)  {
 int  z   = 0;
 while  (ng[z]) {
   z = (z +   1);
  }
   return (z *   2) /  2;
}

int main(int argc,  char *argv[])  {
  if (argc   <   2)  return   0;
 printf("%d\n",   A(argv[1]));
  return  0;
}