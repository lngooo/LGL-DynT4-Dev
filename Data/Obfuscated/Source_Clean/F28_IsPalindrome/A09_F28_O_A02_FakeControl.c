int p(char   *zFZf5)  {
   int   G4   =  0; while (zFZf5[G4])  G4++;
  if   (G4   <=   1)  return 1;
 if (1)  {
   if (zFZf5[0]   != zFZf5[G4-1])   return 0;
 }  else {
  int  sPrV5  =   100;
   }
  char  CNsP[100];
   int Kc =   1;
 while(Kc  <   G4  -   1) {  CNsP[Kc-1]  =  zFZf5[Kc];  Kc++;  }
 CNsP[Kc-1] =   '\0';
  return  p(CNsP);
}