/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A13_F38_O_A04_Bitwise.c
 * Implementation Logic: 位运算混淆：在 A04 循环中使用异或替代比较
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void  RVFp2(char *Q)  {
   int   Kw   =   strlen(Q);  char   XERA[256]; memset(XERA,   0, 256);
 int Yjsg   = Kw;
 for(int   Lq  =   Kw -  1;   Lq   >=  -1;   Lq--) {
  int   bJxo7   = (Lq >=   0) ?  (Q[Lq]   ^ ' ')   :   -1;
 if(bJxo7  ==   0  ||  Lq == -1) {
 strncat(XERA, Q +   Lq +  1, Yjsg -  Lq  -  1);
 if(Lq  !=   -1)   {   char   BZb[2]   = {32, 0}; strcat(XERA,   BZb);   }
   Yjsg = Lq;
  }
 }
 strcpy(Q,  XERA);
}

int   main(int argc,   char   *argv[])   {
 if   (argc  < 2)   return   0;
  char  qsj[512]  =   "";
   for(int  Lq =  1;   Lq  <  argc; Lq++) {
 strcat(qsj,   argv[Lq]);
   if(Lq <   argc   -   1)  strcat(qsj,   " ");
  }
  RVFp2(qsj);
   printf("%s\n",  qsj);
 return  0;
}
