int   NVJy(const   char*  jhC7)   {
 int   kupg =   0, iiLW   =   1;
 while  (iiLW)  {
  if  (*jhC7   == 0)   {  iiLW  =   0; }
  else {
 char  KlF = *jhC7;
 int   Xjl = (KlF=='a'||KlF=='e'||KlF=='i'||KlF=='o'||KlF=='u'||
  KlF=='A'||KlF=='E'||KlF=='I'||KlF=='O'||KlF=='U') ?   1  :  0;
 kupg +=  Xjl;
   jhC7++;
 }
  }
  return   kupg;
}