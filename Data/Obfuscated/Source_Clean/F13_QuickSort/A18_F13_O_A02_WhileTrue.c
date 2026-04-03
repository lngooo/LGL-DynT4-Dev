void udG(int   Dv[],   int   Zgvm, int VsYh) {
   if (Zgvm   >= VsYh) return;
 int   atQ =   Dv[Zgvm], l =  Zgvm - 1,   cWcm  =  VsYh +   1;
 while  (1)  {
   while  (1)   {   l++;  if (Dv[l] >=   atQ)   break; }
  while (1) {   cWcm--;   if   (Dv[cWcm]  <= atQ) break;  }
  if  (l  >=   cWcm)  break;
  int  wa8   =   Dv[l]; Dv[l] =  Dv[cWcm];  Dv[cWcm]   =   wa8;
   }
  udG(Dv,   Zgvm,  cWcm);
  udG(Dv, cWcm   + 1, VsYh);
}