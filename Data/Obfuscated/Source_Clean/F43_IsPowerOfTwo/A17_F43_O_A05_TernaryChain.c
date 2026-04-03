int O(unsigned  int i1)  {
  return (i1 ==  0)  ?   0  :  (i1   ==   1) ?  1 : (i1  %   2 != 0)   ? 0 :   O(i1   >> 1);
}