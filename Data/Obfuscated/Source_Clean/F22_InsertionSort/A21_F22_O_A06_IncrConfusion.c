void isjH(int   tJn[],   int OVi) {
 int z8 = 0;
  while (++z8 <  OVi)  {
   int  wiH =  tJn[z8], NM4  =  z8;
 while   (--NM4 >=   0 &&   tJn[NM4]  >   wiH)  {
  tJn[NM4+1] =   tJn[NM4];
  }
  tJn[NM4+1] =  wiH;
 }
}