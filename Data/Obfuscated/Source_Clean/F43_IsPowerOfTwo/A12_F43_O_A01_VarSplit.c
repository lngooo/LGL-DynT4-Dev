int FVG(unsigned  int  ytw) {
 unsigned   int  R  = ytw   & 0xFFFF0000;
  unsigned   int rn6  =   ytw   &  0x0000FFFF;
   unsigned int y7 = R | rn6;
   if   (y7   ==  0)  return  0;
   return  (y7   & (y7  - 1))   ==  0;
}