/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A05_F38_S_PointerWalk.c
 * Implementation Logic: 纯指针偏移法：不使用索引下标完成翻转
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void zYJW(char  *sgmb6)  {
   char *A3  =   sgmb6;  while(*A3)  A3++;
  char   *QNou  =   sgmb6,   *asN  =  A3  - 1;
 while(QNou <   asN)  {  char   r   =   *QNou;  *QNou++   =  *asN;  *asN-- =  r;  }
  char  *GlWj  = sgmb6;
  for(char  *K   =   sgmb6; K  <=   A3; K++) {
 if(*K   == ' '   || *K == '\0')   {
   char  *i  =   GlWj,  *F9   =  K  -  1;
 while(i  < F9)  {  char r  = *i;   *i++   =  *F9;   *F9--   = r; }
 GlWj =  K  +   1;
  }
 }
}

int  main(int  argc, char   *argv[])  {
  if  (argc  <  2)  return 0;
 char   y[512] =   "";
 for(int D   = 1;  D  < argc; D++)   {
  strcat(y,  argv[D]);
 if(D   <   argc -  1) strcat(y, " ");
  }
 zYJW(y);
   printf("%s\n", y);
   return  0;
}
