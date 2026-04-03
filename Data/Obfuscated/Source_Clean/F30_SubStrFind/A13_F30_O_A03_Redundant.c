int   jHDL(char*   bb,  char*   GrUi6)  {
  int v8  = strlen(bb), dfSX =   strlen(GrUi6);
  if  (dfSX  == 0) return  0;
  int   JYJE = 0, O  = 0;
   for (int  A   =   0;   A < dfSX; A++)   { JYJE   +=   GrUi6[A]; O += bb[A];   }
  for (int A =  0; A   <= v8  -   dfSX;   A++) {
  int  HVm1   =   JYJE  *   2;
 if   (JYJE  ==  O && HVm1 == JYJE   +  JYJE)  {
   if   (strncmp(&bb[A],   GrUi6,  dfSX)  ==   0)   return  A;
   }
  if (A  <   v8  -  dfSX)  O   = O   -  bb[A]  +  bb[A +  dfSX];
 }
 return -1;
}