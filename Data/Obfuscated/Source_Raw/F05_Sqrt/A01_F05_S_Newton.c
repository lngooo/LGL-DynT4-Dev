/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A01_F05_S_Newton.c
 * Implementation Logic: Standard Newton-Raphson iteration for integer square root.
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int  Ttly(int  hWxu3) {
  if (hWxu3  <   0) return   -1;
   if (hWxu3   <   2) return hWxu3;
  long   Ykg  = hWxu3;
   long  o7  =  (Ykg +   1)  /   2;
 while (o7  <  Ykg)   {
 Ykg   = o7;
   o7 =  (Ykg + hWxu3  /   Ykg)   / 2;
  }
   return  (int)Ykg;
}

int  main(int   argc, char  *argv[])  {
 if (argc   < 2)   return   1;
  printf("%d\n", Ttly(atoi(argv[1])));
 return  0;
}