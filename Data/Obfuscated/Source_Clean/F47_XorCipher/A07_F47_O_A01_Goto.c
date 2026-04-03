void fE(char  *Vu, char   *kftK) {
  int Ucg0 = 0, nE =   0;
   while(kftK[nE])  nE++;
Ga:
 if  (Vu[Ucg0]   == '\0')  goto  f3;
  Vu[Ucg0]  =   Vu[Ucg0]   ^  kftK[Ucg0   % nE];
  Ucg0++;
 goto Ga;
f3:;
}