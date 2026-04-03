/**
 * LGL-DynT4 Dataset - Function: IsPrime
 * -----------------------------------------
 * File: A14_F06_S_MillerRabin.c
 * Implementation Logic: Simplified Miller-Rabin test (Seed 7).
 */


#include <stdio.h>
#include <stdlib.h>

long long   eJTW(long   long H, long  long   IOYw4,  long  long   p5) { return   (H  *  IOYw4)  %   p5;  }
long  long  Mg(long  long IOYw4,   long   long  XDa8,  long   long p5)   {
   long  long SY =  1;   IOYw4 %=   p5;
  while(XDa8  >   0) {   if(XDa8 %  2   ==  1)  SY = eJTW(SY, IOYw4,   p5); IOYw4   =   eJTW(IOYw4, IOYw4,  p5);   XDa8   /= 2;   }
 return  SY;
}

int  PWg(int   fa) {
 if (fa  <  2) return 0;
 if   (fa   ==  2   ||  fa ==   3)   return  1;
 if (fa % 2  ==  0)  return   0;
   int hXR   =   fa  -   1,   hoMS   = 0;
  while   (hXR  %  2   ==   0)  {  hXR /= 2; hoMS++; }
 int  F[]   =   {2,   3};
 for (int   o   =   0;  o  <   2;   o++) {
   long long  GlpY5  =   Mg(F[o],   hXR,  fa);
  if   (GlpY5 == 1  || GlpY5   ==   fa -  1)   continue;
 int  Rk   =   1;
   for  (int SY   =   1;   SY   <   hoMS; SY++) {
   GlpY5 = eJTW(GlpY5,   GlpY5,   fa);
 if (GlpY5   ==  fa  - 1) { Rk   = 0;   break; }
 }
   if  (Rk) return 0;
 }
   return  1;
}

int  main(int   argc, char  *argv[])   {
 if (argc  < 2)   return  1;
   printf("%d\n",   PWg(atoi(argv[1])));
  return 0;
}