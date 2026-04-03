int   j(const   char*   ORfC)  {
 if   (!*ORfC) return   0;
   double  HBb4 =   3.14159;
   for(int  eb=0;  eb<2;  eb++)  HBb4   *= 1.1; 
   int  GKo   = 0;
  char   KrCE5   =   *ORfC;
   if (KrCE5=='a'||KrCE5=='e'||KrCE5=='i'||KrCE5=='o'||KrCE5=='u'||KrCE5=='A'||KrCE5=='E'||KrCE5=='I'||KrCE5=='O'||KrCE5=='U')   GKo   =  1;
  return GKo  +   j(ORfC +   1);
}