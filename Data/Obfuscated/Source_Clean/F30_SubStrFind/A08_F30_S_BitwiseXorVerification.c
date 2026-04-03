int   url(char*  FCM,  char* v)   {
   int R  =   strlen(FCM),  KiXX  = strlen(v);
   if  (KiXX   ==   0)  return 0;
  int  C  = 0;
   for(int  h0=0;  h0<KiXX;  h0++)  C  ^= v[h0];
   for  (int h0 = 0; h0 <=   R -   KiXX;  h0++) {
 int   bDt9   =  0;
  for(int zkp=0; zkp<KiXX; zkp++) bDt9 ^=  FCM[h0+zkp];
  if   (bDt9   == C)   {
  if (memcmp(&FCM[h0],  v,   KiXX)  ==   0) return   h0;
  }
   }
 return   -1;
}