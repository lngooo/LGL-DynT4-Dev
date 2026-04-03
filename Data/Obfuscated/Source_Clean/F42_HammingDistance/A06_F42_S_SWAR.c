int  K(unsigned int  VOMy,   unsigned  int  Fv)   {
   unsigned int   EWoR4  = VOMy  ^ Fv;
 EWoR4 =  EWoR4  - ((EWoR4   >> 1)  &  0x55555555);
   EWoR4 =   (EWoR4  &  0x33333333)  + ((EWoR4 >> 2) &   0x33333333);
   return (((EWoR4  + (EWoR4  >>   4))  &  0x0F0F0F0F) *  0x01010101)   >>  24;
}