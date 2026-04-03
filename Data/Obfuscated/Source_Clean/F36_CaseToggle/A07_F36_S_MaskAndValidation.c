void   yt(char*  vyS)   {
  for   (int  KyFR   = 0; vyS[KyFR]; KyFR++)  {
 unsigned   char L   =  (unsigned char)vyS[KyFR];
   unsigned   char  whWS4  = L   | 32;
 if (whWS4 >=  'a'   && whWS4  <=   'z')  {
   vyS[KyFR]  =   (char)(L   ^ 32);
   }
   }
}