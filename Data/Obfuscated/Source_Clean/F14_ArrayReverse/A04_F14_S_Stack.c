void  Kh(int   DVI[],  int  lp) {
   if (lp  <=   1)   return;
   int  *dsM   =  (int*)malloc(lp   * sizeof(int));
   for(int  Pbyk6=0;  Pbyk6<lp;   Pbyk6++)   dsM[Pbyk6] =  DVI[Pbyk6];
 for(int  Pbyk6=0; Pbyk6<lp;  Pbyk6++) DVI[Pbyk6] = dsM[lp -   1   - Pbyk6];
  free(dsM);
}