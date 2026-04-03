int   so(int  JLUz) {
  if (JLUz ==   2 || JLUz  ==   3)  return   1;
 if   (JLUz  < 2   ||   JLUz  %   2  ==  0 ||  JLUz  %   3  ==  0)   return 0;
 int fX   = 1;
  while ((6  *  fX   -  1) * (6   *  fX   -  1) <= JLUz)  {
 if (JLUz  %  (6  *  fX  -  1)   ==  0   ||   JLUz  % (6   * fX  +  1)   ==  0)   return   0;
  fX++;
   }
   return 1;
}