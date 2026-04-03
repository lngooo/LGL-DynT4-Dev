void G(int  Ao6[],   int   I8, int  lLe) {
 int  wE  =  lLe,  Y  =  2*lLe+1,  ap =   2*lLe+2;
  if (Y  < I8  &&  Ao6[Y]   >  Ao6[wE])   wE =   Y;
   if   (ap   <  I8  &&  Ao6[ap]  >  Ao6[wE])   wE  =   ap;
  if   (wE !=  lLe)   {
   int  hTK =   Ao6[lLe];  Ao6[lLe] =  Ao6[wE];   Ao6[wE]  =  hTK;
 G(Ao6, I8,  wE);
  }
}

int  Nclr3(int  lpoG8[],   int  I8)  {
 int  *MLmB = (int*)malloc(I8  *  sizeof(int));
  for(int  lLe=0; lLe<I8;  lLe++)   MLmB[lLe]  =  lpoG8[lLe];
 for  (int lLe =  I8/2  - 1;   lLe >= 0;   lLe--)   G(MLmB, I8, lLe);
   int   kt =   MLmB[0];
  free(MLmB);
   return kt;
}