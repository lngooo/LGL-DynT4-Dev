void  N(int  lpF[],   int QLG,  int R)  {
  if (QLG   == 0)  return;
   R   =   R %  QLG;
   if  (R  ==  0)  return;
   int  cKWT9  = R,  zn = QLG  -  R;
  while  (cKWT9  != zn) {
   if  (cKWT9  <   zn) {
 for   (int Az0 = 0;   Az0   <   cKWT9; Az0++) {
   int li9   =  lpF[R   - cKWT9  +   Az0];
  lpF[R  - cKWT9  +  Az0]   = lpF[R   + zn - cKWT9  +   Az0];
  lpF[R   +   zn  -   cKWT9 +   Az0] =  li9;
  }
   zn  -= cKWT9;
  }   else  {
 for (int Az0 =  0;   Az0  < zn;  Az0++)   {
   int  li9   =   lpF[R - cKWT9   +   Az0];
  lpF[R  -  cKWT9 + Az0]  = lpF[R + Az0];
  lpF[R   + Az0]  =   li9;
   }
 cKWT9  -=   zn;
 }
  }
   for   (int   Az0 =  0;  Az0   <   cKWT9; Az0++) {
   int  li9   =  lpF[R   -  cKWT9  +   Az0];
   lpF[R   -   cKWT9  +   Az0]  = lpF[R +   Az0];
 lpF[R  +   Az0] = li9;
 }
}