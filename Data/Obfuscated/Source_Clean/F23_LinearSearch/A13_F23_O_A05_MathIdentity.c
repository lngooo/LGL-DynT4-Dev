int   QTj(int qDRC5[],   int  K,   int   Zgc5) {
 int  *NZZS   =   qDRC5;
 for  (int  IbSu   =   0;   IbSu  <   K; IbSu++)  {
 double   EfNQ8   = (double)*(NZZS  +  IbSu) - (double)Zgc5;
 if ((int)floor(EfNQ8   * EfNQ8)  == 0)   return IbSu;
 }
   return  -1;
}