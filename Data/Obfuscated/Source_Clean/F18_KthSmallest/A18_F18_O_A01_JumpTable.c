int  tWM(int   wh[],   int  UMV, int  P,   int x)  {
  if   (UMV   > P)  return  -1;
   int  R =   wh[P],  KwI1  =  UMV;
   for  (int Ia  =  UMV;   Ia   <  P; Ia++)   if (wh[Ia]  <=   R) {  int  PM=wh[KwI1];  wh[KwI1]=wh[Ia];   wh[Ia]=PM; KwI1++;  }
   int  PM=wh[KwI1];  wh[KwI1]=wh[P]; wh[P]=PM;
   int  sqj = KwI1 - (x   -  1);
  if (sqj == 0)  return  wh[KwI1];
 goto   *(&&O +  (sqj  >   0  ? 0   : (&&NFsc - &&O)));
O:
   return   tWM(wh,  UMV,   KwI1  -   1,  x);
NFsc:
   return   tWM(wh,  KwI1   +  1,   P,  x);
}