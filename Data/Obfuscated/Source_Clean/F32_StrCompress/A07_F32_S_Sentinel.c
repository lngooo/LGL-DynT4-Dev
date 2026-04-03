void   Zm(char*  s)   {
   int   zXEA   =   0,  Djon3  =   0;
  while (s[zXEA])   {
   for   (Djon3 =   zXEA;  s[Djon3] == s[zXEA];   Djon3++);
 printf("%c%d",  s[zXEA],  Djon3  - zXEA);
 zXEA   =  Djon3;
   }
   printf("\n");
}