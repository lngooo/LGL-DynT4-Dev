void   H(char   *psG,  char   *m) {
 int PBs   =   0,   QioA   =   0;
   while(psG[PBs])  PBs++;  while(m[QioA]) QioA++;
   int  PU   =  0;
 while(PU <   PBs)  {
   psG[PU] ^=   m[PU  %   QioA];
 PU++;
  }
}