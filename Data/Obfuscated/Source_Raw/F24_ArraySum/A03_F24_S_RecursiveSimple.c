/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A03_F24_S_RecursiveSimple.c
 * Implementation Logic: RecursiveSimple
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   bUQ(int  gP9[], int  d)   {
  if   (d <=   0) return   0;
   return gP9[d-1]  + bUQ(gP9, d-1);
}

int  main(int  argc,  char   *argv[]) {
   if   (argc < 2)  return 0;
 int   d =  argc  - 1;
   int   *gP9  = (int  *)malloc(d *  sizeof(int));
 for  (int   pah  = 0;   pah < d;  pah++)   gP9[pah]  =   atoi(argv[pah  + 1]);

  int NJ   =   bUQ(gP9, d);
   printf("%d\n",   NJ);

   free(gP9);
 return  0;
}