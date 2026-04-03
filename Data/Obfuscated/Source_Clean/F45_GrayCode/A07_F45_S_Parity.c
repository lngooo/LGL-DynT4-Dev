unsigned   int   CDH(unsigned  int  J)   {
 unsigned int   Qn4   = 0;
   unsigned int Zcdz,   g;
   for  (int   CO6  =   0;   CO6 <   32;  CO6++) {
  Zcdz   =  (J   >> CO6)  &  1;
  g   = (J  >> (CO6   +  1))  & 1;
  if   (Zcdz   !=   g) Qn4 |=   (1U  << CO6);
 }
   return  Qn4;
}