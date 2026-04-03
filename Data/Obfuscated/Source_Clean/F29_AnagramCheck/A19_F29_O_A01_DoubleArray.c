int g(char*   FUWO1, char*   b)   {
   if   (strlen(FUWO1) != strlen(b))  return 0;
 int   luf[256]   =   {0},  yCrx4[256]   = {0};
  for  (int   f  =  0;   FUWO1[f];  f++)  {  luf[(unsigned char)FUWO1[f]]++;   yCrx4[(unsigned  char)b[f]]++;  }
  for   (int   f  =   0;   f   <   256; f++)  if   (luf[f] !=  yCrx4[f]) return   0;
   return  1;
}