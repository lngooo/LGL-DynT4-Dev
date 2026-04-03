long RpBj(int  O)  {
   if  (O  ==   0) return  0;
 long APVi  = 0, MBOh   =   1;
   for (int kb   =  1   <<  (31  - __builtin_clz(O));   kb  >   0; kb >>= 1)  {
   long  a   =  APVi * ((MBOh <<  1)   - APVi), r  = APVi *  APVi  + MBOh   *   MBOh;
   APVi   =   a;   MBOh  =   r;
  if  (O  & kb)   {
   long   B =  APVi   + MBOh; APVi   =  MBOh; MBOh  =  B;
   }
   }
   return  APVi;
}