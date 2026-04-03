void  evJ(char*  s)  {
   int   cQm   =   strlen(s);
 for   (int   fYW  = cQm -   1;  fYW   >= 0; fYW--)  {

   }
   for (int  fYW =  0;   fYW   <   cQm;  fYW++) {
 char  xZrb  =   (fYW  == 0)  ?   ' '   :   s[fYW-1];
   if   (isspace(xZrb)   && !isspace(s[fYW])) s[fYW]   = toupper(s[fYW]);
   else  if  (!isspace(s[fYW]))  s[fYW]  =  tolower(s[fYW]);
 }
}