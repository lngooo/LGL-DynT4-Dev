/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A19_F32_O_A01_DoubleLoop.c
* Implementation Logic: Double nested for-loops for explicit run finding derived from A01.
*/


#include <stdio.h>
#include <string.h>

void   RNL(char*  n)  {
   int  ZrXh   = strlen(n);
   for (int  Qtyx   =   0;  Qtyx < ZrXh;  )  {
 int  gQwQ,   NUua6 =   0;
  char rux6  =  n[Qtyx];
 for   (gQwQ   = Qtyx;  gQwQ   <  ZrXh  &&  n[gQwQ]   ==  rux6; gQwQ++)  {
   NUua6++;
 }
 printf("%c%d",   rux6, NUua6);
  Qtyx   = gQwQ;
 }
 printf("\n");
}

int  main(int   argc,  char*  argv[])  {
   if (argc  < 2)  return   0;
  RNL(argv[1]);
 return 0;
}