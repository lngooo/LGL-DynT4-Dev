/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A11_F22_O_A01_Bitwise.c
 * Implementation Logic: Bitwise
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  CQUT(int SI[],  int   sTY)   {
 for   (int mp   =  1;  mp  < sTY;   mp++)  {
   int  O  =  SI[mp], lLl =   mp   - 1;
   while  (!(lLl <   0)   && (SI[lLl] > O))  {
   SI[lLl +   1]  =   SI[lLl];
  lLl = lLl  -  1;
   }
   SI[lLl +  1] = O;
 }
}

int  main(int  argc,  char   *argv[]) {
   if   (argc  < 2) return 0;
  int  sTY  =   argc   -  1;
   int   *SI =   (int  *)malloc(sTY *   sizeof(int));
  for  (int  mp   = 0;   mp <   sTY;  mp++)  SI[mp]   =   atoi(argv[mp +   1]);

   CQUT(SI,  sTY);

   for  (int   mp  = 0;   mp <   sTY;   mp++)  {
 printf("%d%s",   SI[mp], (mp   ==  sTY  -  1   ? ""   : " "));
  }
  printf("\n");
   free(SI);
   return  0;
}