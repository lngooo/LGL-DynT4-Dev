/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A17_F22_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void NIOf(int  tD[],   int AO6)   {
  int zJGJ   = 1;
 while   (1)   {
   if   (zJGJ   >= AO6)  break;
   int   Z  =  tD[zJGJ],   JSt =   zJGJ   -   1;
 while (1)  {
 if (JSt  <  0 || tD[JSt] <= Z)  break;
   tD[JSt+1]   =  tD[JSt];
   JSt--;
   }
   tD[JSt+1]  =   Z;
  zJGJ++;
 }
}

int   main(int argc,  char  *argv[])   {
  if   (argc < 2)  return 0;
   int   AO6  =   argc   - 1;
  int *tD  = (int   *)malloc(AO6 *   sizeof(int));
 for (int   zJGJ   =  0; zJGJ  < AO6; zJGJ++) tD[zJGJ]  =   atoi(argv[zJGJ  +  1]);

   NIOf(tD,   AO6);

 for   (int   zJGJ =   0; zJGJ   <  AO6;   zJGJ++) {
 printf("%d%s",   tD[zJGJ],   (zJGJ  ==   AO6  - 1  ?  "" :   " "));
   }
  printf("\n");
 free(tD);
  return  0;
}