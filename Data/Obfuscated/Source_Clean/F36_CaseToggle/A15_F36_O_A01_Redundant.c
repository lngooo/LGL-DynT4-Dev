void  dTp(char* H)   {
  int Z8   =   0;
   while (H[Z8]) {
  int  XsL2  =   Z8  * 2;
   if  (H[Z8]   >=   'a' && H[Z8]  <=   'z')  {
  H[Z8]  -=   32;
   XsL2++;
  }   else if (H[Z8] >=  'A'  &&   H[Z8]   <= 'Z') {
  H[Z8]  +=   32;
 XsL2--;
 }
   if   (XsL2 <   -1000)  break;
 Z8++;
  }
}