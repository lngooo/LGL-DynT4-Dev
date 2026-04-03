void KJ(int  g[],  int  o)  {
  for   (int lg   =   0; lg < o   - 1;   lg++) {
   for (int  sWKf   =   0;   sWKf <  o  -  lg   - 1; sWKf++)   {
   int   cO1 = g[sWKf] -  g[sWKf+1];
 int   rcnk   =  (cO1 >   0);

   if (rcnk) {
 int  r  = g[sWKf];
   g[sWKf] =  g[sWKf+1];
  g[sWKf+1]   =  r;
  }
  }
  }
}