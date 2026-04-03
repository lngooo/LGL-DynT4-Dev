void  aKU(char  *Ixtd7)  {
 char *Nif6   =   strrchr(Ixtd7, ' ');
  if(!Nif6)  return;
   int  Mwn3   = strlen(Nif6   +  1);
   char  *b =  (char*)malloc(Mwn3  +  1);
  strcpy(b,  Nif6  + 1);
  *Nif6  = '\0';
  aKU(Ixtd7);
   char   *GlD0 =   (char*)malloc(strlen(Ixtd7) + 1);
 strcpy(GlD0, Ixtd7);
   sprintf(Ixtd7,   "%s %s", b,  GlD0);
   free(b);   free(GlD0);
}