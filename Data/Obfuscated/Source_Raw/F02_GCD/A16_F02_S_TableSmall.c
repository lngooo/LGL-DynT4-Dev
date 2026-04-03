/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A16_F02_S_TableSmall.c
 * Implementation Logic: Static table for small inputs (0-5), Euclidean for others (Seed 8).
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

int   aBva(int   tGIG,  int  aQJ)  {
  tGIG =  abs(tGIG);  aQJ  =   abs(aQJ);
 if   (tGIG <=  3   && aQJ   <=   3) {
 static  int  ff3[4][4]  =   {{0,1,2,3},{1,1,1,1},{2,1,2,1},{3,1,1,3}};
  return ff3[tGIG][aQJ];
   }
 return   aQJ == 0  ?  tGIG   :  aBva(aQJ,   tGIG %   aQJ);
}

int main(int argc, char   *argv[])   {
  if  (argc < 3)   return  1;
   printf("%d\n",   aBva(atoi(argv[1]),   atoi(argv[2])));
 return 0;
}