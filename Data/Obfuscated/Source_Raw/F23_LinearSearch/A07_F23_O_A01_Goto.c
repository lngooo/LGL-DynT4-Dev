/**
 * LGL-DynT4 Dataset - Function: LinearSearch
 * -----------------------------------------
 * File: A07_F23_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <target> <val1> <val2> ...
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int   l(int   Ry7[],   int   QGEe0,  int   uvM5)   {
 int   iNj3  =  0;
Yqau1:
  if (iNj3   >=  QGEe0)   goto  Hr;
   if   (Ry7[iNj3]   == uvM5) goto  KCM;
   iNj3++;
   goto   Yqau1;
KCM:
  return iNj3;
Hr:
  return   -1;
}

int  main(int argc,  char  *argv[]) {
   if  (argc < 3)  return 1;
  int  uvM5 =   atoi(argv[1]);
  int   GZ  =  argc -   2;
  int  Ry7[100];
 for  (int   iNj3   =   0;   iNj3  <   GZ;   iNj3++) {
   Ry7[iNj3]  =   atoi(argv[iNj3  + 2]);
 }
   int   US5   =  l(Ry7,   GZ, uvM5);
   printf("%d\n",  US5);
  return   0;
}