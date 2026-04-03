void y(char*  we6)   {
 char* r9 = we6;
 int  uTa   =  1;
 while   (*r9) {
 if   (*r9  ==  ' '   || *r9 == '\t'  ||  *r9   ==   '\n') {
 uTa  =   1;
   }  else   {
 if (uTa)  {
   if  (*r9   >=   'a'   &&   *r9  <= 'z')  *r9   -= 32;
   uTa =  0;
 }   else  {
   if   (*r9 >=  'A'   && *r9  <=   'Z') *r9   +=  32;
 }
 }
 r9++;
 }
}