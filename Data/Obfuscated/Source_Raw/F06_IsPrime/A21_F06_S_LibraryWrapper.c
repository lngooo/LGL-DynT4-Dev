/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A21_F06_S_LibraryWrapper.c
 * Implementation Logic: Using modular arithmetic properties to filter results.
 */


#include <stdio.h>
#include <stdlib.h>

int   so(int  JLUz) {
  if (JLUz ==   2 || JLUz  ==   3)  return   1;
 if   (JLUz  < 2   ||   JLUz  %   2  ==  0 ||  JLUz  %   3  ==  0)   return 0;
 int fX   = 1;
  while ((6  *  fX   -  1) * (6   *  fX   -  1) <= JLUz)  {
 if (JLUz  %  (6  *  fX  -  1)   ==  0   ||   JLUz  % (6   * fX  +  1)   ==  0)   return   0;
  fX++;
   }
   return 1;
}

int  main(int argc,   char   *argv[])  {
   if   (argc   <   2) return   1;
 printf("%d\n", so(atoi(argv[1])));
  return 0;
}