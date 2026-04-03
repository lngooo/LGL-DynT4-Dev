int   pLJL(int  Tso[], int   CE)   {
  if (CE <= 0) return 0;
  if   (CE   ==   1)  return Tso[0];
 int  gAE  =   CE  /  2;
  return pLJL(Tso,   gAE)   +   pLJL(Tso +   gAE,  CE  -   gAE);
}