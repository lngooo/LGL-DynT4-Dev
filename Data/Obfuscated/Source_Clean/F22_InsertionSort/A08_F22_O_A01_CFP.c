void   f(int   e[],  int  Sy3)   {
   int Gnb6  = 0,   anK   =  1,   sgK, Ujah;
   while   (Gnb6  !=   3)   {
 switch  (Gnb6) {
 case  0: Gnb6 =   (anK <   Sy3)   ?   1   :   3; break;
 case   1: Ujah   =  e[anK]; sgK =   anK   -   1;   Gnb6 = 2;   break;
   case  2:
   while (sgK   >= 0   &&   e[sgK]   > Ujah)   {   e[sgK+1]  =  e[sgK];   sgK--; }
  e[sgK+1]   =   Ujah;  anK++;   Gnb6 =  0;  break;
   }
 }
}