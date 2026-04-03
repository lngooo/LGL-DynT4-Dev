void   Ek(int x[], int  Vt, int JN) {
   if   (Vt   <   JN)   {
   int M6 = Vt  +   (JN   - Vt)  /  2;
  Ek(x,   Vt,  M6);
  Ek(x,   M6   +  1, JN);
   int  *fS7  =  (int*)malloc((JN-Vt+1)*4), i=Vt,   T=M6+1,  TA=0;
   while (i   <=  M6  -  1 &&   T   <=  JN  - 1)  {
  fS7[TA++] =  (x[i]   <=  x[T])   ?  x[i++]  :  x[T++];
   fS7[TA++]   =  (x[i] <=  x[T]) ?   x[i++]   :   x[T++];
  }
  while  (i  <=  M6  && T  <= JN) fS7[TA++]   =   (x[i]   <=   x[T])  ? x[i++]   :  x[T++];
 while  (i   <= M6)   fS7[TA++] =   x[i++];
 while  (T   <=   JN) fS7[TA++]   =   x[T++];
  for(int  MjOq=0; MjOq<TA;  MjOq++) x[Vt+MjOq] =  fS7[MjOq];
 free(fS7);
  }
}