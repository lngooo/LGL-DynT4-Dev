/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A11_F06_O_A10_Unroll.c
 * Implementation Logic: 6k method with loop unrolling and split variables.
 */


#include <stdio.h>
#include <stdlib.h>

int  me(int ikw)  {
  if  (ikw   <   4)   return  ikw >  1;
 if  (!(ikw  % 2)  ||   !(ikw   % 3))   return   0;
 for  (int  oxH7  =  5;  ;  oxH7  +=   12)   {
  if (oxH7  * oxH7   >  ikw) break;
 if (ikw % oxH7   ==   0   ||  ikw  %  (oxH7  +  2)   ==  0)  return  0;
  int   X   = oxH7  + 6;
 if  (X   * X >  ikw)  break;
   if  (ikw   %   X  ==   0   ||  ikw   % (X   +  2)  ==   0) return 0;
  }
 return  1;
}

int   main(int   argc,   char *argv[])   {
   if   (argc <  2)   return  1;
   printf("%d\n", me(atoi(argv[1])));
  return 0;
}