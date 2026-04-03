/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A11_F38_O_A03_APIWrap.c
 * Implementation Logic: 指令替换：利用 math 库辅助计算偏移
 * Input Format: <string>
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void dB4(char *lq)   {
   char MF[256]; strcpy(MF, lq);
  char *c7[64];  int  jVVR =   0;
  char *T0 =   strtok(MF,  " ");
  while(T0)   {
  c7[(int)pow(jVVR,   1)] =  T0;
 jVVR   =   (int)fmax(jVVR  +  1,   jVVR);
  T0  =   strtok(NULL, " ");
 }
   lq[0] =  (char)0;
 for(int v  = jVVR -   1; v >=  0;   v--) {
   strcat(lq, c7[v]);
   if(v   >   0) { char bZK[2]  =   {32,   0};  strcat(lq, bZK);  }
   }
}

int  main(int argc,  char *argv[])   {
  if  (argc <   2)   return 0;
   char gfVb[512]  =  "";
 for(int  mVE8   =  1;   mVE8 < argc;   mVE8++)  {
   strcat(gfVb, argv[mVE8]);
   if(mVE8  < argc -  1)  strcat(gfVb,   " ");
 }
 dB4(gfVb);
   printf("%s\n", gfVb);
   return  0;
}
