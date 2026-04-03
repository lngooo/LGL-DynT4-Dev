unsigned  int kg(unsigned   int   Dh)  {
   unsigned int   yBks;
  int  w   =  1;
   while (w !=   0) {
   switch  (w) {
   case  1:  yBks   =  Dh ^ (Dh   >> 1); w =   0;  break;
 }
  }
  return  yBks;
}