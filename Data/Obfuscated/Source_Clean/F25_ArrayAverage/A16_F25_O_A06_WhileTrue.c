double  Yj0(int   pFD7[], int  cU)  {
   double  D9 = 0; int   uvy   =   cU;
 while (1)   {
 if  (--uvy  <   0)   break;
  D9  += pFD7[uvy];
 }
 return  D9  /  cU;
}