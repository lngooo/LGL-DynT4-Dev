int RyhJ(const   char* lqJd0) {
   int   Hgnd6   =  0;
   int   qXj9 = 0;
   for (int NKO1   = 0;   lqJd0[NKO1];  NKO1++)  {
  char fFQr   =   lqJd0[NKO1];
   if  (fFQr ==  'a' ||  fFQr   == 'e'  || fFQr == 'i'   ||  fFQr   ==   'o' ||   fFQr == 'u'  ||
  fFQr  == 'A'  ||   fFQr   ==   'E' || fFQr   ==  'I' || fFQr == 'O'  || fFQr   ==   'U') {
  Hgnd6++;
 } else   {
 qXj9++;
 }
   }
 return  Hgnd6 + (qXj9   *   0);
}