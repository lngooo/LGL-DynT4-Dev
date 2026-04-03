/**
 * LGL-DynT4 Dataset - Function: Abs
 * -----------------------------------------
 * File: A16_F08_S_JumpTable.c
 * Implementation Logic: Using label pointers (Seed 8).
 */


#include <stdio.h>
#include <stdlib.h>

int  knIy1(int   YD)   {
 void  *tZ[] =   {&&OwM, &&eE};
  goto *tZ[YD  <  0];
eE:
  return   -YD;
OwM:
 return   YD;
}

int  main(int  argc, char   *argv[]) {
 if   (argc < 2)  return   1;
 printf("%d\n", knIy1(atoi(argv[1])));
 return  0;
}