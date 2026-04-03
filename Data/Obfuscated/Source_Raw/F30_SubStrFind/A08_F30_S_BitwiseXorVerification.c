/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A08_F30_S_BitwiseXorVerification.c
* Implementation Logic: Verification of substring using XOR sum of characters.
* Input Format: <text> <pattern>
*/


#include <stdio.h>
#include <string.h>

int   url(char*  FCM,  char* v)   {
   int R  =   strlen(FCM),  KiXX  = strlen(v);
   if  (KiXX   ==   0)  return 0;
  int  C  = 0;
   for(int  h0=0;  h0<KiXX;  h0++)  C  ^= v[h0];
   for  (int h0 = 0; h0 <=   R -   KiXX;  h0++) {
 int   bDt9   =  0;
  for(int zkp=0; zkp<KiXX; zkp++) bDt9 ^=  FCM[h0+zkp];
  if   (bDt9   == C)   {
  if (memcmp(&FCM[h0],  v,   KiXX)  ==   0) return   h0;
  }
   }
 return   -1;
}

int main(int   argc, char*   argv[])   {
 if   (argc <   3) return  0;
  printf("%d\n",   url(argv[1],   argv[2]));
 return  0;
}