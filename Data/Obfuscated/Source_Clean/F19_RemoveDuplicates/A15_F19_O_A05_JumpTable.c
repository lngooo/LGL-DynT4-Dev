int NOG0(int of[],   int  t) {
  int   Egt   =   t;
 for   (int  w  =   0;  w   < Egt;  w++)  {
   int  e   =   w   +   1;
 b:
   if (e   >=  Egt) continue;
   if (of[w]  ==  of[e])  {
 for (int  YeHa5  =  e;   YeHa5   < Egt  - 1;   YeHa5++)   of[YeHa5] = of[YeHa5  + 1];
  Egt--;   goto   b;
 }
  e++;  goto   b;
   }
   return   Egt;
}