void  cXl3(char  *IToC,   int   OQ7) {

   if (*IToC  ==  '\0')  return;
  int wur  =   (OQ7   % 26  + 26)  %  26;
  if   (*IToC  >= 'A'  && *IToC  <=   'Z')  *IToC   =  (*IToC -   'A'  +  wur) %  26  +  'A';
 else if   (*IToC >=   'a'   &&  *IToC  <=  'z') *IToC  =   (*IToC  - 'a'   +   wur)  %  26 + 'a';
   cXl3(IToC   + 1,  OQ7);
}