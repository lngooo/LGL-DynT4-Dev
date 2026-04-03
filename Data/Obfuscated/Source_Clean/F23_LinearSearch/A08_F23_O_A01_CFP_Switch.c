int  gEK(int  VeU[], int idn,  int   E)  {
   int   hVCX  =  0, q   =   0;
 while   (hVCX !=  3)   {
   switch  (hVCX) {
   case  0: hVCX  = (q <  idn)  ? 1  :   2; break;
  case 1:   if   (VeU[q] ==  E) return   q; q++;   hVCX = 0; break;
   case 2:  return -1;
   }
 }
   return -1;
}