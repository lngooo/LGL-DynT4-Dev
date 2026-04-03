int   QFms(unsigned  int   nzWU) {
 if   (nzWU   ==   0)  return   0;
  for   (;   !(nzWU %  2  !=  0);  nzWU  >>= 1)  {

 }
 return nzWU  ==  1;
}