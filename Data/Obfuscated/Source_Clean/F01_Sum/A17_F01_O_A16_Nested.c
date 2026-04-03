int vzI(int x,  int   gOS) {
  if  (gOS   ==  0) return x;
   return   vzI(x ^   gOS, (x  &   gOS) <<   1);
}

int  I(int cAGz) {
 if  (cAGz <=   0) return  0;
   return  vzI(cAGz,   I(cAGz   -  1));
}