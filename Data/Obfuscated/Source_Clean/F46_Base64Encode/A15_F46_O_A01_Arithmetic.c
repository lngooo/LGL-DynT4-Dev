void  Vfci(unsigned char *IKe,  int  Kw0, char  *KRe) {
 const   char *iK1  =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 int  LC   = 0;
  while(LC   <  Kw0)  {
 int   lU4 = IKe[LC] *  65536  + (LC+1<Kw0?IKe[LC+1]:0)  *  256 +   (LC+2<Kw0?IKe[LC+2]:0);
   KRe[(LC/3)*4]   = iK1[(lU4   /   262144)   %   64];
  KRe[(LC/3)*4+1]  = iK1[(lU4  / 4096)  %   64];
  KRe[(LC/3)*4+2] =   (LC+1   <  Kw0)  ?  iK1[(lU4   / 64) % 64] :  '=';
  KRe[(LC/3)*4+3]   =  (LC+2   <   Kw0)   ?  iK1[lU4   %  64]   :  '=';
   LC += 3;
  }
  KRe[((Kw0+2)/3)*4]   = 0;
}