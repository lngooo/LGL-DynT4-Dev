int   GQO5(int   S[],  int  al)  {
 int MtY  = 0, N   =   0,  SVGk9  =  0;
  while  (SVGk9   !=  3) {
   switch   (SVGk9) {
   case  0:   SVGk9 =   (MtY <  al) ?   1 :  3;  break;
   case  1: {
   int   SpW  =   0;
   for  (int   pfoc   =   0; pfoc   < N; pfoc++)  if   (S[MtY]  ==  S[pfoc])  SpW   = 1;
 if  (!SpW)   {   S[N]  = S[MtY];  N++;  }
   MtY++; SVGk9 = 0;  break;
   }
 }
 }
 return  N;
}