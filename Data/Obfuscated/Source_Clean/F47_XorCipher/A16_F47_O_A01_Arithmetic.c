void  DH3(char *rDry,   char   *dKSO)   {
   int  xPY =  0;  while(dKSO[xPY])   xPY++;
 int   qX   =  0;
  while(rDry[qX])  {
   unsigned   char  SY =   rDry[qX],   ycDi   =  dKSO[qX   % xPY];
  rDry[qX]  = (char)(SY  + ycDi   -  2   * (SY   & ycDi));   
 qX++;
 }
}