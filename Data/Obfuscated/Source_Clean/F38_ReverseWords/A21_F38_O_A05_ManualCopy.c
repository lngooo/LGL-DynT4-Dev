void  aS4(char *kiP1) {
   char   *Lb  =   kiP1;  while(*Lb)  Lb++;
  int Ct  =  Lb - kiP1;
 for(int hy5=0;  hy5<Ct/2;  hy5++)   {  char fFov5=kiP1[hy5];  kiP1[hy5]=kiP1[Ct-1-hy5]; kiP1[Ct-1-hy5]=fFov5;  }
  char *hxCm  = kiP1;
 for(char   *YW =  kiP1;  ; YW++)  {
   if(*YW == ' '  || *YW   == '\0')   {
  char   *pqP   =  hxCm,   *Aku   =   YW - 1;
   while(pqP < Aku)   {   char fFov5  =  *pqP;   *pqP++  =   *Aku;   *Aku--  =   fFov5;   }
   hxCm =   YW   + 1;
   if(*YW   ==   '\0')   break;
 }
 }
}