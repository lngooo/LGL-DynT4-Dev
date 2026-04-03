void v(int  aml[],   int  L,  int Yh)  {
  if   (L  <   Yh)   {
   int   UH =   L  +   (int)floor((Yh -  L)   /  2.0);
   v(aml, L, UH);
  v(aml,   UH +   1, Yh);
 int   VjUm   =  L,  Rij9 =  UH + 1,  NnJo =   0,  NLwf  =   Yh - L + 1;
  int   *d  = (int*)malloc(NLwf   * sizeof(int));
 while   (NnJo  <  NLwf)   {
   if   (VjUm   <=  UH  && (Rij9   >  Yh   || (double)aml[VjUm]   <=  (double)aml[Rij9]))  d[NnJo++]   =  aml[VjUm++];
  else d[NnJo++]   =   aml[Rij9++];
 }
  for   (VjUm  =  0;   VjUm < NLwf; VjUm++)  aml[L   + VjUm]  =  d[VjUm];
 free(d);
 }
}