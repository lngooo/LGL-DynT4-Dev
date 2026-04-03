long  long   ip1(int   OyU8,  int   jUtx7) {
  if  (OyU8 >  jUtx7)   return 1;
   if   (OyU8   ==   jUtx7)   return   OyU8;
 int lnd  = OyU8 + (jUtx7 - OyU8) /  2;
 return   ip1(OyU8,  lnd) *   ip1(lnd +   1,  jUtx7);
}

long  long   e(int YECR) {
  if   (YECR  <   0)  return  0;
   if  (YECR ==   0)   return   1;
   return  ip1(1, YECR);
}