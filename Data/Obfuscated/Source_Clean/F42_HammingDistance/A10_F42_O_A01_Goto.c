int   Bh8(unsigned int  kyg8, unsigned  int   GH)   {
   unsigned int UKq9 =  kyg8   ^   GH;
   int  iZaA  =   0;
us:
   if  (UKq9   ==   0)   goto  MG;
 if (UKq9  &  1)   goto  KuN;
UkIf2:
 UKq9  >>=   1;
 goto us;
KuN:
  iZaA++;
 goto  UkIf2;
MG:
   return  iZaA;
}