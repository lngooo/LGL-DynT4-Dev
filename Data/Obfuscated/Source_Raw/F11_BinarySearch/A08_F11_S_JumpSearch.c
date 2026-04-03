/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A08_F11_S_JumpSearch.c
 * Implementation Logic: Jump search using sqrt(n) blocks, then linear scan.
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   mc(int m[],   int  Ben,  int cz)   {
  int  cj = sqrt(Ben);
 int Pl   =   0;
 while   (m[(cj < Ben  ? cj   :   Ben)   - 1] <   cz) {
  Pl =  cj;
   cj   +=  sqrt(Ben);
 if   (Pl   >=   Ben) return   -1;
 }
  while  (m[Pl]  <   cz) {
   Pl++;
   if  (Pl  ==  (cj < Ben   ? cj   :   Ben))   return   -1;
  }
  if  (m[Pl]   == cz) return Pl;
  return   -1;
}

int   main(int argc,  char  *argv[])  {
 if   (argc  <  3) return 1;
   int cz =   atoi(argv[1]);
  int Ben  =  argc   -  2;
 int  *m   =   (int*)malloc(Ben  *   sizeof(int));
 for(int  Gd=0;  Gd<Ben;   Gd++) m[Gd] =  atoi(argv[Gd+2]);
 printf("%d\n",  mc(m,   Ben, cz));
  free(m);
  return   0;
}