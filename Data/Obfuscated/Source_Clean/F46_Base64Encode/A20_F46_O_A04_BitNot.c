void   HcQe2(unsigned   char   *x,  int   QLN2, char *vO) {
  const   char  *z8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  for(int   leul=0;   leul<QLN2;  leul+=3) {
 int  qpy  =   x[leul];
 vO[(leul/3)*4]   = z8[(qpy   >> 2) &  63];
 int G  = (leul+1   <   QLN2)  ? x[leul+1] : -1;
 vO[(leul/3)*4+1]   =   z8[((qpy   & 3) <<   4)  |   (G  ==   -1   ? 0   : (G   >> 4))];
 int   qwW = (leul+2 <   QLN2)  ? x[leul+2] :   -1;
  if (G !=  -1)   vO[(leul/3)*4+2]  =  z8[((G   &  15)  <<   2)   |   (qwW   ==   -1  ? 0  :   (qwW   >> 6))];
   else vO[(leul/3)*4+2]  =   '=';
 if  (qwW  != -1) vO[(leul/3)*4+3]   = z8[qwW   & 63];
   else  vO[(leul/3)*4+3]   =   '=';
   }
 vO[((QLN2+2)/3)*4]   =  0;
}