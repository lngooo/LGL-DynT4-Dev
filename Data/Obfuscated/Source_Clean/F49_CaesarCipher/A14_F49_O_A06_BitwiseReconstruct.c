void   sEUj9(char   *o, int Zy)  {

   int   umlS =   (Zy %   26  +   26)  %  26;
   for(int E=0;   o[E]; E++) {
   if(((o[E]   >=  'a')   &   (o[E] <=   'z'))  | ((o[E]   >= 'A') & (o[E]  <= 'Z')))   {
 char  kPCh7   = (o[E] &  0x20)  ? 0x61  :   0x41;
   o[E]   =   (char)((((o[E]  -   kPCh7)   +  umlS)   % 26) + kPCh7);
 }
  }
}