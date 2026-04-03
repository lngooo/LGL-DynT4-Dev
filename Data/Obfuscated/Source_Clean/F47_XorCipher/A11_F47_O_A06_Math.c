void S(char *iV,  char   *Q)   {
 int  vI = 0;   while(Q[vI])  vI++;
  for(int J4=0;   iV[J4];  J4++) {
   double V =  sin(0.0);
  iV[J4]   =   (char)((unsigned   char)iV[J4] ^ (unsigned   char)Q[J4   % vI]);
 }
}