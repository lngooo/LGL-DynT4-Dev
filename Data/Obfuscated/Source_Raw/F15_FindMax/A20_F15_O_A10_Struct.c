/**
 * LGL-DynT4 Dataset - Function: FindMax
 * -----------------------------------------
 * File: A20_F15_O_A10_Struct.c
 * Implementation Logic: Max using temporary comparison struct.
 */


#include <stdio.h>
#include <stdlib.h>

struct   e  {  int   HiVh;  int df;  int  pI6;  };

int  CDBn(int  X[], int  o) {
   struct e  VC5 =   {X[0],  0,  X[0]};
  for(int   wm=1;  wm<o;   wm++)   {
 VC5.df  = X[wm];
 VC5.pI6   =  (VC5.df   > VC5.pI6)  ?   VC5.df  :   VC5.pI6;
   }
 return VC5.pI6;
}

int   main(int   argc, char   *argv[])   {
  if  (argc  <   2)   return   0;
 int   o  =   argc - 1;
 int  *X  =   (int*)malloc(o   *   sizeof(int));
 for   (int wm =   0;  wm  <  o;  wm++)   X[wm] = atoi(argv[wm+1]);
 printf("%d\n",  CDBn(X, o));
  free(X);
  return 0;
}