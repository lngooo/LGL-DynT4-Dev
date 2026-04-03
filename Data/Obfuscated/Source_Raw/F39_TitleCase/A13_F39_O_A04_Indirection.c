/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A13_F39_O_A04_Indirection.c
 * Implementation Logic: A04 bitwise logic wrapped in nested pointer indirection.
 * Input Format: <string>
 */


#include <stdio.h>

void  olpE(char*  x)   {
   char**  sBS4  =   &x;
 int  D   =   1;
 for (int  UzS =   0; (*sBS4)[UzS]; UzS++)  {
  char*   wB =   &((*sBS4)[UzS]);
   if (*wB ==   32)   {  D   =   1; continue;  }
  if   (D)  { if (*wB  >= 97)   *wB  &= 0xDF;   D  =   0;   }
   else  {   if   (*wB   <= 90 &&   *wB  >=  65)  *wB  |=   0x20;   }
  }
}

int main(int   argc,  char*   argv[])   {
 if  (argc <   2)  return  0;
  olpE(argv[1]);
 printf("%s", argv[1]);
  return 0;
}