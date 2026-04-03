void  dAlg2(const  char *Qi,   char   *y6)   {
  int eh5   =  0, u  = strlen(Qi);
   char  V[256]   = {0};
   for  (;  eh5 <   u;  ) {
   int pD =   1;
 for   (int   s   =  eh5 + 1;  s   <   u; s++)   {
   if  (Qi[s]   ==  Qi[eh5])   pD++;
 else   break;
  }
 int  hV   =  strlen(V);
   V[hV]  =   Qi[eh5];
   sprintf(V +   hV   +  1,  "%d",   pD);
 eh5 +=  pD;
  }
 strcpy(y6,   V);
}