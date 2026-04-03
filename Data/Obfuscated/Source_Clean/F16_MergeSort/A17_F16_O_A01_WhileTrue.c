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