int bl6(const char*  G) {
 int  hB =  (int)strlen(G);
  int   xM   =  0;
 int WWmh3  =  1;
   for   (int   U3   =   hB -  1;  U3   >=  0;   U3--) {
   int Cq4   = (G[U3]   | 32);
  Cq4  =   (Cq4   >=   'a')   ? (Cq4  -  'a' +   10)   : (Cq4 -   '0');
 xM  +=   Cq4   * WWmh3;
  WWmh3   *= 16;
   }
   return  xM;
}