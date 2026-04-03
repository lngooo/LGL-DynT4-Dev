void  Rf(int nm[],  int Kjgk)   {
 if (Kjgk   ==   1) return;
   for   (int   Ei9 = 0; Ei9 < Kjgk - 1; Ei9++) {
 if (nm[Ei9] > nm[Ei9   +   1])  {
  int  h8  = nm[Ei9];
 nm[Ei9] =   nm[Ei9   +   1];
   nm[Ei9   +   1]  =   h8;
  }
 }
 Rf(nm,   Kjgk -  1);
}