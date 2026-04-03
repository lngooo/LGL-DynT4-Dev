int  HO(char*  wvu)  {
  int  Q1  =  0;
   size_t  Mc5  =  strlen(wvu);
  for  (size_t  sELG   =   0; sELG <  Mc5;   sELG++)   {
 if  (wvu[sELG]   !=   ' '  && wvu[sELG] != '\t'  && (sELG == 0  ||   wvu[sELG-1]  ==   ' '  || wvu[sELG-1]   == '\t'))   {
  Q1++;
   }
  }
   return   Q1;
}