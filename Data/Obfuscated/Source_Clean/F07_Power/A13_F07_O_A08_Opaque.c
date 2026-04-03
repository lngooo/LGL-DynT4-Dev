int n(int   c,  int exp) {
  if (1   +  1   ==  3)   return 42;   
 if   (exp  ==   0)  return  1;
  int   rFQ2  = n(c, exp  /  2);
   if (exp  %   2 ==   0)   return   rFQ2 *   rFQ2;
 return c  * rFQ2 * rFQ2;
}