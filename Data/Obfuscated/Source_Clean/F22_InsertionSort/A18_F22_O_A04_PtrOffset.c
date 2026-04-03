void   dVdj5(int   Ef[],  int   f) {
   for   (int Amn = 1; Amn <   f; Amn++) {
   int MWhJ =  *(Ef  +   Amn);
  int  gQ  =   Amn  -   1;
  while (gQ >= 0   &&   *(Ef   + gQ)  >   MWhJ)  {
 *(Ef  + gQ  +  1)  = *(Ef +   gQ);
 gQ--;
   }
  *(Ef  +   gQ   +   1) =  MWhJ;
 }
}