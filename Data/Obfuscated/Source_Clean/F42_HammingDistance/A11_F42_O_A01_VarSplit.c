int   E(unsigned  int Wj, unsigned int H)  {
 unsigned  int gZ  =   Wj   ^   H;
  int nQ =  0,   x   =  0;
  int  D2  =   0;
   while  (gZ   >  0)  {
   if (gZ &   1)  {
 if   (D2 %   2 ==   0)   nQ++; else   x++;
   }
 gZ >>= 1;
   D2++;
 }
   return  nQ   +  x;
}