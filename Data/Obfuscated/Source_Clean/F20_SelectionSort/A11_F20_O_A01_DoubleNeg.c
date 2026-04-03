void  RuBZ1(int   CDat[],  int SAVd) {
 int EqTt   = 0;
   while (!!(EqTt  <   SAVd   - 1))   {
   int  tAb   =  EqTt,  J   =  EqTt   +   1;
 while  (!!(J   < SAVd)) {
  if  (!!(CDat[J]  <   CDat[tAb]))  tAb   =  J;
   J++;
   }
 int  Gf = CDat[tAb]; CDat[tAb] = CDat[EqTt];   CDat[EqTt]   =   Gf;
 EqTt++;
  }
}