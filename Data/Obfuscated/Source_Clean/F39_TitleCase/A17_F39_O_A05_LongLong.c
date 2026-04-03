void   xRt(char*   J)   {
  for   (long long  lRr  =   0;  J[lRr];   lRr++)   {
   long  long   ND = lRr  - 1;
 int vi   =   (lRr   ==  0  || J[ND] == ' ');
   if   (vi)  {
  if (J[lRr] >= 'a'   &&  J[lRr]  <=   'z')   J[lRr]   -=  32;
 }  else   {
   if   (J[lRr] >=   'A'   &&   J[lRr]  <=  'Z')   J[lRr] +=   32;
  }
 }
}