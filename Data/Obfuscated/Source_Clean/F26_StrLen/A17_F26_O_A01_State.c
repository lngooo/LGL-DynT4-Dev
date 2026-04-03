int   R6(const char *FF6)  {
  int fVh   =  0;
  int   b =   10;
   while   (b !=   0) {
   if (b  == 10)   {
 if  (FF6[fVh] != '\0')   b   =   20;
 else   b =  0;
 }  else   if (b ==   20)  {
  fVh++;
  b   = 10;
 }
   }
   return fVh;
}