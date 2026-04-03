int   ZTtb(int  cv) {
  int Zg  = 0,   Wv   =  31,  xusq   =  0;
 while (Zg <=  Wv)   {
 int   mL  =   (Zg  + Wv)  / 2;
   if ((1ULL  <<   mL)   <= (unsigned  int)cv)   {
   xusq   = mL;
   Zg  =   mL + 1;
  }  else  {
 Wv   = mL  -  1;
   }
   }
   return   xusq;
}