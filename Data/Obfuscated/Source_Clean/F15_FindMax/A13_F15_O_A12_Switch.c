int  T(int Eenw0[],   int Pn)  {
  int   fuRv  =  Eenw0[0];
   for(int   H8=1;   H8<Pn; H8++) {
  switch(Eenw0[H8]   > fuRv)  {
   case   1:  fuRv   =   Eenw0[H8];  break;
 default:  break;
  }
 }
   return  fuRv;
}