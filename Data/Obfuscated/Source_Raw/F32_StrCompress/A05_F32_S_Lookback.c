/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A05_F32_S_Lookback.c
* Implementation Logic: Identifies transitions by looking back at the previous character.
*/


#include <stdio.h>
#include <string.h>

void  J3(char*   QP) {
 int  XlM  =  strlen(QP);
   if  (XlM   == 0) return;
 int XMWV   =   1;
  char   C  =  QP[0];
 for   (int hyY  =  1;  hyY   <=   XlM;  hyY++) {
 if   (QP[hyY]  == C)  {
 XMWV++;
 }  else   {
 printf("%c%d", C,  XMWV);
  C   =  QP[hyY];
 XMWV = 1;
   }
 }
   printf("\n");
}

int main(int argc,  char*  argv[]) {
   if (argc < 2) return   0;
   J3(argv[1]);
   return 0;
}