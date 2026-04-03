void  KlBM(unsigned   char   *tl, int  esm0,  char   *y)   {
  const char   *fHwe   = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
 union  { unsigned   char   gEr[3];   unsigned   int J;   } JyTy;
 int   qxkD =   0, sJ   =  0;
 while  (qxkD  <   esm0) {
 JyTy.J  =   0;
  int   aXNr7   =  0;
 for(int   SS=0; SS<3 && qxkD<esm0; SS++,   qxkD++,  aXNr7++)  JyTy.gEr[2-SS]  =  tl[qxkD];
 y[sJ++]   =  fHwe[(JyTy.J >>   18)  &  0x3F];
   y[sJ++]   =   fHwe[(JyTy.J  >>  12)   &  0x3F];
   y[sJ++] =   (aXNr7 >  1)  ? fHwe[(JyTy.J >>   6)   & 0x3F]   :  '=';
   y[sJ++]  =  (aXNr7   > 2) ?   fHwe[JyTy.J   &  0x3F]  : '=';
   }
  y[sJ]  =  '\0';
}