/**
 * LGL-DynT4 Dataset - Function: RemoveDuplicates
 * -----------------------------------------
 * File: A17_F19_O_A01_Unroll.c
 * Implementation Logic: Unroll
 * Input Format: <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int  zW(int   hy[],   int iv)   {
  int wwFV  =   0;
  for  (int   E   = 0; E < iv; E++)  {
 int   BxKN   = 0;
 int  Yp  =   0;
 for  (; Yp  <= wwFV -   2;   Yp   += 2) {
 if (hy[E]   ==  hy[Yp]   ||   hy[E] ==   hy[Yp+1]) { BxKN  =  1;  break;   }
 }
 for (;  Yp <   wwFV; Yp++) if   (hy[E] ==   hy[Yp])   BxKN   =   1;
   if   (!BxKN)  hy[wwFV++] = hy[E];
 }
  return  wwFV;
}

int   main(int argc,   char  *argv[])   {
 if  (argc  < 2)  return 0;
  int   Ok = argc   -  1;
  int hy[128];
   for  (int E =   0;  E  < Ok;  E++)  {
 hy[E] =  atoi(argv[E   + 1]);
 }
  int  iTLT   =   zW(hy,   Ok);
 for (int  E =   0;   E   < iTLT;  E++)   {
 printf("%d%s", hy[E],  (E ==  iTLT - 1 ?   ""  : " "));
 }
  printf("\n");
  return   0;
}