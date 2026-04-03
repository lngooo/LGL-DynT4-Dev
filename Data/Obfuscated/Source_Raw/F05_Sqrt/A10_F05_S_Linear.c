/**
 * LGL-DynT4 Dataset - Function: Sqrt
 * -----------------------------------------
 * File: A10_F05_S_Linear.c
 * Implementation Logic: Linear scan (brute force) starting from 0 (Seed 5).
 * Input Format: <n>
 */


#include <stdio.h>
#include <stdlib.h>

int   ipY1(int  oc)  {
 if   (oc   <  0)  return -1;
  long PGXL   =  0;
   while  ((PGXL  +   1)   *  (PGXL +  1)  <=  oc)   {
   PGXL++;
  }
   return   (int)PGXL;
}

int main(int argc,   char   *argv[])   {
 if   (argc  < 2)   return   1;
  printf("%d\n",  ipY1(atoi(argv[1])));
   return   0;
}