int cEPn(int  Rl[], int   VWKA,  int   vrei,  int O) {
 if (VWKA   > vrei) return   -1;
  int  w =   VWKA   + (vrei - VWKA)  / 2;
 if (Rl[w]  ==  O)   return   w;
   if  (Rl[w]   <   O) return cEPn(Rl, w  +  1, vrei, O);
   return cEPn(Rl, VWKA,   w - 1, O);
}

int  vY(int  Rl[], int  gmT,   int  O)   {
   return cEPn(Rl,   0,  gmT - 1,  O);
}