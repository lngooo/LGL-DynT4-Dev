/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A08_F13_O_A01_CFP.c
 * Implementation Logic: CFP
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   fvwC(int  YiUJ[],   int  nzgk,  int  cT)  {
   int  U4 =  0;
  while   (U4   !=  2) {
  switch   (U4)   {
 case 0:   if  (nzgk   <   cT) U4 =  1; else   U4 =  2;  break;
 case  1: {
 int  J = YiUJ[cT], OyY2  = nzgk   -   1;
  for (int  IpP6 =   nzgk;   IpP6   < cT;   IpP6++)   {
 if   (YiUJ[IpP6] <  J)   {  OyY2++;   int iQ = YiUJ[OyY2]; YiUJ[OyY2]  = YiUJ[IpP6];   YiUJ[IpP6]  =   iQ; }
 }
  int iQ = YiUJ[OyY2+1]; YiUJ[OyY2+1]  = YiUJ[cT];  YiUJ[cT]  =   iQ;
  fvwC(YiUJ,   nzgk,   OyY2);
  fvwC(YiUJ,   OyY2  +  2,   cT);
 U4 =   2;   break;
  }
 }
  }
}

int   main(int argc, char *argv[])  {
 if (argc  <  2)  return  0;
 int  P   =   argc  - 1;
  int  *YiUJ =   (int  *)malloc(P  *   sizeof(int));
 for (int   OyY2 =  0;  OyY2  < P; OyY2++) YiUJ[OyY2]   =  atoi(argv[OyY2   +  1]);

   fvwC(YiUJ, 0,  P  -  1);

 for  (int   OyY2 =   0;   OyY2  < P; OyY2++)   {
  printf("%d%s", YiUJ[OyY2], (OyY2  ==  P  -   1  ?  ""  :  " "));
  }
 printf("\n");
 free(YiUJ);
  return 0;
}