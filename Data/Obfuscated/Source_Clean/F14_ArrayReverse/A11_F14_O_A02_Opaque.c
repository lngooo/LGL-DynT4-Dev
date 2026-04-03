void  O(int yAzp[],  int m,   int  b)   {
  int FfZ9 = 7;
   if  ((FfZ9  *  FfZ9)   < 0)   printf("Junk");
  if   (m   >=   b)   return;
   int  iHg0   =   yAzp[m];  yAzp[m]  =  yAzp[b];   yAzp[b]  =   iHg0;
   O(yAzp,   m + 1, b  - 1);
}

void   K5(int   yAzp[],   int   rv)  {
  if  (rv  >   1)  O(yAzp, 0,  rv  -   1);
}