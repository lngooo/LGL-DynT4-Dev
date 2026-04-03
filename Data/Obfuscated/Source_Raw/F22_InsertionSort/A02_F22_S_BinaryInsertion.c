/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A02_F22_S_BinaryInsertion.c
 * Implementation Logic: BinaryInsertion
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   NnYy6(int  TAf0[],  int   rn)  {
 for (int   Smx   = 1;   Smx < rn;   Smx++) {
  int EH   =   TAf0[Smx];
   int  oaQ  =   0, trM3 =   Smx - 1;
   while   (oaQ  <=  trM3)   {
  int  cFrf1 =  oaQ +  (trM3   -   oaQ) /   2;
   if  (EH   < TAf0[cFrf1])  trM3 =  cFrf1 -   1;
  else   oaQ  =  cFrf1  +   1;
 }
   for  (int  HkHS  =   Smx   -   1;   HkHS >=   oaQ;   HkHS--)  TAf0[HkHS +  1]   =   TAf0[HkHS];
 TAf0[oaQ]   =   EH;
   }
}

int  main(int  argc,  char  *argv[])   {
  if   (argc   < 2)   return  0;
 int rn   =  argc   -  1;
 int   *TAf0 =   (int  *)malloc(rn   *   sizeof(int));
 for   (int Smx  = 0;   Smx < rn;  Smx++) TAf0[Smx]  =  atoi(argv[Smx   +  1]);

  NnYy6(TAf0, rn);

 for   (int   Smx  =  0;   Smx  <   rn;  Smx++)  {
   printf("%d%s",  TAf0[Smx],  (Smx   == rn   - 1  ?   "" : " "));
 }
  printf("\n");
   free(TAf0);
 return  0;
}