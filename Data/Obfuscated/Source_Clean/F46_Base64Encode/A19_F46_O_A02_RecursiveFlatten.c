void   XE(unsigned  char *lF, int   y,   char  *Ox7)  {
 const   char *kX1   =   "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  if   (y   <=  0) { *Ox7 = 0;  return;  }
   int   FJdD   =   0, SrsF   =   0;
   do  {
   unsigned  int   Rp   =   lF[FJdD]  << 16  |  (FJdD+1   <   y   ?   lF[FJdD+1]  <<   8 : 0)  |  (FJdD+2  <  y ?  lF[FJdD+2]  :  0);
 Ox7[SrsF++]   =   kX1[(Rp >>  18)   &  63];
 Ox7[SrsF++] =  kX1[(Rp >>   12)   &   63];
  Ox7[SrsF++]  =  (FJdD+1  <  y)  ?   kX1[(Rp >>   6)   &   63]  : '=';
   Ox7[SrsF++] =   (FJdD+2  <   y)   ?   kX1[Rp & 63]   : '=';
 FJdD   +=   3;
  }   while(FJdD   <  y);
 Ox7[SrsF] =   0;
}