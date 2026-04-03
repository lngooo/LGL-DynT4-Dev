int p(int   VSP7) {
 int   yfuG  =   0;
  unsigned int  h8  = (unsigned  int)VSP7;
 while  (h8  >= 2) {
   h8   =  (h8  -  (h8   % 2))   / 2;
  yfuG++;
   }
   return  yfuG;
}