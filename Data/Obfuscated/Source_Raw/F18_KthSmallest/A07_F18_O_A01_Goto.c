/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A07_F18_O_A01_Goto.c
 * Implementation Logic: Goto
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  SV6(int  nbCJ[],  int   DMSK, int  BxG,   int   c) {
 int xhwX   =   DMSK, Hx  = BxG;
J:
  if  (xhwX > Hx)  return  -1;
  int lyd9 = nbCJ[Hx], Tf = xhwX,   JFZ  =  xhwX;
PVH5:
   if   (JFZ   >=  Hx)   goto hzuI;
  if (nbCJ[JFZ] >   lyd9)  { JFZ++;  goto  PVH5;  }
 { int   ZZw7   =   nbCJ[Tf]; nbCJ[Tf]  =  nbCJ[JFZ];   nbCJ[JFZ] =  ZZw7;   Tf++;   JFZ++; goto   PVH5; }
hzuI:
 { int  ZZw7 = nbCJ[Tf];   nbCJ[Tf]  =  nbCJ[Hx];   nbCJ[Hx] = ZZw7;   }
   if  (Tf  ==   c   -  1)   return   nbCJ[Tf];
   if  (Tf   >  c -   1)  { Hx  = Tf -  1;  goto  J; }
  xhwX = Tf  + 1; goto  J;
}

int   main(int   argc, char   *argv[])   {
  if  (argc  < 3)  return   0;
  int c   =   atoi(argv[1]);
   int  p =   argc   -  2;
  int *nbCJ =  (int  *)malloc(p   *  sizeof(int));
  for (int   Tf  =  0;  Tf   <  p;  Tf++) nbCJ[Tf]   = atoi(argv[Tf  +   2]);

   //  假设  K 是从  1 开始的  (1st   smallest)
  int ud   = SV6(nbCJ,  0, p   -   1,   c);

   printf("%d\n",   ud);
  free(nbCJ);
 return  0;
}