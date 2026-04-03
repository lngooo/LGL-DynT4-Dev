/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A18_F17_O_A04_WhileTrue.c
 * Logic: Step-by-step rotate using while(1).
 */


#include <stdio.h>
#include <stdlib.h>

void  Z(int   bS[], int   Y, int   SL) {
  if   (Y  ==  0)   return;
  SL  %=  Y;
  int   PLOF =  0;
   while(1)   {
   if(PLOF   >=  SL)   break;
   int  z7 =   bS[0], TLv  =  0;
   while(1)   {
   if(TLv  >= Y -  1) break;
 bS[TLv] =   bS[TLv+1]; TLv++;
 }
   bS[Y-1]  =  z7;  PLOF++;
   }
}

int   main(int argc, char  *argv[])  {
 if   (argc <   3)  return   0;
   int SL =  atoi(argv[1]);
 int   Y = argc   - 2;
 int   *bS  =   (int*)malloc(Y * sizeof(int));
  for(int   PLOF=0;  PLOF<Y;   PLOF++) bS[PLOF]   =   atoi(argv[PLOF+2]);
   Z(bS,  Y,  SL);
 for(int PLOF=0;  PLOF<Y;  PLOF++) printf("%d ",  bS[PLOF]);
   printf("\n");
 free(bS);
 return 0;
}