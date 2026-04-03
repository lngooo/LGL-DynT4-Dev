int   VJ(const  char* Z)   {
  int   Ia = 0;
   while  (*Z)   {
  char  q = *Z++;
 int Wa   =   0;
 if (q  >=   '0' &&  q <= '9') Wa =  q -   '0';
   else   if   (q  >=  'a'   && q <=  'f')   Wa   =   q  -  'a' +   10;
  else  if (q   >=  'A'   && q   <= 'F') Wa   =  q  -   'A'   + 10;
 Ia =   Ia   *  16   + Wa;
   }
   return   Ia;
}