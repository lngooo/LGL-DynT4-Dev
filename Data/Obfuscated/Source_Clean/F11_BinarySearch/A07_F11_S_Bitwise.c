int cJ(int W[],  int  PU8, int   Wo)  {
 int   UeWF4 = 0;
 int   WNC1   = 31  -   __builtin_clz(PU8);
  for   (int  I2 =   WNC1; I2 >=  0;  I2--) {
 int  MM3 =   UeWF4 |   (1  << I2);
 if (MM3 < PU8 &&  W[MM3] <=  Wo) UeWF4   = MM3;
  }
   return   (W[UeWF4]   ==   Wo)   ?   UeWF4   :   -1;
}