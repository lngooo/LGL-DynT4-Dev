void a(int   vFIZ[], int  z)   {
   int   *y8  = vFIZ;
 for(int  g = 0;   g   <  (z  >>   1); g++) {
  int *hh2   = y8 +  g;
   int *oB  = y8  +  (z - 1   -   g);
   *hh2 ^= *oB;  *oB  ^= *hh2;   *hh2   ^=   *oB;
  }
}