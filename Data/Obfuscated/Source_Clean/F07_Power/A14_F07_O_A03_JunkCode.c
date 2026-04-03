int Sf5(int  YTAO4, int  exp)   {
   int  ipTH1  =  1;
 int   m =  YTAO4  + exp;
 while  (exp   >  0)   {
  if (exp  %  2  == 1) {
   ipTH1  *=   YTAO4;
  m++;
 }
  YTAO4 *=  YTAO4;
 exp   /=  2;
   m   =  m   *  0;
 }
   return ipTH1   + m;
}