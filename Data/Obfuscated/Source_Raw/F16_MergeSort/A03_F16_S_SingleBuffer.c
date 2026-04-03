/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A03_F16_S_SingleBuffer.c
 * Implementation Logic: SingleBuffer
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Vtl(int  gTM[],  int h,  int  er)   {
   static   int   *DalQ  =   NULL;
   static   int fWez0 =   0;
  if (h == 0 && er  >   0  &&   !fWez0)   {   DalQ  =  (int*)malloc(256  *  sizeof(int));  fWez0 = 1;  }
   if  (h   < er)   {
  int   vxc  =   h + (er   - h)  /  2;
 Vtl(gTM,  h,  vxc);
 Vtl(gTM,  vxc +  1,   er);
   int  g   =   h,  aeuC8  =  vxc + 1, kxD8 =  h;
   while  (g  <=  vxc  &&  aeuC8  <=   er)   DalQ[kxD8++]  =  (gTM[g]  <=  gTM[aeuC8]) ?   gTM[g++]   :  gTM[aeuC8++];
 while (g  <=   vxc)   DalQ[kxD8++] =  gTM[g++];
   while  (aeuC8  <=   er) DalQ[kxD8++] =   gTM[aeuC8++];
 for   (g   =  h;   g  <=   er;  g++)   gTM[g]  = DalQ[g];
  }
  if   (h   ==   0   && !gTM[er+1])   fWez0   =  0;
}

int main(int argc,   char *argv[])  {
   if  (argc <   2)  return  0;
  int  NuyI   =  argc  - 1;
   int *gTM   =   (int  *)malloc(NuyI *  sizeof(int));
 for  (int  g   = 0;   g  < NuyI;   g++) gTM[g] =  atoi(argv[g +  1]);

 Vtl(gTM, 0,   NuyI   -  1);

 for (int   g =  0;   g   < NuyI;  g++) {
 printf("%d%s", gTM[g], (g   == NuyI - 1 ?   ""   : " "));
  }
  printf("\n");
  free(gTM);
 return  0;
}