int  axmM(char  *XdX0) {
  int o =  0;  while  (XdX0[o]) o++;
   int   seUB =   -1, psW   =   o;
  while   (++seUB <  --psW) {
  if  (XdX0[seUB]   !=   XdX0[psW])   return  0;
 }
   return 1;
}