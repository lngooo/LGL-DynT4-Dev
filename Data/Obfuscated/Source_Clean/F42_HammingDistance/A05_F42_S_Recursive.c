int Xh(unsigned  int   foWY0,  unsigned  int   X)   {
   if   (foWY0 ==   0   && X  ==  0) return  0;
 return   ((foWY0   & 1) !=  (X & 1)) +   Xh(foWY0  >>  1, X >>   1);
}