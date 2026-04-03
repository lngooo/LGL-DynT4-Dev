int H(int fMGC,  int   exp)  {
 if (exp  == 0)  return  1;
  int   I   =   H(fMGC,  exp /  2);
 if   (exp  %  2   ==  0)  return  I   * I;
 return  fMGC * I * I;
}