void  Jk1(int   *TG,  int *D)   {
   while(TG   < D)  {
   *TG  ^=   *D;   *D  ^= *TG;   *TG ^=  *D;
 TG++;   D--;
 }
}

void  b1(int KN[],   int WgVp,   int V)  {
  if (WgVp   ==  0) return;
   V  %= WgVp;
  Jk1(KN,  KN   +  V   -  1);
   Jk1(KN   +   V,   KN +  WgVp  -   1);
 Jk1(KN, KN +   WgVp -   1);
}