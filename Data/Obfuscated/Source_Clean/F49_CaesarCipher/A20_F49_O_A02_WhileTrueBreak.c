void  vrZ(char *WKJ,  int  qAK)   {

  char  *WveB = WKJ;
 int G =  (qAK  %  26   + 26) %   26;
  while(1)   {
  if(*WveB   == 0)  break;
  if(*WveB   >=  'A'   &&  *WveB  <=  'Z')  *WveB  = (*WveB  -   'A' +  G) %   26 +   'A';
   else if(*WveB  >= 'a' &&  *WveB   <=  'z')  *WveB  =  (*WveB   -  'a'   +   G) % 26 + 'a';
   WveB++;
 }
}