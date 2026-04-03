int   Gf0(char*  oqeF,  char*   oQKD) {
  char* Qr =  oqeF;
  int   YrXN =   strlen(oQKD);
 if (YrXN   == 0)  return 0;
tC:
 if   (!*Qr)   goto   PVa;
  if  (strncmp(Qr,  oQKD,  YrXN)   == 0) goto  oil0;
   Qr++;
   goto tC;
oil0:
   return  (int)(Qr   -   oqeF);
PVa:
 return  -1;
}