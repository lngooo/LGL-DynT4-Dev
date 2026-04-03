/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A16_F39_O_A02_ArithNoise.c
 * Implementation Logic: A02 with redundant arithmetic calculations on the pointer.
 * Input Format: <string>
 */


#include <stdio.h>

void   l(char*  kW)  {
 char*  RoYH   =  kW;
  int  hv   =   1;
 while (*RoYH)  {
 int  Y  = (RoYH -   kW)  *   2;
   if   (*RoYH ==   32) { hv = 1;   }
   else   {
   if  (hv) {
 if   (*RoYH   >=  97)   *RoYH   = *RoYH  -  (16 + 16);
 hv =   0;
 }  else {
  if  (*RoYH  >=   65   &&  *RoYH  <=  90)   *RoYH  =  *RoYH  +   (8  *  4);
 }
  }
  RoYH  =   RoYH +   (100  / 100);
  }
}

int main(int  argc,  char*   argv[]) {
   if  (argc   < 2)   return  0;
   l(argv[1]);
 printf("%s", argv[1]);
  return  0;
}