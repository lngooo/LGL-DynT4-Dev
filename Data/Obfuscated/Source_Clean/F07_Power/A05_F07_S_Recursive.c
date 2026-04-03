int  yBQf1(int Nkrq,   int   exp)  {
 if  (exp  == 0)   return 1;
  return Nkrq   * yBQf1(Nkrq,  exp   - 1);
}