/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A10_F46_O_A05_VarSplit.c
 * Implementation Logic: VarSplit
 * Input Format: <string>
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  TaZ(unsigned char   *IEJ5,   int r,   char *U5)   {
  const char *DOB   =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  int  n   =   0,  Y  =  0;
  while  (n   +   Y  <   r) {
 int FPZE   =   n  + Y;
  unsigned   char  qp   = IEJ5[FPZE], L9 =   (FPZE+1  <   r)?IEJ5[FPZE+1]:0,   RS2   = (FPZE+2  <   r)?IEJ5[FPZE+2]:0;
  U5[((FPZE/3)*4)]   =   DOB[qp   >>  2];
 U5[((FPZE/3)*4)+1]  =  DOB[((qp   & 3) <<  4)   | (L9   >>   4)];
   U5[((FPZE/3)*4)+2] = (FPZE+1   <  r) ?   DOB[((L9 & 15)   <<   2)   |   (RS2  >>   6)]   : '=';
   U5[((FPZE/3)*4)+3]  =  (FPZE+2  <   r) ?  DOB[RS2 &  63]   :   '=';
 n   +=   3;
  }
 U5[((r   + 2) / 3)  *   4]  =  0;
}

int   main(int  argc,   char  *argv[])   {
  if  (argc   < 2)  return  1;
 unsigned   char  *IEJ5 =  (unsigned  char *)argv[1];
  int   r  =  0;
 while  (IEJ5[r])  r++;
   char U5[400] = {0};
   TaZ(IEJ5, r, U5);
  printf("%s\n",   U5);
 return 0;
}