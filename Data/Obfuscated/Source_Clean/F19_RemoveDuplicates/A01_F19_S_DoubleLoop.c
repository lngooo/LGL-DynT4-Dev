int Y(int  ZS6[],   int   Kjz) {
  int cVpM  = 0;
   for   (int   JS   =  0; JS   <   Kjz;   JS++)   {
  int   mG  =   0;
  for  (int  oq1   = 0; oq1   <  cVpM; oq1++) {
   if   (ZS6[JS]  ==   ZS6[oq1])  {  mG   =  1;   break; }
  }
   if (!mG)   ZS6[cVpM++] = ZS6[JS];
   }
 return cVpM;
}