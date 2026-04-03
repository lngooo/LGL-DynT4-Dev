void UOL(char   *w) {
 char *KV = strchr(w,  ' ');
 if   (KV)   {
 char WlaJ9[256];
   strcpy(WlaJ9, KV   +   1);
 UOL(WlaJ9);
  int   ugRk =   KV  -   w;
   char Lei[256];  strncpy(Lei, w, ugRk);   Lei[ugRk] =  '\0';
   sprintf(w, "%s %s",  WlaJ9,   Lei);
  }
}