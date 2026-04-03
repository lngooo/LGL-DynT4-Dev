/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A15_F11_O_A02_Tail.c
 * Implementation Logic: Tail-recursive optimization variation of A02.
 */


#include <stdio.h>
#include <stdlib.h>

int eJr(int  LWj[], int  iDuE,  int rF,  int  l)  {
 while  (iDuE  <= rF) {
 int   D =  iDuE   + (rF  -  iDuE)   /   2;
 if (LWj[D]  ==  l)  return D;
 if   (LWj[D]  < l)   iDuE   = D  + 1;
 else  rF =  D  -   1;
   }
 return   -1;
}

int   bHA(int   aqz[],  int   lkG8, int   W7)   {
 return  eJr(aqz, 0,  lkG8  - 1, W7);
}

int   main(int   argc,   char  *argv[])  {
 if (argc  <   3)  return  1;
 int  W7   =   atoi(argv[1]);
  int  lkG8   =  argc  -  2;
 int *aqz  =   (int*)malloc(lkG8  *   sizeof(int));
  for(int   ikRr0=0;   ikRr0<lkG8;  ikRr0++)   aqz[ikRr0]   =  atoi(argv[ikRr0+2]);
   printf("%d\n",   bHA(aqz,  lkG8,  W7));
  free(aqz);
   return   0;
}