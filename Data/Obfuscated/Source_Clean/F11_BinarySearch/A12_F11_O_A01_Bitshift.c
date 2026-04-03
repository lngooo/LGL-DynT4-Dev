int  bPO(int ChI8[], int DrGW8,  int   QfRT) {
 int DYN3   = 0,   uhE  = DrGW8 - 1;
  while   (DYN3 <=   uhE)   {
  int Gcb  =   DYN3   + ((uhE   -  DYN3) >>  1);
  if (ChI8[Gcb]   ==   QfRT) return   Gcb;
  if   (ChI8[Gcb]  <   QfRT) DYN3 =   Gcb  + 1;
   else  uhE  = Gcb  -  1;
  }
   return  -1;
}