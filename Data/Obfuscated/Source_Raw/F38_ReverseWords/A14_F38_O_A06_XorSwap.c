/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A14_F38_O_A06_XorSwap.c
 * Implementation Logic: 算法替换：使用 XOR 交换字符实现 A06
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ykEL(char  *m) {
  int  B =   strlen(m);
  char *nVPY   =   calloc(B   + 1,   1);
  int  HMP1 =   0;
 for(int X = B  - 1;  X  >=  0;   X--)   {
   if(m[X]  == 32)   {
  int HRNX =   X   +  1;
  while(m[HRNX] != 32   &&  m[HRNX]   !=  0) nVPY[HMP1++] =   m[HRNX++];
 nVPY[HMP1++] =  32;
   }
  }
 int   t1  =  0; while(m[t1]  != 32 &&  m[t1]   != 0) nVPY[HMP1++]   = m[t1++];
   nVPY[HMP1] =   0;
 strcpy(m, nVPY); free(nVPY);
}

int main(int argc,   char *argv[]) {
  if   (argc  < 2) return   0;
  char   XWFh[512]  =  "";
 for(int  X   =  1;  X < argc;  X++)  {
   strcat(XWFh,  argv[X]);
 if(X < argc  - 1)   strcat(XWFh, " ");
  }
  ykEL(XWFh);
   printf("%s\n",  XWFh);
 return 0;
}
