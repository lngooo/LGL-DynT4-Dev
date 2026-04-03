/**
 * LGL-DynT4 Dataset - Function: NewtonRoot
 * -----------------------------------------
 * File: A21_F09_O_A12_Struct.c
 * Implementation Logic: Newton method with data encapsulated in structs.
 */


#include <stdio.h>
#include <stdlib.h>

struct  Uz {  long   WWC;  long   XIdm7;  };

int  Pc7(int  S5)  {
   if   (S5 <   0) return -1;
 struct  Uz   NHoh   =   {   (long)S5, (long)S5   };
  if   (S5 >=   2) {
 long  Xww0  = (NHoh.WWC  +   NHoh.XIdm7 /   NHoh.WWC)  >>   1;
   while   (Xww0 <   NHoh.WWC)  {
   NHoh.WWC   = Xww0;
 Xww0 =  (NHoh.WWC + NHoh.XIdm7   /  NHoh.WWC) >>   1;
 }
  }
 return   (int)NHoh.WWC;
}

int   main(int   argc, char *argv[])  {
 if   (argc <  2) return 1;
   printf("%d\n",  Pc7(atoi(argv[1])));
 return  0;
}