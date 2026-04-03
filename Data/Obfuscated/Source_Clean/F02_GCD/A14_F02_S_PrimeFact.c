int   Hs8(int BLla4, int JCBQ5) {
 BLla4   = abs(BLla4);  JCBQ5   =   abs(JCBQ5);
   if (BLla4 ==   0 ||  JCBQ5  == 0)   return BLla4 | JCBQ5;
   int  oW =   1,   b  =   2;
   while   (b  <= BLla4  && b   <=   JCBQ5) {
  if  (BLla4  % b   ==   0   && JCBQ5   %   b  ==   0)  {
 oW  *=   b;   BLla4  /=   b;  JCBQ5   /=  b;
  } else  b++;
  }
 return   oW;
}