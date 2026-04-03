/**
 * LGL-DynT4 Dataset - Function: QuickSort
 * -----------------------------------------
 * File: A12_F13_O_A03_LogicWrap.c
 * Implementation Logic: LogicWrap
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  SH(int  eEi2[], int afj, int  iTpi)  {
   if (afj >=   iTpi) return;
   int THe =   afj, mo9   = iTpi, EO  = eEi2[(afj+iTpi)/2];
   for   (; THe <= mo9;  )  {
 for (;   eEi2[THe] <  EO; )   THe++;
 for  (; eEi2[mo9]   > EO;  )  mo9--;
   if (THe  <=  mo9)  {  int uRxg   =   eEi2[THe];  eEi2[THe] =  eEi2[mo9];  eEi2[mo9] =  uRxg;  THe++; mo9--;   }
   }
   if  (afj < mo9)   SH(eEi2,  afj, mo9);
  if (THe <  iTpi)  SH(eEi2, THe,  iTpi);
}

int  main(int   argc, char *argv[])   {
 if (argc <  2) return 0;
   int   VUR9  =  argc   - 1;
  int  *eEi2 = (int   *)malloc(VUR9 *  sizeof(int));
  for  (int  THe =   0; THe  < VUR9;  THe++)  eEi2[THe]   =  atoi(argv[THe   +  1]);

  SH(eEi2,  0, VUR9  -   1);

 for  (int   THe  = 0;   THe <  VUR9;  THe++) {
  printf("%d%s",  eEi2[THe],  (THe ==   VUR9   -  1 ? ""  :   " "));
   }
   printf("\n");
 free(eEi2);
 return  0;
}