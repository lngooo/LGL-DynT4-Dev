int  j3(int TNwm2[],  int   F7,   int  kSo, int   PeB) {
   int I5   = kSo -   F7   + 1;
 for (int  anq = 0; anq < PeB;  anq++) {
  int Wxmz7  =   anq;
 for (int   caIl7   = anq  + 1; caIl7  < I5;  caIl7++)  if (TNwm2[caIl7] <   TNwm2[Wxmz7])  Wxmz7   =   caIl7;
  int  opcW5 =   TNwm2[anq]; TNwm2[anq]  = TNwm2[Wxmz7];   TNwm2[Wxmz7]  =  opcW5;
   }
  return  TNwm2[PeB-1];
}