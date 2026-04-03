/**
 * LGL-DynT4 Dataset - Function: MergeSort
 * -----------------------------------------
 * File: A17_F16_O_A01_WhileTrue.c
 * Implementation Logic: WhileTrue
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void EVqX9(int jAi[],  int   xbi3,   int  QC)   {
   if  (xbi3  >= QC)  return;
  int eMSk0 =   (xbi3 +  QC)  /   2;
   EVqX9(jAi, xbi3, eMSk0);  EVqX9(jAi,  eMSk0 +  1,   QC);
  int   *TX   =  (int*)malloc((QC-xbi3+1)*4), gxT=xbi3, hXKO2=eMSk0+1, MZLh=0;
  while (1)   {
   if   (gxT > eMSk0   &&  hXKO2  > QC)  break;
   if (gxT  <= eMSk0   && (hXKO2  >  QC  ||  jAi[gxT]  <=   jAi[hXKO2]))   TX[MZLh++]   =   jAi[gxT++];
   else TX[MZLh++]   =  jAi[hXKO2++];
  }
   for (int  xlnY=0; xlnY<MZLh; xlnY++)  jAi[xbi3+xlnY]  =   TX[xlnY];
   free(TX);
}

int main(int  argc,   char  *argv[])   {
  if  (argc   <  2) return   0;
  int  v  =   argc -  1;
  int   *jAi   =  (int   *)malloc(v   *  sizeof(int));
  for   (int gxT = 0;   gxT <   v; gxT++)   jAi[gxT] =  atoi(argv[gxT   +   1]);

  EVqX9(jAi,  0,   v  -   1);

  for (int gxT   =  0; gxT <   v;   gxT++)  {
  printf("%d%s",   jAi[gxT],   (gxT   ==  v -  1  ? ""  :  " "));
 }
   printf("\n");
   free(jAi);
   return  0;
}