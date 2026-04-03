int  Ttly(int  hWxu3) {
  if (hWxu3  <   0) return   -1;
   if (hWxu3   <   2) return hWxu3;
  long   Ykg  = hWxu3;
   long  o7  =  (Ykg +   1)  /   2;
 while (o7  <  Ykg)   {
 Ykg   = o7;
   o7 =  (Ykg + hWxu3  /   Ykg)   / 2;
  }
   return  (int)Ykg;
}