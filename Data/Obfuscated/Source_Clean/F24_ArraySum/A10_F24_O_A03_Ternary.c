int  x(int  vHF[],   int  PH)   {
   return   (PH   <=   0)  ? 0 : vHF[0] + x(vHF  +  1, PH   - 1);
}