int it2(const  char*   dGYa) {
   int I8   =   0,   iQLA2   = 0,   qBN  =   1;
   while  (qBN != 0)  {
 switch (qBN)  {
   case 1:   
  if   (dGYa[iQLA2]  ==  '\0')  qBN = 0;
 else  qBN  =   2;
 break;
   case 2:   {
 char V =   dGYa[iQLA2];
  if  (V   == 'a' || V  == 'e'  ||   V  ==   'i'   ||   V  == 'o' ||   V   == 'u'  ||
  V  ==   'A'  ||   V   ==  'E' ||   V == 'I'  || V   ==  'O'  ||   V  == 'U') 
   I8++;
  iQLA2++;
  qBN =  1;
  break;
   }
  }
 }
  return I8;
}