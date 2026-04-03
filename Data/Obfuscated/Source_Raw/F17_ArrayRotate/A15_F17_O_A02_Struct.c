/**
 * LGL-DynT4 Dataset - Function: ArrayRotate
 * -----------------------------------------
 * File: A15_F17_O_A02_Struct.c
 * Logic: Juggling algorithm with state wrapped in a struct.
 */


#include <stdio.h>
#include <stdlib.h>

struct  RD  {  int IH;  int  nD0; int yl; };

int  cuL6(int X8, int   VKZY)   {  return  VKZY  ==  0   ? X8  : cuL6(VKZY, X8 %  VKZY); }

void   cn(int   JVqO[], int   IH,   int  nD0)   {
   if (IH  ==  0)  return;
   struct RD Qxu =  {IH,   nD0  % IH,   cuL6(nD0 %   IH,  IH)};
 for (int U   =   0;   U  <  Qxu.yl;  U++)   {
 int VH  =   JVqO[U],   nnFl   =   U;
 while  (1) {
 int ib   = (nnFl +  Qxu.nD0) %   Qxu.IH;
   if   (ib ==   U)  break;
 JVqO[nnFl] =  JVqO[ib];
 nnFl =   ib;
 }
   JVqO[nnFl]  =  VH;
  }
}

int   main(int  argc,   char  *argv[])  {
   if   (argc <  3) return  0;
 int   nD0 =  atoi(argv[1]);
   int   IH  = argc -  2;
 int  *JVqO   = (int*)malloc(IH *  sizeof(int));
 for(int   U=0;  U<IH;  U++)   JVqO[U]   =   atoi(argv[U+2]);
  cn(JVqO, IH, nD0);
 for(int  U=0; U<IH; U++)   printf("%d ", JVqO[U]);
 printf("\n");
 free(JVqO);
  return   0;
}