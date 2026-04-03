int U(int g,   int exp)   {
 int   zFC4   = 1;
 while  (exp > 0) {
  if (exp & 1)   zFC4   *= g;
  g  *=  g;
 exp >>=  1;
   }
   return   zFC4;
}