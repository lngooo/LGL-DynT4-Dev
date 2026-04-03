void  ERU(unsigned   char   *DwOf, int T,   char *e)   {
  const  char   *fYH  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 for(int  ZhG=0;  ZhG<T; ZhG+=3) {
   unsigned  int  q9   =   (DwOf[ZhG] <<  16)  ^  ((ZhG+1<T?DwOf[ZhG+1]:0)  <<  8)   ^ (ZhG+2<T?DwOf[ZhG+2]:0);
 e[(ZhG/3)*4]  = fYH[(q9 >> 18) &   63];
 e[(ZhG/3)*4+1]  =   fYH[(q9   >>  12)  & 63];
   e[(ZhG/3)*4+2]   = (ZhG+1   <  T)   ?   fYH[(q9  >> 6) & 63]  :  '=';
   e[(ZhG/3)*4+3]  =  (ZhG+2 <   T)  ?   fYH[q9  &   63] :  '=';
   }
   e[((T+2)/3)*4]  =   0;
}