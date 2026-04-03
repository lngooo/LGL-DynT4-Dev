/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A18_F02_S_ExtendedEuc.c
 * Implementation Logic: Extended Euclidean Algorithm (Seed 9).
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int  Sav(int Di,   int nn2)   {
   int opOs   =   0, Ekfp   =  1,   RtS =  1,  QSYh   = 0;
  Di   =  abs(Di); nn2   =  abs(nn2);
 while  (nn2   != 0)   {
  int  yj =  Di   /  nn2;
   int  pKz   =   Di   %  nn2;
   Di =  nn2;   nn2   =   pKz;
   int qo = opOs;   opOs   =  RtS -   yj   * opOs;   RtS   =   qo;
   qo  =  Ekfp;  Ekfp = QSYh -  yj *   Ekfp;   QSYh   =   qo;
   }
   return   Di;
}

int main(int  argc,  char  *argv[])  {
   if   (argc   <   3) return  1;
 printf("%d\n",  Sav(atoi(argv[1]), atoi(argv[2])));
  return  0;
}