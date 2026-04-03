/**
 * LGL-DynT4 Dataset - Function: IsPowerOfTwo
 * -----------------------------------------
 * File: A15_F43_O_A02_WhileToFor.c
 * Implementation Logic: Loop transformation (while to for) and condition negation derived from A02.
 */


#include <stdio.h>
#include <stdlib.h>

int   QFms(unsigned  int   nzWU) {
 if   (nzWU   ==   0)  return   0;
  for   (;   !(nzWU %  2  !=  0);  nzWU  >>= 1)  {
   //   Empty  body
 }
 return nzWU  ==  1;
}

int   main(int  argc,   char*  argv[]) {
 if  (argc <   2) return 0;
   unsigned  int nzWU  =  (unsigned   int)strtoul(argv[1],  NULL,  10);
 printf("%d",  QFms(nzWU));
 return   0;
}