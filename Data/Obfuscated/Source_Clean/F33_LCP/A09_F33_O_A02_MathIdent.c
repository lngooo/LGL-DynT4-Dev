void Bm(char  **YcxS,   int  ChCU,  char *LzeJ)   {
   if (ChCU  <= 0)   return;
   strcpy(LzeJ,  YcxS[0]);
   for (int   QGJc = 1;   QGJc   <   ChCU;   QGJc++) {
   int  RRv =   0;
   while   (LzeJ[RRv]) {
 double  qCfP  =   (double)LzeJ[RRv]   -   (double)YcxS[QGJc][RRv];
 if   ((int)floor(qCfP * qCfP) !=  0) break;
   RRv++;
 }
 LzeJ[RRv]   =  '\0';
  }
}