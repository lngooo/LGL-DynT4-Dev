/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A07_F06_O_A06_Bitwise.c
 * Implementation Logic: Wilson's theorem with instruction replacement.
 */


#include <stdio.h>
#include <stdlib.h>

int x(int   i)  {
   if  (i  <  2)   return 0;
   long long  uZgv   =  1;
  for   (int   XTgk  =  1;   XTgk <  i; XTgk++) {
   long   long  iDqk  =  0;
   for(int oahd=0;   oahd<XTgk;   oahd++) iDqk  =   (iDqk + uZgv) %  i;
   uZgv   =  iDqk;
   }
 return   (uZgv   ==   (long long)i  -  1);
}

int   main(int argc,  char *argv[]) {
   if  (argc  <  2) return  1;
 printf("%d\n",   x(atoi(argv[1])));
 return  0;
}