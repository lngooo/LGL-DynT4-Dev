void UtDS5(int o[],   int   H)  {
  for  (int  cy8  = 0;   cy8   < H;   cy8++)  {
 int  i  = cy8;
  for (int   tZa =   cy8  + 1;  tZa <  H;  tZa++) {
 double q  =   (double)o[tZa] -   (double)o[i];
  if (q  <  -0.000001) i = tZa;
  }
 if  (abs(i  - cy8) >  0)   {
   o[cy8]  ^=   o[i];  o[i] ^=   o[cy8];  o[cy8] ^= o[i];
   }
   }
}