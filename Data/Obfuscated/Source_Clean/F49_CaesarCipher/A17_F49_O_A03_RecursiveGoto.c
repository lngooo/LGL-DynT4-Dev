void Om(char  *Kfha,   int  DDaU4) {

 int   C8  = (DDaU4   % 26 +  26) %   26;
   int lNy  =  0;
 O:   if (Kfha[lNy] ==  0) goto   mGw;
   if (Kfha[lNy] >=  'a'  &&   Kfha[lNy]  <=   'z')   Kfha[lNy]   = (Kfha[lNy]-'a'+C8)%26+'a';
  else  if   (Kfha[lNy]  >=  'A'   &&  Kfha[lNy]   <= 'Z') Kfha[lNy]  = (Kfha[lNy]-'A'+C8)%26+'A';
  lNy++; goto O;
  mGw:;
}