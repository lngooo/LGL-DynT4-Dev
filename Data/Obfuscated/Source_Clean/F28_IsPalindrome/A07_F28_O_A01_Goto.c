int N(char   *ub9)   {
  int   V   = 0;
 while (ub9[V]) V++;
  int e0   =   0, SymT   = V -   1;
nH:
   if (e0 >=  SymT)  goto   UNF;
  if  (ub9[e0]  !=   ub9[SymT])   goto  eKNu2;
   e0++;  SymT--;
  goto  nH;
UNF: return  1;
eKNu2:   return  0;
}