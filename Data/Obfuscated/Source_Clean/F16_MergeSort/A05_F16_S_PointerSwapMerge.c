void   iNpH5(int Gyz[], int  sfVN,  int   UT) {
 if (UT  <=   sfVN) return;
 int   FD =   (sfVN  +   UT) >> 1;
   iNpH5(Gyz,  sfVN, FD);
  iNpH5(Gyz, FD +   1, UT);
  int *oB4 =  (int*)malloc((UT  - sfVN  +  1)  *  sizeof(int));
   int pE =   sfVN, G   =  FD +   1, adK =  0;
   while   (pE   <=  FD  ||  G <= UT)   {
   if   (pE <=   FD  &&   (G  >   UT  ||   Gyz[pE]  <=  Gyz[G])) oB4[adK++]  = Gyz[pE++];
   else oB4[adK++] = Gyz[G++];
  }
 for   (pE  =  0;   pE <  adK;  pE++) Gyz[sfVN +   pE] = oB4[pE];
   free(oB4);
}