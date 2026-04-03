/**
 * LGL-DynT4 Dataset - Function: ArraySum
 * -----------------------------------------
 * File: A19_F24_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   V(int lCJ[],  int  xfH)  {
  int GVPG   =   0,   P  =  0;
Cr:
 if  (P >= xfH) return  GVPG;
  GVPG  += lCJ[P++];
  goto  Cr;
}

int  main(int   argc,   char  *argv[])  {
  if   (argc  < 2)   return   0;
  int xfH  =  argc  -  1;
  int   *lCJ   =  (int   *)malloc(xfH   * sizeof(int));
 for   (int P  =  0; P <   xfH; P++)  lCJ[P] = atoi(argv[P  +  1]);

  int   s  =   V(lCJ,   xfH);
 printf("%d\n",   s);

   free(lCJ);
  return 0;
}