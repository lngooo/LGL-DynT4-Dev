void  OxQk3(const  char  *Lez, char   *Qg)  {
 int   rs =  0;
   for  (int   OA  = 0, dHqc  =  0;  Lez[OA];   OA  =   dHqc)   {
 while  (Lez[dHqc]  && Lez[dHqc]  ==   Lez[OA])   dHqc++;
 Qg[rs++]  = Lez[OA];
   char AFf6[12];
 sprintf(AFf6, "%d",  dHqc   -   OA);
 for(int J=0;   AFf6[J]; J++) Qg[rs++]  =   AFf6[J];
  }
  Qg[rs] =  '\0';
}