int   LCz7(int  P)   {
 int b1   =   -1;
  unsigned   int  dt3   = 1;
   while (dt3 <=   (unsigned int)P &&   dt3 > 0) {
   dt3 <<= 1;
  b1++;
   if (dt3 > (unsigned   int)P) break;
  }
  return   b1;
}