void  jFhl(unsigned   char   *dp,  int   YRXM7,   char *O)  {
  const   char *KkV  = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  int   t  =  0,  k1 =  0;
  while   (t   < YRXM7)   {
 int   os2   = dp[t++];
 int j  =  (t   < YRXM7)   ?  dp[t++]  : -1;
   int foRI  = (t   <  YRXM7) ?  dp[t++]  :  -1;
  O[k1++]  =  KkV[os2  >> 2];
   O[k1++] = KkV[((os2  &  3)   <<  4) |   (j  ==  -1  ?   0  :   j   >>  4)];
  O[k1++] = (j  ==  -1)   ?  '=' :  KkV[((j &  15)  <<   2)   |  (foRI  == -1   ?  0   :   foRI >>   6)];
  O[k1++]   =   (foRI   ==   -1)   ? '='   : KkV[foRI   & 63];
 }
   O[k1]  = '\0';
}