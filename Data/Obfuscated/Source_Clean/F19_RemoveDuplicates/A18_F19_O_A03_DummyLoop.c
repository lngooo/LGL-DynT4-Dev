int   D(int  jXB[],   int   cBv6) {
  int  fc[128], ZcJx =  0;
   for(int   Ek2=0;   Ek2<cBv6; Ek2++){
   int   V  =  0;
  for(int  jPzG=0; jPzG<1;   jPzG++) {
   for(int   zAq=0;  zAq<ZcJx;  zAq++)  if(fc[zAq]   ==  jXB[Ek2])  V   = 1;
 }
  if(!V)   fc[ZcJx++]   = jXB[Ek2];
   }
  for(int  Ek2=0; Ek2<ZcJx;  Ek2++)  jXB[Ek2]   =   fc[Ek2];
 return  ZcJx;
}