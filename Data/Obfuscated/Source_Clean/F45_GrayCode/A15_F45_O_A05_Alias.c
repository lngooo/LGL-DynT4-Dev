unsigned   int   B(unsigned   int  qjxX)   {
   unsigned   int Zz[3];
   Zz[0]  = qjxX;
   Zz[1] =   qjxX >>  1;
 Zz[2]   =   Zz[0] ^ Zz[1];
  unsigned  int *J =  &Zz[2];
   return  *J;
}