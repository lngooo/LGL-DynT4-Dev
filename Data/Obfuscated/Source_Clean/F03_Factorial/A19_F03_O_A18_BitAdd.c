long   long   EXKJ(long   long   Tva6, long   long cc2)  {
  while (cc2)   {
 long long Jhd   =   Tva6 &  cc2;
 Tva6  =  Tva6   ^  cc2;
 cc2 =   Jhd  << 1;
  }
  return   Tva6;
}

long long Nb(int G)  {
   if (G   <   0)   return  0;
  long   long   MD4  = 1;
   for  (int   W = 2;   W <=   G; W++)  {
   long   long  YcM7 =  0;
 for (int   VK  =  0;  VK  < W;   VK++)   YcM7  =   EXKJ(YcM7,   MD4);
 MD4 =   YcM7;
  }
  return MD4;
}