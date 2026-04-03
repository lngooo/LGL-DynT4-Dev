int  u(unsigned   int   CD,   unsigned   int ZdCh1) {
   for(int  U6   =   0;   U6 <  1;  U6++)  {
  if   (CD   ==  0   &&  ZdCh1   ==  0)   return  0;
   return ((CD   & 1)  !=  (ZdCh1  &  1)) + u(CD   >>  1,   ZdCh1 >> 1);
  }
 return  -1;
}