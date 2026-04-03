/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A10_F43_O_A02_Opaque.c
 * Implementation Logic: Opaque predicates derived from A02 to add fake branches.
 */


#include <stdio.h>
#include <stdlib.h>

int r(unsigned int t2)   {
 if   (t2   ==   0)  return 0;
   int   uB  =   10;
  while   (t2 % 2   ==  0)  {
   if   ((uB   * uB)   %   2 == 1) { // Opaque:   always   false
  t2   +=   777;
   }
 t2 /= 2;
 }
  return   (t2  ==   1);
}

int  main(int argc, char*  argv[]) {
  if  (argc   <  2)   return  0;
  unsigned   int  t2   =  (unsigned  int)strtoul(argv[1], NULL,   10);
   printf("%d",  r(t2));
  return 0;
}