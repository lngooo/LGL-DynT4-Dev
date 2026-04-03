int D(const char* lmjf) {
  int   G   =  0, Rp5   =   0, XC  =   5;
   while (XC  !=   0) {
   if   (XC   ==   5)   {
   if  (lmjf[Rp5])   XC   =   3; else  XC   =   0;
 }  else   if  (XC ==  3)  {
  switch  (lmjf[Rp5])  {
  case  'a': case 'e':  case 'i': case 'o':  case 'u':
  case  'A':  case 'E':  case   'I':  case 'O':  case 'U':
   G++;   break;
 }
  Rp5++;   XC   =   5;
 }
   }
 return   G;
}