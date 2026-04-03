/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A10_F21_O_A01_Flatten.c
 * Implementation Logic: 基于 A01 的 Switch-Case 控制流平坦化 [cite: 18, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void   oCwA(int *FaNA1,   int gKq9)  {
  int FJP4=0,xx,rhD9,nRi,x;while(FJP4!=4){switch(FJP4){case 0:xx=gKq9/2;FJP4=1;break;case  1:if(xx>0){rhD9=xx;FJP4=2;}else   FJP4=4;break;case 2:if(rhD9<gKq9){x=FaNA1[rhD9];nRi=rhD9;FJP4=3;}else{xx/=2;FJP4=1;}break;case   3:while(nRi>=xx&&FaNA1[nRi-xx]>x){FaNA1[nRi]=FaNA1[nRi-xx];nRi-=xx;}FaNA1[nRi]=x;rhD9++;FJP4=2;break;}}
}

int main(int argc,  char  *argv[])   {
   if   (argc   < 2)   return 0;
   int   gKq9   =  argc   -  1;
  int  *FaNA1 =   (int  *)malloc(gKq9  * sizeof(int));
 for (int   rhD9   =   0;   rhD9 <   gKq9;   rhD9++) FaNA1[rhD9]  =  atoi(argv[rhD9+1]);
  oCwA(FaNA1,   gKq9);
  for   (int  rhD9   =  0; rhD9 <  gKq9;  rhD9++) printf("%d%c",   FaNA1[rhD9],  rhD9 ==  gKq9  -   1  ?   '\n'   :  ' ');
 free(FaNA1);
  return 0;
}
