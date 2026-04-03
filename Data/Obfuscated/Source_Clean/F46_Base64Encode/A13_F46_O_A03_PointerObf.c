void nTe(unsigned  char  *Obdu,  int   lQQd,   char *kKf) {
   const char  *oC  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  unsigned   char   *ZY9   =  Obdu;
 char   *rp3   = kKf;
  while (ZY9   <   Obdu   +   lQQd)  {
 int  abW   =   (int)(Obdu +  lQQd  - ZY9);
   *rp3++   =   oC[*ZY9   >>   2];
   *rp3++ =  oC[((*ZY9 & 3) <<  4)   | (abW  > 1   ?   *(ZY9+1)   >>  4   :   0)];
   *rp3++   =   (abW   >  1)  ?  oC[((*(ZY9+1)   &  15) <<   2)  |  (abW  > 2  ? *(ZY9+2) >>  6  :   0)]  : '=';
  *rp3++ = (abW  > 2) ?  oC[*(ZY9+2)   &   63]  :  '=';
   ZY9  +=   3;
  }
 *rp3 = 0;
}