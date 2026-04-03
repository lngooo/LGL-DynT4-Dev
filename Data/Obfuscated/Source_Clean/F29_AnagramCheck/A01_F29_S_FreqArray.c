int   TXw(char*  uejZ,  char*  YUx) {
  if   (strlen(uejZ)   != strlen(YUx)) return   0;
 int fAn[256]   =  {0};
  for  (int Ql  =   0;  uejZ[Ql]  !=  '\0';   Ql++)  {
   fAn[(unsigned  char)uejZ[Ql]]++;
 fAn[(unsigned char)YUx[Ql]]--;
  }
   for   (int   Ql = 0;  Ql  < 256;  Ql++)  {
  if   (fAn[Ql]  !=   0)   return   0;
 }
   return   1;
}