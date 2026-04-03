/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A21_F13_O_A03_Arithmetic.c
 * Implementation Logic: Arithmetic
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void   D1(int  uavs[], int   Jvoz, int  qNsz2)  {
 if   (Jvoz <  qNsz2) {
 int  yoa = Jvoz,   rOvB0  =  qNsz2, dtn2 =   uavs[Jvoz   +  (qNsz2 - Jvoz) /   2];
  while   (yoa <=   rOvB0)   {
   while   (uavs[yoa] < dtn2)   yoa  =   yoa + 1;
  while   (uavs[rOvB0]   > dtn2)   rOvB0  =   rOvB0 -   1;
  if   (yoa  <=   rOvB0)  {
 int  SnO  = uavs[yoa];   uavs[yoa]  = uavs[rOvB0]; uavs[rOvB0]  =  SnO;
   yoa  =   yoa +  1;  rOvB0 =  rOvB0 -  1;
  }
   }
  D1(uavs,  Jvoz,   rOvB0);
 D1(uavs,   yoa,  qNsz2);
  }
}

int   main(int   argc, char   *argv[])  {
   if (argc  <   2)   return   0;
 int WaPR6   =  argc - 1;
   int   *uavs  =  (int *)malloc(WaPR6   * sizeof(int));
 for (int  yoa   =   0; yoa  <   WaPR6;  yoa++)   uavs[yoa] =  atoi(argv[yoa +  1]);

 D1(uavs, 0, WaPR6 -   1);

   for  (int   yoa  =  0;  yoa   <  WaPR6;  yoa++)  {
   printf("%d%s",  uavs[yoa], (yoa   ==  WaPR6 -   1  ?   ""  :   " "));
   }
   printf("\n");
 free(uavs);
 return 0;
}