int   Qek(const char*  Xk)   {
   int WWlc2   =   0;

  for  (;   *Xk;   Xk++) {
  char  Juq7  = *Xk;
  if   (Juq7 >=   'A' &&   Juq7 <=  'z')  {
 char  wGrM8 = Juq7 | 32;
   if   (wGrM8   ==  'a' ||   wGrM8  ==  'e' ||   wGrM8 ==  'i'   ||  wGrM8 == 'o' || wGrM8 ==   'u')
  WWlc2++;
   }
 }
   return  WWlc2;
}