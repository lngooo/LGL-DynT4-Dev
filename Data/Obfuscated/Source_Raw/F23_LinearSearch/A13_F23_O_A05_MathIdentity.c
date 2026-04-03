/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A13_F23_O_A05_MathIdentity.c
 * Implementation Logic: MathIdentity
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   QTj(int qDRC5[],   int  K,   int   Zgc5) {
 int  *NZZS   =   qDRC5;
 for  (int  IbSu   =   0;   IbSu  <   K; IbSu++)  {
 double   EfNQ8   = (double)*(NZZS  +  IbSu) - (double)Zgc5;
 if ((int)floor(EfNQ8   * EfNQ8)  == 0)   return IbSu;
 }
   return  -1;
}

int  main(int   argc,   char  *argv[])   {
 if  (argc  < 3)   return  1;
   int  Zgc5 =   atoi(argv[1]);
  int   OCt   =  argc - 2;
  int  qDRC5[100];
   for   (int   IbSu   =  0;   IbSu   < OCt; IbSu++)   {
   qDRC5[IbSu]   =  atoi(argv[IbSu   +   2]);
  }
 int EsY   =   QTj(qDRC5, OCt,   Zgc5);
   printf("%d\n",   EsY);
   return   0;
}