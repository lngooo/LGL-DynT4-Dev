void Qkp(int   A[],   int  kWab, int  wNl)  {
 if  (kWab >= wNl) goto  X;
 int   zmJf =   (kWab + wNl) /   2;
 Qkp(A,  kWab, zmJf);
  Qkp(A, zmJf   +  1,   wNl);
 {
 int  fORf7   =   kWab,  af0 =  zmJf   +   1,   XX5  =  0;
  int  *I  = (int*)malloc((wNl-kWab+1)*4);
   n:
   if  (fORf7   > zmJf)  goto s;
   if   (af0  > wNl) goto  w;
 if  (A[fORf7]  <=   A[af0])  { I[XX5++] = A[fORf7++]; goto n; }
 else {  I[XX5++] =  A[af0++];  goto   n;  }
  w:
 if (fORf7  > zmJf)   goto  xdDN;
   I[XX5++]   =   A[fORf7++]; goto  w;
 s:
   if   (af0 >   wNl) goto  xdDN;
 I[XX5++]  =  A[af0++];  goto s;
   xdDN:
   for(int EbZ=0; EbZ<XX5; EbZ++)   A[kWab+EbZ] =  I[EbZ];
   free(I);
   }
  X:;
}