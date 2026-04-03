/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A20_F24_O_A02_IncrConfusion.c
 * Implementation Logic: IncrConfusion
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   uiA(int Bdt1[], int   ekJ6)   {
 int  Q  = 0;
   int   i  =   -1;
 while (++i  <   ekJ6)   {
  Q   +=   *(Bdt1  +   i);
 }
 return Q;
}

int   main(int   argc,  char   *argv[])   {
   if  (argc  < 2)   return  0;
  int  ekJ6  = argc  - 1;
   int  *Bdt1 =   (int   *)malloc(ekJ6  * sizeof(int));
   for  (int  i  =  0;  i  <   ekJ6;   i++) Bdt1[i]  = atoi(argv[i   + 1]);

   int  jpYE2  = uiA(Bdt1,  ekJ6);
 printf("%d\n", jpYE2);

   free(Bdt1);
 return   0;
}