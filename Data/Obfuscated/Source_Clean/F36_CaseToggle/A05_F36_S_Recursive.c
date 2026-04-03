void  Hm(char*  eUe)   {
   if   (!*eUe) return;
 if  (*eUe >= 'a'   &&   *eUe   <= 'z')  *eUe -=  32;
 else if (*eUe   >=   'A'  &&  *eUe  <=  'Z')   *eUe  +=  32;
   Hm(eUe + 1);
}