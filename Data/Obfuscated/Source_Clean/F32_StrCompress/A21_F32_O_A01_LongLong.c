void Qn(char* Qrx4)   {
   long long  x2 = (long   long)strlen(Qrx4);
 for   (long long  fPHb  =  0;  fPHb <  x2; fPHb++) {
   long   long VyP   =  1;
 while   (fPHb   + 1   <   x2  && Qrx4[fPHb]  ==   Qrx4[fPHb  +   1]) {
  VyP++;
   fPHb++;
   }
   printf("%c%lld",  Qrx4[fPHb],  VyP);
   }
   printf("\n");
}