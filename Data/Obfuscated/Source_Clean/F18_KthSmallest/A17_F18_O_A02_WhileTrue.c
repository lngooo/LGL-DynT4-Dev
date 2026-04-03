int JG(int l[],   int M, int   b6, int LLvW)  {
   while   (1) {
  if   (M   >  b6)  break;
   int mvNx  = l[b6], pGd8  =  M;
 for  (int F  = M;  F  <  b6;   F++) if  (l[F]   <= mvNx)   {  int  kOL0=l[pGd8];   l[pGd8]=l[F];  l[F]=kOL0;  pGd8++; }
 int  kOL0=l[pGd8];  l[pGd8]=l[b6];   l[b6]=kOL0;
 if   (pGd8  ==   LLvW -  1)   return   l[pGd8];
  if (pGd8 > LLvW   -  1) b6  =   pGd8  -  1; else  M =   pGd8 + 1;
 }
   return  -1;
}