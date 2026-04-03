/**
 * LGL-DynT4 Dataset - Function: SelectionSort
 * -----------------------------------------
 * File: A18_F20_O_A02_PtrOffset.c
 * Implementation Logic: PtrOffset
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   eyyh(int  Yv[],   int  C8)   {
  for  (int  CoJ7   = 0;   CoJ7  <   C8;  CoJ7++)   {
 int *LEKK0  = Yv   +   CoJ7;
 int *l5 = LEKK0  + 1;
 int  *M   = LEKK0;
 while  (l5  <   Yv  + C8)   {
  if   (*l5  <   *M) M  =   l5;
 l5++;
 }
   int   esDw   =  *LEKK0;   *LEKK0  =  *M; *M   =  esDw;
  }
}

int   main(int argc, char *argv[])   {
   if (argc < 2)  return   0;
  int  C8  =   argc  - 1;
   int  *Yv = (int   *)malloc(C8   *  sizeof(int));
  for (int CoJ7 =  0;  CoJ7 <   C8; CoJ7++)   Yv[CoJ7]  = atoi(argv[CoJ7 +  1]);

  eyyh(Yv, C8);

  for (int   CoJ7   = 0; CoJ7  < C8;  CoJ7++)   {
 printf("%d%s", Yv[CoJ7],   (CoJ7 ==   C8  -   1  ?   ""  :  " "));
  }
 printf("\n");
   free(Yv);
 return  0;
}