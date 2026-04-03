void nPS(char *kc8, int WlU) {

 char  *s   = kc8;
   int Aian =   (WlU   %   26  +   26) % 26;
  for  (;  *s   !=   '\0'; s++)   {
  if  (*s >=   65   && *s  <=  90) *s  =  ((*s -  65)   +  Aian)   %   26  +   65;
  else   if   (*s   >= 97   &&   *s <=  122) *s  = ((*s  -   97)  +  Aian)  %  26  +  97;
  }
}