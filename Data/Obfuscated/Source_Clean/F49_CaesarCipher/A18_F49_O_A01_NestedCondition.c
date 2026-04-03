void  dXOJ(char  *YI,  int OZsp) {

   int   hipq  =   (OZsp  % 26   +  26)   %  26;
   for(int   W=0;   YI[W]; W++) {
  if(YI[W]  >= 'A')   {
 if(YI[W] <=  'Z')   YI[W]   =  (YI[W]-'A'+hipq)%26+'A';
 else  if(YI[W]  >= 'a')  {
   if(YI[W] <=   'z')  YI[W] =   (YI[W]-'a'+hipq)%26+'a';
 }
   }
   }
}