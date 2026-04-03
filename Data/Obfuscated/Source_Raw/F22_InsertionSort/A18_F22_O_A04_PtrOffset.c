/**
 * LGL-DynT4 Dataset - Function: InsertionSort
 * -----------------------------------------
 * File: A18_F22_O_A04_PtrOffset.c
 * Implementation Logic: PtrOffset
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   dVdj5(int   Ef[],  int   f) {
   for   (int Amn = 1; Amn <   f; Amn++) {
   int MWhJ =  *(Ef  +   Amn);
  int  gQ  =   Amn  -   1;
  while (gQ >= 0   &&   *(Ef   + gQ)  >   MWhJ)  {
 *(Ef  + gQ  +  1)  = *(Ef +   gQ);
 gQ--;
   }
  *(Ef  +   gQ   +   1) =  MWhJ;
 }
}

int   main(int   argc,   char   *argv[])   {
 if  (argc   <   2)  return 0;
   int   f  = argc   -   1;
 int  *Ef   = (int  *)malloc(f *  sizeof(int));
  for  (int Amn = 0;   Amn   <  f; Amn++)  Ef[Amn]  = atoi(argv[Amn +  1]);

   dVdj5(Ef, f);

  for   (int  Amn   =   0;   Amn   < f;  Amn++)  {
  printf("%d%s", Ef[Amn],   (Amn  ==   f  -   1  ? ""   :  " "));
  }
 printf("\n");
   free(Ef);
  return 0;
}