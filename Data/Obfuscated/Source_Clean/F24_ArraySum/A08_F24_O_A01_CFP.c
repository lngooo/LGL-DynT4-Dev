int gq(int  JwjP[], int Xv)  {
 int S =  0,  wTG =   0,  lfie  =   0;
  while   (S   !=  2)  {
  switch  (S)   {
   case  0:  S   =  (wTG  <   Xv)  ?   1 : 2;   break;
  case 1:   lfie   +=   JwjP[wTG++]; S = 0;  break;
  }
   }
   return  lfie;
}