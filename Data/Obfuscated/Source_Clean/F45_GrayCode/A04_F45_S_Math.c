unsigned  int DW(unsigned  int AQC) {
 unsigned   int XXl   =   AQC   >>   1;
  return   (AQC   |   XXl)   -  (AQC &   XXl);
}