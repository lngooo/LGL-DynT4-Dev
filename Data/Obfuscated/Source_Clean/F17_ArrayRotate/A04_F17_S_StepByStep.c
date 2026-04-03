void  jfQ(int   bmxa[],  int  rq)   {
  int   wVEd   =   bmxa[0],   wxM;
 for   (wxM   =   0; wxM <  rq -  1;   wxM++)   bmxa[wxM] = bmxa[wxM +  1];
 bmxa[rq   -  1]   =   wVEd;
}

void   w1(int  bmxa[], int rq, int   cNL)  {
  if   (rq == 0) return;
   cNL  =  cNL %   rq;
 for (int wxM = 0;  wxM  <  cNL; wxM++)   jfQ(bmxa, rq);
}