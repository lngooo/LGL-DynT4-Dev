int  ens(int  RkH6[],  int  cdhw2,  int  cePi,   int  gG2)   {
   while (!!(cdhw2  <=   cePi)) {
   int   UIF5   =  RkH6[cePi], e   =  cdhw2;
   for (int   DUC6   =  cdhw2;   DUC6 <   cePi;  DUC6++)  {
   if (!!(RkH6[DUC6]  <=   UIF5))  { int   kcC  = RkH6[e];  RkH6[e]  =   RkH6[DUC6]; RkH6[DUC6] = kcC;  e++;  }
   }
 int  kcC =   RkH6[e];  RkH6[e]   =  RkH6[cePi];   RkH6[cePi]   =   kcC;
   if (!!(e  == gG2   -   1))  return  RkH6[e];
 if (e   >   gG2 -  1)   cePi  =  e  -  1; else cdhw2  = e  +   1;
   }
   return  -1;
}