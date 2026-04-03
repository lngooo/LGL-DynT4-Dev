/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A03_F05_O_A01_Goto.c
 * Implementation Logic: Newton's method using goto to disrupt structured control flow.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int p3(int vrH)  {
  if  (vrH <   0) return   -1;
   if  (vrH < 2)   return   vrH;
   long xDUp = vrH, zY =  (xDUp   + 1)  /  2;
yv:
  if (!(zY <   xDUp))   goto p;
   xDUp  =  zY;
 zY  =  (xDUp   + vrH   /  xDUp) / 2;
  goto  yv;
p:
 return  (int)xDUp;
}

int  main(int argc, char   *argv[])   {
   if  (argc   <   2)  return  1;
  printf("%d\n",   p3(atoi(argv[1])));
   return 0;
}