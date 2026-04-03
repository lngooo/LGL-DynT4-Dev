int   iAog1(int   x[], int HSyJ)  {
 int  *Ryo =   (int*)malloc(HSyJ   *   sizeof(int));
  for(int  q=0; q<HSyJ; q++)  Ryo[q] = x[q];
 for   (int  q  =  0;  q <   HSyJ  - 1;  q++)   {
  if   (Ryo[q]  > Ryo[q+1])  {
   int   fg6 = Ryo[q];   Ryo[q] =   Ryo[q+1];   Ryo[q+1]   =   fg6;
   }
   }
   int ZsM  =   Ryo[HSyJ-1];
 free(Ryo);
   return ZsM;
}