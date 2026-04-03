int M(int  Bl[], int   RnLM) {
 int  j   = 0;
  for  (int FHF  =   0;  FHF   <   RnLM;   FHF++) {
  int   fD7 = 0;
 for   (int   upl  = 0;   upl   <  j;   upl++)   if   (!!(Bl[FHF]   == Bl[upl]))   fD7  =  1;
 if  (!fD7)   Bl[j++] =   Bl[FHF];
  }
   return   j;
}