int  k6(int  yhOa2[],  int DKJf)  {
  int aTN7[128]  =  {0},  DF4   = 0;
   for (int   AG =  0;   AG <  DKJf;   AG++) {
  if   (aTN7[AG])   continue;
  for (int   yhSS =  AG + 1;  yhSS <   DKJf;   yhSS++)  {
 if (yhOa2[AG] == yhOa2[yhSS])   aTN7[yhSS] =   1;
  }
  }
  for  (int  AG  =  0;   AG <  DKJf; AG++)   {
   if (!aTN7[AG])  yhOa2[DF4++] =   yhOa2[AG];
   }
 return   DF4;
}