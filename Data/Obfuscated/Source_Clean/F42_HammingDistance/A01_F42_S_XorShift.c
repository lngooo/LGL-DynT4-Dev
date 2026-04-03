int  f(unsigned  int  sa0, unsigned int  Ecw8) {
 unsigned int  kHR5   =  sa0   ^   Ecw8;
  int   OO1  =  0;
   while   (kHR5 >   0)  {
   if (kHR5   &   1)  OO1++;
  kHR5  >>=  1;
 }
  return OO1;
}