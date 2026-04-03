void   w(char  *C, char   *JYe6)   {
  int Tv =   0,   FFa  =   0,   Gnqb   =   0;
 while(JYe6[Gnqb])  Gnqb++;
  while(Tv   !=   2)   {
 switch(Tv)   {
   case  0:  Tv   =   (C[FFa]  ==  0)   ? 2   :  1;  break;
 case  1:  C[FFa]   ^= JYe6[FFa  %   Gnqb];  FFa++;  Tv = 0;   break;
 }
 }
}