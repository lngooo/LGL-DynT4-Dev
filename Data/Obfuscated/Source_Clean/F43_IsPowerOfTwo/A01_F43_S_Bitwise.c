int  dH1(unsigned  int Fi1) {
  if (Fi1  ==  0)  return 0;
 return   (Fi1 & (Fi1  - 1)) ==  0;
}