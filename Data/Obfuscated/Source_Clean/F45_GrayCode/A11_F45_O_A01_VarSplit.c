unsigned  int  LazD(unsigned int dOn) {
 unsigned  int  DcMm   = dOn &   0xFFFF0000;
   unsigned  int vFfA  =  dOn  & 0x0000FFFF;
 unsigned int  C  =  (DcMm |   vFfA)   >>  1;
  return  (DcMm  |   vFfA)  ^  C;
}