/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A17_F24_O_A06_WhileTrue.c
 * Implementation Logic: WhileTrue
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   x0(int EFRh2[], int   UPEN)  {
 int  hDWa   =   0,   chA6  =   UPEN   -   1;
  while  (1)  {
   if   (chA6 <   0)  break;
  hDWa +=   EFRh2[chA6--];
 }
   return  hDWa;
}

int  main(int  argc,  char *argv[])   {
 if  (argc   < 2)   return  0;
  int   UPEN  =  argc   -  1;
 int  *EFRh2  =  (int *)malloc(UPEN * sizeof(int));
   for (int  chA6  = 0;   chA6   <  UPEN;  chA6++)   EFRh2[chA6]  = atoi(argv[chA6  + 1]);

 int D1   =   x0(EFRh2, UPEN);
  printf("%d\n", D1);

  free(EFRh2);
  return   0;
}