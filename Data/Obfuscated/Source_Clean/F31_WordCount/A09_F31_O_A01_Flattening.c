int  RfG(char*  tNuc) {
   int  B6 =   0, kxN7  =  0,  Ne = 0;
  while  (Ne != -1)   {
   switch   (Ne)  {
 case   0: if   (!*tNuc) Ne   =   -1;   else  Ne   =  1; break;
 case 1: if   (isspace(*tNuc)) kxN7  =  0;   else  if   (kxN7   ==   0)  {   kxN7 =  1; B6++;   }
   tNuc++;  Ne =  0;  break;
  }
  }
 return  B6;
}