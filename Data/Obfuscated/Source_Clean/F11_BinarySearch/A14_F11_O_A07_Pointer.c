int  X0(int  PXJ8[],  int YFJA2,   int TrM)   {
   int   *H7  =  PXJ8;
   int   mGC  =  0;
   int YNbI2   =   1  <<   (31  -   __builtin_clz(YFJA2));
 while (YNbI2  >   0)   {
 int  Uu   = mGC   |   YNbI2;
  if   (Uu   < YFJA2  &&   *(H7 +   Uu)   <= TrM)  mGC =   Uu;
  YNbI2 >>=   1;
  }
  return  (*(H7   +   mGC)  ==   TrM)  ?   mGC : -1;
}