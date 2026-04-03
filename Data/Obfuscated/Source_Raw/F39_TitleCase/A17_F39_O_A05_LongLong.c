/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A17_F39_O_A05_LongLong.c
 * Implementation Logic: Uses long long type for indexing to change token width.
 * Input Format: <string>
 */


#include <stdio.h>

void   xRt(char*   J)   {
  for   (long long  lRr  =   0;  J[lRr];   lRr++)   {
   long  long   ND = lRr  - 1;
 int vi   =   (lRr   ==  0  || J[ND] == ' ');
   if   (vi)  {
  if (J[lRr] >= 'a'   &&  J[lRr]  <=   'z')   J[lRr]   -=  32;
 }  else   {
   if   (J[lRr] >=   'A'   &&   J[lRr]  <=  'Z')   J[lRr] +=   32;
  }
 }
}

int main(int  argc,   char*  argv[])   {
   if (argc   < 2)   return   0;
  xRt(argv[1]);
  printf("%s", argv[1]);
   return  0;
}