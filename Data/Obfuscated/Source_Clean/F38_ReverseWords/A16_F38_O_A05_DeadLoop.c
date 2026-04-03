void aIzk(char  *Rltb)   {
 char   *o  =  Rltb;  while(*o) o++;
 char   *I = Rltb, *PLzB9 = o  -  1;
 while(I <   PLzB9) { char   mKd6 =  *I;  *I++   = *PLzB9;  *PLzB9--  = mKd6;   }
   if(0)  {  for(int   gmq=0; gmq<100; gmq++)   printf("Unreachable");   }
   char  *A  =   Rltb;
 for(char *H   =   Rltb; H  <=   o; H++) {
   if(*H  ==  32   || *H   ==  0)  {
 char  *G =  A,  *dv5 =   H -   1;
   while(G  <   dv5) {  char  jj8  = *G; *G++  =   *dv5;   *dv5--   =  jj8;   }
 A   =  H   +   1;
 }
 }
}