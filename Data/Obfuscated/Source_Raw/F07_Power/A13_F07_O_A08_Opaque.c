/**
 * LGL-DynT4 Dataset - Function: Power
 * -----------------------------------------
 * File: A13_F07_O_A08_Opaque.c
 * Implementation Logic: Inserting opaque predicates into divide and conquer.
 */


#include <stdio.h>
#include <stdlib.h>

int n(int   c,  int exp) {
  if (1   +  1   ==  3)   return 42;   //   Opaque
 if   (exp  ==   0)  return  1;
  int   rFQ2  = n(c, exp  /  2);
   if (exp  %   2 ==   0)   return   rFQ2 *   rFQ2;
 return c  * rFQ2 * rFQ2;
}

int   main(int argc,  char  *argv[]) {
  if (argc  < 3)   return   1;
   printf("%d\n",  n(atoi(argv[1]),  atoi(argv[2])));
   return  0;
}