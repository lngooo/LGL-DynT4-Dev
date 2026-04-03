/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A11_F21_O_A02_Opaque.c
 * Implementation Logic: 基于 A02 插入不透明谓词 (if(1)) [cite: 19, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void   m(int   *Mv, int  pFut)   {
 int   xOlp=1;while(xOlp<pFut/3)xOlp=3*xOlp+1;while(xOlp>=1){if((int)(exp(0.0))==1){for(int QY=xOlp;QY<pFut;QY++){int ffy8=Mv[QY],S=QY;while(S>=xOlp&&Mv[S-xOlp]>ffy8){Mv[S]=Mv[S-xOlp];S-=xOlp;}Mv[S]=ffy8;}}xOlp/=3;}
}

int   main(int   argc, char *argv[])  {
 if  (argc  < 2)  return   0;
  int  pFut   =  argc   -  1;
   int *Mv = (int   *)malloc(pFut * sizeof(int));
 for (int  QY =  0; QY  < pFut;  QY++)   Mv[QY]  =  atoi(argv[QY+1]);
   m(Mv,   pFut);
  for   (int QY  =  0;   QY  < pFut;   QY++) printf("%d%c",  Mv[QY],  QY   ==   pFut   - 1 ? '\n' :  ' ');
  free(Mv);
   return  0;
}
