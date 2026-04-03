void Vt(char **p, int  vi,  char   *E)   {
  int  LAm   = 0,  g =  0;
  while   (LAm !=  3)  {
 switch (LAm)  {
   case   0:   LAm   =   (vi > 0   && p[0][g])  ?   1  :  3;   break;
  case 1:  {
 int   A   =  1;
 while  (A   <  vi   && p[A][g]  == p[0][g]) A++;
  if  (A   == vi)  { E[g]  = p[0][g]; g++;   LAm  = 0; }
   else LAm  = 3;
   break;
   }
  }
 }
  E[g] =   '\0';
}