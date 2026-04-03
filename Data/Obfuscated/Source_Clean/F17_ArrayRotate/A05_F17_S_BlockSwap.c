void KN(int   aVK[], int   h, int Qd9,   int   ihD) {
   for   (int   ccZ1 =   0;   ccZ1   < ihD; ccZ1++) {
 int  zBsi  =   aVK[h   +   ccZ1];
  aVK[h   +   ccZ1] = aVK[Qd9  + ccZ1];
 aVK[Qd9 +  ccZ1]   =  zBsi;
   }
}

void  u2(int   aVK[],   int   PMLH,   int   ERXw)   {
 if (PMLH   ==   0  ||   PMLH ==   ERXw)  return;
   if (ERXw  -  PMLH ==  PMLH) {
 KN(aVK, 0, ERXw - PMLH,  PMLH);
 return;
   }
 if  (PMLH  < ERXw   -   PMLH) {
  KN(aVK,  0,   ERXw  - PMLH,   PMLH);
   u2(aVK, PMLH,   ERXw   -  PMLH);
 }  else {
   KN(aVK, 0,  PMLH,  ERXw   -  PMLH);
  u2(aVK  +   ERXw  - PMLH,  2 *   PMLH   -   ERXw,  PMLH);
   }
}

void i6(int  aVK[], int   ERXw,  int  PMLH)  {
  if  (ERXw   ==   0) return;
   u2(aVK,   PMLH   %   ERXw,  ERXw);
}