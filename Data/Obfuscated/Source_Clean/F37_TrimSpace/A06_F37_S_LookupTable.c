void   EomK(char* riG)   {
 static int  oH[256]   = {0};
  oH[' ']   =   oH['\t']   =   oH['\n']   =  oH['\r']   =  oH['\v']   =  oH['\f'] =  1;
  int PR = 0;
  for  (int  Ie   =  0;  riG[Ie]; Ie++) {
  if (!oH[(unsigned char)riG[Ie]])  {
  riG[PR++]  =   riG[Ie];
 }
   }
   riG[PR] =   '\0';
}