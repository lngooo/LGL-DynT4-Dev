/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A18_F21_O_A04_DoublePtr.c
 * Implementation Logic: 基于 A04 引入二级指针访问 [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void egN(int *w,   int  q)   {
  for(int uIPk=q/2;uIPk>0;uIPk/=2){for(int s8=0;s8<uIPk;s8++){for(int   nk=s8+uIPk;nk<q;nk+=uIPk){int  vq=w[nk],xGNV2=nk-uIPk;while(xGNV2>=s8){int  **UnK=&w;if((*UnK)[xGNV2]>vq){w[xGNV2+uIPk]=(*UnK)[xGNV2];xGNV2-=uIPk;}else  break;}w[xGNV2+uIPk]=vq;}}}
}

int  main(int argc,   char   *argv[]) {
 if  (argc   < 2)   return  0;
   int  q =   argc   -   1;
 int   *w  = (int  *)malloc(q   * sizeof(int));
   for   (int   nk =   0;  nk  <  q;   nk++) w[nk]  = atoi(argv[nk+1]);
  egN(w,  q);
 for (int nk =  0;   nk < q;   nk++)   printf("%d%c",  w[nk],  nk  == q  - 1  ? '\n'   :  ' ');
   free(w);
  return  0;
}
