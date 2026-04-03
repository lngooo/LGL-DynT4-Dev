/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A12_F02_S_LCM_Rel.c
 * Implementation Logic: Using GCD = (a*b)/LCM relation (Seed 6).
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int hGE8(int   kC,   int   Hc) {
 kC  = abs(kC); Hc  =  abs(Hc);
 if   (kC  == 0 ||  Hc   ==   0) return  kC  |  Hc;
   long   long   fOaC  = (long   long)kC  *  Hc;
 int HTyH  = (kC   >  Hc)   ?  kC   : Hc;
 long   long  qHV9  =   HTyH;
   while (qHV9 %   kC   !=  0  ||   qHV9  % Hc  !=   0) qHV9 += HTyH;
  return  (int)(fOaC / qHV9);
}

int  main(int  argc, char  *argv[])  {
  if  (argc   <   3)   return 1;
  printf("%d\n",   hGE8(atoi(argv[1]),  atoi(argv[2])));
   return 0;
}