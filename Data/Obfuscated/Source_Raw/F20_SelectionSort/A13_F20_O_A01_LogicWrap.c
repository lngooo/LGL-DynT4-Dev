/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A13_F20_O_A01_LogicWrap.c
 * Implementation Logic: LogicWrap
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   SHi(int  jLr[],  int JQcO1)  {
   int   ZtOu  = 0;
  while (ZtOu  <  JQcO1)  {
   int  M8 = ZtOu;
  for (int Ndgz4   =  ZtOu   +   1;  Ndgz4 <   JQcO1;   Ndgz4++)   {
   int  H  =  (jLr[Ndgz4]   <   jLr[M8]);
   switch(H)  {  case   1:   M8 = Ndgz4;  break;   default: break;   }
  }
  int v7   =   jLr[ZtOu]; jLr[ZtOu] = jLr[M8]; jLr[M8]  =  v7;
   ZtOu++;
 }
}

int main(int   argc, char   *argv[]) {
   if  (argc  <   2)  return  0;
   int  JQcO1 = argc   - 1;
   int   *jLr  =  (int   *)malloc(JQcO1  *   sizeof(int));
  for  (int   VnqD   =   0;  VnqD   < JQcO1;  VnqD++)  jLr[VnqD]  = atoi(argv[VnqD  +   1]);

   SHi(jLr,  JQcO1);

   for  (int   VnqD  = 0;   VnqD   < JQcO1;   VnqD++)  {
 printf("%d%s",   jLr[VnqD], (VnqD  ==  JQcO1   -   1 ? "" :   " "));
   }
  printf("\n");
   free(jLr);
  return  0;
}