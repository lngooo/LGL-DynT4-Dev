void aVx(char *bXo,  char   *qS)  {
   char *OMS  = bXo;
 int   qf6  =   0, aDL  =  0;
  int  sGPG  =   0;  while(qS[sGPG])   sGPG++;
   while(*OMS)   {
 *OMS ^=  qS[(qf6  + aDL)  % sGPG];
   OMS++;  qf6++;
   }
}