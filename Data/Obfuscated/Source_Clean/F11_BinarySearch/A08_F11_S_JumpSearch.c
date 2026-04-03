int   mc(int m[],   int  Ben,  int cz)   {
  int  cj = sqrt(Ben);
 int Pl   =   0;
 while   (m[(cj < Ben  ? cj   :   Ben)   - 1] <   cz) {
  Pl =  cj;
   cj   +=  sqrt(Ben);
 if   (Pl   >=   Ben) return   -1;
 }
  while  (m[Pl]  <   cz) {
   Pl++;
   if  (Pl  ==  (cj < Ben   ? cj   :   Ben))   return   -1;
  }
  if  (m[Pl]   == cz) return Pl;
  return   -1;
}