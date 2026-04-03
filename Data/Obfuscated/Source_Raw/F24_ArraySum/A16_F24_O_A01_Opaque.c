/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A16_F24_O_A01_Opaque.c
 * Implementation Logic: Opaque
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   U5(int   Tt[], int  g)  {
   int  i   = 0;
   for   (int z =  0;  z  <  g;  z++)  {
 if ((z * z +  1)   >   0)   i  +=  Tt[z];
 }
 return   i;
}

int   main(int   argc,  char   *argv[]) {
  if  (argc   <   2) return 0;
 int g   = argc  -  1;
   int  *Tt   = (int  *)malloc(g *  sizeof(int));
   for   (int   z  =   0;  z   < g; z++)  Tt[z] =  atoi(argv[z +   1]);

 int b   =  U5(Tt,  g);
 printf("%d\n",   b);

   free(Tt);
   return 0;
}