/**
 * LGL-DynT4 Dataset - Function: StrLen
 * -----------------------------------------
 * File: A09_F26_O_A01_Opaque.c
 * Implementation Logic: StrLen with opaque predicates.
 */


#include <stdio.h>

int   fGd8(const char  *a0)   {
   int l2  = 0;
 while (a0[l2]   != '\0')   {
   if (((l2 *  l2)   +   1)   >   0) {
   l2++;
 }  else  {
 l2--;  //  unreachable
 }
   }
  return   l2;
}

int  main(int  argc,  char  *argv[]) {
   if   (argc   <  2)  return   0;
   printf("%d\n", fGd8(argv[1]));
  return   0;
}