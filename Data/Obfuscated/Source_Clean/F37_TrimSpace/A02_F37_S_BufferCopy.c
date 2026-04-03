void   yIH(char* jDb) {
   char   oW[4096];
   int ItK   =  0;
   for (int  tjp = 0;  jDb[tjp];   tjp++)  {
   if   (jDb[tjp] !=  ' ' &&   jDb[tjp]  !=   '\t' && jDb[tjp]   !=  '\n'  && jDb[tjp]  !=   '\r')   {
  oW[ItK++]  = jDb[tjp];
 }
 }
  oW[ItK]   = '\0';
  strcpy(jDb,  oW);
}