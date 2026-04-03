int f(unsigned int   Um6, unsigned  int   j)   {
   unsigned   int   SZuQ   =   Um6 ^  j;
  int  W = 0;
  while   (SZuQ) {
   SZuQ  &=   (SZuQ - 1);
  W++;
   }
   return   W;
}