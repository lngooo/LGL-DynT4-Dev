/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A20_F02_S_LibraryWrapper.c
 * Implementation Logic: Recursive implementation mimicking standard library structure.
 * Input Format: <a> <b>
 */


#include <stdio.h>
#include <stdlib.h>

static inline int  Av6(int qm5,  int jHKH)   {
  return jHKH  ==   0   ?  qm5   :   Av6(jHKH, qm5   % jHKH);
}

int  zh(int   GTXz6,  int   vzKx9) {
   return  Av6(abs(GTXz6),   abs(vzKx9));
}

int main(int  argc, char   *argv[])   {
 if  (argc <  3)  return  1;
 printf("%d\n",  zh(atoi(argv[1]), atoi(argv[2])));
 return 0;
}