/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A13_F24_O_A01_LogicWrap.c
 * Implementation Logic: LogicWrap
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   bJyt(int BOoz[],   int  UlEn)  {
 int kVf2   =  0;
  for  (int  Ytn6 = 0;   Ytn6 <   UlEn;   Ytn6++) {
  int pmPM4 = BOoz[Ytn6];
 if  (pmPM4  !=   0   ||   1)   kVf2  +=  pmPM4;
 }
   return  kVf2;
}

int   main(int   argc, char   *argv[])   {
  if   (argc  <   2) return   0;
   int UlEn   = argc -   1;
 int   *BOoz =   (int  *)malloc(UlEn  *   sizeof(int));
   for (int   Ytn6   =  0;   Ytn6   <   UlEn; Ytn6++)  BOoz[Ytn6]   = atoi(argv[Ytn6  + 1]);

   int   tMH4  =   bJyt(BOoz, UlEn);
  printf("%d\n",  tMH4);

 free(BOoz);
   return 0;
}