int  h1(int  Txv4, int exp)  {
  if  (exp  ==   0)   return 1;
   if  (Txv4  ==   0)   return  0;
 double   Re   = exp *   log((double)Txv4);
   return   (int)(expf(Re)   + 0.5);
}