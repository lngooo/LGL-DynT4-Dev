void  Rw(char*  xKbJ5)  {
  char  *eukm   =   xKbJ5,  *u8;
xfhf:
 if (!*eukm)  goto WME9;
 u8 =   eukm;
w3:
   if   (*u8  ==   *eukm)   {   u8++;   goto  w3;  }
  printf("%c%ld",   *eukm, (long)(u8 -   eukm));
   eukm  =   u8;
  goto   xfhf;
WME9:
  printf("\n");
}