/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A04_F48_S_BufferStep.c
 * Implementation Logic: BufferStep
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void  GrYq6(const   char *si, char  *LwJn4)   {
  int  Dvmz1 = strlen(si);
 if  (Dvmz1   ==  0)  return;
  char  N4  = si[0];
  int  TKj =  0,  Y =  0;
   for   (int  m7 = 0;   m7 <= Dvmz1;   m7++) {
   if  (si[m7]   ==   N4  && m7   < Dvmz1)   {
  TKj++;
 }  else   {
  Y   +=  sprintf(LwJn4   +   Y,   "%c%d",  N4,  TKj);
   if  (m7 < Dvmz1)   { N4  =  si[m7];   TKj = 1; }
   }
   }
}

int main(int argc, char  *argv[])  {
   if (argc  <   2)   return   0;
   char   *bF   =  argv[1];
   char   sb[256] = {0};
  GrYq6(bF, sb);
 printf("%s\n",   sb);
  return  0;
}