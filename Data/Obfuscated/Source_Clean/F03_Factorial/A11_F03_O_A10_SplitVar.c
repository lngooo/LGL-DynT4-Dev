long  long   IDyi(int  cUrm)   {
  if (cUrm   < 0) return  0;
   if   (cUrm  == 0)   return   1;
 long long UbQ = 1, RSJ =  1;
 int  gY   = cUrm  /  2;
  for   (int  ovH3   = 1;   ovH3 <= gY;  ovH3++)  UbQ   *=  ovH3;
 for  (int   ovH3   =  gY  + 1;  ovH3   <=   cUrm; ovH3++)  RSJ *=  ovH3;
 return UbQ   * RSJ;
}