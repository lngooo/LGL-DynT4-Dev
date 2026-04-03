/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A15_F21_O_A02_MathWrap.c
 * Implementation Logic: 基于 A02 利用 math.h 函数包装步长 [cite: 16, 28]
 * Input Format: <int1> <int2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void X(int   *aa,   int H) {
  int  ei=1;while(ei<H/3)ei=(int)(pow(3.0,1.0)*ei+1);while(ei>=1){for(int d=ei;d<H;d++){int dMT=aa[d],kbt=d;while(kbt>=ei&&aa[kbt-ei]>dMT){aa[kbt]=aa[kbt-ei];kbt-=ei;}aa[kbt]=dMT;}ei/=(int)sqrt(9.0);}
}

int main(int  argc,  char   *argv[])  {
  if  (argc < 2)  return 0;
  int H  =  argc   - 1;
  int  *aa   =   (int   *)malloc(H * sizeof(int));
  for (int   d = 0; d  < H;   d++) aa[d]   =   atoi(argv[d+1]);
  X(aa,  H);
   for   (int   d =   0; d   < H;  d++) printf("%d%c",   aa[d],  d  ==  H  -   1   ?  '\n'   :  ' ');
   free(aa);
   return  0;
}
