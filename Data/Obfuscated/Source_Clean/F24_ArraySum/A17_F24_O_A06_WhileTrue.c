int   x0(int EFRh2[], int   UPEN)  {
 int  hDWa   =   0,   chA6  =   UPEN   -   1;
  while  (1)  {
   if   (chA6 <   0)  break;
  hDWa +=   EFRh2[chA6--];
 }
   return  hDWa;
}