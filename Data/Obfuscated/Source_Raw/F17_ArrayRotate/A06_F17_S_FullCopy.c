/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A06_F17_S_FullCopy.c
 * Logic: Map source index i to target index (i-k)%n in a new array.
 */


#include <stdio.h>
#include <stdlib.h>

void   ZItA(int  h[],   int  gPXe, int hLua9) {
  if  (gPXe == 0) return;
   hLua9 =  hLua9 %  gPXe;
 int *oW  = (int*)malloc(gPXe  *   sizeof(int));
  for (int zcut   =  0;   zcut   <   gPXe;  zcut++)   {
  oW[zcut] =  h[(zcut + hLua9)  % gPXe];
  }
 for (int   zcut  =   0; zcut  < gPXe; zcut++) h[zcut]   = oW[zcut];
   free(oW);
}

int  main(int  argc,  char *argv[])  {
   if   (argc <  3)   return 0;
 int hLua9 =   atoi(argv[1]);
   int   gPXe = argc   - 2;
 int   *h  =  (int*)malloc(gPXe   * sizeof(int));
   for(int zcut=0;  zcut<gPXe;   zcut++)   h[zcut] =  atoi(argv[zcut+2]);
 ZItA(h,   gPXe,  hLua9);
   for(int zcut=0;  zcut<gPXe;   zcut++) printf("%d ",   h[zcut]);
   printf("\n");
  free(h);
  return   0;
}