/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A08_F16_O_A01_CFP.c
 * Implementation Logic: CFP
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  Q(int   MS[],  int UL,  int   pY1)  {
 int eNA8 =  0;
  while  (eNA8   !=   2)   {
   switch   (eNA8)  {
 case   0: if (UL   < pY1)   eNA8 =  1;   else   eNA8  = 2; break;
   case  1:  {
 int q  = UL + (pY1  -  UL)  / 2;
 Q(MS,   UL,   q);
   Q(MS, q  +  1,  pY1);
 int *VKm   = (int*)malloc((pY1-UL+1)*4);
 int x=UL,   vDo6=q+1,   fIAB3=0;
  while(x<=q   &&  vDo6<=pY1)  VKm[fIAB3++]  = (MS[x]<=MS[vDo6]) ?  MS[x++] :  MS[vDo6++];
 while(x<=q)  VKm[fIAB3++]  = MS[x++]; while(vDo6<=pY1)  VKm[fIAB3++]  =  MS[vDo6++];
   for(int  n=0;  n<fIAB3;   n++)  MS[UL+n]   =  VKm[n];
   free(VKm);   eNA8   =   2;   break;
  }
   }
  }
}

int   main(int argc,  char *argv[])   {
 if  (argc < 2) return  0;
  int oyXh =  argc  - 1;
   int  *MS  =   (int  *)malloc(oyXh   * sizeof(int));
 for (int  x   = 0; x <  oyXh; x++)   MS[x]   =  atoi(argv[x + 1]);

  Q(MS,   0, oyXh - 1);

  for  (int  x =  0;  x   <  oyXh;  x++)  {
 printf("%d%s", MS[x], (x   ==   oyXh   -  1   ?   ""   :  " "));
   }
  printf("\n");
  free(MS);
 return 0;
}