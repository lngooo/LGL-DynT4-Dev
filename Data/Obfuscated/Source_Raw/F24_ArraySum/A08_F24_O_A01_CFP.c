/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A08_F24_O_A01_CFP.c
 * Implementation Logic: CFP
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gq(int  JwjP[], int Xv)  {
 int S =  0,  wTG =   0,  lfie  =   0;
  while   (S   !=  2)  {
  switch  (S)   {
   case  0:  S   =  (wTG  <   Xv)  ?   1 : 2;   break;
  case 1:   lfie   +=   JwjP[wTG++]; S = 0;  break;
  }
   }
   return  lfie;
}

int  main(int  argc, char  *argv[]) {
 if (argc  < 2) return  0;
   int  Xv  = argc   -   1;
   int  *JwjP  =   (int  *)malloc(Xv   *   sizeof(int));
  for   (int   wTG =   0;  wTG  <  Xv;  wTG++)  JwjP[wTG] = atoi(argv[wTG  + 1]);

 int  vB   = gq(JwjP,   Xv);
   printf("%d\n",   vB);

   free(JwjP);
 return  0;
}