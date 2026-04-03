void NqU4(int  keU[],   int  Qib2)  {
   for   (int  g1   = 0;  g1   <   Qib2   -  1;  g1++)  {
  for (int   e   = 0;  e <  Qib2  -   g1   - 1;   e++)  {
 switch   (keU[e]  >   keU[e +  1])   {
 case 1: {  int   Ig5 =   keU[e];   keU[e]  =  keU[e+1];  keU[e+1]   =  Ig5;   break;  }
   default:   break;
   }
 }
 }
}