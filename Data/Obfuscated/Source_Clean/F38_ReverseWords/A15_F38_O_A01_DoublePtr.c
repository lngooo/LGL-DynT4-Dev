void VH8(char   *lwM)  {
  char   **KPEE5  = &lwM;
   int  s7  =   strlen(*KPEE5);
  for(int   G8=0;   G8 <   (s7 >>  1);  G8++)   {
   char   v  =   (*KPEE5)[G8];
  (*KPEE5)[G8]   = (*KPEE5)[s7-1-G8];
   (*KPEE5)[s7-1-G8]   =  v;
 }
   char   *kSD   =   *KPEE5;
   int  Mds   = 0;
 for(int dG=0;   dG  <=  s7;   dG++)   {
   if(kSD[dG] == 32 ||  kSD[dG]  ==  '\0')  {
  int mho   =  dG   -  1;
  while(Mds <   mho)   {
 char   K =   kSD[Mds];
 kSD[Mds++] =  kSD[mho];
  kSD[mho--] = K;
  }
  Mds   =   dG +  1;
   }
   }
}