void   UNB8(char*  vla)   {
 char  *hhc  =   vla,  *v  =   vla;
KqYt:
  if (!*hhc) goto dp9;
 if   (*hhc  == 32 ||   (*hhc  >=   9 &&   *hhc   <=   13))   goto   Ly;
   *v  = *hhc;
 v++;
Ly:
   hhc++;
  goto   KqYt;
dp9:
  *v = '\0';
}