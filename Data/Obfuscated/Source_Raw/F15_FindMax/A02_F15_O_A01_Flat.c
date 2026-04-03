/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A02_F15_O_A01_Flat.c
 * Implementation Logic: Linear scan with control flow flattening.
 */


#include <stdio.h>
#include <stdlib.h>

int  uUIC(int   WwBI[],  int L)  {
  int xu =   1,   ww   =   WwBI[0],   D   =   0;
 while  (D  !=   3)   {
 switch  (D)   {
   case 0: D  =  (xu   <  L)  ?  1 :  3;  break;
   case  1:  if  (WwBI[xu] >   ww) ww   =  WwBI[xu];   D   = 2;  break;
 case 2:   xu++;  D =  0; break;
  }
  }
  return   ww;
}

int   main(int argc,   char *argv[]) {
   if  (argc  <  2) return   0;
   int  L =   argc -  1;
   int  *WwBI = (int*)malloc(L   *  sizeof(int));
 for (int   xu   = 0;  xu  <   L;   xu++)   WwBI[xu] =   atoi(argv[xu+1]);
  printf("%d\n",   uUIC(WwBI,  L));
  free(WwBI);
   return  0;
}