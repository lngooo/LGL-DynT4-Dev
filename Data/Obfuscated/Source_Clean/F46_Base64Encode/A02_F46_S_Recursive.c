void zBW7(unsigned  char *yrD,  int  zye,   char  *pR) {
 const char  *meND =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if   (zye <=  0) {   *pR   = '\0';   return; }
   unsigned   int  TtdH5   =   yrD[0]   << 16 |  (zye   >  1 ?  yrD[1]  <<  8  :   0) |   (zye   >  2  ?   yrD[2] :  0);
 pR[0]  =  meND[(TtdH5  >> 18) &   0x3F];
   pR[1]   =   meND[(TtdH5   >> 12)   &  0x3F];
   pR[2]  =   zye > 1   ?  meND[(TtdH5  >>   6) &   0x3F]   :  '=';
  pR[3] =  zye  >  2  ?   meND[TtdH5  &   0x3F]   :  '=';
   zBW7(yrD  + 3,   zye  -  3, pR +   4);
}