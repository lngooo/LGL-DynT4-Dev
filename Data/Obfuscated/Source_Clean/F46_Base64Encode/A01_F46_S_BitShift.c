void   rc(unsigned   char  *NiBy, int T,   char   *lMVx) {
   const char c[]   = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  int  m, Yob6;
  for (m   =  0, Yob6 =   0;  m <   T;   m +=   3,   Yob6  += 4)  {
  lMVx[Yob6]  = c[NiBy[m] >>   2];
  lMVx[Yob6+1]  = c[((NiBy[m]  &  0x03)   <<   4)   |   ((m+1  < T)   ?  (NiBy[m+1] >>  4)  : 0)];
   lMVx[Yob6+2]   = (m+1   <  T) ? c[((NiBy[m+1] & 0x0F) <<   2)  | ((m+2 < T)   ?  (NiBy[m+2]  >>   6)   :  0)]   :   '=';
   lMVx[Yob6+3]  = (m+2   <  T)  ?  c[NiBy[m+2]  &  0x3F] :   '=';
 }
   lMVx[Yob6]  = '\0';
}