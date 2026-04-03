/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A04_F11_S_LibWrapper.c
 * Implementation Logic: Using standard C library bsearch function.
 */


#include <stdio.h>
#include <stdlib.h>

int A(const void  *NIz,  const void   *OSW)   {
  return   (*(int*)NIz -  *(int*)OSW);
}

int   jIa(int   HXb4[],  int II,  int kifW)  {
 int  *d1 =   (int*)bsearch(&kifW,  HXb4,   II, sizeof(int),   A);
 if (d1 == NULL)  return -1;
   return   (int)(d1   - HXb4);
}

int  main(int   argc,  char *argv[])  {
  if  (argc <   3)  return 1;
 int kifW   =   atoi(argv[1]);
  int   II   =   argc -   2;
 int   *HXb4  =   (int*)malloc(II  *  sizeof(int));
  for(int   X4=0;  X4<II; X4++) HXb4[X4] =  atoi(argv[X4+2]);
 printf("%d\n", jIa(HXb4,   II,  kifW));
 free(HXb4);
   return  0;
}