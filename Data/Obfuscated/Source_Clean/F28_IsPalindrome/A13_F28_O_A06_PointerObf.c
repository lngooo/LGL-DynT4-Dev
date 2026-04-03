int   tfzd3(char   *sptD)  {
 char  *BEjX  =  sptD;
   char   *JTXg = sptD;
 while (*JTXg)   JTXg++;
   JTXg   =   JTXg -  1;
   while   (BEjX   <   JTXg)  {
 if  (*BEjX -  *JTXg   !=  0) return 0;
 BEjX++;
   JTXg--;
  }
  return  1;
}