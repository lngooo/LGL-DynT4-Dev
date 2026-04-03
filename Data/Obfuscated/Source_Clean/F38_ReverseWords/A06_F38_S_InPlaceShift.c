void   d(char   *J2) {
  int   wX  =  strlen(J2);
 char  *COs8 =   (char*)malloc(wX  +   1);
  int   KWig   = 0;
   for(int  YX = wX-1;  YX   >=   0;  YX--) {
   if(J2[YX]  ==  ' ')  {
 for(int   Gs4=YX+1;  J2[Gs4]!=' '   &&  J2[Gs4]!='\0';   Gs4++)  COs8[KWig++] =   J2[Gs4];
 COs8[KWig++]  = ' ';
  }
   }
   for(int  Gs4=0;   J2[Gs4]!=' '   &&  J2[Gs4]!='\0';   Gs4++) COs8[KWig++]  =   J2[Gs4];
   COs8[KWig]  = '\0';
   strcpy(J2,   COs8); free(COs8);
}