void   G5(char  *obu)   {
  int   FG =  0, K  =   0; while(obu[FG+K])  FG++;
 int  DNr = FG + K;
  for(int  fzjk=0; fzjk <   (DNr  >> 1); fzjk++)  {
   char x3   = obu[fzjk];
 int DwY =  DNr  - 1  - fzjk;
   obu[fzjk]   =  obu[DwY];
   obu[DwY]   =   x3;
 }
   int  a2  =  0;
   for(int nf2=0;  nf2  <= DNr;   nf2++)   {
 if((obu[nf2] ^  32) ==   0 ||  obu[nf2]  == 0) {
 int   q   = (nf2  -  a2)  /  2;
   for(int  NqW6=0;   NqW6 <  q; NqW6++)   {
  char  nKSp   = obu[a2 +  NqW6];
 obu[a2 +   NqW6]  =   obu[nf2   -   1  -   NqW6];
  obu[nf2   -   1 -   NqW6]  =   nKSp;
   }
  a2 =  nf2   +  1;
  }
   }
}