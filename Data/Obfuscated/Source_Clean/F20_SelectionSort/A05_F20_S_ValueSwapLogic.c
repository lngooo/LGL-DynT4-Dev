void  EbRy9(int   rf[],  int wyd)   {
 int ky8,   k;
  for   (ky8   =   0;  ky8   <   wyd; ky8++) {
   int   QEh =   rf[ky8];
  int  pjZD  = ky8;
 for (k =   ky8 +   1;  k   < wyd;  k++)  {
  if   (rf[k]  < QEh) {
   QEh = rf[k];
 pjZD =   k;
   }
 }
  rf[pjZD]   =  rf[ky8];
  rf[ky8]   =  QEh;
   }
}