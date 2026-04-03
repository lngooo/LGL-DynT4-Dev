int  NQH9(unsigned int  cD,   unsigned  int  Pk)  {
 unsigned   int   Us =  cD   ^  Pk;
 int   AT = 0;
 while   (!(Us   ==  0))  {
   if (!!(Us  & 1)) {
 AT++;
  }
  Us   >>= 1;
 }
   return AT;
}