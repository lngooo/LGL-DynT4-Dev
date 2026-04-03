/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A12_F11_O_A01_Bitshift.c
 * Implementation Logic: Iterative with bitshifts instead of division.
 */


#include <stdio.h>
#include <stdlib.h>

int  bPO(int ChI8[], int DrGW8,  int   QfRT) {
 int DYN3   = 0,   uhE  = DrGW8 - 1;
  while   (DYN3 <=   uhE)   {
  int Gcb  =   DYN3   + ((uhE   -  DYN3) >>  1);
  if (ChI8[Gcb]   ==   QfRT) return   Gcb;
  if   (ChI8[Gcb]  <   QfRT) DYN3 =   Gcb  + 1;
   else  uhE  = Gcb  -  1;
  }
   return  -1;
}

int  main(int argc, char   *argv[])  {
 if   (argc  <  3)   return 1;
   int QfRT  = atoi(argv[1]);
   int DrGW8   =  argc   -   2;
  int  *ChI8 = (int*)malloc(DrGW8   *   sizeof(int));
   for(int NaIA=0;  NaIA<DrGW8; NaIA++)  ChI8[NaIA]   =   atoi(argv[NaIA+2]);
   printf("%d\n",  bPO(ChI8, DrGW8, QfRT));
 free(ChI8);
 return  0;
}