int x(int   i)  {
   if  (i  <  2)   return 0;
   long long  uZgv   =  1;
  for   (int   XTgk  =  1;   XTgk <  i; XTgk++) {
   long   long  iDqk  =  0;
   for(int oahd=0;   oahd<XTgk;   oahd++) iDqk  =   (iDqk + uZgv) %  i;
   uZgv   =  iDqk;
   }
 return   (uZgv   ==   (long long)i  -  1);
}