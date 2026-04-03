/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A09_F38_O_A05_Opaque.c
 * Implementation Logic: 虚假控制流：在 A05 中插入不透明谓词
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void  J(char *Vy)   {
  char  *tF   =  Vy;  while(*tF)  tF++;
  if((int)floor(sqrt(16.0))   ==   4) {
  char  *MVUH   = Vy, *vw  =   tF   -  1;
   while(MVUH  <  vw)  {   char r = *MVUH; *MVUH++ =   *vw;   *vw--  =  r;  }
  }
  char *dc =   Vy;
   for(char  *yjqO   =  Vy;   yjqO   <=  tF;   yjqO++)  {
 if(yjqO   !=   NULL)   {
  if(*yjqO  == ' ' || *yjqO  ==   '\0') {
 char   *p   = dc,  *A =   yjqO  - 1;
 while(p  <  A) {  char   r  =   *p;  *p++  =  *A; *A--   = r;  }
   dc   = yjqO +   1;
  }
  }
   }
}

int   main(int argc, char *argv[])  {
  if  (argc <  2) return   0;
   char  w[512]   = "";
 for(int  vaz = 1;  vaz < argc;  vaz++)  {
  strcat(w,   argv[vaz]);
 if(vaz  < argc -  1)  strcat(w,   " ");
 }
   J(w);
  printf("%s\n", w);
   return   0;
}
