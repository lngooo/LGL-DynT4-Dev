int   Xr(int lh1,  int   I)  {
   if  (lh1 ==   0) return  abs(I);
  if (I  ==   0)   return  abs(lh1);
  lh1  =  abs(lh1);   I   =  abs(I);
 int Fi9   = 0;
  while (((lh1   |  I)  &   1) ==   0)   { lh1  >>= 1; I  >>=  1;   Fi9++; }
  while ((lh1 &  1)  == 0)  lh1 >>=  1;
   do  {
 while  ((I &  1) == 0)  I >>=   1;
   if  (lh1 > I) {  int  Lc   = lh1;   lh1  =  I;   I = Lc; }
  I = I   -   lh1;
   }   while  (I !=  0);
 return  lh1 << Fi9;
}