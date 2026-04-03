/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A19_F16_O_A01_JumpTable.c
 * Implementation Logic: JumpTable
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Z4(int DiB[], int  E,  int   Qig)  {
  if (E  < Qig)  {
   int  A3  =  (E +   Qig)  /  2;
  Z4(DiB,   E, A3);
  Z4(DiB,   A3   +  1, Qig);
 int *qY  =   (int*)malloc((Qig-E+1)*4), eX6=E, zZYK=A3+1,  V3=0;
 bi3:
 if   (eX6  <=   A3   &&   zZYK <= Qig)   {
   if   (DiB[eX6] <=  DiB[zZYK])   {  qY[V3++] = DiB[eX6++];   goto   bi3;  }
 else {  qY[V3++]  =  DiB[zZYK++]; goto bi3;  }
   }
   while  (eX6  <=   A3)  qY[V3++]  =   DiB[eX6++];
   while (zZYK   <= Qig) qY[V3++] =   DiB[zZYK++];
  for(int G=0; G<V3;  G++) DiB[E+G]   =   qY[G];
  free(qY);
   }
}

int main(int argc,   char  *argv[]) {
  if   (argc <   2)  return 0;
 int pqTf =  argc - 1;
  int  *DiB   =  (int  *)malloc(pqTf  *   sizeof(int));
   for   (int   eX6   = 0;   eX6   < pqTf; eX6++)  DiB[eX6]  =   atoi(argv[eX6   + 1]);

   Z4(DiB,  0, pqTf -   1);

  for   (int   eX6 =   0;  eX6   <  pqTf;   eX6++)  {
  printf("%d%s",  DiB[eX6], (eX6 ==   pqTf -   1  ? "" :  " "));
   }
 printf("\n");
 free(DiB);
  return  0;
}