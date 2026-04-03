/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A03_F38_S_StackSim.c
 * Implementation Logic: 数组模拟栈：利用单词指针数组逆序重组
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void  lQA(char   *Ck)   {
  char  *Qxq3[128]; int  te8 = 0;
  char  fB5[256];  strcpy(fB5, Ck);
 char  *I  =  strtok(fB5, " ");
  while(I)  { Qxq3[te8++] =  I;   I =   strtok(NULL,  " ");  }
  Ck[0]   =  '\0';
 for(int   dcD=te8-1;   dcD>=0;   dcD--) {
  strcat(Ck,  Qxq3[dcD]);
  if(dcD   > 0)  strcat(Ck,  " ");
  }
}

int   main(int  argc,   char   *argv[]) {
   if (argc  < 2)   return   0;
   char   QFjP[512]  =  "";
  for(int dcD   = 1;   dcD  < argc; dcD++)  {
  strcat(QFjP,   argv[dcD]);
   if(dcD   < argc -  1) strcat(QFjP,   " ");
 }
 lQA(QFjP);
 printf("%s\n", QFjP);
 return  0;
}
