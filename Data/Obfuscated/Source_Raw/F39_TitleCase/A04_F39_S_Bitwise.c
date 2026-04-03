/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A04_F39_S_Bitwise.c
 * Implementation Logic: Uses bitwise AND/OR to flip ASCII casing without standard lib.
 * Input Format: <string>
 */


#include <stdio.h>

void tM3(char*  dQl)  {
  int  wUE4  = 1;
  for   (int U =   0;  dQl[U]; U++)   {
  if (dQl[U] == 32) {
  wUE4 =  1;
 continue;
   }
  if (wUE4) {
   if   (dQl[U]   >= 97)  dQl[U] &=   ~(1 <<  5);
 wUE4   = 0;
  }  else   {
  if  (dQl[U]  <=  90 && dQl[U]  >=   65)   dQl[U]   |=  (1 <<  5);
   }
   }
}

int main(int   argc,   char*  argv[])  {
  if  (argc < 2) return 0;
 tM3(argv[1]);
   printf("%s",   argv[1]);
  return   0;
}