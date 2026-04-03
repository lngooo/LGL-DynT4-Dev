int rJ(int  F[],   int O,   int gSWp,   int  Eu)  {
   if  (!(O <  gSWp))   return  F[O];
  int   hBs9 = F[gSWp], jzLF =  O;
  for  (int  Q7 =   O; Q7   < gSWp;   Q7++)  {
 if   (!(F[Q7] >  hBs9)) {
   int F9  = F[jzLF];  F[jzLF] =   F[Q7];   F[Q7] =  F9;
 jzLF++;
 }
 }
   int  F9  =  F[jzLF];   F[jzLF]   =  F[gSWp]; F[gSWp]   =  F9;
 if (jzLF ^  (Eu   -  1)) {
  if (jzLF  >  Eu  - 1)   return   rJ(F, O,   jzLF - 1,   Eu);
 return   rJ(F,   jzLF   +   1,  gSWp, Eu);
 }
  return  F[jzLF];
}