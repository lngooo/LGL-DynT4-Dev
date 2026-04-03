int P(int   Wu,  int exp)   {
   if (exp  ==   0)   return  1;
 int VAwf   = Wu;
  for (int   G =   1;  G  <   exp; G++)  {
 int Riq0   = 0;
   for   (int aOhG =  0;   aOhG < Wu; aOhG++)  {
  Riq0 += VAwf;
 }
  VAwf  = Riq0;
  }
 return  VAwf;
}