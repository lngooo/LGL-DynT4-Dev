/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A01_F38_S_TwoPass.c
 * Implementation Logic: 双指针翻转法：先翻转整串，再翻转每个单词
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ozE2(char *C0)  {
  int   d  =   strlen(C0);
   for(int  PWx7=0;   PWx7<d/2; PWx7++)   {  char YZ2=C0[PWx7];   C0[PWx7]=C0[d-1-PWx7];   C0[d-1-PWx7]=YZ2; }
 int  X =   0;
   for(int  PWx7=0;  PWx7<=d;   PWx7++)  {
 if(C0[PWx7] == ' '   ||   C0[PWx7]   == '\0')   {
  for(int  Ws5=0;  Ws5<(PWx7-X)/2;  Ws5++)   { char   YZ2=C0[X+Ws5];   C0[X+Ws5]=C0[PWx7-1-Ws5]; C0[PWx7-1-Ws5]=YZ2; }
 X =  PWx7 +  1;
 }
   }
}

int  main(int argc, char   *argv[]) {
  if  (argc   <   2)   return  0;
   char  kJ[512] =  "";
  for(int   PWx7   = 1; PWx7  < argc; PWx7++)  {
 strcat(kJ, argv[PWx7]);
  if(PWx7  <  argc   - 1)  strcat(kJ,   " ");
  }
   ozE2(kJ);
   printf("%s\n",   kJ);
 return   0;
}
