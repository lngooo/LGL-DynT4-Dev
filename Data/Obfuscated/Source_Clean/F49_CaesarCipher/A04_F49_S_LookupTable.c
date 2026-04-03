void kk(char  *si,  int   ye8)  {

 char SS[26],   asQF[26];
   int  XH   = (ye8  %   26   + 26)   %   26;
  for(int  O8=0; O8<26;  O8++)   {
  SS[O8] =   'a'  + (O8   + XH) %  26;
   asQF[O8]  =   'A' +   (O8   +  XH) %   26;
  }
  while(*si) {
 if(*si  >=  'a' &&  *si <= 'z')   *si   = SS[*si -   'a'];
   else  if(*si   >=  'A'   && *si <= 'Z') *si   =   asQF[*si - 'A'];
  si++;
  }
}