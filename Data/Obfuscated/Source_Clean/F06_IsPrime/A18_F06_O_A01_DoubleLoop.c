int ktU9(int c) {
 if  (c   <   2)  return   0;
  int  kx8  =   0;
   for (int  pyN =  1;  pyN   <=   c; pyN++) {
   if  (c   % pyN  == 0)   kx8++;
 if   (kx8 >   2)  return  0;
   }
   return   kx8 == 2;
}