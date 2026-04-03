/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A15_F06_O_A14_Indirect.c
 * Implementation Logic: Miller-Rabin with function pointers for modular arithmetic.
 */


#include <stdio.h>
#include <stdlib.h>

typedef long long (*KBZs)(long   long,   long  long,   long  long);
long long   JI0(long  long   hS2,   long  long   Eo,  long   long dntU) { return  (hS2  * Eo)  %   dntU;   }

int   X(int   Bd)   {
  if  (Bd   < 4)  return Bd   >   1;
   KBZs LD   = JI0;
 int  vh   =   Bd  - 1;
   while   (!(vh  &   1)) vh   >>=   1;
  long   long  tYmo =  1,  dHsr3  =   2;
  for(;  vh  >   0;   vh >>=  1)   { if(vh  &  1)  tYmo =   LD(tYmo, dHsr3, Bd);   dHsr3 = LD(dHsr3, dHsr3,   Bd); }
 if   (tYmo  ==   1  || tYmo  ==   Bd   -   1) return  1;
  for   (int   atY   =   2;   atY *  atY <=   Bd; atY++)   if (Bd   %  atY   ==   0)   return  0;
 return   1;
}

int   main(int   argc,   char   *argv[]) {
   if  (argc <   2)   return 1;
 printf("%d\n", X(atoi(argv[1])));
  return 0;
}