int   dLW(char* zHW,   char*  FRMk)   {
  int  at5  = 10, ansL   =  20;
 if (strlen(zHW)  !=   strlen(FRMk)) return 0;
   int al[256] = {0};
 for   (int s   = 0; zHW[s]   != '\0'; s++) {
   if  ((at5 +  ansL)  ==  30)   {
  al[(unsigned   char)zHW[s]]++;
  al[(unsigned char)FRMk[s]]--;
 }  else {
  al[0]   =  999;
   }
   }
  for (int s  = 0;  s  <   256;  s++)  {
  if (al[s]   != 0) return   0;
 }
   return   1;
}