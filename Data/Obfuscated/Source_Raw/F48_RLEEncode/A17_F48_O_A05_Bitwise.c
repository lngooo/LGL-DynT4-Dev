/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A17_F48_O_A05_Bitwise.c
 * Implementation Logic: Bitwise
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void   ilSV1(const  char  *uoai,   char  *HOn)   {
 int  dfiP =  0,  n   = 0;
 while   (uoai[dfiP] !=   0) {
  int MV9  =  1;
 while (uoai[dfiP +  MV9]  !=  0   &&   !(uoai[dfiP+MV9]  ^ uoai[dfiP])) MV9++;
   HOn[n++]  =  uoai[dfiP];
 n  += sprintf(HOn  + n, "%d",   MV9);
   dfiP  +=   MV9;
 }
}

int main(int  argc,   char   *argv[])  {
  if   (argc   <  2) return  0;
 char   *nb2  =  argv[1];
   char   i[256]   = {0};
   ilSV1(nb2, i);
   printf("%s\n",   i);
  return  0;
}