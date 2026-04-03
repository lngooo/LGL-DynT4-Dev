void   W4(char *xtl, char  *s)   {
   int   aQyA  =   0;  while(s[aQyA])  aQyA++;
  for(int   en=0;  xtl[en];   en++)  {
 int kaL2   =   1;
   if(kaL2) xtl[en]   ^=   s[en   %  aQyA];
  }
}